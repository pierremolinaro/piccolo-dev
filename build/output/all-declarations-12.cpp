#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_GOTO nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_GOTO::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  result_outIsReachable = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mLiteralInstruction ().objectCompare (GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 135)))) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GGS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GGS_uint constinArgument_inLineIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_1 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, temp_1.readProperty_mIsDeletable (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 155)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                  const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                  GGS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GGS_uint var_currentAddress_6827 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_6991 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 169)).isValid ()) {
    uint32_t variant_7007 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 169)).uintValue () ;
    bool loop_7007 = true ;
    while (loop_7007) {
      loop_7007 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_6827.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6991.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).isValid () ;
      if (loop_7007) {
        loop_7007 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_6827.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6991.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).boolValue () ;
      }
      if (loop_7007 && (0 == variant_7007)) {
        loop_7007 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 169)) ;
      }
      if (loop_7007) {
        variant_7007 -- ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_midrange_5F_intermediate_5F_actualInstruction var_instr_7139 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6827, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ())) ;
          if (nullptr == var_instr_7139.ptr ()) {
            test_0 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_7139 ;
            var_found_6991 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          var_currentAddress_6827.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 178)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                             const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                             GGS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                             GGS_stringset & outArgument_outReachedLabelSet,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GGS_stringset::class_func_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 190)) ;
  GGS_uint var_currentAddress_7898 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_8062 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid ()) {
    uint32_t variant_8078 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 196)).uintValue () ;
    bool loop_8078 = true ;
    while (loop_8078) {
      loop_8078 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7898.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8062.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).isValid () ;
      if (loop_8078) {
        loop_8078 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7898.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8062.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).boolValue () ;
      }
      if (loop_8078 && (0 == variant_8078)) {
        loop_8078 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 196)) ;
      }
      if (loop_8078) {
        variant_8078 -- ;
        GGS_midrange_5F_intermediate_5F_instruction var_instruction_8207 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7898, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 199)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_midrange_5F_intermediate_5F_actualInstruction var_instr_8297 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (var_instruction_8207.ptr ())) ;
          if (nullptr == var_instr_8297.ptr ()) {
            test_0 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8297 ;
            var_found_8062 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG var_instr_8570 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (var_instruction_8207.ptr ())) ;
            if (nullptr == var_instr_8570.ptr ()) {
              test_1 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_8570 ;
              var_found_8062 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL var_instr_8754 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_8207.ptr ())) ;
              if (nullptr == var_instr_8754.ptr ()) {
                test_2 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_8754 ;
                outArgument_outReachedLabelSet.addAssign_operation (var_instr_8754.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 212)) ;
                var_currentAddress_7898.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 213)) ;
              }
            }
            if (GalgasBool::boolFalse == test_2) {
              var_currentAddress_7898.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 215)) ;
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_midrange_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_midrange_5F_optimizations_26__26_ (GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)) ;
  GGS_symbolTableForOptimizations var_symbolTable_23756 = GGS_symbolTableForOptimizations::init (inCompiler COMMA_HERE) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_23808 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
  GGS_uint index_23803 (uint32_t (0)) ;
  while (enumerator_23808.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_23808.current_mInstruction (HERE).ptr (), var_symbolTable_23756, index_23803, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 547)) ;
    enumerator_23808.gotoNextObject () ;
    index_23803.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)) ;
  }
  GGS_bool var_optimizationsDone_23999 = GGS_bool (true) ;
  GGS_uint var_iteration_24036 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 552)).isValid ()) {
    uint32_t variant_24052 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 552)).uintValue () ;
    bool loop_24052 = true ;
    while (loop_24052) {
      loop_24052 = var_optimizationsDone_23999.isValid () ;
      if (loop_24052) {
        loop_24052 = var_optimizationsDone_23999.boolValue () ;
      }
      if (loop_24052 && (0 == variant_24052)) {
        loop_24052 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 552)) ;
      }
      if (loop_24052) {
        variant_24052 -- ;
        var_optimizationsDone_23999 = GGS_bool (false) ;
        var_iteration_24036.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 556)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Pass ").add_operation (var_iteration_24036.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
        GGS_bigint var_idx_24270 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 559)) ;
        if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 560)).isValid ()) {
          uint32_t variant_24282 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 560)).uintValue () ;
          bool loop_24282 = true ;
          while (loop_24282) {
            loop_24282 = GGS_bool (ComparisonKind::lowerThan, var_idx_24270.objectCompare (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 560)).getter_bigint (SOURCE_FILE ("midrange_optimizations.galgas", 560)))).isValid () ;
            if (loop_24282) {
              loop_24282 = GGS_bool (ComparisonKind::lowerThan, var_idx_24270.objectCompare (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 560)).getter_bigint (SOURCE_FILE ("midrange_optimizations.galgas", 560)))).boolValue () ;
            }
            if (loop_24282 && (0 == variant_24282)) {
              loop_24282 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 560)) ;
            }
            if (loop_24282) {
              variant_24282 -- ;
              GGS_midrange_5F_intermediate_5F_instruction var_instruction_24435 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (var_idx_24270.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 562)) ;
              GalgasBool test_0 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_0) {
                GGS_midrange_5F_intermediate_5F_GOTO var_ipic_5F_GOTO_24516 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_instruction_24435.ptr ())) ;
                if (nullptr == var_ipic_5F_GOTO_24516.ptr ()) {
                  test_0 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_0) {
                  callExtensionMethod_optimizeGOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_ipic_5F_GOTO_24516.ptr (), var_symbolTable_23756, var_idx_24270.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 565)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23999, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 565)) ;
                }
              }
              if (GalgasBool::boolFalse == test_0) {
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  GGS_midrange_5F_intermediate_5F_JUMP var_ipic_5F_JUMP_24768 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_instruction_24435.ptr ())) ;
                  if (nullptr == var_ipic_5F_JUMP_24768.ptr ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    callExtensionMethod_optimizeJUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_ipic_5F_JUMP_24768.ptr (), var_symbolTable_23756, var_idx_24270.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23999, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_1) {
                  GalgasBool test_2 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_2) {
                    GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_ipic_5F_literal_25186 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_instruction_24435.ptr ())) ;
                    if (nullptr == var_ipic_5F_literal_25186.ptr ()) {
                      test_2 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_2) {
                      callExtensionMethod_optimizeMOVLW ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_ipic_5F_literal_25186.ptr (), var_idx_24270.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23999, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_2) {
                    GalgasBool test_3 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_3) {
                      GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition var_ipic_5F_decInc_25483 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *> (var_instruction_24435.ptr ())) ;
                      if (nullptr == var_ipic_5F_decInc_25483.ptr ()) {
                        test_3 = GalgasBool::boolFalse ;
                      }
                      if (GalgasBool::boolTrue == test_3) {
                        callExtensionMethod_optimizeTestDecInc ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) var_ipic_5F_decInc_25483.ptr (), var_symbolTable_23756, var_idx_24270.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 576)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23999, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 576)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_3) {
                      GalgasBool test_4 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_4) {
                        GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip var_ipic_5F_bitTestSkip_25789 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *> (var_instruction_24435.ptr ())) ;
                        if (nullptr == var_ipic_5F_bitTestSkip_25789.ptr ()) {
                          test_4 = GalgasBool::boolFalse ;
                        }
                        if (GalgasBool::boolTrue == test_4) {
                          callExtensionMethod_optimizeBitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) var_ipic_5F_bitTestSkip_25789.ptr (), var_idx_24270.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 579)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23999, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 579)) ;
                        }
                      }
                    }
                  }
                }
              }
              var_idx_24270 = var_idx_24270.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)) ;
            }
          }
        }
        GGS_stringset var_referencedLabels_26172 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26213 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        while (enumerator_26213.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26213.current_mInstruction (HERE).ptr (), var_referencedLabels_26172, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 587)) ;
          enumerator_26213.gotoNextObject () ;
        }
        cEnumerator_symbolTableForOptimizations enumerator_26346 (var_symbolTable_23756, EnumerationOrder::up) ;
        while (enumerator_26346.hasCurrentObject ()) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_referencedLabels_26172.getter_hasKey (enumerator_26346.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 590)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GGS_uint var_definitionLine_26473 ;
              GGS_bool joker_26488 ; // Joker input parameter
              var_symbolTable_23756.method_searchKey (enumerator_26346.current_lkey (HERE), var_definitionLine_26473, joker_26488, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (var_definitionLine_26473.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GGS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (enumerator_26346.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GGS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), var_definitionLine_26473, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 593)) ;
              }
              {
              GGS_uint joker_26761 ; // Joker input parameter
              GGS_bool joker_26764 ; // Joker input parameter
              var_symbolTable_23756.setter_removeKey (enumerator_26346.current_lkey (HERE), joker_26761, joker_26764, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 594)) ;
              }
            }
          }
          enumerator_26346.gotoNextObject () ;
        }
        GGS_bool var_reachable_26829 = GGS_bool (true) ;
        GGS_bool var_skippingInstruction_26860 = GGS_bool (false) ;
        GGS_bool var_previousWasSkippingInstruction_26902 = GGS_bool (false) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26950 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        GGS_uint index_26945 (uint32_t (0)) ;
        while (enumerator_26950.hasCurrentObject ()) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_reachable_26829.operator_or (var_previousWasSkippingInstruction_26902 COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 602)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_reachable_26829 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26950.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 603)) ;
              var_previousWasSkippingInstruction_26902 = var_skippingInstruction_26860 ;
              var_skippingInstruction_26860 = callExtensionGetter_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26950.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 605)) ;
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            GGS_bool var_isLABELorORG_27285 = callExtensionGetter_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26950.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 607)) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = var_isLABELorORG_27285.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 608)).operator_and (callExtensionGetter_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26950.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 608)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 608)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 608)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (index_26945.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)).add_operation (GGS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), index_26945, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 610)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = var_isLABELorORG_27285.boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  var_reachable_26829 = GGS_bool (true) ;
                  var_previousWasSkippingInstruction_26902 = GGS_bool (false) ;
                  var_skippingInstruction_26860 = GGS_bool (false) ;
                }
              }
            }
          }
          enumerator_26950.gotoNextObject () ;
          index_26945.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 601)) ;
        }
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_optimizationsDone_23999.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 618)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  No optimization\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 619)) ;
            GGS_uint var_currentAddress_27908 = GGS_uint (uint32_t (0U)) ;
            cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_27938 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
            while (enumerator_27938.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27938.current_mInstruction (HERE).ptr (), var_currentAddress_27908, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 623)) ;
              enumerator_27938.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Minimum code size: ").add_operation (var_currentAddress_27908.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)).add_operation (GGS_string (" instructions\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabelAtAddress (GGS_midrange_5F_symbolTableForConvertingRelatives & ioArgument_ioRoutineSymbolTable,
                                                                                    GGS_uint & ioArgument_ioAddress,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 28)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_defineLabelAtAddress (GGS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                  GGS_uint & ioArgument_ioAddress,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, ioArgument_ioAddress.objectCompare (temp_1.readProperty_mOrigin ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)), GGS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)).add_operation (GGS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (temp_2.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)) ;
    }
  }
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_4 = this ;
  ioArgument_ioAddress = temp_4.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_defineLabelAtAddress (GGS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                      GGS_uint & ioArgument_ioAddress,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  GGS_uint var_nextAddress_1932 = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_nextAddress_1932.operator_xor (ioArgument_ioAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).operator_and (GGS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_intermediate_5F_actualInstruction temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Routine too long, crosses page boundary at this instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 52)) ;
    }
  }
  ioArgument_ioAddress = var_nextAddress_1932 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                            GGS_uint & /* ioArgument_ioAddress */,
                                                            GGS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                            GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                            const GGS_uint /* constinArgument_inIndex */,
                                                            GGS_string & /* ioArgument_ioListFileContents */,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                         GGS_uint & /* ioArgument_ioAddress */,
                                                                         GGS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                         GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                         const GGS_uint /* constinArgument_inIndex */,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                     GGS_uint & ioArgument_ioAddress,
                                                                     GGS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                     GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                     const GGS_uint /* constinArgument_inIndex */,
                                                                     GGS_string & /* ioArgument_ioListFileContents */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                            GGS_uint & ioArgument_ioAddress,
                                                            GGS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                            const GGS_uint constinArgument_inIndex,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_4681 ;
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_4681, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 116)) ;
  GGS_uint var_flags_4730 = ioArgument_ioAddress.operator_xor (var_targetAddress_4681 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 118)) ;
  GGS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__4795 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_flags_4730.operator_and (GGS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 120)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_bit_31__31__4795 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 121)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_targetAddress_4681.operator_and (GGS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 122)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_bit_31__31__4795 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 123)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      var_bit_31__31__4795 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 125)) ;
    }
  }
  GGS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__5076 ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_flags_4730.operator_and (GGS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 129)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_bit_31__32__5076 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 130)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, var_targetAddress_4681.operator_and (GGS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 131)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_bit_31__32__5076 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 132)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      var_bit_31__32__5076 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 134)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_6 = this ;
    const GGS_midrange_5F_intermediate_5F_JUMP temp_7 = this ;
    test_5 = GGS_bool (ComparisonKind::notEqual, var_bit_31__31__4795.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GGS_bool (ComparisonKind::notEqual, var_bit_31__32__5076.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 137)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_midrange_5F_intermediate_5F_JUMP temp_8 = this ;
      const GGS_midrange_5F_intermediate_5F_JUMP temp_9 = this ;
      GGS_midrange_5F_intermediate_5F_actualInstruction var_instruction_5428 = GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), var_bit_31__31__4795, var_bit_31__32__5076, inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_5428, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 143)) ;
      }
      ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)).add_operation (GGS_string (":  JUMP to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                           GGS_uint & ioArgument_ioAddress,
                                                           GGS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                           GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           const GGS_uint constinArgument_inIndex,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_6227 ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_6227, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 159)) ;
  GGS_uint var_flags_6276 = ioArgument_ioAddress.operator_xor (var_targetAddress_6227 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 161)) ;
  GGS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__6341 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_flags_6276.operator_and (GGS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 163)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_bit_31__31__6341 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 164)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_targetAddress_6227.operator_and (GGS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 165)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_bit_31__31__6341 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 166)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      var_bit_31__31__6341 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 168)) ;
    }
  }
  GGS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__6622 ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_flags_6276.operator_and (GGS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 172)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_bit_31__32__6622 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 173)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, var_targetAddress_6227.operator_and (GGS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 174)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_bit_31__32__6622 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 175)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      var_bit_31__32__6622 = GGS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 177)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_JSR temp_6 = this ;
    const GGS_midrange_5F_intermediate_5F_JSR temp_7 = this ;
    test_5 = GGS_bool (ComparisonKind::notEqual, var_bit_31__31__6341.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GGS_bool (ComparisonKind::notEqual, var_bit_31__32__6622.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 180)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_midrange_5F_intermediate_5F_JSR temp_8 = this ;
      const GGS_midrange_5F_intermediate_5F_JSR temp_9 = this ;
      GGS_midrange_5F_intermediate_5F_actualInstruction var_instruction_6974 = GGS_midrange_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), var_bit_31__31__6341, var_bit_31__32__6622, inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_6974, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 186)) ;
      }
      ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)).add_operation (GGS_string (":  JSR to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_compute (const GGS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                       GGS_uint & ioArgument_ioAddress,
                                                                       GGS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                       GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                       const GGS_uint /* constinArgument_inIndex */,
                                                                       GGS_string & /* ioArgument_ioListFileContents */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_7776 ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_7776, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 201)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_targetAddress_7776.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = this ;
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GGS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)).add_operation (GGS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (var_targetAddress_7776.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (GGS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 205)), fixItArray4  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_compute_JSR_JUMP&&'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                         GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("COMPUTE JSR and JUMP").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)) ;
  GGS_bool var_JUMP_5F_or_5F_JSR_5F_fixed_13134 = GGS_bool (true) ;
  GGS_uint var_iteration_13171 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).isValid ()) {
    uint32_t variant_13187 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).uintValue () ;
    bool loop_13187 = true ;
    while (loop_13187) {
      loop_13187 = var_JUMP_5F_or_5F_JSR_5F_fixed_13134.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).isValid () ;
      if (loop_13187) {
        loop_13187 = var_JUMP_5F_or_5F_JSR_5F_fixed_13134.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).boolValue () ;
      }
      if (loop_13187 && (0 == variant_13187)) {
        loop_13187 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)) ;
      }
      if (loop_13187) {
        variant_13187 -- ;
        var_JUMP_5F_or_5F_JSR_5F_fixed_13134 = GGS_bool (false) ;
        var_iteration_13171.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Pass ").add_operation (var_iteration_13171.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)) ;
        GGS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable_13471 = GGS_midrange_5F_symbolTableForConvertingRelatives::init (inCompiler COMMA_HERE) ;
        GGS_uint var_currentAddress_13545 = GGS_uint (uint32_t (0U)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13573 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        while (enumerator_13573.hasCurrentObject ()) {
          callExtensionMethod_defineLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13573.current_mInstruction (HERE).ptr (), var_symbolTable_13471, var_currentAddress_13545, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 330)) ;
          enumerator_13573.gotoNextObject () ;
        }
        GGS_uint var_lastAddressForFirstPass_13716 = var_currentAddress_13545 ;
        var_currentAddress_13545 = GGS_uint (uint32_t (0U)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13852 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        GGS_uint index_13847 (uint32_t (0)) ;
        while (enumerator_13852.hasCurrentObject ()) {
          callExtensionMethod_compute ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13852.current_mInstruction (HERE).ptr (), var_symbolTable_13471, var_currentAddress_13545, var_JUMP_5F_or_5F_JSR_5F_fixed_13134, ioArgument_ioGeneratedInstructionList, index_13847, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 336)) ;
          var_currentAddress_13545 = var_currentAddress_13545.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13852.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 337)) ;
          enumerator_13852.gotoNextObject () ;
          index_13847.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 335)) ;
        }
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_13716.objectCompare (var_currentAddress_13545)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            TC_Array <FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_13545.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (GGS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (var_lastAddressForFirstPass_13716.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 341)).add_operation (GGS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)) ;
          }
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_JUMP_5F_or_5F_JSR_5F_fixed_13134.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  No JUMP, no JSR to fix\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)) ;
            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Program size: ").add_operation (var_currentAddress_13545.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)).add_operation (GGS_string (" instructions\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_buildAssemblyCode (GGS_string & /* ioArgument_ioString */,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioString.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 41)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioString.plusAssign_operation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 43)) ;
  }
  ioArgument_ioString.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 45)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string (", ").add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)) ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 56)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GGS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 64)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 66)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 68)) ;
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string (", ").add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)) ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)) ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 81)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                           GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  ").add_operation (GGS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GGS_string ("  ").add_operation (GGS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioString.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 96)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    ioArgument_ioString.plusAssign_operation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 98)) ;
  }
  ioArgument_ioString.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 100)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_localLabel_2984 = GGS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioString.plusAssign_operation(GGS_string ("  GOTO ").add_operation (var_localLabel_2984, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
      ioArgument_ioString.plusAssign_operation(GGS_string ("  GOTO ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
      ioArgument_ioString.plusAssign_operation(var_localLabel_2984.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
    ioArgument_ioString.plusAssign_operation(GGS_string ("  GOTO ").add_operation (temp_8.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  switch (temp_0.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 117)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 118)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 122)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 123)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  GOTO   ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  GOTO   ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 143)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 144)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 148)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 149)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  CALL  ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  switch (temp_3.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 154)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 155)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_4 = this ;
  switch (temp_4.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 159)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 160)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  CALL  ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GGS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GGS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                    GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GGS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GGS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GGS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GGS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)) ;
    }
  }
  GGS_uint var_idx_6974 = GGS_uint (uint32_t (0U)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6984 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6984 = true ;
    while (loop_6984) {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_6984 = GGS_bool (ComparisonKind::lowerThan, var_idx_6974.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6984) {
        loop_6984 = GGS_bool (ComparisonKind::lowerThan, var_idx_6974.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6984 && (0 == variant_6984)) {
        loop_6984 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)) ;
      }
      if (loop_6984) {
        variant_6984 -- ;
        ioArgument_ioString.plusAssign_operation(GGS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx_6974.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_build_assembly_code?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (const GGS_string constinArgument_inProcessorName,
                                                                            const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                            const GGS_registerTable constinArgument_inAllRegisters,
                                                                            const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inInstructionList,
                                                                            const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                            GGS_string & outArgument_outAssemblyCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAssemblyCode.drop () ; // Release 'out' argument
  outArgument_outAssemblyCode = GGS_string ("  errorlevel -302 ; No Warning on registers not in bank 0\n") ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("  errorlevel -306 ; No Warning on crossing page boundary\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 304)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 307)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("  ORG 0\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 308)) ;
  GGS_uint var_bccLabelIndex_9146 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9171 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_9171.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9171.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_9146, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9171.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  cEnumerator_registerTable enumerator_9427 (constinArgument_inPredefinedRegisters, EnumerationOrder::up) ;
  while (enumerator_9427.hasCurrentObject ()) {
    GGS_uint var_firstRegister_9473 ;
    enumerator_9427.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9473, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.plusAssign_operation(enumerator_9427.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister_9473.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9427.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  cEnumerator_registerTable enumerator_9781 (constinArgument_inAllRegisters, EnumerationOrder::up) ;
  while (enumerator_9781.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_9781.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_firstRegister_9882 ;
        enumerator_9781.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9882, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
        outArgument_outAssemblyCode.plusAssign_operation(enumerator_9781.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister_9882.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
      }
    }
    enumerator_9781.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("W EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outAssemblyCode.plusAssign_operation(GGS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
      cEnumerator_actualConfigurationMap enumerator_10356 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
      while (enumerator_10356.hasCurrentObject ()) {
        outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("  __config ").add_operation (enumerator_10356.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10356.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
        enumerator_10356.gotoNextObject () ;
      }
    }
  }
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 341)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GGS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 342)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (const GGS_uint constinArgument_inCode,
                                                            GGS_uint & ioArgument_ioWordAddress,
                                                            const GGS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 15)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeDirectCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (const GGS_uint constinArgument_inCode,
                                                                  GGS_uint & ioArgument_ioWordAddress,
                                                                  const GGS_string constinArgument_inInstructionDescriptionString,
                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 28)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 29)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoMidrangeCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (const GGS_uint constinArgument_inWordAddress,
                                                          const GGS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                                          GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 39)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 41)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                   GGS_uint & ioArgument_ioAddress,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                     GGS_uint & ioArgument_ioAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  ioArgument_ioAddress = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                GGS_uint & /* ioArgument_ioAddress */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                         const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                         const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_uint & ioArgument_ioAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = this ;
  routine_setEmitAddress_3F_ (temp_1.readProperty_mOrigin ().add_operation (temp_2.readProperty_mOrigin (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)) ;
  }
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_3 = this ;
  routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 126)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                             const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                             const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                             const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                                             GGS_uint & ioArgument_ioAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  GGS_uint var_code_5765 = extensionGetter_basecode (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 160)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_2 = this ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 161)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_5765 = var_code_5765.operator_or (GGS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 162)) ;
    }
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
  var_code_5765 = var_code_5765.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_4 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_5765, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 165)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                            const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                            const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                            GGS_uint & ioArgument_ioAddress,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  GGS_uint var_code_6678 = extensionGetter_baseCode (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 187)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  var_code_6678 = var_code_6678.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_2 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_6678, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 189)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                             const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                             const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                             const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                                             GGS_uint & ioArgument_ioAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  GGS_uint var_code_7501 = extensionGetter_baseCode (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 212)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  var_code_7501 = var_code_7501.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  var_code_7501 = var_code_7501.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_3 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_7501, ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 215)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                      const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                      const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GGS_string & ioArgument_ioListFileContents,
                                                                                                      GGS_uint & ioArgument_ioAddress,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_8160 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_8160 = GGS_uint (uint32_t (7168U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_8160 = GGS_uint (uint32_t (6144U)) ;
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  var_code_8160 = var_code_8160.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_code_8160 = var_code_8160.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_4 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_8160, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 236)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction_nocheck??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (const GGS_string constinArgument_inTargetLabel,
                                                                             const GGS_uint constinArgument_inTargetAddress,
                                                                             GGS_uint & ioArgument_ioAddress,
                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_8692 = GGS_uint (uint32_t (10240U)).operator_or (constinArgument_inTargetAddress.operator_and (GGS_uint (uint32_t (2047U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_8692, ioArgument_ioAddress, GGS_string ("GOTO ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction?&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (const GGS_location constinArgument_inIntructionLocation,
                                                                      GGS_uint & ioArgument_ioAddress,
                                                                      const GGS_string constinArgument_inTargetLabel,
                                                                      const GGS_uint constinArgument_inTargetAddress,
                                                                      GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).operator_and (GGS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GGS_string ("GOTO (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GGS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 261)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction_nocheck??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (const GGS_string constinArgument_inTargetLabel,
                                                                             const GGS_uint constinArgument_inTargetAddress,
                                                                             GGS_uint & ioArgument_ioAddress,
                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_9665 = GGS_uint (uint32_t (8192U)).operator_or (constinArgument_inTargetAddress.operator_and (GGS_uint (uint32_t (2047U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_9665, ioArgument_ioAddress, GGS_string ("CALL ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction?&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_3F__26__3F__3F__26_ (const GGS_location constinArgument_inIntructionLocation,
                                                                      GGS_uint & ioArgument_ioAddress,
                                                                      const GGS_string constinArgument_inTargetLabel,
                                                                      const GGS_uint constinArgument_inTargetAddress,
                                                                      GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).operator_and (GGS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GGS_string ("CALL (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GGS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 286)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_generateBinaryCodeAtAddress (const GGS_registerTable constinArgument_inRegisterTable,
                                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                                const GGS_uint constinArgument_inTotalBankCount,
                                                                                const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                GGS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_usedRegisters_10760 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_targetAddress_10847 ;
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_10847, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 300)) ;
  GGS_registerExpression var_PCLATH_5F_register_10904 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_11189 ;
  GGS_bitSliceTable joker_11224 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_10904.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 309)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_11189, joker_11224, var_usedRegisters_10760, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 307)) ;
  const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).operator_or (var_PCLATH_5F_IPICregisterDescription_11189.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 320)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 319)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).operator_or (var_PCLATH_5F_IPICregisterDescription_11189.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 327)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 326)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).operator_or (var_PCLATH_5F_IPICregisterDescription_11189.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 337)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 336)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).operator_or (var_PCLATH_5F_IPICregisterDescription_11189.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 344)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 343)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_3 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_10847, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 352)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                GGS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_12783 ;
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_12783, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 365)) ;
  {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_GOTO temp_2 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_12783, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 367)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_generateBinaryCodeAtAddress (const GGS_registerTable constinArgument_inRegisterTable,
                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                               const GGS_uint constinArgument_inTotalBankCount,
                                                                               const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                               GGS_uint & ioArgument_ioAddress,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_usedRegisters_13305 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_targetAddress_13397 ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_13397, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 381)) ;
  GGS_registerExpression var_PCLATH_5F_register_13454 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 384)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 386)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_13748 ;
  GGS_bitSliceTable joker_13783 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_13454.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 390)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_13748, joker_13783, var_usedRegisters_13305, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 388)) ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).operator_or (var_PCLATH_5F_IPICregisterDescription_13748.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 401)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 400)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).operator_or (var_PCLATH_5F_IPICregisterDescription_13748.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 408)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 407)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).operator_or (var_PCLATH_5F_IPICregisterDescription_13748.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 418)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 417)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).operator_or (var_PCLATH_5F_IPICregisterDescription_13748.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 425)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 424)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  {
  const GGS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_13397, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 432)) ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_4 = this ;
  switch (temp_4.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).operator_or (var_PCLATH_5F_IPICregisterDescription_13748.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 436)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 435)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).operator_or (GGS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).operator_or (var_PCLATH_5F_IPICregisterDescription_13748.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 443)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 442)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_5 = this ;
  switch (temp_5.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).operator_or (var_PCLATH_5F_IPICregisterDescription_13748.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 453)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)), ioArgument_ioAddress, GGS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 452)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).operator_or (GGS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).operator_or (var_PCLATH_5F_IPICregisterDescription_13748.readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 460)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)), ioArgument_ioAddress, GGS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 459)) ;
      }
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                GGS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_16289 ;
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_16289, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 479)) ;
  {
  const GGS_midrange_5F_intermediate_5F_CALL temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_CALL temp_2 = this ;
  routine_emit_5F_midrange_5F_CALLinstruction_3F__26__3F__3F__26_ (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_16289, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 481)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                                     GGS_uint & ioArgument_ioAddress,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_16836 ;
  GGS_string var_s_16855 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_16836 = GGS_uint (uint32_t (3840U)) ;
      var_s_16855 = GGS_string ("INCFSZ") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_16836 = GGS_uint (uint32_t (2816U)) ;
    var_s_16855 = GGS_string ("DECFSZ") ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 500)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_code_16836 = var_code_16836.operator_or (GGS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 501)) ;
    }
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_16836 = var_code_16836.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
  var_s_16855.plusAssign_operation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_16836, ioArgument_ioAddress, var_s_16855, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 505)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
    test_6 = temp_7.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
      routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_8.readProperty_mInstructionLocation (), ioArgument_ioAddress, GGS_string ("$ + 2"), ioArgument_ioAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)) ;
      }
    }
  }
  GGS_uint var_targetAddress_17516 ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GGS_lstring::init_21__21_ (temp_9.readProperty_mTargetLabel (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)), inCompiler COMMA_HERE), var_targetAddress_17516, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)) ;
  {
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_10 = this ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_10.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_11.readProperty_mTargetLabel (), var_targetAddress_17516, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 512)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (100U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 524)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                               const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                               const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_uint & ioArgument_ioAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (256U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 536)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                              const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                              const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                              const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                                              GGS_uint & ioArgument_ioAddress,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (0U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 548)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (8U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 560)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (9U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 572)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                GGS_uint & ioArgument_ioAddress,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (99U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 584)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                                           GGS_uint & ioArgument_ioAddress,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  GGS_uint var_code_21411 = extensionGetter_baseCode (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 611)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_21411 = var_code_21411.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 612)) ;
  {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_21411, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 613)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                           const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                           const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                           const GGS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                           GGS_uint & ioArgument_ioAddress,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_22017 ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_22017, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 625)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_targetAddress_22017.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = this ;
      const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GGS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (GGS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (var_targetAddress_22017.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GGS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), fixItArray4  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)) ;
    }
  }
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (ioArgument_ioAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 631)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_generateBinaryCodeAtAddress (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                               const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                               const GGS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_uint & ioArgument_ioAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 644)) ;
    }
  }
  GGS_uint var_idx_22882 = GGS_uint (uint32_t (0U)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_22892 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_22892 = true ;
    while (loop_22892) {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_22892 = GGS_bool (ComparisonKind::lowerThan, var_idx_22882.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_22892) {
        loop_22892 = GGS_bool (ComparisonKind::lowerThan, var_idx_22882.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_22892 && (0 == variant_22892)) {
        loop_22892 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_build_binary_code.galgas", 647)) ;
      }
      if (loop_22892) {
        variant_22892 -- ;
        {
        routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (0U)), ioArgument_ioAddress, GGS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 650)) ;
        }
        var_idx_22882.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 651)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_ipic_binary_code??????&!'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (const GGS_registerTable constinArgument_inRegisterTable,
                                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                                          const GGS_uint constinArgument_inTotalBankCount,
                                                                                          const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                                          const GGS_uint constinArgument_inROMsize,
                                                                                          const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                                          GGS_uint & outArgument_outUsedROMsize,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GGS_midrange_5F_symbolTable var_symbolTable_23900 = GGS_midrange_5F_symbolTable::init (inCompiler COMMA_HERE) ;
  GGS_uint var_currentAddress_23950 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_23976 (constinArgument_inGeneratedInstructionList, EnumerationOrder::up) ;
  while (enumerator_23976.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_23976.current_mInstruction (HERE).ptr (), var_symbolTable_23900, var_currentAddress_23950, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 674)) ;
    enumerator_23976.gotoNextObject () ;
  }
  GGS_uint var_lastAddressForFirstPass_24112 = var_currentAddress_23950 ;
  outArgument_outUsedROMsize = var_currentAddress_23950 ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 682)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 683)) ;
  }
  var_currentAddress_23950 = GGS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress_3F_ (GGS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 685)) ;
  }
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24619 (constinArgument_inGeneratedInstructionList, EnumerationOrder::up) ;
  while (enumerator_24619.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24619.current_mInstruction (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, constinArgument_inTotalBankCount, var_symbolTable_23900, ioArgument_ioListFileContents, var_currentAddress_23950, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)) ;
    {
    routine_checkCurrentEmitAddress_3F_ (var_currentAddress_23950.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 696)) ;
    }
    enumerator_24619.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_24112.objectCompare (var_currentAddress_23950)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_23950.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (var_lastAddressForFirstPass_24112.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 700)).add_operation (GGS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_lastAddressForFirstPass_24112.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), GGS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24112.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (GGS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 704)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)) ;
      }
    }
  }
  cEnumerator_actualConfigurationMap enumerator_25545 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_25545.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_25545.current_mRegisterAddress (HERE).add_operation (enumerator_25545.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 709)) ;
    }
    {
    routine_emitCode_3F_ (enumerator_25545.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)) ;
    }
    enumerator_25545.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze_3F__3F_ (const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                          const GGS_string constinArgument_inSourceFileName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceFileBaseName_760 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 17)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 17)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_760.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName_760, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
    }
  }
  GGS_string var_listFileContents_1110 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_1239 ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_1239, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 24)) ;
  }
  switch (var_piccoloDeviceModel_1239.readProperty_mProcessorType ().enumValue ()) {
  case GGS_processorType::Enumeration::invalid:
    break ;
  case GGS_processorType::Enumeration::enum_midrange:
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a pic18 device is not accepted here : only a mid-range device"), fixItArray2  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 27)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_baseline:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a baseline device is not accepted here : only a mid-range device"), fixItArray3  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  }
  GGS_bool var_hasInterrupt_1636 = GGS_bool (false) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_1689 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_1689.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_hasInterrupt_1636.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_1689.current_mInterruptLocation (HERE), GGS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 34)) ;
      }
    }
    var_hasInterrupt_1636 = GGS_bool (true) ;
    enumerator_1689.gotoNextObject () ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_2062 ;
  {
  routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_1239.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_1110, var_actualConfigurationMap_2062, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 39)) ;
  }
  GGS_constantMap var_constantMap_2161 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_usedRegisters_2196 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_registerTable var_registerTable_2237 = var_piccoloDeviceModel_1239.readProperty_mRegisterTable () ;
  GGS_lstring var_romSizeString_2322 = GGS_lstring::init_21__21_ (GGS_string ("ROM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50)), inCompiler COMMA_HERE) ;
  {
  var_constantMap_2161.setter_insertKey (var_romSizeString_2322, var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("midrange_semantics.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 51)) ;
  }
  cEnumerator_constantDefinitionList enumerator_2498 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_2498.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_2620 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_2498.current_mExpression (HERE).ptr (), var_registerTable_2237, var_constantMap_2161, var_result_2620, var_usedRegisters_2196, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 54)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_registerTable_2237.getter_hasKey (enumerator_2498.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 55)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2498.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_2498.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      {
      var_constantMap_2161.setter_insertKey (enumerator_2498.current_mConstantName (HERE), var_result_2620, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 58)) ;
      }
    }
    enumerator_2498.gotoNextObject () ;
  }
  GGS_ramBankTable var_ramBank_2957 = var_piccoloDeviceModel_1239.readProperty_mRamBankTable () ;
  GGS_declaredByteMap var_declaredByteMap_3249 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_2161, var_usedRegisters_2196, var_ramBank_2957, var_piccoloDeviceModel_1239.readProperty_mRegisterTable (), var_listFileContents_1110, var_registerTable_2237, var_declaredByteMap_3249, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 63)) ;
  }
  GGS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3689 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)).divide_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)), var_piccoloDeviceModel_1239.readProperty_mBankCount ().readProperty_uint (), var_constantMap_2161, var_piccoloDeviceModel_1239.readProperty_mSharedBankName (), var_registerTable_2237, constinArgument_inPiccoloModel, var_hasInterrupt_1636, var_generatedInstructionList_3689, var_listFileContents_1110, var_usedRegisters_2196, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 75)) ;
  }
  GGS_stringset var_usedRoutineSet_3837 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 89)) ;
  GGS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_3983 = GGS_midrange_5F_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_4067 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_4067.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_3983.setter_insertKey (enumerator_4067.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)) ;
    }
    enumerator_4067.gotoNextObject () ;
  }
  GGS_stringset var_unusedRoutineDeclarationUnicity_4232 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_4286 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), EnumerationOrder::up) ;
  while (enumerator_4286.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_declaredRoutineMap_3983.getter_hasKey (enumerator_4286.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 100)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 100)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4286.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4286.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = var_unusedRoutineDeclarationUnicity_4232.getter_hasKey (enumerator_4286.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_4286.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4286.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = var_usedRoutineSet_3837.getter_hasKey (enumerator_4286.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticWarning (enumerator_4286.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4286.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_4232.addAssign_operation (enumerator_4286.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
    enumerator_4286.gotoNextObject () ;
  }
  cEnumerator_midrange_5F_declaredRoutineMap enumerator_4835 (var_declaredRoutineMap_3983, EnumerationOrder::up) ;
  while (enumerator_4835.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_usedRoutineSet_3837.getter_hasKey (enumerator_4835.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_and (var_unusedRoutineDeclarationUnicity_4232.getter_hasKey (enumerator_4835.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_4835.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4835.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)) ;
      }
    }
    enumerator_4835.gotoNextObject () ;
  }
  GGS_stringset var_unusedByteDeclarationUnicity_5155 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_5206 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), EnumerationOrder::up) ;
  while (enumerator_5206.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_registerTable_2237.getter_hasKey (enumerator_5206.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 117)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 117)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_5206.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5206.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)) ;
      }
    }
    if (GalgasBool::boolFalse == test_16) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_unusedByteDeclarationUnicity_5155.getter_hasKey (enumerator_5206.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 119)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_5206.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5206.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_usedRegisters_2196.getter_hasKey (enumerator_5206.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 121)).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            TC_Array <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticWarning (enumerator_5206.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5206.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
          }
        }
      }
    }
    var_unusedByteDeclarationUnicity_5155.addAssign_operation (enumerator_5206.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 124)) ;
    enumerator_5206.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_5735 (var_declaredByteMap_3249, EnumerationOrder::up) ;
  while (enumerator_5735.hasCurrentObject ()) {
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = var_usedRegisters_2196.getter_hasKey (enumerator_5735.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_and (var_unusedByteDeclarationUnicity_5155.getter_hasKey (enumerator_5735.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticWarning (enumerator_5735.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5735.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)), fixItArray23  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)) ;
      }
    }
    enumerator_5735.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 132)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 132)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations_26__26_ (var_generatedInstructionList_3689, var_listFileContents_1110, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 133)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 136)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (var_generatedInstructionList_3689, var_listFileContents_1110, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 137)) ;
      }
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 141)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      GGS_uint var_usedROMsize_6773 ;
      {
      routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (var_registerTable_2237, GGS_constantMap::init (inCompiler COMMA_HERE), var_piccoloDeviceModel_1239.readProperty_mBankCount ().readProperty_uint (), var_generatedInstructionList_3689, var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint (), var_actualConfigurationMap_2062, var_listFileContents_1110, var_usedROMsize_6773, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 143)) ;
      }
      GGS_string var_contents_6807 ;
      {
      routine_getGeneratedContents_21_ (var_contents_6807, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)) ;
      }
      GGS_string var_destinationFile_6871 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 155)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)) ;
      GGS_bool joker_7011 ; // Joker input parameter
      var_contents_6807.method_writeToFileWhenDifferentContents (var_destinationFile_6871, joker_7011, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)) ;
      GalgasBool test_27 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_27) {
        test_27 = GGS_bool (gOption_piccoloOptions_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_27) {
          GGS_string var_baseName_7090 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 158)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 158)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_7090, var_contents_6807, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 159)) ;
          }
          var_destinationFile_6871 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 160)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)) ;
          GGS_bool joker_7372 ; // Joker input parameter
          var_contents_6807.method_writeToFileWhenDifferentContents (var_destinationFile_6871, joker_7372, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161)) ;
          {
          routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_7090, var_contents_6807, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)) ;
          }
          var_destinationFile_6871 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 163)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)) ;
          GGS_bool joker_7570 ; // Joker input parameter
          var_contents_6807.method_writeToFileWhenDifferentContents (var_destinationFile_6871, joker_7570, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 164)) ;
        }
      }
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas", 167)).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GGS_string var_verboseMessage_7676 = GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_semantics.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)).add_operation (GGS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)) ;
          var_verboseMessage_7676.plusAssign_operation(GGS_string (" used: ").add_operation (var_usedROMsize_6773.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)) ;
          var_verboseMessage_7676.plusAssign_operation(var_usedROMsize_6773.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).divide_operation (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 170)).add_operation (GGS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
          cEnumerator_ramBankTable enumerator_8000 (var_ramBank_2957, EnumerationOrder::up) ;
          while (enumerator_8000.hasCurrentObject ()) {
            GGS_uint var_bankSize_8036 = enumerator_8000.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_8000.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)) ;
            GGS_uint var_usedSize_8101 = enumerator_8000.current_mFirstFreeAddress (HERE).substract_operation (enumerator_8000.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)) ;
            var_verboseMessage_7676.plusAssign_operation(GGS_string ("  Bank '").add_operation (enumerator_8000.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)).add_operation (GGS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)) ;
            var_verboseMessage_7676.plusAssign_operation(var_usedSize_8101.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 175)).add_operation (GGS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)) ;
            var_verboseMessage_7676.plusAssign_operation(var_bankSize_8036.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 176)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)) ;
            var_verboseMessage_7676.plusAssign_operation(var_usedSize_8101.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).divide_operation (var_bankSize_8036, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 177)).add_operation (GGS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)) ;
            enumerator_8000.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_7676, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
          }
        }
      }
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        test_29 = GGS_bool (gOption_piccoloOptions_generateAssembly.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_string var_assemblyCode_8568 ;
          {
          routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (var_piccoloDeviceModel_1239.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1239.readProperty_mRegisterTable (), var_registerTable_2237, var_generatedInstructionList_3689, var_actualConfigurationMap_2062, var_assemblyCode_8568, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 184)) ;
          }
          GGS_string var_asmDestinationFile_8845 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 192)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 192)) ;
          GGS_bool joker_8997 ; // Joker input parameter
          var_assemblyCode_8568.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8845, joker_8997, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 193)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_26) {
    GGS_string var_hexDestinationFile_9078 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 196)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 196)) ;
    GalgasBool test_30 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_30) {
      test_30 = var_hexDestinationFile_9078.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 197)).boolEnum () ;
      if (GalgasBool::boolTrue == test_30) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_9078, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 198)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_9272 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 200)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 200)) ;
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_asmDestinationFile_9272.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 201)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_9272, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 202)) ;
        }
      }
    }
  }
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    test_32 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      GGS_string var_listFile_9576 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 207)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 207)) ;
      GGS_bool joker_9711 ; // Joker input parameter
      var_listFileContents_1110.method_writeToFileWhenDifferentContents (var_listFile_9576, joker_9711, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 208)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_3F__3F_ (const GGS_pic_31__38_AST constinArgument_inPiccoloModel,
                                             const GGS_string constinArgument_inSourceFileName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceFileBaseName_554 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_554.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName_554, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
    }
  }
  GGS_string var_listFileContents_904 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_1001 ;
  GGS_uint var_accessBankSplitOffset_1032 ;
  GGS_ramBankTable var_ramBank_1074 ;
  GGS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1114 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 ;
  GGS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1301 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 ;
  GGS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1476 ;
  GGS_luint var_bootloaderReservedROMsize_1544 ;
  GGS_registerTable var_registerTable_1690 ;
  GGS_string var_piccoloDeviceName_1718 ;
  switch (constinArgument_inPiccoloModel.readProperty_mProgramKind ().enumValue ()) {
  case GGS_programKind::Enumeration::invalid:
    break ;
  case GGS_programKind::Enumeration::enum_regularProgram:
    {
      var_piccoloDeviceName_1718 = constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_string () ;
      {
      routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 35)) ;
      }
      switch (var_piccoloDeviceModel_1001.readProperty_mProcessorType ().enumValue ()) {
      case GGS_processorType::Enumeration::invalid:
        break ;
      case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1032 = GGS_uint (uint32_t (96U)) ;
        }
        break ;
      case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1032 = GGS_uint (uint32_t (128U)) ;
        }
        break ;
      case GGS_processorType::Enumeration::enum_midrange:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GGS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset_1032.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_processorType::Enumeration::enum_baseline:
        {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GGS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
          var_accessBankSplitOffset_1032.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1074 = var_piccoloDeviceModel_1001.readProperty_mRamBankTable () ;
      var_bootloaderReservedRAMmap_1114 = GGS_bootloaderReservedRAMmap::init (inCompiler COMMA_HERE) ;
      var_registerTable_1690 = var_piccoloDeviceModel_1001.readProperty_mRegisterTable () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderReservedROMsize_1544 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)), inCompiler COMMA_HERE) ;
    }
    break ;
  case GGS_programKind::Enumeration::enum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_piccoloDeviceModel_1001.drop () ;
      var_piccoloDeviceName_1718.drop () ;
      var_accessBankSplitOffset_1032.drop () ;
      var_ramBank_1074.drop () ;
      var_registerTable_1690.drop () ;
      var_bootloaderReservedRAMmap_1114.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301.drop () ;
      var_bootloaderReservedROMsize_1544.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, var_piccoloDeviceName_1718, var_accessBankSplitOffset_1032, var_ramBank_1074, var_registerTable_1690, var_bootloaderReservedRAMmap_1114, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForBootloaderImplementation_1301, var_bootloaderReservedROMsize_1544  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 53)) ;
      cEnumerator_ramBankTable enumerator_3669 (var_ramBank_1074, EnumerationOrder::up) ;
      while (enumerator_3669.hasCurrentObject ()) {
        {
        var_ramBank_1074.setter_setMFirstFreeAddressForKey (enumerator_3669.current_mFirstAddress (HERE), enumerator_3669.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 65)) ;
        }
        enumerator_3669.gotoNextObject () ;
      }
    }
    break ;
  case GGS_programKind::Enumeration::enum_userProgram:
    {
      var_piccoloDeviceModel_1001.drop () ;
      var_piccoloDeviceName_1718.drop () ;
      var_accessBankSplitOffset_1032.drop () ;
      var_ramBank_1074.drop () ;
      var_registerTable_1690.drop () ;
      var_bootloaderReservedRAMmap_1114.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476.drop () ;
      var_bootloaderReservedROMsize_1544.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, var_piccoloDeviceName_1718, var_accessBankSplitOffset_1032, var_ramBank_1074, var_registerTable_1690, var_bootloaderReservedRAMmap_1114, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385, var_userRoutineDeclarationListForUserProgramImplementation_1476, var_bootloaderReservedROMsize_1544  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 68)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
    }
    break ;
  }
  GGS_pic_31__38_MacroMap var_macroMap_4524 = GGS_pic_31__38_MacroMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_MacroDefinitionList enumerator_4575 (constinArgument_inPiccoloModel.readProperty_mMacroDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_4575.hasCurrentObject ()) {
    {
    var_macroMap_4524.setter_insertKey (enumerator_4575.current_mMacroName (HERE), enumerator_4575.current_mConstantNameList (HERE), enumerator_4575.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 85)) ;
    }
    enumerator_4575.gotoNextObject () ;
  }
  GGS_stringset var_usedRoutineSet_4793 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), var_macroMap_4524, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForUserProgramImplementation_1476, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 88)) ;
  GGS_declaredRoutineMap var_declaredRoutineMap_5075 = GGS_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_5210 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_5210.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5075.setter_insertKey (enumerator_5210.current_mRoutineName (HERE), enumerator_5210.current_mRequiredBank (HERE), enumerator_5210.current_mReturnedBank (HERE), enumerator_5210.current_mPreservesBank (HERE), enumerator_5210.current_mIsNoReturn (HERE), enumerator_5210.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 97)) ;
    }
    enumerator_5210.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_5493 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_5540 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), EnumerationOrder::up) ;
  while (enumerator_5540.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_declaredRoutineMap_5075.getter_hasKey (enumerator_5540.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5540.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5540.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unusedDeclarationUnicity_5493.getter_hasKey (enumerator_5540.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_5540.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5540.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_usedRoutineSet_4793.getter_hasKey (enumerator_5540.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 113)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_5540.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5540.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_5493.addAssign_operation (enumerator_5540.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 116)) ;
    enumerator_5540.gotoNextObject () ;
  }
  cEnumerator_declaredRoutineMap enumerator_6088 (var_declaredRoutineMap_5075, EnumerationOrder::up) ;
  while (enumerator_6088.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_usedRoutineSet_4793.getter_hasKey (enumerator_6088.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_and (var_unusedDeclarationUnicity_5493.getter_hasKey (enumerator_6088.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_6088.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6088.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)) ;
      }
    }
    enumerator_6088.gotoNextObject () ;
  }
  GGS_stringset var_inlinedRoutineSet_6357 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_6397 (constinArgument_inPiccoloModel.readProperty_mInlinedRoutineList (), EnumerationOrder::up) ;
  while (enumerator_6397.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_declaredRoutineMap_5075.getter_hasKey (enumerator_6397.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_6397.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6397.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = var_usedRoutineSet_4793.getter_hasKey (enumerator_6397.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 128)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 128)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_6397.current_mValue (HERE).readProperty_location (), GGS_string ("useless declaration, the '").add_operation (enumerator_6397.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        var_inlinedRoutineSet_6357.addAssign_operation (enumerator_6397.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 131)) ;
      }
    }
    enumerator_6397.gotoNextObject () ;
  }
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6818 = constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList () ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_6918 = constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList () ;
  {
  routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (var_inlinedRoutineSet_6357, var_declaredRoutineMap_5075, var_interruptDefinitionList_6818, var_routineDefinitionList_6918, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 136)) ;
  }
  cEnumerator_checkpicList enumerator_7205 (constinArgument_inPiccoloModel.readProperty_mCheckpicList (), EnumerationOrder::up) ;
  while (enumerator_7205.hasCurrentObject ()) {
    GGS_bool var_found_7267 = GGS_bool (false) ;
    cEnumerator_lstringlist enumerator_7290 (enumerator_7205.current_mValueList (HERE), EnumerationOrder::up) ;
    bool bool_16 = var_found_7267.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
    if (enumerator_7290.hasCurrentObject () && bool_16) {
      while (enumerator_7290.hasCurrentObject () && bool_16) {
        var_found_7267 = GGS_bool (ComparisonKind::equal, enumerator_7290.current_mValue (HERE).readProperty_string ().objectCompare (var_piccoloDeviceName_1718)) ;
        enumerator_7290.gotoNextObject () ;
        if (enumerator_7290.hasCurrentObject ()) {
          bool_16 = var_found_7267.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = var_found_7267.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 148)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_7205.current_mErrorLocation (HERE), GGS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1718, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)) ;
      }
    }
    enumerator_7205.gotoNextObject () ;
  }
  GGS_bool var_hasHighInterrupt_7573 = GGS_bool (false) ;
  GGS_bool var_highInterruptIsFast_7610 = GGS_bool (false) ;
  GGS_bool var_hasLowInterrupt_7650 = GGS_bool (false) ;
  GGS_bool var_lowInterruptIsFast_7686 = GGS_bool (false) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7749 (var_interruptDefinitionList_6818, EnumerationOrder::up) ;
  while (enumerator_7749.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 158)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_7749.current_mInterruptName (HERE).readProperty_location (), GGS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 159)) ;
      }
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, enumerator_7749.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("high"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        var_highInterruptIsFast_7610 = enumerator_7749.current_mFastReturn (HERE) ;
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = var_hasHighInterrupt_7573.boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            TC_Array <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_7749.current_mInterruptName (HERE).readProperty_location (), GGS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 164)) ;
          }
        }
        var_hasHighInterrupt_7573 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = GGS_bool (ComparisonKind::equal, enumerator_7749.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("low"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          var_lowInterruptIsFast_7686 = enumerator_7749.current_mFastReturn (HERE) ;
          GalgasBool test_25 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_25) {
            test_25 = var_hasLowInterrupt_7650.boolEnum () ;
            if (GalgasBool::boolTrue == test_25) {
              TC_Array <FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (enumerator_7749.current_mInterruptName (HERE).readProperty_location (), GGS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 170)) ;
            }
          }
          var_hasLowInterrupt_7650 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        TC_Array <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7749.current_mInterruptName (HERE).readProperty_location (), GGS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_highInterruptIsFast_7610.operator_and (var_lowInterruptIsFast_7686 COMMA_SOURCE_FILE ("pic18_semantics.galgas", 176)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        TC_Array <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_7749.current_mInterruptName (HERE).readProperty_location (), GGS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 177)) ;
      }
    }
    enumerator_7749.gotoNextObject () ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_8758 ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    test_30 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 182)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      cEnumerator_configDefinitionList enumerator_8877 (constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), EnumerationOrder::up) ;
      while (enumerator_8877.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_8877.current_mDefinitionLocation (HERE), GGS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
        enumerator_8877.gotoNextObject () ;
      }
      var_actualConfigurationMap_8758 = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_30) {
    {
    routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_1001.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_904, var_actualConfigurationMap_8758, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 188)) ;
    }
  }
  GGS_uint var_RAMsize_9326 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_ramBankTable enumerator_9371 (var_ramBank_1074, EnumerationOrder::up) ;
  while (enumerator_9371.hasCurrentObject ()) {
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::greaterThan, enumerator_9371.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_9326)).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        var_RAMsize_9326 = enumerator_9371.current_mLastAddressPlusOne (HERE) ;
      }
    }
    enumerator_9371.gotoNextObject () ;
  }
  GGS_constantMap var_constantMap_9552 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  {
  var_constantMap_9552.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("ROM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler COMMA_HERE), var_piccoloDeviceModel_1001.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)) ;
  }
  {
  var_constantMap_9552.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("RAM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler COMMA_HERE), var_RAMsize_9326.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)) ;
  }
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (ComparisonKind::notEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_regularProgram (SOURCE_FILE ("pic18_semantics.galgas", 208)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      GGS_lstring var_bootloaderSizeString_9937 = GGS_lstring::init_21__21_ (GGS_string ("BOOTLOADER_RESERVED_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)), inCompiler COMMA_HERE) ;
      {
      var_constantMap_9552.setter_insertKey (var_bootloaderSizeString_9937, var_bootloaderReservedROMsize_1544.readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)) ;
      }
    }
  }
  GGS_stringset var_usedRegisters_10149 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_constantDefinitionList enumerator_10200 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_10200.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_10342 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_10200.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_constantMap_9552, var_result_10342, var_usedRegisters_10149, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)) ;
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      test_34 = var_piccoloDeviceModel_1001.readProperty_mRegisterTable ().getter_hasKey (enumerator_10200.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 216)).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        TC_Array <FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_10200.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_10200.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
      }
    }
    if (GalgasBool::boolFalse == test_34) {
      {
      var_constantMap_9552.setter_insertKey (enumerator_10200.current_mConstantName (HERE), var_result_10342, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 219)) ;
      }
    }
    enumerator_10200.gotoNextObject () ;
  }
  GGS_declaredByteMap var_declaredByteMap_10928 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_9552, var_usedRegisters_10149, var_ramBank_1074, var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_listFileContents_904, var_registerTable_1690, var_declaredByteMap_10928, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 223)) ;
  }
  GalgasBool test_36 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_36) {
    test_36 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 235)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_36) {
      cEnumerator_ramBankTable enumerator_11188 (var_ramBank_1074, EnumerationOrder::up) ;
      while (enumerator_11188.hasCurrentObject ()) {
        GalgasBool test_37 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_37) {
          test_37 = var_bootloaderReservedRAMmap_1114.getter_hasKey (enumerator_11188.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 237)).boolEnum () ;
          if (GalgasBool::boolTrue == test_37) {
            GGS_luint var_bootloaderReservedSize_11285 ;
            var_bootloaderReservedRAMmap_1114.method_searchKey (enumerator_11188.current_lkey (HERE), var_bootloaderReservedSize_11285, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)) ;
            GalgasBool test_38 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_38) {
              test_38 = GGS_bool (ComparisonKind::greaterThan, enumerator_11188.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11188.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 240)).objectCompare (var_bootloaderReservedSize_11285.readProperty_uint ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_38) {
                TC_Array <FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)), GGS_string ("for '").add_operation (enumerator_11188.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GGS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (enumerator_11188.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11188.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GGS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).add_operation (var_bootloaderReservedSize_11285.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_semantics.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 243)).add_operation (GGS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 244)), fixItArray39  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_37) {
          GalgasBool test_40 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_40) {
            test_40 = GGS_bool (ComparisonKind::greaterThan, enumerator_11188.current_mFirstFreeAddress (HERE).objectCompare (enumerator_11188.current_mFirstAddress (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_40) {
              TC_Array <FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)), GGS_string ("for '").add_operation (enumerator_11188.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GGS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (enumerator_11188.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11188.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GGS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)), fixItArray41  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)) ;
            }
          }
        }
        enumerator_11188.gotoNextObject () ;
      }
    }
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inSourceFileName, var_piccoloDeviceModel_1001.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 257)), var_macroMap_4524, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForBootloaderImplementation_1301, var_bootloaderReservedROMsize_1544, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385, var_userRoutineDeclarationListForUserProgramImplementation_1476, var_accessBankSplitOffset_1032, var_registerTable_1690, var_declaredByteMap_10928, var_routineDefinitionList_6918, constinArgument_inPiccoloModel.readProperty_mProgramKind (), var_constantMap_9552, var_usedRegisters_10149, constinArgument_inPiccoloModel.readProperty_mDataList (), var_interruptDefinitionList_6818, constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), var_ramBank_1074, var_hasHighInterrupt_7573, var_hasLowInterrupt_7650, var_piccoloDeviceModel_1001.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_actualConfigurationMap_8758, constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), var_listFileContents_904, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 255)) ;
  }
  GalgasBool test_42 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_42) {
    test_42 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_42) {
      var_listFileContents_904.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)) ;
      GGS_string var_listFile_13303 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 286)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 286)) ;
      GGS_bool joker_13438 ; // Joker input parameter
      var_listFileContents_904.method_writeToFileWhenDifferentContents (var_listFile_13303, joker_13438, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 287)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18BootloaderSpecificationAnalysis????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_BootloaderSpecificationAnalysis_3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_string constinArgument_inSourceFileName,
                                                                                                             const GGS_lstring constinArgument_inBootloaderName,
                                                                                                             const GGS_lstring constinArgument_inDeviceName,
                                                                                                             const GGS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationList,
                                                                                                             const GGS_bootloaderReservedRAMmap constinArgument_inBootloaderReservedRAMmap,
                                                                                                             const GGS_luint constinArgument_inReservedRomSize,
                                                                                                             const GGS_routineDeclarationList constinArgument_inUserRoutineDeclarationList,
                                                                                                             const GGS_ramDefinitionList constinArgument_inSharedRamDefinitionList,
                                                                                                             GGS_string & outArgument_outListFileContents,
                                                                                                             GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                             GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                             GGS_ramBankTable & outArgument_outRamBank,
                                                                                                             GGS_registerTable & outArgument_outRegisterTable,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outListFileContents.drop () ; // Release 'out' argument
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  GGS_string var_sourceFileBaseName_734 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_734.objectCompare (constinArgument_inBootloaderName.readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inBootloaderName.readProperty_location (), GGS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (var_sourceFileBaseName_734, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)) ;
    }
  }
  outArgument_outListFileContents = GGS_string::makeEmptyString () ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inDeviceName, outArgument_outPiccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 27)) ;
  }
  switch (outArgument_outPiccoloDeviceModel.readProperty_mProcessorType ().enumValue ()) {
  case GGS_processorType::Enumeration::invalid:
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
    {
      outArgument_outAccessBankSplitOffset = GGS_uint (uint32_t (96U)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
    {
      outArgument_outAccessBankSplitOffset = GGS_uint (uint32_t (128U)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_midrange:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_processorType::Enumeration::enum_baseline:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, constinArgument_inReservedRomSize.readProperty_uint ().objectCompare (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReservedRomSize.readProperty_location (), GGS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GGS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GGS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GGS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42)), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
    }
  }
  outArgument_outListFileContents.plusAssign_operation(GGS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).add_operation (GGS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.readProperty_mRamBankTable () ;
  cEnumerator_bootloaderReservedRAMmap enumerator_2473 (constinArgument_inBootloaderReservedRAMmap, EnumerationOrder::up) ;
  while (enumerator_2473.hasCurrentObject ()) {
    GGS_uint var_firstAddress_2559 ;
    GGS_uint var_firstFreeAddress_2577 ;
    GGS_uint var_lastAddressPlusOne_2599 ;
    GGS_uintlist var_mirrorOffsetList_2630 ;
    outArgument_outRamBank.method_searchKey (enumerator_2473.current_lkey (HERE), var_firstAddress_2559, var_firstFreeAddress_2577, var_lastAddressPlusOne_2599, var_mirrorOffsetList_2630, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 48)) ;
    var_firstFreeAddress_2577 = var_firstFreeAddress_2577.add_operation (enumerator_2473.current_mReservedSize (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 49)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterThan, var_firstFreeAddress_2577.objectCompare (var_lastAddressPlusOne_2599)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2473.current_mReservedSize (HERE).readProperty_location (), GGS_string ("reserved size is greater than size of '").add_operation (enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GGS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (var_lastAddressPlusOne_2599.substract_operation (var_firstAddress_2559, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2577, enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 54)) ;
      }
      outArgument_outListFileContents.plusAssign_operation(GGS_string ("'").add_operation (enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GGS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (enumerator_2473.current_mReservedSize (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GGS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_firstAddress_2559.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (var_firstFreeAddress_2577.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (GGS_string (").\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }
    enumerator_2473.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("BOOTLOADER ROUTINES").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string ("Routine").getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)).add_operation (GGS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)) ;
  GGS_stringset var_routineNameSet_3621 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_entryPointAddress_3663 = GGS_uint (uint32_t (4U)) ;
  cEnumerator_routineDeclarationList enumerator_3713 (constinArgument_inBootloaderRoutineDeclarationList, EnumerationOrder::up) ;
  while (enumerator_3713.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_routineNameSet_3621.getter_hasKey (enumerator_3713.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3713.current_mRoutineName (HERE).readProperty_location (), GGS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
      }
    }
    var_routineNameSet_3621.addAssign_operation (enumerator_3713.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 70)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_3713.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (var_entryPointAddress_3663.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) ;
    var_entryPointAddress_3663 = var_entryPointAddress_3663.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::equal, var_entryPointAddress_3663.objectCompare (GGS_uint (uint32_t (8U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        var_entryPointAddress_3663 = GGS_uint (uint32_t (12U)) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::equal, var_entryPointAddress_3663.objectCompare (GGS_uint (uint32_t (24U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          var_entryPointAddress_3663 = GGS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_3713.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 79)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("USER PROGRAM ROUTINES").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.plusAssign_operation(GGS_string ("Routine").getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)).add_operation (GGS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)) ;
  var_entryPointAddress_3663 = constinArgument_inReservedRomSize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_4761 (constinArgument_inUserRoutineDeclarationList, EnumerationOrder::up) ;
  while (enumerator_4761.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_routineNameSet_3621.getter_hasKey (enumerator_4761.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4761.current_mRoutineName (HERE).readProperty_location (), GGS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
      }
    }
    var_routineNameSet_3621.addAssign_operation (enumerator_4761.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 90)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_4761.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (var_entryPointAddress_3663.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) ;
    var_entryPointAddress_3663 = var_entryPointAddress_3663.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
    enumerator_4761.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable () ;
  GGS_stringset joker_5375 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  {
  GGS_declaredByteMap joker_5500 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GGS_constantMap::init (inCompiler COMMA_HERE), joker_5375, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable (), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5500, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 97)) ;
  }
  outArgument_outListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                            GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GGS_routineMap constinArgument_inRoutineMap,
                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                            const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                            const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                            GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GGS_lstring & ioArgument_ioBlockLabel,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            GGS_uint & ioArgument_ioCurrentBank,
                                                            const GGS_bool constinArgument_inShouldPreserveBSR,
                                                            const GGS_routineKind constinArgument_inRoutineKind,
                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_caseConstantMap var_caseConstantMap_2422 = GGS_caseConstantMap::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  GGS_lstring var_exitLabel_2477 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 64)) ;
  GGS_sint_36__34_ var_lastComparisonValue_2625 = GGS_sint_36__34_ (int64_t (0LL)) ;
  GGS_bool var_continuesInSequence_2706 = GGS_bool (false) ;
  GGS_uint var_initialBankSetting_2745 = ioArgument_ioCurrentBank ;
  GGS_uint var_finalBankSetting_2792 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 71)) ;
  GGS_bool var_finalBankSettingDefined_2834 = GGS_bool (false) ;
  const GGS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_2911 (temp_1.readProperty_mCaseList (), EnumerationOrder::up) ;
  while (enumerator_2911.hasCurrentObject ()) {
    const GGS_pic_31__38_Instruction_5F_switch temp_2 = this ;
    GGS_lstring var_conditionTrueLabel_2972 = GGS_lstring::init_21__21_ (GGS_string (".L.accepted.").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_3115 (enumerator_2911.current_mCaseExpressionList (HERE), EnumerationOrder::up) ;
    while (enumerator_3115.hasCurrentObject ()) {
      GGS_string var_conditionLabel_3162 = ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 79)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 80)) ;
      callExtensionMethod_analyzeCaseItem ((cPtr_pic_31__38_AbstractCaseItem *) enumerator_3115.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_2972, var_conditionLabel_3162, ioArgument_ioUsedRegisters, var_caseConstantMap_2422, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_2625, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 81)) ;
      enumerator_3115.gotoNextObject () ;
    }
    GGS_lstring var_conditionFalseLabel_3606 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_2972 ;
    GGS_uint var_branchFinalBank_3693 = var_initialBankSetting_2745 ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_2911.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_3693, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 98)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_continuesInSequence_2706 = GGS_bool (true) ;
        const GGS_pic_31__38_Instruction_5F_switch temp_4 = this ;
        ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 119)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), var_exitLabel_2477, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 122)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 123)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_finalBankSettingDefined_2834.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, var_finalBankSetting_2792.objectCompare (var_branchFinalBank_3693)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_string temp_7 ;
            const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, var_branchFinalBank_3693.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              temp_7 = GGS_string ("'no selection'") ;
            }else if (GalgasBool::boolFalse == test_8) {
              temp_7 = var_branchFinalBank_3693.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)) ;
            }
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, var_finalBankSetting_2792.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = GGS_string ("'no selection'") ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = var_finalBankSetting_2792.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)) ;
            }
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_2911.current_mStartOfCase (HERE), GGS_string ("this branch leaves bank setting to ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)).add_operation (GGS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 131)).add_operation (GGS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)), fixItArray11  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      var_finalBankSettingDefined_2834 = GGS_bool (true) ;
      var_finalBankSetting_2792 = var_branchFinalBank_3693 ;
    }
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_3606 ;
    enumerator_2911.gotoNextObject () ;
  }
  GGS_uint var_branchFinalBank_5225 = var_initialBankSetting_2745 ;
  {
  const GGS_pic_31__38_Instruction_5F_switch temp_12 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_12.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_5225, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 144)) ;
  }
  GGS_bool var_thenContinuesInSequence_5670 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_5670.boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_switch temp_14 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 165)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_14.readProperty_mInstructionLocation (), var_exitLabel_2477, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 168)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 169)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_finalBankSetting_2792.objectCompare (var_branchFinalBank_5225)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_pic_31__38_Instruction_5F_switch temp_16 = this ;
      GGS_string temp_17 ;
      const GalgasBool test_18 = GGS_bool (ComparisonKind::equal, var_branchFinalBank_5225.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        temp_17 = GGS_string ("'no selection'") ;
      }else if (GalgasBool::boolFalse == test_18) {
        temp_17 = var_branchFinalBank_5225.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)) ;
      }
      GGS_string temp_19 ;
      const GalgasBool test_20 = GGS_bool (ComparisonKind::equal, var_finalBankSetting_2792.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        temp_19 = GGS_string ("'no selection'") ;
      }else if (GalgasBool::boolFalse == test_20) {
        temp_19 = var_finalBankSetting_2792.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)) ;
      }
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mElseBranchStartLocation (), GGS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)).add_operation (GGS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 178)).add_operation (GGS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)), fixItArray21  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)) ;
    }
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_2792 ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = var_continuesInSequence_2706.boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      ioArgument_ioBlockLabel = var_exitLabel_2477 ;
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18-switch-instruction.galgas", 187)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::method_analyzeCaseItem (const GGS_registerTable constinArgument_inRegisterTable,
                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                     const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                     const GGS_string constinArgument_inIndexForLabels,
                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                     GGS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                     GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     GGS_lstring & ioArgument_ioBlockLabel,
                                                                     GGS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_8045 ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mCaseExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_8045, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 225)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_8045.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_8045.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 227)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_SimpleConstantCaseItem temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCaseExpressionLocation (), GGS_string ("case value is evaluated as ").add_operation (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), fixItArray3  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_pic_31__38_SimpleConstantCaseItem temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mCaseExpressionLocation (), GGS_string ("the '").add_operation (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)).add_operation (GGS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), fixItArray6  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)) ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), GGS_string ("the '").add_operation (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)).add_operation (GGS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    const GGS_pic_31__38_SimpleConstantCaseItem temp_8 = this ;
    ioArgument_ioCaseConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), temp_8.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)) ;
    }
  }
  const GGS_pic_31__38_SimpleConstantCaseItem temp_9 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 240)), ioArgument_ioLastComparisonValue.substract_operation (var_result_8045, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 243)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)) ;
  ioArgument_ioLastComparisonValue = var_result_8045 ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_10 = this ;
  GGS_lstring var_conditionFalseLabel_8975 = GGS_lstring::init_21__21_ (GGS_string (".L.value.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)), temp_10.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_11 = this ;
  GGS_ipic_31__38_AbstractBlockTerminator var_t_9169 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_11.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("ipic18-switch-instruction.galgas", 252)), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 254)), var_conditionFalseLabel_8975, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 256)), inCompiler COMMA_HERE) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 259)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_9169, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 263)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_8975 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::method_analyzeCaseItem (const GGS_registerTable constinArgument_inRegisterTable,
                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                               const GGS_lstring constinArgument_inConditionTrueLabel,
                                                               const GGS_string constinArgument_inIndexForLabels,
                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                               GGS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                               GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                               GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                               GGS_lstring & ioArgument_ioBlockLabel,
                                                               GGS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_minBound_10250 ;
  const GGS_pic_31__38_IntervalCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mMinExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_10250, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 284)) ;
  GGS_sint_36__34_ var_maxBound_10351 ;
  const GGS_pic_31__38_IntervalCaseItem temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mMaxExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_10351, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 285)) ;
  GGS_bool var_ok_10390 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_minBound_10250.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_minBound_10250.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 288)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_IntervalCaseItem temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mCaseExpressionLocation (), GGS_string ("min bound is evaluated as ").add_operation (var_minBound_10250.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), fixItArray4  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)) ;
      var_ok_10390 = GGS_bool (false) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_maxBound_10351.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_maxBound_10351.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 292)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_IntervalCaseItem temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mCaseExpressionLocation (), GGS_string ("max bound is evaluated as ").add_operation (var_maxBound_10351.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)) ;
      var_ok_10390 = GGS_bool (false) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::lowerOrEqual, var_maxBound_10351.objectCompare (var_minBound_10250)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_pic_31__38_IntervalCaseItem temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mCaseExpressionLocation (), GGS_string ("max bound (").add_operation (var_maxBound_10351.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GGS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (var_minBound_10250.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), fixItArray10  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)) ;
      var_ok_10390 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, var_maxBound_10351.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_and (GGS_bool (ComparisonKind::equal, var_minBound_10250.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 299)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_pic_31__38_IntervalCaseItem temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mCaseExpressionLocation (), GGS_string ("condition is always true"), fixItArray13  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 300)) ;
        var_ok_10390 = GGS_bool (false) ;
      }
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = var_ok_10390.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      cEnumerator_range enumerator_11178 (GGS_range::init_21__21_ (var_minBound_10250.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), var_maxBound_10351.substract_operation (var_minBound_10250, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), inCompiler COMMA_HERE), EnumerationOrder::up) ;
      while (enumerator_11178.hasCurrentObject ()) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          test_15 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_pic_31__38_IntervalCaseItem temp_16 = this ;
            TC_Array <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mCaseExpressionLocation (), GGS_string ("the '").add_operation (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)).add_operation (GGS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), fixItArray17  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)) ;
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), GGS_string ("the '").add_operation (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)).add_operation (GGS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), fixItArray18  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)) ;
          }
        }
        if (GalgasBool::boolFalse == test_15) {
          {
          const GGS_pic_31__38_IntervalCaseItem temp_19 = this ;
          ioArgument_ioCaseConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), temp_19.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)) ;
          }
        }
        enumerator_11178.gotoNextObject () ;
      }
      const GGS_pic_31__38_IntervalCaseItem temp_20 = this ;
      GGS_lstring var_firstConditionAcceptedLabel_11595 = GGS_lstring::init_21__21_ (GGS_string (".L.first.accepted.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)), temp_20.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_21 = this ;
      GGS_lstring var_firstConditionRejectedLabel_11717 = GGS_lstring::init_21__21_ (GGS_string (".L.first.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)), temp_21.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_22 = this ;
      GGS_lstring var_intervalRejectedLabel_11839 = GGS_lstring::init_21__21_ (GGS_string (".L.interval.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)), temp_22.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_23 = this ;
      GGS_ipic_31__38_SequentialInstruction var_secondTestInstruction_12021 = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 320)), var_maxBound_10351.substract_operation (var_minBound_10250, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_24.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 326)), ioArgument_ioLastComparisonValue.add_operation (GGS_sint_36__34_ (int64_t (255LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).substract_operation (var_maxBound_10351, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 329)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_25 = this ;
      GGS_ipic_31__38_AbstractBlockTerminator var_t_12554 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_25.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 334)), var_firstConditionAcceptedLabel_11595, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 336)), var_firstConditionRejectedLabel_11717, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 338)), inCompiler COMMA_HERE) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 342)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_12554, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 346)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341)) ;
      GGS_ipic_31__38_SequentialInstructionList temp_26 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      temp_26.enterElement (GGS_ipic_31__38_SequentialInstructionList_2E_element::init_21__21__21_ (var_secondTestInstruction_12021, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_27 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 351)), var_firstConditionRejectedLabel_11717, temp_26, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_27.readProperty_mCaseExpressionLocation (), var_intervalRejectedLabel_11839, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 354)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 355)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_28 = this ;
      GGS_ipic_31__38_AbstractBlockTerminator var_t_32__13338 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_28.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 361)), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 363)), var_intervalRejectedLabel_11839, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 365)), inCompiler COMMA_HERE) ;
      GGS_ipic_31__38_SequentialInstructionList temp_29 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      temp_29.enterElement (GGS_ipic_31__38_SequentialInstructionList_2E_element::init_21__21__21_ (var_secondTestInstruction_12021, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 369)), var_firstConditionAcceptedLabel_11595, temp_29, var_t_32__13338, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 373)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368)) ;
      ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
      ioArgument_ioBlockLabel = var_intervalRejectedLabel_11839 ;
      ioArgument_ioLastComparisonValue = var_minBound_10250 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                    GGS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_14166 (temp_0.readProperty_mCaseList (), EnumerationOrder::up) ;
  while (enumerator_14166.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_14166.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 391)) ;
    }
    enumerator_14166.gotoNextObject () ;
  }
  {
  const GGS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 393)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBCC'
//
//--------------------------------------------------------------------------------------------------

GGS_bool function_pic_31__38__5F_checkBCC (const GGS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                           const GGS_lstring & constinArgument_inTargetLabel,
                                           const GGS_uint & constinArgument_inCurrentAddress,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outDisplacementOK ; // Returned variable
  GGS_uint var_targetAddress_18721 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_18721, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 515)) ;
  GGS_sint var_displacement_18748 = var_targetAddress_18721.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)) ;
  result_outDisplacementOK = GGS_bool (ComparisonKind::lowerOrEqual, var_displacement_18748.objectCompare (GGS_sint (int32_t (127L)))).operator_and (GGS_bool (ComparisonKind::greaterOrEqual, var_displacement_18748.objectCompare (GGS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 517)) ;
//---
  return result_outDisplacementOK ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBCC [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_checkBCC (Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GGS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForRelativesResolution operand0 = GGS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_uint operand2 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_pic_31__38__5F_checkBCC (operand0,
                                           operand1,
                                           operand2,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBCC ("pic18_checkBCC",
                                                                         functionWithGenericHeader_pic_31__38__5F_checkBCC,
                                                                         & kTypeDescriptor_GALGAS_bool,
                                                                         3,
                                                                         functionArgs_pic_31__38__5F_checkBCC) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBRA_RCALL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const GGS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                    const GGS_lstring & constinArgument_inTargetLabel,
                                                    const GGS_uint & constinArgument_inCurrentAddress,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outDisplacementOK ; // Returned variable
  GGS_uint var_targetAddress_19259 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_19259, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
  GGS_sint var_displacement_19286 = var_targetAddress_19259.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
  result_outDisplacementOK = GGS_bool (ComparisonKind::lowerOrEqual, var_displacement_19286.objectCompare (GGS_sint (int32_t (1023L)))).operator_and (GGS_bool (ComparisonKind::greaterOrEqual, var_displacement_19286.objectCompare (GGS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
//---
  return result_outDisplacementOK ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBRA_5F_RCALL [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForRelativesResolution operand0 = GGS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_uint operand2 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_pic_31__38__5F_checkBRA_5F_RCALL (operand0,
                                                    operand1,
                                                    operand2,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBRA_5F_RCALL ("pic18_checkBRA_RCALL",
                                                                                  functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL,
                                                                                  & kTypeDescriptor_GALGAS_bool,
                                                                                  3,
                                                                                  functionArgs_pic_31__38__5F_checkBRA_5F_RCALL) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_RCALL_displacement'
//
//--------------------------------------------------------------------------------------------------

GGS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const GGS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                               const GGS_lstring & constinArgument_inTargetLabel,
                                                               const GGS_uint & constinArgument_inCurrentAddress,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint result_outDisplacement ; // Returned variable
  GGS_uint var_targetAddress_19764 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_19764, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 540)) ;
  result_outDisplacement = var_targetAddress_19764.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)) ;
//---
  return result_outDisplacement ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (Compiler * inCompiler,
                                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                                         const GGS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForRelativesResolution operand0 = GGS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_uint operand2 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (operand0,
                                                               operand1,
                                                               operand2,
                                                               inCompiler
                                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_RCALL_5F_displacement ("pic18_BRA_RCALL_displacement",
                                                                                             functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement,
                                                                                             & kTypeDescriptor_GALGAS_sint,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_Bcc_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GGS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const GGS_uint & constinArgument_inConditionalBranchInstructionAddress,
                                                                 const GGS_uint & constinArgument_inTargetAddress,
                                                                 const GGS_lstring & constinArgument_inTargetLabel,
                                                                 const GGS_conditional_5F_branch & constinArgument_inConditionalBranch,
                                                                 const GGS_bool & constinArgument_inComplemented,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_sint var_displacement_20343 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_displacement_20343.objectCompare (GGS_sint (int32_t (127L)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_displacement_20343.objectCompare (GGS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 558)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GGS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 559)) ;
    }
  }
  GGS_conditional_5F_branch var_conditionalBranch_20634 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inComplemented.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      switch (constinArgument_inConditionalBranch.enumValue ()) {
      case GGS_conditional_5F_branch::Enumeration::invalid:
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bz:
        {
          var_conditionalBranch_20634 = GGS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 565)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bnz:
        {
          var_conditionalBranch_20634 = GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 566)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bn:
        {
          var_conditionalBranch_20634 = GGS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 567)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bnn:
        {
          var_conditionalBranch_20634 = GGS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 568)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bc:
        {
          var_conditionalBranch_20634 = GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 569)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bnc:
        {
          var_conditionalBranch_20634 = GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 570)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bov:
        {
          var_conditionalBranch_20634 = GGS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 571)) ;
        }
        break ;
      case GGS_conditional_5F_branch::Enumeration::enum_bnov:
        {
          var_conditionalBranch_20634 = GGS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 572)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    var_conditionalBranch_20634 = constinArgument_inConditionalBranch ;
  }
  GGS_uint var_baseCode_21272 ;
  GGS_string var_mnemonic_21295 ;
  switch (var_conditionalBranch_20634.enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      var_baseCode_21272 = GGS_uint (uint32_t (57344U)) ;
      var_mnemonic_21295 = GGS_string ("BZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      var_baseCode_21272 = GGS_uint (uint32_t (57600U)) ;
      var_mnemonic_21295 = GGS_string ("BNZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      var_baseCode_21272 = GGS_uint (uint32_t (58880U)) ;
      var_mnemonic_21295 = GGS_string ("BN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      var_baseCode_21272 = GGS_uint (uint32_t (59136U)) ;
      var_mnemonic_21295 = GGS_string ("BNN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      var_baseCode_21272 = GGS_uint (uint32_t (57856U)) ;
      var_mnemonic_21295 = GGS_string ("BC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      var_baseCode_21272 = GGS_uint (uint32_t (58112U)) ;
      var_mnemonic_21295 = GGS_string ("BNC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      var_baseCode_21272 = GGS_uint (uint32_t (58368U)) ;
      var_mnemonic_21295 = GGS_string ("BOV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      var_baseCode_21272 = GGS_uint (uint32_t (58624U)) ;
      var_mnemonic_21295 = GGS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (var_mnemonic_21295, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 591)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 591)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 591)), GGS_uintlist::class_func_listWithValue (var_baseCode_21272.operator_or (var_displacement_20343.operator_and (GGS_sint (int32_t (255L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 592)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 592)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 592))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 592))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 590)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code [6] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_conditional_5F_branch,
  & kTypeDescriptor_GALGAS_bool,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GGS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_conditional_5F_branch operand3 = GGS_conditional_5F_branch::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                       inCompiler
                                                                                       COMMA_THERE) ;
  const GGS_bool operand4 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_Bcc_5F_instruction_5F_code ("pic18_Bcc_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           5,
                                                                                           functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_RCALL_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GGS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const GGS_uint & constinArgument_inRCALLinstructionAddress,
                                                                   const GGS_uint & constinArgument_inTargetAddress,
                                                                   const GGS_lstring & constinArgument_inTargetLabel,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_sint var_displacement_22170 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_displacement_22170.objectCompare (GGS_sint (int32_t (1023L)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_displacement_22170.objectCompare (GGS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 603)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GGS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_22170.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 604)).add_operation (GGS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 604)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 605)).add_operation (GGS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 605)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 604)) ;
    }
  }
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 608)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (55296U)).operator_or (var_displacement_22170.operator_and (GGS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 609)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 609)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 609))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 609))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 607)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                                         const GGS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_RCALL_5F_instruction_5F_code (operand0,
                                                               operand1,
                                                               operand2,
                                                               inCompiler
                                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_RCALL_5F_instruction_5F_code ("pic18_RCALL_instruction_code",
                                                                                             functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code,
                                                                                             & kTypeDescriptor_GALGAS_codeList,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GGS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const GGS_uint & constinArgument_inRCALLinstructionAddress,
                                                                 const GGS_uint & constinArgument_inTargetAddress,
                                                                 const GGS_lstring & constinArgument_inTargetLabel,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_sint var_displacement_22922 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)).substract_operation (GGS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)).right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_displacement_22922.objectCompare (GGS_sint (int32_t (1023L)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_displacement_22922.objectCompare (GGS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 620)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GGS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_22922.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 621)).add_operation (GGS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 621)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 622)).add_operation (GGS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 622)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 621)) ;
    }
  }
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 625)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (53248U)).operator_or (var_displacement_22922.operator_and (GGS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 626)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 626)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 626))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 626))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 624)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GGS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_BRA_5F_instruction_5F_code (operand0,
                                                             operand1,
                                                             operand2,
                                                             inCompiler
                                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_instruction_5F_code ("pic18_BRA_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           3,
                                                                                           functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_CALL_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GGS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const GGS_uint & constinArgument_inTargetAddress,
                                                                  const GGS_lstring & constinArgument_inTargetLabel,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_uintlist var_binaryCode_23626 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  var_binaryCode_23626.addAssign_operation (GGS_uint (uint32_t (60416U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)) ;
  var_binaryCode_23626.addAssign_operation (GGS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)) ;
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 639)), var_binaryCode_23626  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 638)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                                        const GGS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_CALL_5F_instruction_5F_code (operand0,
                                                              operand1,
                                                              inCompiler
                                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_CALL_5F_instruction_5F_code ("pic18_CALL_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_GOTO_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GGS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const GGS_uint & constinArgument_inTargetAddress,
                                                                  const GGS_lstring & constinArgument_inTargetLabel,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  GGS_uintlist var_binaryCode_24069 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  var_binaryCode_24069.addAssign_operation (GGS_uint (uint32_t (61184U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)) ;
  var_binaryCode_24069.addAssign_operation (GGS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)) ;
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 653)), var_binaryCode_24069  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 652)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                                        const GGS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_GOTO_5F_instruction_5F_code (operand0,
                                                              operand1,
                                                              inCompiler
                                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_GOTO_5F_instruction_5F_code ("pic18_GOTO_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_definition_label'
//
//--------------------------------------------------------------------------------------------------

GGS_codeList function_pic_31__38__5F_definition_5F_label (const GGS_lstring & constinArgument_inTargetLabel,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result_outCode ; // Returned variable
  result_outCode = GGS_codeList::class_func_listWithValue (constinArgument_inTargetLabel.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 663)), GGS_uintlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 662)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_definition_5F_label [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_definition_5F_label (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_definition_5F_label (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_definition_5F_label ("pic18_definition_label",
                                                                                    functionWithGenericHeader_pic_31__38__5F_definition_5F_label,
                                                                                    & kTypeDescriptor_GALGAS_codeList,
                                                                                    1,
                                                                                    functionArgs_pic_31__38__5F_definition_5F_label) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ReturnTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("RETURN") ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ReturnTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                   Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                       const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    RETURN"), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (18U))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 48))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 46)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ReturnTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_RetfieTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("RETFIE") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_RetfieTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mFastReturn ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult.plusAssign_operation(GGS_string (" FAST"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 70)) ;
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_RetfieTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                   Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                       const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GGS_string constinArgument_inNextBlockLabel,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetfieTerminator temp_0 = this ;
  const GGS_ipic_31__38_RetfieTerminator temp_1 = this ;
  GGS_bigint temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mFastReturn ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_bigint ("17", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), GGS_uintlist::class_func_listWithValue (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 89)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetfieTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_RetlwTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  result_outResult = GGS_string ("RETLW ").add_operation (temp_0.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 111)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_RetlwTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                  Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                      const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                      const GGS_string constinArgument_inNextBlockLabel,
                                                                      GGS_codeList & outArgument_outCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  const GGS_ipic_31__38_RetlwTerminator temp_1 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (3072U)).operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 129)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetlwTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                       Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_ipic_31__38_RetlwTerminator var_t_4553 (dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_4553.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_RetlwTerminator temp_1 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLiteralValue ().objectCompare (var_t_4553.readProperty_mLiteralValue ())) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_JumpTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                 Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (0U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    switch (temp_2.readProperty_mKind ().enumValue ()) {
    case GGS_jumpInstructionKind::Enumeration::invalid:
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    case GGS_jumpInstructionKind::Enumeration::enum_relative:
      {
        result_outSize = GGS_uint (uint32_t (2U)) ;
      }
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_absolute:
      {
        result_outSize = GGS_uint (uint32_t (4U)) ;
      }
      break ;
    }
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                               GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mKind ().enumValue ()) {
      case GGS_jumpInstructionKind::Enumeration::invalid:
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
      case GGS_jumpInstructionKind::Enumeration::enum_relative:
        {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_4.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 185)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 185)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_5.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 186)) ;
              }
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_absolute:
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                                        const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GGS_string constinArgument_inNextBlockLabel,
                                                                                        GGS_uint & ioArgument_ioConversionCount,
                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      switch (temp_3.readProperty_mKind ().enumValue ()) {
      case GGS_jumpInstructionKind::Enumeration::invalid:
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
        {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
            test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_5.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 207)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              ioArgument_ioConversionCount.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)) ;
              const GGS_ipic_31__38_JumpTerminator temp_6 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GGS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_6.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GGS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)) ;
              const GGS_ipic_31__38_JumpTerminator temp_8 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_9 = this ;
              outArgument_outModifiedTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mLabel (), GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 210)), inCompiler COMMA_HERE) ;
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_relative:
        {
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            const GGS_ipic_31__38_JumpTerminator temp_11 = this ;
            test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_11.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 213)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 213)).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              const GGS_ipic_31__38_JumpTerminator temp_12 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_13 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_13.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)).add_operation (GGS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (temp_14.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)) ;
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_absolute:
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_JumpTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  GGS_string var_name_7319 ;
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    {
      var_name_7319 = GGS_string ("JUMP ") ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      var_name_7319 = GGS_string ("BRA ") ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      var_name_7319 = GGS_string ("GOTO ") ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      result_outResult = GGS_string ("(").add_operation (var_name_7319, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
    result_outResult = var_name_7319.add_operation (temp_4.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 237)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                     const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                     const GGS_string constinArgument_inNextBlockLabel,
                                                                     GGS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = GGS_codeList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_targetAddress_8024 ;
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mLabel (), var_targetAddress_8024, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 251)) ;
    const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
    switch (temp_3.readProperty_mKind ().enumValue ()) {
    case GGS_jumpInstructionKind::Enumeration::invalid:
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    case GGS_jumpInstructionKind::Enumeration::enum_relative:
      {
        const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_8024, temp_4.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 254)) ;
      }
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_absolute:
      {
        const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress_8024, temp_5.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 256)) ;
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_JumpTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_ipic_31__38_JumpTerminator var_t_8513 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_8513.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (var_t_8513.readProperty_mLabel ().readProperty_string ())).operator_and (GGS_bool (ComparisonKind::equal, temp_2.readProperty_mKind ().objectCompare (var_t_8513.readProperty_mKind ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 267)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_AbstractConditionTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 282)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 283)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                            const GGS_string constinArgument_inBlockLabel,
                                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GGS_string constinArgument_inNextBlockLabel,
                                                                                            GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 295)) ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 302)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 320)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 321)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 330)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GGS_ipic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerEqualsToW:
    {
      result_outResult.plusAssign_operation(GGS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 333)) ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerGreaterThanW:
    {
      result_outResult.plusAssign_operation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 335)) ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerLowerThanW:
    {
      result_outResult.plusAssign_operation(GGS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 337)) ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(GGS_string (" W \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 339)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 340)) ;
  result_outResult.plusAssign_operation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 341)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 342)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                     const GGS_string constinArgument_inBlockLabel,
                                                                                                     const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GGS_string constinArgument_inNextBlockLabel,
                                                                                                     GGS_uint & ioArgument_ioConversionCount,
                                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                                     GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_11554 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_11833 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_11833, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 356)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_12121 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_12121, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 365)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_11554)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_11833.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_11833.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_11833.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_11833.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 379)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_12121.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_12121.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_12121.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_12121.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 380)) ;
      }
    }
    const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
    const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mComparison (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                                  const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                  const GGS_string constinArgument_inNextBlockLabel,
                                                                                  GGS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_binCode_12839 ;
  GGS_string var_assemblyCode_12861 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  switch (temp_0.readProperty_mComparison ().enumValue ()) {
  case GGS_ipic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerEqualsToW:
    {
      var_binCode_12839 = GGS_uint (uint32_t (25088U)) ;
      var_assemblyCode_12861 = GGS_string ("    CPFSEQ") ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerGreaterThanW:
    {
      var_binCode_12839 = GGS_uint (uint32_t (25600U)) ;
      var_assemblyCode_12861 = GGS_string ("    CPFSGT") ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerLowerThanW:
    {
      var_binCode_12839 = GGS_uint (uint32_t (24576U)) ;
      var_assemblyCode_12861 = GGS_string ("    CPFSLT") ;
    }
    break ;
  }
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  var_assemblyCode_12861.plusAssign_operation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 407)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  var_binCode_12839 = var_binCode_12839.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 408)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 408)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_binCode_12839 = var_binCode_12839.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 410)) ;
      var_assemblyCode_12861.plusAssign_operation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 411)) ;
    }
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_12861, GGS_uintlist::class_func_listWithValue (var_binCode_12839  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 415))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)) ;
  GGS_codeList var_falseTerminatorCode_13648 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 418)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_falseTerminatorCode_13648, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 417)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_13648, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 423)) ;
  GGS_codeList var_trueTerminatorCode_13934 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_7.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_13934, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 424)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_13934, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 430)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_RegisterComparisonTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_RegisterComparisonTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_RegisterComparisonTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_RegisterComparisonTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 440)) ;
        }
      }
      GGS_pic_31__38_RegisterComparisonTerminator var_t_14352 = temp_1 ;
      const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_14352.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 441)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_14352.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 443)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mComparison ().objectCompare (var_t_14352.readProperty_mComparison ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_14352.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 449)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 463)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 464)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString () ;
  result_outResult.plusAssign_operation(GGS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 474)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 475)) ;
  result_outResult.plusAssign_operation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 476)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 477)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                                               GGS_uint & ioArgument_ioConversionCount,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_16353 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_16632 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_16632, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 491)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_16920 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_16920, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 500)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_16353)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_TestRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_16632.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_16632.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_16632.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_16632.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 514)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_16920.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_16920.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_16920.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_16920.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 515)) ;
      }
    }
    const GGS_pic_31__38_TestRegisterTerminator temp_7 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GGS_string constinArgument_inNextBlockLabel,
                                                                            GGS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_binCode_17602 = GGS_uint (uint32_t (26112U)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  GGS_string var_assemblyCode_17633 = GGS_string ("    TSTFSZ ").add_operation (temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 528)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  var_binCode_17602 = var_binCode_17602.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 529)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 529)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_pic_31__38_TestRegisterTerminator temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_binCode_17602 = var_binCode_17602.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 531)) ;
      var_assemblyCode_17633.plusAssign_operation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 532)) ;
    }
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_17633, GGS_uintlist::class_func_listWithValue (var_binCode_17602  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 536))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 534)) ;
  GGS_codeList var_falseTerminatorCode_18206 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 539)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_falseTerminatorCode_18206, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 538)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_18206, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 544)) ;
  GGS_codeList var_trueTerminatorCode_18492 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_5 = this ;
  const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_18492, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 545)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_18492, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 551)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_TestRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_TestRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_TestRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_TestRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 561)) ;
        }
      }
      GGS_pic_31__38_TestRegisterTerminator var_t_18892 = temp_1 ;
      const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_18892.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 562)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_18892.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 564)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_6.readProperty_mRegisterDescription (), var_t_18892.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 567)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_pic_31__38_BitTestTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)).add_operation (temp_1.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)).add_operation (GGS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)) ;
  const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 582)) ;
  result_outResult.plusAssign_operation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 583)) ;
  const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 584)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                          const GGS_string constinArgument_inBlockLabel,
                                                                                          const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GGS_string constinArgument_inNextBlockLabel,
                                                                                          GGS_uint & ioArgument_ioConversionCount,
                                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                                          GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_20441 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_20720 ;
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_20720, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 598)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_21008 ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_21008, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 607)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_20441)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_20720.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_20720.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_20720.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_20720.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 621)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_21008.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_21008.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_21008.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_21008.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 622)) ;
      }
    }
    const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                       const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                       const GGS_string constinArgument_inNextBlockLabel,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 636)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_binCode_21862 = GGS_uint (uint32_t (45056U)) ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
      GGS_string var_assemblyCode_21895 = GGS_string ("    BTFSC ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)) ;
      const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
      var_binCode_21862 = var_binCode_21862.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 640)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 640)) ;
      const GGS_pic_31__38_BitTestTerminator temp_5 = this ;
      var_binCode_21862 = var_binCode_21862.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
        test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          var_binCode_21862 = var_binCode_21862.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 643)) ;
          var_assemblyCode_21895.plusAssign_operation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 644)) ;
        }
      }
      outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_21895, GGS_uintlist::class_func_listWithValue (var_binCode_21862  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 648))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) ;
      GGS_codeList var_falseTerminatorCode_22511 ;
      const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_8.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_22511, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_22511, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_binCode_22665 = GGS_uint (uint32_t (40960U)) ;
    const GGS_pic_31__38_BitTestTerminator temp_9 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_10 = this ;
    GGS_string var_assemblyCode_22698 = GGS_string ("    BTFSS ").add_operation (temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)).add_operation (temp_10.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)) ;
    const GGS_pic_31__38_BitTestTerminator temp_11 = this ;
    var_binCode_22665 = var_binCode_22665.operator_or (temp_11.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 660)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 660)) ;
    const GGS_pic_31__38_BitTestTerminator temp_12 = this ;
    var_binCode_22665 = var_binCode_22665.operator_or (temp_12.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_BitTestTerminator temp_14 = this ;
      test_13 = temp_14.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        var_binCode_22665 = var_binCode_22665.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 663)) ;
        var_assemblyCode_22698.plusAssign_operation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 664)) ;
      }
    }
    outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_22698, GGS_uintlist::class_func_listWithValue (var_binCode_22665  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 668))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) ;
    GGS_codeList var_trueTerminatorCode_23299 ;
    const GGS_pic_31__38_BitTestTerminator temp_15 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_15.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 670)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_trueTerminatorCode_23299, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 669)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_23299, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 675)) ;
    GGS_codeList var_falseTerminatorCode_23611 ;
    const GGS_pic_31__38_BitTestTerminator temp_16 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_17 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_16.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_17.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_23611, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 676)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_23611, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 682)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_BitTestTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_BitTestTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_BitTestTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_BitTestTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_BitTestTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 693)) ;
        }
      }
      GGS_pic_31__38_BitTestTerminator var_t_24008 = temp_1 ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_24008.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 694)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_24008.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 696)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_BitTestTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mBitNumber ().objectCompare (var_t_24008.readProperty_mBitNumber ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_24008.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 702)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_IncDecRegisterTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult = GGS_string ("INCF ") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_string ("DECF ") ;
  }
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 721)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      result_outResult.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 723)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    result_outResult.plusAssign_operation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 725)) ;
  }
  result_outResult.plusAssign_operation(GGS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 727)) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 728)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 728)) ;
  result_outResult.plusAssign_operation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 729)) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 730)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 730)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                  const GGS_string constinArgument_inBlockLabel,
                                                                                                  const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GGS_string constinArgument_inNextBlockLabel,
                                                                                                  GGS_uint & ioArgument_ioConversionCount,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_25818 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_26097 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_26097, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 744)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_26385 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_26385, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 753)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_25818)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_26097.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_26097.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_26097.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_26097.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 767)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_26385.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_26385.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_26385.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_26385.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 768)) ;
      }
    }
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
    outArgument_outModifiedTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                               GGS_codeList & outArgument_outCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 782)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      GGS_bigint temp_3 ;
      const GalgasBool test_4 = temp_2.readProperty_mIncrement ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        temp_3 = GGS_bigint ("15360", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      }else if (GalgasBool::boolFalse == test_4) {
        temp_3 = GGS_bigint ("11264", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      }
      GGS_uint var_binCode_27285 = temp_3.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = temp_5.readProperty_mIncrement ().boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string ("    INCFSZ") ;
      }else if (GalgasBool::boolFalse == test_7) {
        temp_6 = GGS_string ("    DECFSZ") ;
      }
      GGS_string var_assemblyCode_27367 = temp_6 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
      var_assemblyCode_27367.plusAssign_operation(GGS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 786)) ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
      var_binCode_27285 = var_binCode_27285.operator_or (temp_9.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 787)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 787)) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          var_assemblyCode_27367.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 789)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        var_binCode_27285 = var_binCode_27285.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 791)) ;
        var_assemblyCode_27367.plusAssign_operation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_13 = this ;
        test_12 = temp_13.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          var_binCode_27285 = var_binCode_27285.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 795)) ;
          var_assemblyCode_27367.plusAssign_operation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 796)) ;
        }
      }
      outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_27367, GGS_uintlist::class_func_listWithValue (var_binCode_27285  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 800))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 798)) ;
      GGS_codeList var_falseTerminatorCode_28122 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_14 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_14.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_28122, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 801)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_28122, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_15 = this ;
    GGS_bigint temp_16 ;
    const GalgasBool test_17 = temp_15.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      temp_16 = GGS_bigint ("18432", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    }else if (GalgasBool::boolFalse == test_17) {
      temp_16 = GGS_bigint ("19456", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    }
    GGS_uint var_binCode_28276 = temp_16.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_18 = this ;
    GGS_string temp_19 ;
    const GalgasBool test_20 = temp_18.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      temp_19 = GGS_string ("    INFSNZ") ;
    }else if (GalgasBool::boolFalse == test_20) {
      temp_19 = GGS_string ("    DCFSNZ") ;
    }
    GGS_string var_assemblyCode_28358 = temp_19 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_21 = this ;
    var_assemblyCode_28358.plusAssign_operation(GGS_string (" ").add_operation (temp_21.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 812)) ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_22 = this ;
    var_binCode_28276 = var_binCode_28276.operator_or (temp_22.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) ;
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_24 = this ;
      test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        var_assemblyCode_28358.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 815)) ;
      }
    }
    if (GalgasBool::boolFalse == test_23) {
      var_binCode_28276 = var_binCode_28276.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 817)) ;
      var_assemblyCode_28358.plusAssign_operation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)) ;
    }
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_26 = this ;
      test_25 = temp_26.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        var_binCode_28276 = var_binCode_28276.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 821)) ;
        var_assemblyCode_28358.plusAssign_operation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 822)) ;
      }
    }
    outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_28358, GGS_uintlist::class_func_listWithValue (var_binCode_28276  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 826))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 824)) ;
    GGS_codeList var_trueTerminatorCode_29098 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_27 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_27.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 828)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_trueTerminatorCode_29098, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 827)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_29098, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 833)) ;
    GGS_codeList var_falseTerminatorCode_29410 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_28 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_29 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_28.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_29.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_29410, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 834)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_29410, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 840)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_IncDecRegisterTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_IncDecRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_IncDecRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_IncDecRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_IncDecRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 851)) ;
        }
      }
      GGS_ipic_31__38_IncDecRegisterTerminator var_t_29831 = temp_1 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_29831.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 852)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_29831.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 854)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mIncrement ().objectCompare (var_t_29831.readProperty_mIncrement ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_8.readProperty_m_5F_W_5F_isDestination ().objectCompare (var_t_29831.readProperty_m_5F_W_5F_isDestination ())) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_10.readProperty_mRegisterDescription (), var_t_29831.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 863)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 882)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED RETLW") ;
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  cEnumerator_uintlist enumerator_31190 (temp_0.readProperty_mLiteralValues (), EnumerationOrder::up) ;
  while (enumerator_31190.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GGS_string (" ").add_operation (enumerator_31190.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 892)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 892)) ;
    enumerator_31190.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                 const GGS_string constinArgument_inBlockLabel,
                                                                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GGS_uint & ioArgument_ioConversionCount,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 908)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 908)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 908)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 909)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)).add_operation (GGS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)) ;
          const GGS_ipic_31__38_ComputedRETLWTerminator temp_4 = this ;
          const GGS_ipic_31__38_ComputedRETLWTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedRETLWTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralValues (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                                        const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 925)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 925)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 925)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_2"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 926)) ;
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                              const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                              GGS_codeList & outArgument_outCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_32_label_32983 = GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 938)) ;
  GGS_uint var_targetAddress_33075 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_32983, var_targetAddress_33075, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 939)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_33075, var_goto_32_label_32983, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 941)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_33075, var_goto_32_label_32983, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 943)) ;
  }
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  cEnumerator_uintlist enumerator_33290 (temp_2.readProperty_mLiteralValues (), EnumerationOrder::up) ;
  while (enumerator_33290.hasCurrentObject ()) {
    outArgument_outCode.addAssign_operation (GGS_string ("    RETLW ").add_operation (enumerator_33290.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 947)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 947)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (3072U)).operator_or (enumerator_33290.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 948))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 948))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 946)) ;
    enumerator_33290.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedRETLWTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedRETLWTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedRETLWTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedRETLWTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 959)) ;
        }
      }
      GGS_ipic_31__38_ComputedRETLWTerminator var_t_33788 = temp_1 ;
      const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 960)).objectCompare (var_t_33788.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 960)))) ;
      const GGS_ipic_31__38_ComputedRETLWTerminator temp_3 = this ;
      cEnumerator_uintlist enumerator_33923 (temp_3.readProperty_mLiteralValues (), EnumerationOrder::up) ;
      cEnumerator_uintlist enumerator_33957 (var_t_33788.readProperty_mLiteralValues (), EnumerationOrder::up) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_33923.hasCurrentObject () && enumerator_33957.hasCurrentObject () && bool_4) {
        while (enumerator_33923.hasCurrentObject () && enumerator_33957.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_33923.current_mValue (HERE).objectCompare (enumerator_33957.current_mValue (HERE))) ;
          enumerator_33923.gotoNextObject () ;
          enumerator_33957.gotoNextObject () ;
          if (enumerator_33923.hasCurrentObject () && enumerator_33957.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED GOTO ") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult.plusAssign_operation(GGS_string (" (uses RCALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 978)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult.plusAssign_operation(GGS_string (" (uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 980)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_34534 (temp_2.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_34534.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GGS_string (" ").add_operation (enumerator_34534.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 983)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 983)) ;
    enumerator_34534.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 997)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                const GGS_string constinArgument_inBlockLabel,
                                                                                                const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GGS_uint & ioArgument_ioConversionCount,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1012)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1012)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1012)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1013)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)).add_operation (GGS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)) ;
          const GGS_ipic_31__38_ComputedGotoTerminator temp_4 = this ;
          const GGS_ipic_31__38_ComputedGotoTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedGotoTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mTargetLabels (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                       const GGS_string constinArgument_inBlockLabel,
                                                                                       const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1029)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1029)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1029)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_4"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1030)) ;
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                             const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                             const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                             GGS_codeList & outArgument_outCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_34_label_36636 = GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1042)) ;
  GGS_uint var_targetAddress_36728 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label_36636, var_targetAddress_36728, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1043)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_36728, var_goto_34_label_36636, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1045)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_36728, var_goto_34_label_36636, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1047)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_36943 (temp_2.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_36943.hasCurrentObject ()) {
    GGS_uint var_targetLabelAddress_37025 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_36943.current_mValue (HERE), var_targetLabelAddress_37025, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1050)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress_37025, enumerator_36943.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)) ;
    enumerator_36943.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedGotoTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedGotoTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedGotoTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedGotoTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1062)) ;
        }
      }
      GGS_ipic_31__38_ComputedGotoTerminator var_t_37470 = temp_1 ;
      const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1063)).objectCompare (var_t_37470.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1063)))) ;
      const GGS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_37602 (temp_3.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      cEnumerator_lstringlist enumerator_37635 (var_t_37470.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_37602.hasCurrentObject () && enumerator_37635.hasCurrentObject () && bool_4) {
        while (enumerator_37602.hasCurrentObject () && enumerator_37635.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_37602.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_37635.current_mValue (HERE).readProperty_string ())) ;
          enumerator_37602.gotoNextObject () ;
          enumerator_37635.gotoNextObject () ;
          if (enumerator_37602.hasCurrentObject () && enumerator_37635.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1084)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED BRA") ;
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_38444 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_38444.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GGS_string (" ").add_operation (enumerator_38444.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1094)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1094)) ;
    enumerator_38444.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                               GGS_uint & ioArgument_ioConversionCount,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_38954 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_38954.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_38954.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1109)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1109)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_38954.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1110)).add_operation (GGS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).add_operation (enumerator_38954.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1112)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1110)) ;
      }
    }
    enumerator_38954.gotoNextObject () ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_4 = this ;
  outArgument_outModifiedTerminator = temp_4 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1117)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1117)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1118)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)).add_operation (GGS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)) ;
          const GGS_ipic_31__38_ComputedBraTerminator temp_8 = this ;
          const GGS_ipic_31__38_ComputedBraTerminator temp_9 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedBraTerminator::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabels (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                      const GGS_string constinArgument_inBlockLabel,
                                                                                      const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_address_40059 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1135)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1135)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1135)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_2"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1136)) ;
          }
        }
      }
      var_address_40059 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1138)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_address_40059 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1140)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
  cEnumerator_lstringlist enumerator_40342 (temp_3.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_40342.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_40342.current_mValue (HERE), var_address_40059, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1143)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1143)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        {
        extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, enumerator_40342.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1144)) ;
        }
      }
    }
    var_address_40059 = var_address_40059.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1146)) ;
    enumerator_40342.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                            GGS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_32_label_40857 = GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1157)) ;
  GGS_uint var_targetAddress_40949 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_40857, var_targetAddress_40949, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1158)) ;
  GGS_uint var_address_40976 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_40949, var_goto_32_label_40857, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1161)) ;
      var_address_40976 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1162)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_40949, var_goto_32_label_40857, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1164)) ;
    var_address_40976 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1165)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_41240 (temp_2.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_41240.hasCurrentObject ()) {
    GGS_uint var_labelAddress_41322 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_41240.current_mValue (HERE), var_labelAddress_41322, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1168)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address_40976, var_labelAddress_41322, enumerator_41240.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1169)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1169)) ;
    var_address_40976 = var_address_40976.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1170)) ;
    enumerator_41240.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedBraTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedBraTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedBraTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedBraTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1181)) ;
        }
      }
      GGS_ipic_31__38_ComputedBraTerminator var_t_41786 = temp_1 ;
      const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1182)).objectCompare (var_t_41786.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1182)))) ;
      const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_41917 (temp_3.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      cEnumerator_lstringlist enumerator_41950 (var_t_41786.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_41917.hasCurrentObject () && enumerator_41950.hasCurrentObject () && bool_4) {
        while (enumerator_41917.hasCurrentObject () && enumerator_41950.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_41917.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_41950.current_mValue (HERE).readProperty_string ())) ;
          enumerator_41917.gotoNextObject () ;
          enumerator_41950.gotoNextObject () ;
          if (enumerator_41917.hasCurrentObject () && enumerator_41950.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mConditionalBranch ().enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      result_outResult = GGS_string ("Z") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      result_outResult = GGS_string ("N") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      result_outResult = GGS_string ("C") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      result_outResult = GGS_string ("OV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      result_outResult = GGS_string ("NZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      result_outResult = GGS_string ("NN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      result_outResult = GGS_string ("NC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      result_outResult = GGS_string ("NOV") ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(GGS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1294)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      result_outResult.plusAssign_operation(GGS_string ("(").add_operation (temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    result_outResult.plusAssign_operation(temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1298)) ;
  }
  result_outResult.plusAssign_operation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1300)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      result_outResult.plusAssign_operation(GGS_string ("(").add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    result_outResult.plusAssign_operation(temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1304)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                   const GGS_string constinArgument_inBlockLabel,
                                                                                                   const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GGS_string constinArgument_inNextBlockLabel,
                                                                                                   GGS_uint & ioArgument_ioConversionCount,
                                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  GGS_conditionalBranchMode var_branchModeOnFalseLabel_47811 = temp_0.readProperty_mBranchModeOnFalseLabel () ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  GGS_conditionalBranchMode var_branchModeOnTrueLabel_47894 = temp_1.readProperty_mBranchModeOnTrueLabel () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      switch (temp_4.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
            test_5 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_6.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1323)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1323)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1324)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)) ;
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
            test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1328)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1328)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1328)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1329)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (GGS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)) ;
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_12 = this ;
      test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
        switch (temp_13.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
              test_14 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_15.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1337)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1337)).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1338)) ;
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (temp_16.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)) ;
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            GalgasBool test_17 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_17) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
              test_17 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_18.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1342)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1342)).boolEnum () ;
              if (GalgasBool::boolTrue == test_17) {
                var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1343)) ;
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (GGS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (temp_19.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)) ;
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
      switch (temp_20.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
          switch (temp_21.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                test_22 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_23.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1353)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1353)).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1354)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (temp_24.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)) ;
                }
              }
              GalgasBool test_25 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_25) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
                test_25 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_26.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1357)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1357)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1357)).boolEnum () ;
                if (GalgasBool::boolTrue == test_25) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1358)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (temp_27.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
          switch (temp_28.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_29 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_29) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
                test_29 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_30.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1366)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1366)).boolEnum () ;
                if (GalgasBool::boolTrue == test_29) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1367)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (temp_31.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)) ;
                }
              }
              GalgasBool test_32 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_32) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
                test_32 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_33.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1370)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1370)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1370)).boolEnum () ;
                if (GalgasBool::boolTrue == test_32) {
                  var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1371)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (temp_34.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_35 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_35) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
                test_35 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_36.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1375)).boolEnum () ;
                if (GalgasBool::boolTrue == test_35) {
                  var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1376)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (temp_37.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)) ;
                }
              }
              GalgasBool test_38 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_38) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
                test_38 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_39.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1379)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1379)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1379)).boolEnum () ;
                if (GalgasBool::boolTrue == test_38) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1380)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (temp_40.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              GalgasBool test_41 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_41) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
                test_41 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_42.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1384)).boolEnum () ;
                if (GalgasBool::boolTrue == test_41) {
                  var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1385)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (temp_43.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
          switch (temp_44.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_45 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_45) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
                test_45 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_46.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1392)).boolEnum () ;
                if (GalgasBool::boolTrue == test_45) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1393)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (temp_47.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_48 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_48) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_49 = this ;
                test_48 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_49.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1397)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1397)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1397)).boolEnum () ;
                if (GalgasBool::boolTrue == test_48) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1398)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_50 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (temp_50.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      }
    }
  }
  GalgasBool test_51 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_51) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_52 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_53 = this ;
    test_51 = GGS_bool (ComparisonKind::equal, var_branchModeOnFalseLabel_47811.objectCompare (temp_52.readProperty_mBranchModeOnFalseLabel ())).operator_and (GGS_bool (ComparisonKind::equal, var_branchModeOnTrueLabel_47894.objectCompare (temp_53.readProperty_mBranchModeOnTrueLabel ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).boolEnum () ;
    if (GalgasBool::boolTrue == test_51) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_54 = this ;
      outArgument_outModifiedTerminator = temp_54 ;
    }
  }
  if (GalgasBool::boolFalse == test_51) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_55 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_56 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_57 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_58 = this ;
    outArgument_outModifiedTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_55.readProperty_mInstructionLocation (), temp_56.readProperty_mConditionalBranch (), temp_57.readProperty_mTargetLabelWhenTrue (), var_branchModeOnTrueLabel_47894, temp_58.readProperty_mTargetLabelWhenFalse (), var_branchModeOnFalseLabel_47811, inCompiler COMMA_HERE) ;
    ioArgument_ioConversionCount.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1415)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                          const GGS_string constinArgument_inBlockLabel,
                                                                                          const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GGS_string constinArgument_inNextBlockLabel,
                                                                                          GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_4.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1430)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1430)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1431)) ;
              }
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
            test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_7.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1434)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1434)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1434)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1435)) ;
              }
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GGS_bool (ComparisonKind::equal, temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        switch (temp_11.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
              test_12 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_13.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1442)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1442)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1443)) ;
                }
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
              test_15 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_16.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1446)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1446)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1446)).boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
                extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_17.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1447)) ;
                }
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      switch (temp_18.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
          switch (temp_19.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_20 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_20) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
                test_20 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_21.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1456)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1456)).boolEnum () ;
                if (GalgasBool::boolTrue == test_20) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1457)) ;
                  }
                }
              }
              GalgasBool test_23 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_23) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                test_23 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_24.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1459)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1459)).boolEnum () ;
                if (GalgasBool::boolTrue == test_23) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_25.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1460)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
          switch (temp_26.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_27 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_27) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
                test_27 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_28.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1467)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1467)).boolEnum () ;
                if (GalgasBool::boolTrue == test_27) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_29.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1468)) ;
                  }
                }
              }
              GalgasBool test_30 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_30) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                test_30 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_31.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1470)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1470)).boolEnum () ;
                if (GalgasBool::boolTrue == test_30) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_32.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1471)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_33 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_33) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                test_33 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_34.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1474)).boolEnum () ;
                if (GalgasBool::boolTrue == test_33) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_35.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1475)) ;
                  }
                }
              }
              GalgasBool test_36 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_36) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                test_36 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_37.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1477)).boolEnum () ;
                if (GalgasBool::boolTrue == test_36) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_38.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1478)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              GalgasBool test_39 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_39) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                test_39 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_40.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1481)).boolEnum () ;
                if (GalgasBool::boolTrue == test_39) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_41.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1482)) ;
                  }
                }
              }
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
          switch (temp_42.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_43 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_43) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
                test_43 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_44.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1488)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1488)).boolEnum () ;
                if (GalgasBool::boolTrue == test_43) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_45.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1490)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_46 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_46) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                test_46 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_47.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1493)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1493)).boolEnum () ;
                if (GalgasBool::boolTrue == test_46) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_48.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1495)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                            Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          result_outSize = GGS_uint (uint32_t (2U)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          result_outSize = GGS_uint (uint32_t (4U)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          result_outSize = GGS_uint (uint32_t (6U)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
        switch (temp_5.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            result_outSize = GGS_uint (uint32_t (2U)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            result_outSize = GGS_uint (uint32_t (4U)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          {
            result_outSize = GGS_uint (uint32_t (6U)) ;
          }
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      switch (temp_6.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          switch (temp_7.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (4U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          switch (temp_8.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              result_outSize = GGS_uint (uint32_t (4U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (8U)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          switch (temp_9.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (8U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (10U)) ;
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


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                                const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                const GGS_string constinArgument_inNextBlockLabel,
                                                                                GGS_codeList & outArgument_outCode,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueTargetAddress_59127 ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabelWhenTrue (), var_trueTargetAddress_59127, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1550)) ;
  GGS_uint var_falseTargetAddress_59212 ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabelWhenFalse (), var_falseTargetAddress_59212, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1551)) ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
  GGS_lstring var_Zlabel_59238 = GGS_lstring::init_21__21_ (GGS_string ("_Bcc_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_terminators.galgas", 1552)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1552)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      switch (temp_5.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59212, temp_6.readProperty_mTargetLabelWhenFalse (), temp_7.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1558)), var_Zlabel_59238, temp_8.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1558)) ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)), var_falseTargetAddress_59212, temp_9.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)), var_Zlabel_59238, temp_10.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)) ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59212, temp_11.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
      test_12 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
        switch (temp_14.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59127, temp_15.readProperty_mTargetLabelWhenTrue (), temp_16.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1569)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1571)), var_Zlabel_59238, temp_17.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1571)) ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)), var_trueTargetAddress_59127, temp_18.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)), var_Zlabel_59238, temp_19.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)) ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59127, temp_20.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)) ;
          }
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
      switch (temp_21.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
          switch (temp_22.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59212, temp_23.readProperty_mTargetLabelWhenFalse (), temp_24.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1584)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)), var_trueTargetAddress_59127, temp_25.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59212, temp_26.readProperty_mTargetLabelWhenFalse (), temp_27.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1587)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59127, temp_28.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
          switch (temp_29.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59127, temp_30.readProperty_mTargetLabelWhenTrue (), temp_31.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1593)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)), var_falseTargetAddress_59212, temp_32.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1596)), var_Zlabel_59238, temp_33.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1596)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)), var_falseTargetAddress_59212, temp_34.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59127, temp_35.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1599)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1599)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), var_Zlabel_59238, temp_36.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), var_falseTargetAddress_59212, temp_37.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59127, temp_38.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1604)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1604)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
          switch (temp_39.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59127, temp_40.readProperty_mTargetLabelWhenTrue (), temp_41.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1609)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59212, temp_42.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1610)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1610)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1612)), var_Zlabel_59238, temp_43.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1612)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59212, temp_44.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)), var_trueTargetAddress_59127, temp_45.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)), var_Zlabel_59238, temp_46.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59212, temp_47.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59127, temp_48.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1620)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1620)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1633)) ;
        }
      }
      GGS_ipic_31__38_ConditionalJumpTerminator var_t_64483 = temp_1 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mConditionalBranch ().objectCompare (var_t_64483.readProperty_mConditionalBranch ())) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_t_64483.readProperty_mTargetLabelWhenTrue ().readProperty_string ())) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mBranchModeOnTrueLabel ().objectCompare (var_t_64483.readProperty_mBranchModeOnTrueLabel ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_t_64483.readProperty_mTargetLabelWhenFalse ().readProperty_string ())) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_10.readProperty_mBranchModeOnFalseLabel ().objectCompare (var_t_64483.readProperty_mBranchModeOnFalseLabel ())) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_condition_skip_instruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::getter_instructionSize (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_instructionRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                                      const GGS_string constinArgument_inBlockLabel,
                                                                                                      const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                      GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 45)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 44)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18InstructionWithNoOperand instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38_InstructionWithNoOperand::getter_instructionDisplay (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  result_outResult = GGS_stringlist::class_func_listWithValue (extensionGetter_mnemonic (temp_0.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18InstructionWithNoOperand generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_InstructionWithNoOperand::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                     GGS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_c_2918 ;
  const GGS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_CLRWDT:
    {
      var_c_2918 = GGS_uint (uint32_t (4U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_DAW:
    {
      var_c_2918 = GGS_uint (uint32_t (7U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_NOP:
    {
      var_c_2918 = GGS_uint (uint32_t (0U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_POP:
    {
      var_c_2918 = GGS_uint (uint32_t (6U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_PUSH:
    {
      var_c_2918 = GGS_uint (uint32_t (5U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_RESET:
    {
      var_c_2918 = GGS_uint (uint32_t (255U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_SLEEP:
    {
      var_c_2918 = GGS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38_InstructionWithNoOperand temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  temp_2.enterElement (GGS_uintlist_2E_element::init_21_ (var_c_2918, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (extensionGetter_mnemonic (temp_1.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_3571 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWF:
    {
      var_s_3571 = GGS_string ("ADDWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWFC:
    {
      var_s_3571 = GGS_string ("ADDWFC") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ANDWF:
    {
      var_s_3571 = GGS_string ("ANDWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_COMF:
    {
      var_s_3571 = GGS_string ("COMF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_DECF:
    {
      var_s_3571 = GGS_string ("DECF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_INCF:
    {
      var_s_3571 = GGS_string ("INCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_IORWF:
    {
      var_s_3571 = GGS_string ("IORWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_MOVF:
    {
      var_s_3571 = GGS_string ("MOVF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLCF:
    {
      var_s_3571 = GGS_string ("RLCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLNCF:
    {
      var_s_3571 = GGS_string ("RLNCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRCF:
    {
      var_s_3571 = GGS_string ("RRCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRNCF:
    {
      var_s_3571 = GGS_string ("RRNCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBFWB:
    {
      var_s_3571 = GGS_string ("SUBFWB") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWF:
    {
      var_s_3571 = GGS_string ("SUBWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWFB:
    {
      var_s_3571 = GGS_string ("SUBWFB") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SWAPF:
    {
      var_s_3571 = GGS_string ("SWAPF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_XORWF:
    {
      var_s_3571 = GGS_string ("XORWF") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_1 = this ;
  var_s_3571.plusAssign_operation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_3 = this ;
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_and (temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 146)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_s_3571.plusAssign_operation(GGS_string (", W, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 147)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
      test_5 = temp_6.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_s_3571.plusAssign_operation(GGS_string (", F, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 149)) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_8 = this ;
        test_7 = temp_8.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_s_3571.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 151)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        var_s_3571.plusAssign_operation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 153)) ;
      }
    }
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_3571  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 155)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FDA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                   const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                   const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                   GGS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_4792 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWF:
    {
      var_code_4792 = GGS_uint (uint32_t (9216U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWFC:
    {
      var_code_4792 = GGS_uint (uint32_t (8192U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ANDWF:
    {
      var_code_4792 = GGS_uint (uint32_t (5120U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_COMF:
    {
      var_code_4792 = GGS_uint (uint32_t (7168U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_DECF:
    {
      var_code_4792 = GGS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_INCF:
    {
      var_code_4792 = GGS_uint (uint32_t (10240U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_IORWF:
    {
      var_code_4792 = GGS_uint (uint32_t (4096U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_MOVF:
    {
      var_code_4792 = GGS_uint (uint32_t (20480U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLCF:
    {
      var_code_4792 = GGS_uint (uint32_t (13312U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLNCF:
    {
      var_code_4792 = GGS_uint (uint32_t (17408U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRCF:
    {
      var_code_4792 = GGS_uint (uint32_t (12288U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRNCF:
    {
      var_code_4792 = GGS_uint (uint32_t (16384U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBFWB:
    {
      var_code_4792 = GGS_uint (uint32_t (21504U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWF:
    {
      var_code_4792 = GGS_uint (uint32_t (23552U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWFB:
    {
      var_code_4792 = GGS_uint (uint32_t (22528U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SWAPF:
    {
      var_code_4792 = GGS_uint (uint32_t (14336U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_XORWF:
    {
      var_code_4792 = GGS_uint (uint32_t (6144U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_4792 = var_code_4792.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 187)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 189)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_code_4792 = var_code_4792.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 190)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_5 = this ;
  var_code_4792 = var_code_4792.operator_or (temp_5.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
  GGS_uintlist temp_7 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 195)) ;
  temp_7.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_4792, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 195)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)), temp_7  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_5993 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_s_5993 = GGS_string ("CLRF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_s_5993 = GGS_string ("MOVWF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_s_5993 = GGS_string ("MULWF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_s_5993 = GGS_string ("NEGF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_s_5993 = GGS_string ("SETF") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = this ;
  var_s_5993.plusAssign_operation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 215)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_5993  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 216)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                  const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                  const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                  GGS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_6599 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_6599 = GGS_uint (uint32_t (27136U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_6599 = GGS_uint (uint32_t (28160U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_code_6599 = GGS_uint (uint32_t (512U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_code_6599 = GGS_uint (uint32_t (27648U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_code_6599 = GGS_uint (uint32_t (26624U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_6599 = var_code_6599.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_3 = this ;
  var_code_6599 = var_code_6599.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_4 = this ;
  GGS_uintlist temp_5 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 241)) ;
  temp_5.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_6599, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 241)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 240)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 240)), temp_5  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_instructionSize (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (4U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  GGS_string var_s_7573 = GGS_string ("MOVFF ").add_operation (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 259)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 259)).add_operation (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 260)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_7573  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 261)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_code_8073 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  var_code_8073.addAssign_operation (GGS_uint (uint32_t (49152U)).operator_or (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  var_code_8073.addAssign_operation (GGS_uint (uint32_t (61440U)).operator_or (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 273))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 273)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_2 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 275)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 275)), var_code_8073  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 274)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_literalOperation instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::getter_instructionDisplay (Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GGS_string var_s_8698 = extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)).add_operation (GGS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)).add_operation (temp_2.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)) ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 287)) ;
  temp_3.enterElement (GGS_stringlist_2E_element::init_21_ (var_s_8698, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 287)) ;
  result_outResult = temp_3 ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_literalOperation generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                                const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                GGS_codeList & outArgument_outCode,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_9171 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mLiteralInstruction ().enumValue ()) {
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ADDLW:
    {
      var_code_9171 = GGS_uint (uint32_t (3840U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      var_code_9171 = GGS_uint (uint32_t (2816U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      var_code_9171 = GGS_uint (uint32_t (2304U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      var_code_9171 = GGS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MULLW:
    {
      var_code_9171 = GGS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_SUBLW:
    {
      var_code_9171 = GGS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      var_code_9171 = GGS_uint (uint32_t (2560U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_9171 = var_code_9171.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GGS_uintlist temp_3 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 310)) ;
  temp_3.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_9171, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 310)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 309)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 309)), temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 308)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_instructionSize (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (4U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_instructionDisplay (Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  GGS_string var_s_10087 = GGS_string ("LFSR ").add_operation (temp_0.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)).add_operation (temp_1.readProperty_mValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_10087  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 328)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_LFSR generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                    const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GGS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_code_10535 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  var_code_10535.addAssign_operation (GGS_uint (uint32_t (60928U)).operator_or (temp_0.readProperty_mFSRindex ().readProperty_uint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)).operator_or (temp_1.readProperty_mValue ().right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_2 = this ;
  var_code_10535.addAssign_operation (GGS_uint (uint32_t (61440U)).operator_or (temp_2.readProperty_mValue ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 340)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 340))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 340)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_3 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_3.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 342)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 342)), var_code_10535  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 341)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FBA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
  GGS_string var_s_11099 = extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_11099  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 354)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FBA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                   const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                   const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                   GGS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_11595 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  switch (temp_0.readProperty_mBitOrientedOp ().enumValue ()) {
  case GGS_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      var_code_11595 = GGS_uint (uint32_t (36864U)) ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      var_code_11595 = GGS_uint (uint32_t (32768U)) ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BTG:
    {
      var_code_11595 = GGS_uint (uint32_t (28672U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_11595 = var_code_11595.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_3 = this ;
  var_code_11595 = var_code_11595.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_4 = this ;
  var_code_11595 = var_code_11595.operator_or (temp_4.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_5 = this ;
  GGS_uintlist temp_6 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 377)) ;
  temp_6.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_11595, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 377)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 376)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 376)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 375)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVLB instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = this ;
  GGS_string var_s_12349 = GGS_string ("MOVLB ").add_operation (temp_0.readProperty_mBankIndex ().readProperty_uint ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 388)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_12349  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 389)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVLB generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = this ;
  GGS_uint var_code_12776 = GGS_uint (uint32_t (256U)).operator_or (temp_0.readProperty_mBankIndex ().readProperty_uint () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 399)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 402)) ;
  temp_2.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_12776, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 402)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 401)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 401)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 400)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLRD instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  GGS_string var_s_13263 = GGS_string ("TBLRD ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 413)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_13263  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 414)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_13681 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GGS_tableAccessOption::Enumeration::invalid:
    break ;
  case GGS_tableAccessOption::Enumeration::enum_simpleAccess:
    {
      var_code_13681 = GGS_uint (uint32_t (8U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postIncrement:
    {
      var_code_13681 = GGS_uint (uint32_t (9U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postDecrement:
    {
      var_code_13681 = GGS_uint (uint32_t (10U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_preIncrement:
    {
      var_code_13681 = GGS_uint (uint32_t (11U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 433)) ;
  temp_2.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_13681, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 433)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 432)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 432)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 431)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLWT instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  GGS_string var_s_14312 = GGS_string ("TBLWT ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 444)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_14312  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 445)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_14730 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GGS_tableAccessOption::Enumeration::invalid:
    break ;
  case GGS_tableAccessOption::Enumeration::enum_simpleAccess:
    {
      var_code_14730 = GGS_uint (uint32_t (12U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postIncrement:
    {
      var_code_14730 = GGS_uint (uint32_t (13U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postDecrement:
    {
      var_code_14730 = GGS_uint (uint32_t (14U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_preIncrement:
    {
      var_code_14730 = GGS_uint (uint32_t (15U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 464)) ;
  temp_2.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_14730, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 464)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 463)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 463)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 462)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_instructionSize (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 477)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_instructionDisplay (Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  GGS_string var_s_15569 = GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 483)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_15569  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 484)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MNOP generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                    const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GGS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GGS_codeList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_idx_16014 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_16024 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_16024 = true ;
    while (loop_16024) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
      loop_16024 = GGS_bool (ComparisonKind::lowerThan, var_idx_16014.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_16024) {
        loop_16024 = GGS_bool (ComparisonKind::lowerThan, var_idx_16014.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_16024 && (0 == variant_16024)) {
        loop_16024 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 497)) ;
      }
      if (loop_16024) {
        variant_16024 -- ;
        GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 500)) ;
        temp_2.enterElement (GGS_uintlist_2E_element::init_21_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 500)) ;
        outArgument_outCode.addAssign_operation (GGS_string ("    NOP"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 500)) ;
        var_idx_16014.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 501)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_instructionSize (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  GGS_string var_s_16711 = GGS_string ("NOPBRA ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 519)) ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 520)) ;
  temp_1.enterElement (GGS_stringlist_2E_element::init_21_ (var_s_16711, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 520)) ;
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                      const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                      const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                      GGS_codeList & outArgument_outCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GGS_codeList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_idx_17127 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_17137 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_17137 = true ;
    while (loop_17137) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
      loop_17137 = GGS_bool (ComparisonKind::lowerThan, var_idx_17127.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_17137) {
        loop_17137 = GGS_bool (ComparisonKind::lowerThan, var_idx_17127.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_17137 && (0 == variant_17137)) {
        loop_17137 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 533)) ;
      }
      if (loop_17137) {
        variant_17137 -- ;
        GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 536)) ;
        temp_2.enterElement (GGS_uintlist_2E_element::init_21_ (GGS_uint (uint32_t (53248U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 536)) ;
        outArgument_outCode.addAssign_operation (GGS_string ("    BRA $+2"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 536)) ;
        var_idx_17127.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 537)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_MOV_LABEL_W instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_instructionDisplay (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GGS_string var_s_17602 = GGS_string ("MOVLW ((").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (GGS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (temp_1.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (GGS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (temp_2.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (GGS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_17602  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 549)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_MOV_LABEL_W generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                  const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                  const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                  GGS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_address_18104 ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  constinArgument_inDataAddressMap.method_searchKey (temp_0.readProperty_mLabel (), var_address_18104, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GGS_uint var_code_18125 = var_address_18104.add_operation (temp_1.readProperty_mOffset (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)).right_shift_operation (temp_2.readProperty_mRightShift (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)) ;
  GGS_uint var_code_5F_MOVLW_18198 = GGS_uint (uint32_t (3584U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_3 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_4 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_5 = this ;
  GGS_uintlist temp_6 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 564)) ;
  temp_6.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_18125.operator_or (var_code_5F_MOVLW_18198 COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 564)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 564)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    MOVLW ((_data_").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (GGS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (temp_4.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (GGS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (temp_5.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (GGS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 562)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_BLANK instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = this ;
  GGS_string var_s_18715 = GGS_string ("BLANK ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 575)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_18715  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 576)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_BLANK generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = this ;
  GGS_uint var_code_19138 = GGS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 586)) ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 589)) ;
  temp_1.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_19138, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 589)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    DW ").add_operation (var_code_19138.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 588)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 587)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FNOP instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::getter_instructionDisplay (Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = this ;
  GGS_string var_s_19594 = GGS_string ("FNOP ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 600)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_19594  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 601)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FNOP generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                    const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GGS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = this ;
  GGS_uint var_code_20015 = GGS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 611)) ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 614)) ;
  temp_1.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_20015, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 614)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    DW ").add_operation (var_code_20015.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 613)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 612)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_compare_register instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::getter_instructionDisplay (Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  GGS_string var_s_20479 = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 625)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  switch (temp_1.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_s_20479.plusAssign_operation(GGS_string ("!= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 627)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_s_20479.plusAssign_operation(GGS_string ("<= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 628)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_s_20479.plusAssign_operation(GGS_string (">= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 629)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_s_20479.plusAssign_operation(GGS_string ("!= 0"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 630)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
  var_s_20479.plusAssign_operation(GGS_string (" \? ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 632)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 632)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 632)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_20479  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 633)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                                           const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                           const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                           GGS_codeList & outArgument_outCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_21125 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  switch (temp_0.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_code_21125 = GGS_uint (uint32_t (25088U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_code_21125 = GGS_uint (uint32_t (25600U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_code_21125 = GGS_uint (uint32_t (24576U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_code_21125 = GGS_uint (uint32_t (26112U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_21125 = var_code_21125.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 652)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
  var_code_21125 = var_code_21125.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 654)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 654)) ;
  GGS_string var_s_21470 = GGS_string ("    ") ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
  switch (temp_4.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_s_21470.plusAssign_operation(GGS_string ("CPFSEQ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 658)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_s_21470.plusAssign_operation(GGS_string ("CPFSGT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 659)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_s_21470.plusAssign_operation(GGS_string ("CPFSLT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_s_21470.plusAssign_operation(GGS_string ("TSTFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 661)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
  var_s_21470.plusAssign_operation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 663)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_7 = this ;
    test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_s_21470.plusAssign_operation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 665)) ;
    }
  }
  GGS_uintlist temp_8 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 670)) ;
  temp_8.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_21125, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 670)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_s_21470, temp_8  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 668)) ;
  GGS_codeList var_c_21964 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_9 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_9.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 673)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_21964, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 672)) ;
  outArgument_outCode.plusAssign_operation(var_c_21964, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 678)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                                         const GGS_string constinArgument_inBlockLabel,
                                                                                                                         const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                         GGS_uint & ioArgument_ioConversionCount,
                                                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GGS_uint var_n_22436 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_22673 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 693)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_22673, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 692)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_22436.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_22673, temp_4.readProperty_mCompareInstruction (), temp_5.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_BitTestSkip instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_instructionDisplay (Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_23288 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_23288.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 718)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_s_23288.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)).add_operation (GGS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  GGS_stringlist var_x_23450 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 722)) ;
  var_s_23288.plusAssign_operation(var_x_23450.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 723)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 723)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_23288  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 724)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                                   const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                   const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                   GGS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_23885 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_23885 = GGS_uint (uint32_t (40960U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_23885 = GGS_uint (uint32_t (45056U)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_code_23885 = var_code_23885.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  var_code_23885 = var_code_23885.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 743)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 743)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
  var_code_23885 = var_code_23885.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 744)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 744)) ;
  GGS_string var_s_24199 = GGS_string ("    ") ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_7 = this ;
    test_6 = temp_7.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_s_24199.plusAssign_operation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 748)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    var_s_24199.plusAssign_operation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 750)) ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_8 = this ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_9 = this ;
  var_s_24199.plusAssign_operation(GGS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)).add_operation (temp_9.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)) ;
  GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 756)) ;
  temp_10.enterElement (GGS_uintlist_2E_element::init_21_ (var_code_23885, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 756)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_s_24199, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 754)) ;
  GGS_codeList var_c_24564 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 759)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_24564, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 758)) ;
  outArgument_outCode.plusAssign_operation(var_c_24564, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 764)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                                 const GGS_string constinArgument_inBlockLabel,
                                                                                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                 GGS_uint & ioArgument_ioConversionCount,
                                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                                 GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GGS_uint var_n_25031 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_25268 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 779)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_25268, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 778)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_25031.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_25268, temp_4.readProperty_mSkipIfSet (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_25876 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_s_25876 = GGS_string ("DECFSZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_s_25876 = GGS_string ("DCFSNZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_s_25876 = GGS_string ("INCFSZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_s_25876 = GGS_string ("INFSNZ") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  var_s_25876.plusAssign_operation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 810)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_s_25876.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 812)) ;
    }
  }
  var_s_25876.plusAssign_operation(GGS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 814)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  GGS_stringlist var_x_26181 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 815)) ;
  var_s_25876.plusAssign_operation(var_x_26181.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 816)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_25876  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 817)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                           const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                           const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                           GGS_codeList & outArgument_outCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_binCode_26608 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_binCode_26608 = GGS_uint (uint32_t (11264U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_binCode_26608 = GGS_uint (uint32_t (19456U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_binCode_26608 = GGS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_binCode_26608 = GGS_uint (uint32_t (18432U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_binCode_26608 = var_binCode_26608.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 835)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
  var_binCode_26608 = var_binCode_26608.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 837)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 837)) ;
  GGS_string var_assemblyCode_26986 = GGS_string ("    ") ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  switch (temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_assemblyCode_26986.plusAssign_operation(GGS_string ("DECFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 841)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_assemblyCode_26986.plusAssign_operation(GGS_string ("DCFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 842)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_assemblyCode_26986.plusAssign_operation(GGS_string ("INCFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 843)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_assemblyCode_26986.plusAssign_operation(GGS_string ("INFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 844)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
  var_assemblyCode_26986.plusAssign_operation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_7 = this ;
    test_6 = temp_7.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_assemblyCode_26986.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    var_binCode_26608 = var_binCode_26608.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 850)) ;
    var_assemblyCode_26986.plusAssign_operation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 851)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_9 = this ;
    test_8 = temp_9.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_binCode_26608 = var_binCode_26608.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 854)) ;
      var_assemblyCode_26986.plusAssign_operation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 855)) ;
    }
  }
  GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 860)) ;
  temp_10.enterElement (GGS_uintlist_2E_element::init_21_ (var_binCode_26608, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 860)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_26986, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 858)) ;
  GGS_codeList var_c_27738 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 863)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_27738, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 862)) ;
  outArgument_outCode.plusAssign_operation(var_c_27738, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 868)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                         const GGS_string constinArgument_inBlockLabel,
                                                                                                         const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                         GGS_uint & ioArgument_ioConversionCount,
                                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GGS_uint var_n_28197 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_28434 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 883)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_28434, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 882)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_28197.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_28434, temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_instructionSize (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      result_outSize = GGS_uint (uint32_t (4U)) ;
    }
    break ;
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_instructionRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                         const GGS_string constinArgument_inBlockLabel,
                                                                                         const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
        test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_2.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 925)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 925)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 927)) ;
          }
        }
      }
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                  const GGS_string constinArgument_inBlockLabel,
                                                                                                  const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  GGS_uint & ioArgument_ioConversionCount,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_3.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 945)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 945)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          ioArgument_ioConversionCount.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 946)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_5 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (GGS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (GGS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (temp_5.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_6 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
          outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), temp_7.readProperty_mTargetLabel (), GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 948)), inCompiler COMMA_HERE) ;
        }
      }
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_9 = this ;
        test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_11 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_12 = this ;
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_11.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)).add_operation (GGS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)).add_operation (temp_12.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 954)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 954)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)) ;
        }
      }
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_instructionDisplay (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_31170 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
      var_s_31170 = GGS_string ("JSR ").add_operation (temp_1.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 965)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      var_s_31170 = GGS_string ("RCALL ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 966)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      var_s_31170 = GGS_string ("CALL ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 967)) ;
    }
    break ;
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_31170  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 969)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                    const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                    const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                    GGS_codeList & outArgument_outCode,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_31764 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_31764, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 979)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_31764, temp_2.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 982)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_31764, temp_3.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 984)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_instructionSize (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1001)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1001)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1001)).substract_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1001)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_instructionDisplay (Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_32691 = GGS_string ("COMPUTED ") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1008)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_32691.plusAssign_operation(GGS_string ("(uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1009)) ;
    }
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_32691  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1011)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_32835 (temp_2.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_32835.hasCurrentObject ()) {
    cEnumerator_stringlist enumerator_32879 (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32835.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1013)), EnumerationOrder::up) ;
    while (enumerator_32879.hasCurrentObject ()) {
      result_outResult.addAssign_operation (GGS_string ("   ").add_operation (enumerator_32879.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014)) ;
      enumerator_32879.gotoNextObject () ;
    }
    enumerator_32835.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_instructionRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                                                      const GGS_string constinArgument_inBlockLabel,
                                                                                                                      const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                      GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  GGS_bigint temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mUsesRCALL ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1026)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1026)) ;
  }
  GGS_uint var_address_33316 = constinArgument_inAddress.add_operation (temp_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1026)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1026)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_33397 (temp_3.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_33397.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_33397.current_mInstruction (HERE).ptr (), var_address_33316, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1028)) ;
    var_address_33316 = var_address_33316.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1034)) ;
    enumerator_33397.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
    test_4 = temp_5.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1037)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1037)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1037)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_4"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1039)) ;
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                               GGS_uint & ioArgument_ioConversionCount,
                                                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                                                               GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GGS_uint var_unusedConversionCount_34318 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_unusedListing_34358 = GGS_string::makeEmptyString () ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
  GGS_bigint temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
  }
  GGS_uint var_address_34389 = constinArgument_inAddress.add_operation (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34470 (temp_4.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_34470.hasCurrentObject ()) {
    GGS_ipic_31__38_SequentialInstruction joker_34726 ; // Joker input parameter
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_34470.current_mInstruction (HERE).ptr (), var_address_34389, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount_34318, var_unusedListing_34358, joker_34726, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1059)) ;
    var_address_34389 = var_address_34389.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1067)) ;
    enumerator_34470.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1070)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1070)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1070)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1071)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1072)).add_operation (GGS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1072)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1072)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = this ;
          outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetInstructions (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                 GGS_codeList & outArgument_outCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  GGS_lstring var_target_35572 = GGS_lstring::init_21__21_ (GGS_string ("_computed_goto_4"), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_computetedGoto_34_Address_35687 ;
  constinArgument_inSymbolTable.method_searchKey (var_target_35572, var_computetedGoto_34_Address_35687, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1090)) ;
  GGS_uint var_currentInstructionAddress_35724 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_currentInstructionAddress_35724 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1094)) ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address_35687, var_target_35572, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1095)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    var_currentInstructionAddress_35724 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address_35687, var_target_35572, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1098)) ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  GGS_uint var_instructionFollowingComputedRcallAddress_36057 = var_currentInstructionAddress_35724.add_operation (temp_3.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)).multiply_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  GGS_lstring var_nextInstructionLabel_36175 = GGS_lstring::init_21__21_ (GGS_string ("_computed_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1101)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_idx_36285 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_36315 (temp_5.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_36315.hasCurrentObject ()) {
    var_idx_36285.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)) ;
    GGS_codeList var_instructionCode_36493 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_36315.current_mInstruction (HERE).ptr (), var_currentInstructionAddress_35724, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode_36493, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1105)) ;
    outArgument_outCode.plusAssign_operation(var_instructionCode_36493, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1111)) ;
    var_currentInstructionAddress_35724 = var_currentInstructionAddress_35724.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1112)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_7 = this ;
      test_6 = GGS_bool (ComparisonKind::lowerThan, var_idx_36285.objectCompare (temp_7.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1113)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress_35724, var_instructionFollowingComputedRcallAddress_36057, var_nextInstructionLabel_36175, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1114)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1114)) ;
        var_currentInstructionAddress_35724 = var_currentInstructionAddress_35724.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1115)) ;
      }
    }
    enumerator_36315.gotoNextObject () ;
  }
  outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel_36175, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1119)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1119)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                           GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                       GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                          GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}
