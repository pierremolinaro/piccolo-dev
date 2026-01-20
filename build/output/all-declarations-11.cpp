#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                 const GGS_string constinArgument_inNextLabel,
                                                                                 GGS_uint & outArgument_outMin,
                                                                                 GGS_uint & outArgument_outMax,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_10554 ;
  GGS_uint var_trueMax_10567 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_10554, var_trueMax_10567, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 228)) ;
  GGS_uint var_falseMin_10676 ;
  GGS_uint var_falseMax_10690 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_10676, var_falseMax_10690, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 229)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_10554.objectCompare (var_trueMax_10567)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_10676.objectCompare (var_falseMax_10690)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 231)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_10902 = var_trueMin_10554.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 232)) ;
          GGS_uint var_trueBranchMaxDuration_10948 = var_trueMax_10567.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 233)) ;
          GGS_uint var_falseBranchMinDuration_10994 = var_falseMin_10676.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 234)) ;
          GGS_uint var_falseBranchMaxDuration_11042 = var_falseMax_10690.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 235)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_10902.objectCompare (var_falseBranchMinDuration_10994)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_trueBranchMinDuration_10902 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_falseBranchMinDuration_10994 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_10948.objectCompare (var_falseBranchMaxDuration_11042)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_trueBranchMaxDuration_10948 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_falseBranchMaxDuration_11042 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_11.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 238)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_uint var_falseBranchMinDuration_11469 = var_falseMin_10676.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 239)) ;
            GGS_uint var_falseBranchMaxDuration_11517 = var_falseMax_10690.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 240)) ;
            GGS_uint var_trueBranchMinDuration_11565 = var_trueMin_10554.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 241)) ;
            GGS_uint var_trueBranchMaxDuration_11611 = var_trueMax_10567.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 242)) ;
            GGS_uint temp_12 ;
            const GalgasBool test_13 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_11469.objectCompare (var_trueBranchMinDuration_11565)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              temp_12 = var_falseBranchMinDuration_11469 ;
            }else if (GalgasBool::boolFalse == test_13) {
              temp_12 = var_trueBranchMinDuration_11565 ;
            }
            outArgument_outMin = temp_12 ;
            GGS_uint temp_14 ;
            const GalgasBool test_15 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_11517.objectCompare (var_trueBranchMaxDuration_11611)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              temp_14 = var_falseBranchMaxDuration_11517 ;
            }else if (GalgasBool::boolFalse == test_15) {
              temp_14 = var_trueBranchMaxDuration_11611 ;
            }
            outArgument_outMax = temp_14 ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_uint var_trueBranchMinDuration_11914 = var_trueMin_10554.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 246)) ;
          GGS_uint var_trueBranchMaxDuration_11960 = var_trueMax_10567.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 247)) ;
          GGS_uint var_falseBranchMinDuration_12006 = var_falseMin_10676.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 248)) ;
          GGS_uint var_falseBranchMaxDuration_12054 = var_falseMax_10690.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 249)) ;
          GGS_uint temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_11914.objectCompare (var_falseBranchMinDuration_12006)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_trueBranchMinDuration_11914 ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = var_falseBranchMinDuration_12006 ;
          }
          outArgument_outMin = temp_16 ;
          GGS_uint temp_18 ;
          const GalgasBool test_19 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_11960.objectCompare (var_falseBranchMaxDuration_12054)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            temp_18 = var_trueBranchMaxDuration_11960 ;
          }else if (GalgasBool::boolFalse == test_19) {
            temp_18 = var_falseBranchMaxDuration_12054 ;
          }
          outArgument_outMax = temp_18 ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 254)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                               const GGS_string /* constinArgument_inNextLabel */,
                                                                               GGS_uint & outArgument_outMin,
                                                                               GGS_uint & outArgument_outMax,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 267)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_12765 = GGS_bool (true) ;
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_12786 (temp_0.readProperty_mTargetLabels ()) ;
  bool bool_1 = var_solved_12765.isValidAndTrue () ;
  if (enumerator_12786.hasCurrentObject () && bool_1) {
    while (enumerator_12786.hasCurrentObject () && bool_1) {
      var_solved_12765 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_12786.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 272)) ;
      enumerator_12786.gotoNextObject () ;
      if (enumerator_12786.hasCurrentObject ()) {
        bool_1 = var_solved_12765.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_12765.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_12925 (temp_3.readProperty_mTargetLabels ()) ;
      while (enumerator_12925.hasCurrentObject ()) {
        GGS_uint var_min_13007 ;
        GGS_uint var_max_13016 ;
        constinArgument_inExploredBlockMap.method_searchKey (enumerator_12925.current_mValue (HERE), var_min_13007, var_max_13016, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 277)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::lowerThan, var_min_13007.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            outArgument_outMin = var_min_13007 ;
          }
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_max_13016.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            outArgument_outMax = var_max_13016 ;
          }
        }
        enumerator_12925.gotoNextObject () ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 286)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 287)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                const GGS_string /* constinArgument_inNextLabel */,
                                                                                GGS_uint & outArgument_outMin,
                                                                                GGS_uint & outArgument_outMax,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (11U)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_duration_computations.galgas", 300)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outMin.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 301)) ;
    }
  }
  outArgument_outMax = outArgument_outMin ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                              const GGS_string /* constinArgument_inNextLabel */,
                                                                              GGS_uint & outArgument_outMin,
                                                                              GGS_uint & outArgument_outMax,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 314)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_14069 = GGS_bool (true) ;
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_14090 (temp_0.readProperty_mTargetLabels ()) ;
  bool bool_1 = var_solved_14069.isValidAndTrue () ;
  if (enumerator_14090.hasCurrentObject () && bool_1) {
    while (enumerator_14090.hasCurrentObject () && bool_1) {
      var_solved_14069 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_14090.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 319)) ;
      enumerator_14090.gotoNextObject () ;
      if (enumerator_14090.hasCurrentObject ()) {
        bool_1 = var_solved_14069.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_14069.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_14229 (temp_3.readProperty_mTargetLabels ()) ;
      while (enumerator_14229.hasCurrentObject ()) {
        GGS_uint var_min_14311 ;
        GGS_uint var_max_14320 ;
        constinArgument_inExploredBlockMap.method_searchKey (enumerator_14229.current_mValue (HERE), var_min_14311, var_max_14320, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 324)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::lowerThan, var_min_14311.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            outArgument_outMin = var_min_14311 ;
          }
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_max_14320.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            outArgument_outMax = var_max_14320 ;
          }
        }
        enumerator_14229.gotoNextObject () ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 333)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 334)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                         GGS_uint & outArgument_outMin,
                                                         GGS_uint & outArgument_outMax,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                        const GGS_string /* constinArgument_inNextLabel */,
                                                        GGS_uint & outArgument_outMin,
                                                        GGS_uint & outArgument_outMax,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                         GGS_uint & outArgument_outMin,
                                                         GGS_uint & outArgument_outMax,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_duration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                       const GGS_string constinArgument_inNextLabel,
                                                       GGS_uint & outArgument_outMin,
                                                       GGS_uint & outArgument_outMax,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 392)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_min_16395 ;
      GGS_uint var_max_16404 ;
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mLabel (), var_min_16395, var_max_16404, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 393)) ;
      outArgument_outMin = var_min_16395 ;
      outArgument_outMax = var_max_16404 ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
        test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 397)) ;
          outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 398)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 401)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MNOP minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                      GGS_uint & outArgument_outMin,
                                                                                      GGS_uint & outArgument_outMax,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  outArgument_outMin = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
  outArgument_outMax = temp_1.readProperty_mOccurrenceFactor ().readProperty_uint () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                        GGS_uint & outArgument_outMin,
                                                                                        GGS_uint & outArgument_outMax,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  outArgument_outMin = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 459)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
  outArgument_outMax = temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 460)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_LFSR minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                      GGS_uint & outArgument_outMin,
                                                                                      GGS_uint & outArgument_outMax,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                      GGS_uint & outArgument_outMin,
                                                                      GGS_uint & outArgument_outMax,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 492)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mTargetLabel (), outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 493)) ;
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 494)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 495)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 497)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_condition_skip_instruction minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                   GGS_uint & outArgument_outMin,
                                                                                   GGS_uint & outArgument_outMax,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inExploredBlockMap, outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 509)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerOrEqual, outArgument_outMin.objectCompare (outArgument_outMax)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 511)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 512)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                                   GGS_uint & outArgument_outMin,
                                                                                                   GGS_uint & outArgument_outMax,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 523)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_20181 = GGS_bool (true) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_20210 (temp_0.readProperty_mTargetInstructions ()) ;
  bool bool_1 = var_solved_20181.isValidAndTrue () ;
  if (enumerator_20210.hasCurrentObject () && bool_1) {
    while (enumerator_20210.hasCurrentObject () && bool_1) {
      GGS_uint var_min_20308 ;
      GGS_uint var_max_20317 ;
      callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_20210.current_mInstruction (HERE).ptr (), constinArgument_inExploredBlockMap, var_min_20308, var_max_20317, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 527)) ;
      var_solved_20181 = GGS_bool (ComparisonKind::lowerOrEqual, var_min_20308.objectCompare (var_max_20317)) ;
      enumerator_20210.gotoNextObject () ;
      if (enumerator_20210.hasCurrentObject ()) {
        bool_1 = var_solved_20181.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_20181.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
      UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_20386 (temp_3.readProperty_mTargetInstructions ()) ;
      GGS_uint index_20373 (uint32_t (0)) ;
      while (enumerator_20386.hasCurrentObject ()) {
        GGS_uint var_min_20481 ;
        GGS_uint var_max_20492 ;
        callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_20386.current_mInstruction (HERE).ptr (), constinArgument_inExploredBlockMap, var_min_20481, var_max_20492, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 532)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
          test_4 = GGS_bool (ComparisonKind::lowerThan, index_20373.objectCompare (temp_5.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas", 534)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 534)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            var_min_20481 = var_min_20481.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 535)) ;
            var_max_20492 = var_max_20492.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 536)) ;
          }
        }
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::lowerThan, var_min_20481.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            outArgument_outMin = var_min_20481 ;
          }
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::greaterThan, var_max_20492.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            outArgument_outMax = var_max_20492 ;
          }
        }
        enumerator_20386.gotoNextObject () ;
        index_20373.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 531)) ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (10U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 546)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (10U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 547)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18DurationComputations&!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_DurationComputations_26__21_ (GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                       GGS_blockDurationMap & outArgument_outBlockDurationMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBlockDurationMap.drop () ; // Release 'out' argument
  GGS_stringlist var_nextLabelList_21358 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_21385 (ioArgument_ioBlockList) ;
  while (enumerator_21385.hasCurrentObject ()) {
    var_nextLabelList_21358.addAssignOperation (enumerator_21385.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 564)) ;
    enumerator_21385.gotoNextObject () ;
  }
  var_nextLabelList_21358.addAssignOperation (GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 566)) ;
  {
  GGS_string joker_21511 ; // Joker input parameter
  var_nextLabelList_21358.setter_popFirst (joker_21511, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 567)) ;
  }
  outArgument_outBlockDurationMap = GGS_blockDurationMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continue_21572 = GGS_bool (true) ;
  if (ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas", 571)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 571)).isValid ()) {
    uint32_t variant_21590 = ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas", 571)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 571)).uintValue () ;
    bool loop_21590 = true ;
    while (loop_21590) {
      loop_21590 = var_continue_21572.isValid () ;
      if (loop_21590) {
        loop_21590 = var_continue_21572.boolValue () ;
      }
      if (loop_21590 && (0 == variant_21590)) {
        loop_21590 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_duration_computations.galgas", 571)) ;
      }
      if (loop_21590) {
        variant_21590 -= 1 ;
        var_continue_21572 = GGS_bool (false) ;
        GGS_ipic_31__38_BlockList var_tempBlockList_21668 = ioArgument_ioBlockList ;
        ioArgument_ioBlockList = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_21727 (var_tempBlockList_21668) ;
        UpEnumerator_stringlist enumerator_21754 (var_nextLabelList_21358) ;
        while (enumerator_21727.hasCurrentObject () && enumerator_21754.hasCurrentObject ()) {
          GGS_ipic_31__38_Block var_newBlock_21853 ;
          extensionMethod_computeDuration (enumerator_21727.current_mBlock (HERE), outArgument_outBlockDurationMap, enumerator_21754.current_mValue (HERE), var_newBlock_21853, var_continue_21572, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 576)) ;
          ioArgument_ioBlockList.addAssignOperation (var_newBlock_21853  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 577)) ;
          enumerator_21727.gotoNextObject () ;
          enumerator_21754.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18PrintDurations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_PrintDurations_26__3F_ (GGS_string & ioArgument_ioListFileContents,
                                                 const GGS_blockDurationMap constinArgument_inBlockDurationMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 636)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 636)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("TIMINGS").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 637)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 637)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 637)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 638)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 638)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 638)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Label").getter_stringByLeftPadding (GGS_uint (uint32_t (100U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 639)).add_operation (GGS_string (": min ... max\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 639)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 639)) ;
  UpEnumerator_blockDurationMap enumerator_23995 (constinArgument_inBlockDurationMap) ;
  while (enumerator_23995.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_23995.current_lkey (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (100U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (enumerator_23995.current_mMinDuration (HERE).getter_string (SOURCE_FILE ("ipic18_duration_computations.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (GGS_string (" ... "), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (enumerator_23995.current_mMaxDuration (HERE).getter_string (SOURCE_FILE ("ipic18_duration_computations.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)) ;
    enumerator_23995.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 643)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                        const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                        const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                        const GGS_string /* constinArgument_inBlockLabel */,
                                                                        GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                         const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                         const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                         const GGS_string /* constinArgument_inBlockLabel */,
                                                                         GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                 const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                 const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                 const GGS_string constinArgument_inBlockLabel,
                                                                 GGS_bool & ioArgument_ioOptimizationDone,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_uint var_targetBlockIndex_2043 ;
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_targetBlockIndex_2043, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 53)) ;
      GGS_ipic_31__38_Block var_targetBlock_2082 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_2043, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 54)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_targetBlock_2082.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 55)))).operator_and (GGS_bool (ComparisonKind::equal, var_targetBlock_2082.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 55)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_bool var_optimize_2360 ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GGS_ipic_31__38_JumpTerminator temp_6 ;
              if (var_targetBlock_2082.readProperty_mTerminator ().isValid ()) {
                if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())) {
                  temp_6 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_2082.readProperty_mTerminator ().ptr () ;
                }else{
                  inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_2082.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 60)) ;
                }
              }
              GGS_ipic_31__38_JumpTerminator var_candidate_2471 = temp_6 ;
              const GGS_ipic_31__38_JumpTerminator temp_7 = this ;
              var_optimize_2360 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mLabel ().readProperty_string ().objectCompare (var_candidate_2471.readProperty_mLabel ().readProperty_string ())) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_optimize_2360 = GGS_bool (true) ;
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_optimize_2360.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              outArgument_outOptimizedTerminator = var_targetBlock_2082.readProperty_mTerminator () ;
              ioArgument_ioOptimizationDone = GGS_bool (true) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)) ;
              const GGS_ipic_31__38_JumpTerminator temp_9 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_9.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 70)) ;
              ioArgument_ioListFileContents.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72)) ;
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                            const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                            const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                            const GGS_string constinArgument_inBlockLabel,
                                                                            GGS_bool & ioArgument_ioOptimizationDone,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (temp_2.readProperty_mTargetLabelWhenFalse ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      outArgument_outOptimizedTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTargetLabelWhenFalse (), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas", 94)), inCompiler COMMA_HERE) ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (GGS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)) ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (temp_6.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 98)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_optimized_4028 = GGS_bool (false) ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    GGS_lstring var_targetLabelWhenTrue_4090 = temp_8.readProperty_mTargetLabelWhenTrue () ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_10.readProperty_mTargetLabelWhenTrue ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_uint var_targetBlockIndex_4268 ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        constinArgument_inSymbolTable.method_searchKey (temp_11.readProperty_mTargetLabelWhenTrue (), var_targetBlockIndex_4268, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 104)) ;
        GGS_ipic_31__38_Block var_targetBlock_4309 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_4268, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 105)) ;
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = GGS_bool (ComparisonKind::equal, var_targetBlock_4309.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 106)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = GGS_bool (ComparisonKind::equal, var_targetBlock_4309.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 107)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              GGS_ipic_31__38_JumpTerminator var_targetBlockJumpTerminator_4514 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4309.readProperty_mTerminator ().ptr ())) ;
              if (nullptr == var_targetBlockJumpTerminator_4514.ptr ()) {
                test_12 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_12) {
                var_targetLabelWhenTrue_4090 = var_targetBlockJumpTerminator_4514.readProperty_mLabel () ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                  test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_targetLabelWhenTrue_4090.readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    var_optimized_4028 = GGS_bool (true) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)).add_operation (GGS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)) ;
                    const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
                    ioArgument_ioListFileContents.plusAssignOperation(temp_15.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 114)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(var_targetLabelWhenTrue_4090.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 115)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 116)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
    GGS_lstring var_targetLabelWhenFalse_5122 = temp_16.readProperty_mTargetLabelWhenFalse () ;
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      test_17 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_18.readProperty_mTargetLabelWhenFalse ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        GGS_uint var_targetBlockIndex_5304 ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
        constinArgument_inSymbolTable.method_searchKey (temp_19.readProperty_mTargetLabelWhenFalse (), var_targetBlockIndex_5304, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 123)) ;
        GGS_ipic_31__38_Block var_targetBlock_5345 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_5304, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 124)) ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = GGS_bool (ComparisonKind::equal, var_targetBlock_5345.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 125)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            test_20 = GGS_bool (ComparisonKind::equal, var_targetBlock_5345.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 126)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              GGS_ipic_31__38_JumpTerminator var_targetBlockJumpTerminator_5548 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5345.readProperty_mTerminator ().ptr ())) ;
              if (nullptr == var_targetBlockJumpTerminator_5548.ptr ()) {
                test_20 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_20) {
                var_targetLabelWhenFalse_5122 = var_targetBlockJumpTerminator_5548.readProperty_mLabel () ;
                GalgasBool test_21 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_21) {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  test_21 = GGS_bool (ComparisonKind::notEqual, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_targetLabelWhenFalse_5122.readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_21) {
                    var_optimized_4028 = GGS_bool (true) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)).add_operation (GGS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)) ;
                    const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                    ioArgument_ioListFileContents.plusAssignOperation(temp_23.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 132)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 133)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(var_targetLabelWhenFalse_5122.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 134)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 135)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      test_24 = var_optimized_4028.boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
        outArgument_outOptimizedTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), temp_26.readProperty_mConditionalBranch (), var_targetLabelWhenTrue_4090, temp_27.readProperty_mBranchModeOnTrueLabel (), var_targetLabelWhenFalse_5122, temp_28.readProperty_mBranchModeOnFalseLabel (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_24) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
      outArgument_outOptimizedTerminator = temp_29 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GGS_string constinArgument_inBlockLabel,
                                                                           GGS_bool & ioArgument_ioOptimizationDone,
                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                           GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_9234 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_9460 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_9528 ;
  GGS_bool var_identicalTerminators_9568 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_9234, ioArgument_ioListFileContents, var_optimizedTrueTerminator_9460, var_optimizedFalseTerminator_9528, var_identicalTerminators_9568, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 218)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_identicalTerminators_9568.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      outArgument_outOptimizedTerminator = temp_2 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("useless decf/incf condition should be replaced by decf/incf instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 231)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_optimization_9234.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
        outArgument_outOptimizedTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_9460, var_optimizedFalseTerminator_9528, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
      outArgument_outOptimizedTerminator = temp_10 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BitTestTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                   const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                   const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                   const GGS_string constinArgument_inBlockLabel,
                                                                   GGS_bool & ioArgument_ioOptimizationDone,
                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_10559 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_10785 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_10853 ;
  GGS_bool var_identicalTerminators_10893 ;
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_10559, ioArgument_ioListFileContents, var_optimizedTrueTerminator_10785, var_optimizedFalseTerminator_10853, var_identicalTerminators_10893, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 258)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_identicalTerminators_10893.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_10785 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_10785.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)) ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 273)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_optimization_10559.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_BitTestTerminator temp_5 = this ;
        const GGS_pic_31__38_BitTestTerminator temp_6 = this ;
        const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_10785, var_optimizedFalseTerminator_10853, temp_6.readProperty_mRegisterDescription (), temp_7.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterComparisonTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                              const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                              const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                              const GGS_string constinArgument_inBlockLabel,
                                                                              GGS_bool & ioArgument_ioOptimizationDone,
                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                              GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_12018 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_12239 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_12307 ;
  GGS_bool var_identicalTerminators_12347 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_12018, ioArgument_ioListFileContents, var_optimizedTrueTerminator_12239, var_optimizedFalseTerminator_12307, var_identicalTerminators_12347, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 298)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_identicalTerminators_12347.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_12239 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_12239.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)) ;
      const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 313)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_optimization_12018.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
        const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
        const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_12239, var_optimizedFalseTerminator_12307, temp_6.readProperty_mRegisterDescription (), temp_7.readProperty_mComparison (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18TestRegisterTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                        const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                        GGS_bool & ioArgument_ioOptimizationDone,
                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_13478 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_13699 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_13767 ;
  GGS_bool var_identicalTerminators_13807 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_13478, ioArgument_ioListFileContents, var_optimizedTrueTerminator_13699, var_optimizedFalseTerminator_13767, var_identicalTerminators_13807, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 338)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_identicalTerminators_13807.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_13699 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_13699.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)) ;
      const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 353)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_optimization_13478.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_TestRegisterTerminator temp_5 = this ;
        const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_13699, var_optimizedFalseTerminator_13767, temp_6.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_pic_31__38_TestRegisterTerminator temp_7 = this ;
      outArgument_outOptimizedTerminator = temp_7 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                   const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                   const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                   const GGS_string /* constinArgument_inBlockLabel */,
                                                                   GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetfieTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                  const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                  const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                  const GGS_string /* constinArgument_inBlockLabel */,
                                                                  GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                  GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                   const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                   const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                   const GGS_string /* constinArgument_inBlockLabel */,
                                                                   GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ReturnTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                          const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                          const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                          const GGS_string /* constinArgument_inBlockLabel */,
                                                                          GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                                          GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto2block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_32_block_3F__3F__26_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                             const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                             GGS_stringset & ioArgument_ioReferencedBlockSet,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GGS_string ("_computed_goto_2") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 428)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 428)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (GGS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 429)) ;
      GGS_uint var_blockIndex_17014 ;
      constinArgument_inSymbolTable.method_searchKey (GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 430)), var_blockIndex_17014, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 430)) ;
      GGS_ipic_31__38_Block var_b_17047 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17014, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 431)) ;
      extensionMethod_enterReferencedLabels (var_b_17047, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 432)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto4block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_34_block_3F__3F__26_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                             const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                             GGS_stringset & ioArgument_ioReferencedBlockSet,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GGS_string ("_computed_goto_4") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 446)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 446)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (GGS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 447)) ;
      GGS_uint var_blockIndex_17616 ;
      constinArgument_inSymbolTable.method_searchKey (GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 448)), var_blockIndex_17616, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 448)) ;
      GGS_ipic_31__38_Block var_b_17649 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17616, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 449)) ;
      extensionMethod_enterReferencedLabels (var_b_17649, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 450)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                       const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                       GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 471)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 484)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_18849 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_18849.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_18849.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 490)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 490)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (enumerator_18849.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 491)) ;
        GGS_uint var_blockIndex_19039 ;
        constinArgument_inSymbolTable.method_searchKey (enumerator_18849.current_mValue (HERE), var_blockIndex_19039, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 492)) ;
        GGS_ipic_31__38_Block var_b_19074 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19039, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 493)) ;
        extensionMethod_enterReferencedLabels (var_b_19074, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 494)) ;
      }
    }
    enumerator_18849.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                      const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                      GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_34_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 509)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_19630 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_19630.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19630.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 515)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 515)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (enumerator_19630.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 516)) ;
        GGS_uint var_blockIndex_19820 ;
        constinArgument_inSymbolTable.method_searchKey (enumerator_19630.current_mValue (HERE), var_blockIndex_19820, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 517)) ;
        GGS_ipic_31__38_Block var_b_19855 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19820, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 518)) ;
        extensionMethod_enterReferencedLabels (var_b_19855, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 519)) ;
      }
    }
    enumerator_19630.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                              const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                              GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 534)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 534)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (temp_2.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 535)) ;
      GGS_uint var_blockIndex_20474 ;
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_blockIndex_20474, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 536)) ;
      GGS_ipic_31__38_Block var_b_20507 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20474, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 537)) ;
      extensionMethod_enterReferencedLabels (var_b_20507, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 538)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                         const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                         GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 552)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 552)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 553)) ;
      GGS_uint var_blockIndex_21161 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mTargetLabelWhenTrue (), var_blockIndex_21161, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 554)) ;
      GGS_ipic_31__38_Block var_b_21194 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21161, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 555)) ;
      extensionMethod_enterReferencedLabels (var_b_21194, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 556)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
    test_4 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 562)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 562)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 563)) ;
      GGS_uint var_blockIndex_21558 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_7.readProperty_mTargetLabelWhenFalse (), var_blockIndex_21558, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 564)) ;
      GGS_ipic_31__38_Block var_b_21591 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21558, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 565)) ;
      extensionMethod_enterReferencedLabels (var_b_21591, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 566)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18SingleInstructionTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SingleInstructionTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                           const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                           GGS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18AbstractConditionTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                           GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 588)) ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 589)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR enterInstructionReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 610)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 610)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (temp_2.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 611)) ;
      GGS_uint var_blockIndex_23524 ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mTargetLabel (), var_blockIndex_23524, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 612)) ;
      GGS_ipic_31__38_Block var_b_23557 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_23524, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 613)) ;
      extensionMethod_enterReferencedLabels (var_b_23557, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 614)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall enterInstructionReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_34_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 628)) ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_24129 (temp_0.readProperty_mTargetInstructions ()) ;
  while (enumerator_24129.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_24129.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 634)) ;
    enumerator_24129.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_condition_skip_instruction enterInstructionReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 648)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GGS_lstring constinArgument_inBlockLabel,
                                                                           GGS_bool & outArgument_outOptimizationDone,
                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                           GGS_bool & outArgument_outNOPsubstitution,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_uint var_targetBlockIndex_26025 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabel (), var_targetBlockIndex_26025, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 691)) ;
  GGS_ipic_31__38_Block var_targetBloc_26063 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_26025, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 692)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inOptimizeFlagStruct.readProperty_mRemoveEmptyRoutine ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 696)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_26063.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)) ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("call to empty ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)).add_operation (GGS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 701)) ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38_InstructionWithNoOperand::init_21__21_ (temp_4.readProperty_mInstructionLocation (), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas", 702)), inCompiler COMMA_HERE) ;
      outArgument_outNOPsubstitution = GGS_bool (true) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoRETLWreplacedByMOVLW ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 705)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 707)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_26063.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_ipic_31__38_RetlwTerminator temp_6 ;
        if (var_targetBloc_26063.readProperty_mTerminator ().isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_26063.readProperty_mTerminator ().ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc_26063.readProperty_mTerminator ().ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc_26063.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_t_27129 = temp_6 ;
        outArgument_outOptimizationDone = GGS_bool (true) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)) ;
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("call to RETLW ").add_operation (temp_7.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)).add_operation (GGS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 713)) ;
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_8 = this ;
        outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 716)), var_t_27129.readProperty_mLiteralValue (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 719)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 721)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_26063.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          outArgument_outOptimizedInstruction = var_targetBloc_26063.readProperty_mInstructionList ().getter_mInstructionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723)) ;
          outArgument_outOptimizationDone = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("call to single instruction routine ").add_operation (temp_10.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)).add_operation (GGS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 727)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                        const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                        const GGS_lstring constinArgument_inBlockLabel,
                                                                                                        GGS_bool & outArgument_outOptimizationDone,
                                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                                        GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                        GGS_bool & outArgument_outNOPsubstitution,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_28878 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_28931 (temp_0.readProperty_mTargetInstructions ()) ;
  while (enumerator_28931.hasCurrentObject ()) {
    GGS_bool var_opt_28980 = GGS_bool (false) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28931.current_mInstruction (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 ;
        if (enumerator_28931.current_mInstruction (HERE).isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28931.current_mInstruction (HERE).ptr ())) {
            temp_2 = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) enumerator_28931.current_mInstruction (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38__5F_intermediate_5F_JSR", enumerator_28931.current_mInstruction (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 750)) ;
          }
        }
        GGS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_29085 = temp_2 ;
        GGS_uint var_targetBlockIndex_29195 ;
        constinArgument_inSymbolTable.method_searchKey (var_jsr_29085.readProperty_mTargetLabel (), var_targetBlockIndex_29195, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 751)) ;
        GGS_ipic_31__38_Block var_targetBloc_29237 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_29195, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 752)) ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_29237.readProperty_mTerminator ().ptr ())).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29237.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 753)).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29237.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                var_opt_28980 = GGS_bool (true) ;
                outArgument_outOptimizationDone = GGS_bool (true) ;
                var_optimizedInstructionList_28878.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::init_21__21_ (var_jsr_29085.readProperty_mInstructionLocation (), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 759)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 759)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (var_jsr_29085.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)).add_operation (GGS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 762)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29237.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 764)).objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 763)).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  GGS_ipic_31__38_SequentialInstruction var_inst_30229 = var_targetBloc_29237.readProperty_mInstructionList ().getter_mInstructionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)) ;
                  GalgasBool test_6 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_6) {
                    test_6 = GGS_bool (ComparisonKind::equal, callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst_30229.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_6) {
                      var_opt_28980 = GGS_bool (true) ;
                      outArgument_outOptimizationDone = GGS_bool (true) ;
                      var_optimizedInstructionList_28878.addAssignOperation (var_inst_30229, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 769)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 769)) ;
                      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)) ;
                      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (var_jsr_29085.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)).add_operation (GGS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)) ;
                      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 772)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_opt_28980.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 777)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        var_optimizedInstructionList_28878.addAssignOperation (enumerator_28931.current_mInstruction (HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 778)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 778)) ;
      }
    }
    enumerator_28931.gotoNextObject () ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = outArgument_outOptimizationDone.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = this ;
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_10 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_optimizedInstructionList_28878, temp_10.readProperty_mUsesRCALL (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_11 = this ;
    outArgument_outOptimizedInstruction = temp_11 ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                          const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                          const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                          const GGS_lstring constinArgument_inBlockLabel,
                                                                                          GGS_bool & outArgument_outOptimizationDone,
                                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                          GGS_bool & outArgument_outNOPsubstitution,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_31839 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = this ;
  GGS_bool joker_31872 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_31839, joker_31872, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 804)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_31839, temp_3.readProperty_mSkipIfSet (), temp_4.readProperty_mRegisterDescription (), temp_5.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
    outArgument_outOptimizedInstruction = temp_6 ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_compare_register optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                  const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                  const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                  const GGS_lstring constinArgument_inBlockLabel,
                                                                                                  GGS_bool & outArgument_outOptimizationDone,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                  GGS_bool & outArgument_outNOPsubstitution,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_32900 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  GGS_bool joker_32933 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_32900, joker_32933, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 839)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_32900, temp_3.readProperty_mCompareInstruction (), temp_4.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
    outArgument_outOptimizedInstruction = temp_5 ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_FDA optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                  const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                  const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                  const GGS_lstring constinArgument_inBlockLabel,
                                                                                  GGS_bool & outArgument_outOptimizationDone,
                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                  GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                  GGS_bool & outArgument_outNOPsubstitution,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_33939 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  GGS_bool joker_33972 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_33939, joker_33972, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 873)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_33939, temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_4.readProperty_mRegisterDescription (), temp_5.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
    outArgument_outOptimizedInstruction = temp_6 ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization?????!&!'
//
//--------------------------------------------------------------------------------------------------

void routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                          const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                          const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                          const GGS_ipic_31__38_SequentialInstructionList constinArgument_inInstructionList,
                                                                          const GGS_lstring constinArgument_inBlockLabel,
                                                                          GGS_bool & outArgument_outOptimizationDone,
                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                          GGS_ipic_31__38_SequentialInstructionList & outArgument_outOptimizedInstructionList,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone.drop () ; // Release 'out' argument
  outArgument_outOptimizedInstructionList.drop () ; // Release 'out' argument
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outOptimizedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_34990 (constinArgument_inInstructionList) ;
  while (enumerator_34990.hasCurrentObject ()) {
    GGS_bool var_optimizationDone_35161 ;
    GGS_ipic_31__38_SequentialInstruction var_optimizedInstruction_35245 ;
    GGS_bool var_NOPsubstitution_35283 ;
    callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_34990.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimizationDone_35161, ioArgument_ioListFileContents, var_optimizedInstruction_35245, var_NOPsubstitution_35283, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 913)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_optimizationDone_35161.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outOptimizationDone = GGS_bool (true) ;
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_NOPsubstitution_35283.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 926)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outOptimizedInstructionList.addAssignOperation (var_optimizedInstruction_35245, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 927)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 927)) ;
      }
    }
    enumerator_34990.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlocks&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlocks_26__26_ (GGS_string & ioArgument_ioListFileContents,
                                                 GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optimizeFlagStruct var_optimizeFlagStruct_40974 = GGS_optimizeFlagStruct::init_21__21__21__21__21__21__21_ (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (69)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1083)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1083)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (82)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (74)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1085)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1085)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (77)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1086)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1086)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (73)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1087)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1087)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (105)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (101)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)), inCompiler COMMA_HERE) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1093)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1093)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1093)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("BLOCK REPRESENTATION OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Optimization flags:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [D] Dead code elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1098)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [E] Empty routine elimination: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40974.readProperty_mRemoveEmptyRoutine (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [e] In Computed RCALL, empty routine call replaced by BLANK: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40974.readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [I] Call to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40974.readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [i] In Computed RCALL, rcall to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40974.readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [J] JSR followed by RETURN replaced by JUMP: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40974.readProperty_mJSRfollowedByRETreplacedByJUMP (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [M] MOVLW followed by RETURN replaced by RETLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40974.readProperty_mMOVLWfollowedByRETreplacedByRETLW (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [P] JUMP propagation: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [R] Call to RETLW replaced by MOVLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_40974.readProperty_mJSRtoRETLWreplacedByMOVLW (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1106)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1106)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1106)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1106)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] Useless test elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1108)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Optimizations:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)) ;
      }
    }
  }
  GGS_bool var_optimizationDone_44070 = GGS_bool (true) ;
  GGS_uint var_optimizationPass_44106 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1114)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1114)).isValid ()) {
    uint32_t variant_44129 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1114)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1114)).uintValue () ;
    bool loop_44129 = true ;
    while (loop_44129) {
      loop_44129 = var_optimizationDone_44070.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).isValid () ;
      if (loop_44129) {
        loop_44129 = var_optimizationDone_44070.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).boolValue () ;
      }
      if (loop_44129 && (0 == variant_44129)) {
        loop_44129 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_optimize_block.galgas", 1114)) ;
      }
      if (loop_44129) {
        variant_44129 -= 1 ;
        var_optimizationDone_44070 = GGS_bool (false) ;
        var_optimizationPass_44106 = var_optimizationPass_44106.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1117)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n--- Pass ").add_operation (var_optimizationPass_44106.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)).add_operation (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)).add_operation (GGS_string (" blocks)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)) ;
        GGS_uint var_blockCountBeforeOptimization_44423 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1120)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_print_3F_ (GGS_string ("  Pass ").add_operation (var_optimizationPass_44106.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)).add_operation (var_blockCountBeforeOptimization_44423.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)).add_operation (GGS_string (" blocks.\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)) ;
            }
          }
        }
        GGS_symbolTableForBlockOptimization var_symbolTable_44688 = GGS_symbolTableForBlockOptimization::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_44746 (ioArgument_ioGeneratedBlockList) ;
        GGS_uint index_44741 (uint32_t (0)) ;
        while (enumerator_44746.hasCurrentObject ()) {
          {
          var_symbolTable_44688.setter_insertKey (enumerator_44746.current_mBlock (HERE).readProperty_mLabel (), index_44741, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1126)) ;
          }
          enumerator_44746.gotoNextObject () ;
          index_44741.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1125)) ;
        }
        GGS_stringset var_referencedBlockSet_44932 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_44975 (ioArgument_ioGeneratedBlockList) ;
        while (enumerator_44975.hasCurrentObject ()) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_44975.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1131)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              extensionMethod_enterReferencedLabels (enumerator_44975.current_mBlock (HERE), var_symbolTable_44688, ioArgument_ioGeneratedBlockList, var_referencedBlockSet_44932, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1132)) ;
            }
          }
          enumerator_44975.gotoNextObject () ;
        }
        GGS_ipic_31__38_BlockList var_optimizedBlockList_45290 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_45339 (ioArgument_ioGeneratedBlockList) ;
        while (enumerator_45339.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_referencedBlockSet_44932.getter_hasKey (enumerator_45339.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1142)).operator_or (GGS_bool (ComparisonKind::notEqual, enumerator_45339.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1142)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1142)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_ipic_31__38_Block var_optimizedBlock_45671 ;
              extensionMethod_optimize (enumerator_45339.current_mBlock (HERE), var_symbolTable_44688, var_optimizeFlagStruct_40974, ioArgument_ioGeneratedBlockList, var_optimizationDone_44070, ioArgument_ioListFileContents, var_optimizedBlock_45671, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1143)) ;
              var_optimizedBlockList_45290.addAssignOperation (var_optimizedBlock_45671  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1151)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [D] ").add_operation (enumerator_45339.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1153)).add_operation (GGS_string (": not referenced, deleted\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1153)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1153)) ;
            var_optimizationDone_44070 = GGS_bool (true) ;
          }
          enumerator_45339.gotoNextObject () ;
        }
        ioArgument_ioGeneratedBlockList = var_optimizedBlockList_45290 ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No optimization.\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1159)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1160)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1161)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_NULL::getter_length (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_length (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::getter_length (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_length (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::getter_length (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (0U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_actualInstruction length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_actualInstruction::getter_length (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (1U)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_JUMP::getter_length (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_1 = this ;
  result_result = GGS_uint (uint32_t (1U)).add_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JSR length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_JSR::getter_length (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_1 = this ;
  result_result = GGS_uint (uint32_t (1U)).add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_MNOP length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::getter_length (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_result = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_incDecRegisterInCondition length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_length (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_uint (uint32_t (2U)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'actualBuildConfig??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_actualBuildConfig_3F__3F__26__21_ (const GGS_configRegisterMap constinArgument_inConfigRegisterMap,
                                                const GGS_configDefinitionList constinArgument_inConfigDefinitionList,
                                                GGS_string & ioArgument_ioListFileContents,
                                                GGS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  outArgument_outActualConfigurationMap = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
  GGS_configFieldMap var_configFieldMap_951 = GGS_configFieldMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_configRegisterMap enumerator_1053 (constinArgument_inConfigRegisterMap) ;
  while (enumerator_1053.hasCurrentObject ()) {
    GGS_uint var_defaultValue_1097 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).left_shift_operation (enumerator_1053.current_mRegisterWidth (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)) ;
    {
    outArgument_outActualConfigurationMap.setter_insertKey (enumerator_1053.current_lkey (HERE), enumerator_1053.current_mRegisterAddress (HERE).readProperty_uint (), var_defaultValue_1097, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 28)) ;
    }
    GGS_lstring var_registerName_1248 = enumerator_1053.current_lkey (HERE) ;
    UpEnumerator_configRegisterMaskMap enumerator_1324 (enumerator_1053.current_mConfigRegisterMaskMap (HERE)) ;
    while (enumerator_1324.hasCurrentObject ()) {
      {
      var_configFieldMap_951.setter_insertKey (enumerator_1324.current_lkey (HERE), var_registerName_1248, enumerator_1324.current_mMaskValue (HERE), enumerator_1324.current_mDescription (HERE), enumerator_1324.current_mFieldSettingMap (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 31)) ;
      }
      enumerator_1324.gotoNextObject () ;
    }
    enumerator_1053.gotoNextObject () ;
  }
  GGS_stringset var_actualSettingNameSet_1547 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_configDefinitionList enumerator_1592 (constinArgument_inConfigDefinitionList) ;
  while (enumerator_1592.hasCurrentObject ()) {
    UpEnumerator_configSettingList enumerator_1658 (enumerator_1592.current_mSettingList (HERE)) ;
    while (enumerator_1658.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_actualSettingNameSet_1547.getter_hasKey (enumerator_1658.current_mSettingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas", 38)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_1658.current_mSettingName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_1658.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)) ;
        }
      }
      var_actualSettingNameSet_1547.plusPlusAssignOperation (enumerator_1658.current_mSettingName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("piccolo_config.galgas", 41)) ;
      GGS_lstring var_registerName_1954 ;
      GGS_fieldSettingMap var_fieldSettingMap_1976 ;
      GGS_luint joker_1967_2 ; // Joker input parameter
      GGS_lstring joker_1967_1 ; // Joker input parameter
      var_configFieldMap_951.method_searchKey (enumerator_1658.current_mSettingName (HERE), var_registerName_1954, joker_1967_2, joker_1967_1, var_fieldSettingMap_1976, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 42)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_fieldSettingMap_1976.getter_hasKey (enumerator_1658.current_mSettingValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas", 43)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_uint var_settingValue_2109 ;
          GGS_uint var_settingMask_2127 ;
          var_fieldSettingMap_1976.method_searchKey (enumerator_1658.current_mSettingValue (HERE), var_settingValue_2109, var_settingMask_2127, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 44)) ;
          GGS_uint var_registerValue_2158 ;
          GGS_uint joker_2231 ; // Joker input parameter
          outArgument_outActualConfigurationMap.method_searchKey (var_registerName_1954, joker_2231, var_registerValue_2158, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 46)) ;
          var_registerValue_2158 = var_registerValue_2158.operator_and (var_settingMask_2127.operator_tilde (SOURCE_FILE ("piccolo_config.galgas", 47)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)).operator_or (var_settingValue_2109 COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)) ;
          {
          outArgument_outActualConfigurationMap.setter_setMRegisterValueForKey (var_registerValue_2158, var_registerName_1954.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 48)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::greaterThan, var_fieldSettingMap_1976.getter_count (SOURCE_FILE ("piccolo_config.galgas", 49)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GGS_string var_errorMessage_2476 = GGS_string ("the '").add_operation (enumerator_1658.current_mSettingValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (GGS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (enumerator_1658.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 51)) ;
            GGS_stringlist var_replacementSuggestions_2623 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
            UpEnumerator_fieldSettingMap enumerator_2672 (var_fieldSettingMap_1976) ;
            while (enumerator_2672.hasCurrentObject ()) {
              var_replacementSuggestions_2623.addAssignOperation (GGS_string ("\"").add_operation (enumerator_2672.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)) ;
              enumerator_2672.gotoNextObject () ;
            }
            GenericArray <FixItDescription> fixItArray4 ;
            appendFixItActions (fixItArray4, EnumFixItKind::fixItReplace, var_replacementSuggestions_2623) ;
            inCompiler->emitSemanticError (enumerator_1658.current_mSettingValue (HERE).readProperty_location (), var_errorMessage_2476, fixItArray4  COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)) ;
          }
        }
      }
      enumerator_1658.gotoNextObject () ;
    }
    enumerator_1592.gotoNextObject () ;
  }
  GGS_stringset var_notDefinedSetting_2938 = var_configFieldMap_951.getter_keySet (inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 61)).substract_operation (var_actualSettingNameSet_1547, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 61)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_notDefinedSetting_2938.getter_count (SOURCE_FILE ("piccolo_config.galgas", 62)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_errorMessage_3061 = GGS_string ("the following configuration settings are not defined:") ;
      UpEnumerator_stringset enumerator_3141 (var_notDefinedSetting_2938) ;
      while (enumerator_3141.hasCurrentObject ()) {
        var_errorMessage_3061.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_3141.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 65)) ;
        enumerator_3141.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)), var_errorMessage_3061, fixItArray6  COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)) ;
    }
  }
  UpEnumerator_actualConfigurationMap enumerator_3339 (outArgument_outActualConfigurationMap) ;
  while (enumerator_3339.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Register '").add_operation (enumerator_3339.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (enumerator_3339.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GGS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (enumerator_3339.current_mRegisterValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)) ;
    GGS_configRegisterMaskMap var_configRegisterMaskMap_3576 ;
    GGS_luint joker_3565 ; // Joker input parameter
    GGS_luint joker_3568 ; // Joker input parameter
    GGS_illegalMaskList joker_3598 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3339.current_lkey (HERE), joker_3565, joker_3568, var_configRegisterMaskMap_3576, joker_3598, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 72)) ;
    UpEnumerator_configRegisterMaskMap enumerator_3643 (var_configRegisterMaskMap_3576) ;
    while (enumerator_3643.hasCurrentObject ()) {
      GGS_lstring var_settingName_3716 = enumerator_3643.current_lkey (HERE) ;
      UpEnumerator_fieldSettingMap enumerator_3779 (enumerator_3643.current_mFieldSettingMap (HERE)) ;
      while (enumerator_3779.hasCurrentObject ()) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_3339.current_mRegisterValue (HERE).operator_and (enumerator_3643.current_mMaskValue (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).objectCompare (enumerator_3779.current_mValue (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  setting '").add_operation (var_settingName_3716.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GGS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3779.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GGS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3779.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)) ;
          }
        }
        enumerator_3779.gotoNextObject () ;
      }
      enumerator_3643.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 81)) ;
    enumerator_3339.gotoNextObject () ;
  }
  UpEnumerator_actualConfigurationMap enumerator_4139 (outArgument_outActualConfigurationMap) ;
  while (enumerator_4139.hasCurrentObject ()) {
    GGS_illegalMaskList var_illegalMaskList_4243 ;
    GGS_luint joker_4229 ; // Joker input parameter
    GGS_luint joker_4232 ; // Joker input parameter
    GGS_configRegisterMaskMap joker_4235 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4139.current_lkey (HERE), joker_4229, joker_4232, joker_4235, var_illegalMaskList_4243, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 85)) ;
    UpEnumerator_illegalMaskList enumerator_4297 (var_illegalMaskList_4243) ;
    while (enumerator_4297.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, enumerator_4139.current_mRegisterValue (HERE).operator_and (enumerator_4297.current_mIllegalMask (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas", 87)).objectCompare (enumerator_4297.current_mIllegalValue (HERE).readProperty_uint ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)), GGS_string ("illegal setting for '").add_operation (enumerator_4139.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)).add_operation (GGS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)).add_operation (enumerator_4297.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)), fixItArray9  COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4139.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)).add_operation (GGS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  message: ").add_operation (enumerator_4297.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)) ;
        }
      }
      enumerator_4297.gotoNextObject () ;
    }
    enumerator_4139.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildConfig??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildConfig_3F__3F__26__21_ (const GGS_configRegisterMap constinArgument_inConfigRegisterMap,
                                          const GGS_configDefinitionList constinArgument_inConfigDefinitionList,
                                          GGS_string & ioArgument_ioListFileContents,
                                          GGS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("MICROCONTROLLER CONFIGURATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inConfigDefinitionList.getter_count (SOURCE_FILE ("piccolo_config.galgas", 108)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_actualBuildConfig_3F__3F__26__21_ (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 109)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outActualConfigurationMap = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("No configuration.\n\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 117)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performRelativesResolution?&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_performRelativesResolution_3F__26__26__26_ (const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                         GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                         GGS_uint & ioArgument_ioConversionCount,
                                                         GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList var_modifiedBlockList_1588 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_blockStartAddress_1639 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_1668 (ioArgument_ioBlockList) ;
  GGS_uint index_1663 (uint32_t (0)) ;
  while (enumerator_1668.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_1723 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_1663.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)).objectCompare (ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_1723 = ioArgument_ioBlockList.getter_mBlockAtIndex (index_1663.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_1723 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_1668.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 65)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_1639 = enumerator_1668.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    GGS_ipic_31__38_Block var_modifiedBlock_2202 ;
    extensionMethod_performRelativesResolution (enumerator_1668.current_mBlock (HERE), constinArgument_inSymbolTable, var_nextBlockLabel_1723, var_blockStartAddress_1639, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedBlock_2202, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 68)) ;
    var_modifiedBlockList_1588.addAssignOperation (var_modifiedBlock_2202  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 76)) ;
    GGS_uint var_blockSize_2276 = extensionGetter_blockSize (enumerator_1668.current_mBlock (HERE), var_nextBlockLabel_1723, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 77)) ;
    var_blockStartAddress_1639 = var_blockStartAddress_1639.add_operation (var_blockSize_2276, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 78)) ;
    enumerator_1668.gotoNextObject () ;
    index_1663.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 58)) ;
  }
  ioArgument_ioBlockList = var_modifiedBlockList_1588 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'computeLabelAbsoluteAddressMap??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                                             const GGS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                             GGS_symbolTableForRelativesResolution & outArgument_outSymbolTable,
                                                             GGS_uint & outArgument_outFreeAddress,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSymbolTable.drop () ; // Release 'out' argument
  outArgument_outFreeAddress.drop () ; // Release 'out' argument
  outArgument_outSymbolTable = GGS_symbolTableForRelativesResolution::init (inCompiler COMMA_HERE) ;
  outArgument_outFreeAddress = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 106)) ;
  GGS_uint var_blockStartAddress_3325 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_3354 (constinArgument_inGeneratedBlockList) ;
  GGS_uint index_3349 (uint32_t (0)) ;
  while (enumerator_3354.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_3418 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_3349.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_3418 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_3349.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_3418 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_3354.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 116)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_3325 = enumerator_3354.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    {
    outArgument_outSymbolTable.setter_insertKey (enumerator_3354.current_mBlock (HERE).readProperty_mLabel (), var_blockStartAddress_3325, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 119)) ;
    }
    GGS_uint var_blockSize_3812 = extensionGetter_blockSize (enumerator_3354.current_mBlock (HERE), var_nextBlockLabel_3418, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 120)) ;
    var_blockStartAddress_3325 = var_blockStartAddress_3325.add_operation (var_blockSize_3812, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 121)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_3354.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 122)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outFreeAddress = var_blockStartAddress_3325 ;
      }
    }
    enumerator_3354.gotoNextObject () ;
    index_3349.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 109)) ;
  }
  UpEnumerator_ipic_31__38_BlockList enumerator_4042 (constinArgument_inInitialBlockList) ;
  while (enumerator_4042.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_4042.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 128)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = outArgument_outSymbolTable.getter_hasKey (enumerator_4042.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            outArgument_outSymbolTable.setter_insertKey (enumerator_4042.current_mBlock (HERE).readProperty_mLabel (), enumerator_4042.current_mBlock (HERE).readProperty_mAddress (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 130)) ;
            }
          }
        }
      }
    }
    enumerator_4042.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativesResolution&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativesResolution_26__26_ (GGS_string & ioArgument_ioListFileContents,
                                                      GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Relative branch conversion to absolute:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 143)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("RELATIVES RESOLUTION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)) ;
  GGS_bool var_resolutionDone_4854 = GGS_bool (false) ;
  GGS_uint var_pass_4889 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).isValid ()) {
    uint32_t variant_4900 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).uintValue () ;
    bool loop_4900 = true ;
    while (loop_4900) {
      loop_4900 = var_resolutionDone_4854.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).isValid () ;
      if (loop_4900) {
        loop_4900 = var_resolutionDone_4854.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).boolValue () ;
      }
      if (loop_4900 && (0 == variant_4900)) {
        loop_4900 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)) ;
      }
      if (loop_4900) {
        variant_4900 -= 1 ;
        var_pass_4889.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 153)) ;
        GGS_symbolTableForRelativesResolution var_symbolTable_5151 ;
        {
        GGS_uint joker_5169 ; // Joker input parameter
        routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (ioArgument_ioGeneratedBlockList, GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE), var_symbolTable_5151, joker_5169, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 154)) ;
        }
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\nPass ").add_operation (var_pass_4889.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)) ;
        GGS_uint var_conversionCount_5243 = GGS_uint (uint32_t (0U)) ;
        {
        routine_performRelativesResolution_3F__26__26__26_ (var_symbolTable_5151, ioArgument_ioGeneratedBlockList, var_conversionCount_5243, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 162)) ;
        }
        var_resolutionDone_4854 = GGS_bool (ComparisonKind::equal, var_conversionCount_5243.objectCompare (GGS_uint (uint32_t (0U)))) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 169)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_s_5500 = GGS_string ("  Pass ").add_operation (var_pass_4889.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)) ;
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::equal, var_conversionCount_5243.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                var_s_5500.plusAssignOperation(GGS_string ("none."), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 172)) ;
              }
            }
            if (GalgasBool::boolFalse == test_2) {
              GalgasBool test_3 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_3) {
                test_3 = GGS_bool (ComparisonKind::equal, var_conversionCount_5243.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_3) {
                  var_s_5500.plusAssignOperation(GGS_string ("1 conversion"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 174)) ;
                }
              }
              if (GalgasBool::boolFalse == test_3) {
                var_s_5500.plusAssignOperation(var_conversionCount_5243.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)).add_operation (GGS_string (" conversions"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)) ;
              }
            }
            {
            routine_print_3F_ (var_s_5500.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178)) ;
            }
          }
        }
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 181)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No conversion.\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 182)) ;
      {
      routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 183)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativeBranchOverflow??!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                             const GGS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                             GGS_branchOverflowMap & outArgument_outOverflowMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOverflowMap.drop () ; // Release 'out' argument
  GGS_symbolTableForRelativesResolution var_symbolTable_7196 ;
  {
  GGS_uint joker_7212 ; // Joker input parameter
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inBlockList, constinArgument_inInitialBlockList, var_symbolTable_7196, joker_7212, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 226)) ;
  }
  outArgument_outOverflowMap = GGS_branchOverflowMap::init (inCompiler COMMA_HERE) ;
  GGS_uint var_blockStartAddress_7277 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_7306 (constinArgument_inBlockList) ;
  GGS_uint index_7301 (uint32_t (0)) ;
  while (enumerator_7306.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_7361 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_7301.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_7361 = constinArgument_inBlockList.getter_mBlockAtIndex (index_7301.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_7361 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_7306.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 242)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_blockStartAddress_7277 = enumerator_7306.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    extensionMethod_relativeBranchOverflow (enumerator_7306.current_mBlock (HERE), var_symbolTable_7196, var_nextBlockLabel_7361, var_blockStartAddress_7277, outArgument_outOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 245)) ;
    GGS_uint var_blockSize_7800 = extensionGetter_blockSize (enumerator_7306.current_mBlock (HERE), var_nextBlockLabel_7361, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 251)) ;
    var_blockStartAddress_7277 = var_blockStartAddress_7277.add_operation (var_blockSize_7800, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 252)) ;
    enumerator_7306.gotoNextObject () ;
    index_7301.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 235)) ;
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
  GGS_string var_sourceFileBaseName_554 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).getter_deletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_554.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName_554, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
    }
  }
  GGS_string var_listFileContents_896 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_993 ;
  GGS_uint var_accessBankSplitOffset_1024 ;
  GGS_ramBankTable var_ramBank_1066 ;
  GGS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1106 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1203 ;
  GGS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1293 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1377 ;
  GGS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1468 ;
  GGS_luint var_bootloaderReservedROMsize_1536 ;
  GGS_registerTable var_registerTable_1682 ;
  GGS_string var_piccoloDeviceName_1710 ;
  switch (constinArgument_inPiccoloModel.readProperty_mProgramKind ().enumValue ()) {
  case GGS_programKind::Enumeration::invalid:
    break ;
  case GGS_programKind::Enumeration::enum_regularProgram:
    {
      var_piccoloDeviceName_1710 = constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_string () ;
      {
      routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_993, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 35)) ;
      }
      switch (var_piccoloDeviceModel_993.readProperty_mProcessorType ().enumValue ()) {
      case GGS_processorType::Enumeration::invalid:
        break ;
      case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1024 = GGS_uint (uint32_t (96U)) ;
        }
        break ;
      case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1024 = GGS_uint (uint32_t (128U)) ;
        }
        break ;
      case GGS_processorType::Enumeration::enum_midrange:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GGS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset_1024.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_processorType::Enumeration::enum_baseline:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GGS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
          var_accessBankSplitOffset_1024.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1066 = var_piccoloDeviceModel_993.readProperty_mRamBankTable () ;
      var_bootloaderReservedRAMmap_1106 = GGS_bootloaderReservedRAMmap::init (inCompiler COMMA_HERE) ;
      var_registerTable_1682 = var_piccoloDeviceModel_993.readProperty_mRegisterTable () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1203 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1293 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1377 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1468 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderReservedROMsize_1536 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)), inCompiler COMMA_HERE) ;
    }
    break ;
  case GGS_programKind::Enumeration::enum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1377 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1468 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_piccoloDeviceModel_993.drop () ;
      var_piccoloDeviceName_1710.drop () ;
      var_accessBankSplitOffset_1024.drop () ;
      var_ramBank_1066.drop () ;
      var_registerTable_1682.drop () ;
      var_bootloaderReservedRAMmap_1106.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1203.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1293.drop () ;
      var_bootloaderReservedROMsize_1536.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_993, var_piccoloDeviceName_1710, var_accessBankSplitOffset_1024, var_ramBank_1066, var_registerTable_1682, var_bootloaderReservedRAMmap_1106, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1203, var_userRoutineDeclarationListForBootloaderImplementation_1293, var_bootloaderReservedROMsize_1536  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 53)) ;
      UpEnumerator_ramBankTable enumerator_3661 (var_ramBank_1066) ;
      while (enumerator_3661.hasCurrentObject ()) {
        {
        var_ramBank_1066.setter_setMFirstFreeAddressForKey (enumerator_3661.current_mFirstAddress (HERE), enumerator_3661.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 65)) ;
        }
        enumerator_3661.gotoNextObject () ;
      }
    }
    break ;
  case GGS_programKind::Enumeration::enum_userProgram:
    {
      var_piccoloDeviceModel_993.drop () ;
      var_piccoloDeviceName_1710.drop () ;
      var_accessBankSplitOffset_1024.drop () ;
      var_ramBank_1066.drop () ;
      var_registerTable_1682.drop () ;
      var_bootloaderReservedRAMmap_1106.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1377.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1468.drop () ;
      var_bootloaderReservedROMsize_1536.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_993, var_piccoloDeviceName_1710, var_accessBankSplitOffset_1024, var_ramBank_1066, var_registerTable_1682, var_bootloaderReservedRAMmap_1106, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1377, var_userRoutineDeclarationListForUserProgramImplementation_1468, var_bootloaderReservedROMsize_1536  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 68)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1203 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1293 = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
    }
    break ;
  }
  GGS_pic_31__38_MacroMap var_macroMap_4516 = GGS_pic_31__38_MacroMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_MacroDefinitionList enumerator_4567 (constinArgument_inPiccoloModel.readProperty_mMacroDefinitionList ()) ;
  while (enumerator_4567.hasCurrentObject ()) {
    {
    var_macroMap_4516.setter_insertKey (enumerator_4567.current_mMacroName (HERE), enumerator_4567.current_mConstantNameList (HERE), enumerator_4567.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 85)) ;
    }
    enumerator_4567.gotoNextObject () ;
  }
  GGS_stringset var_usedRoutineSet_4785 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), var_macroMap_4516, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1203, var_userRoutineDeclarationListForUserProgramImplementation_1468, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 88)) ;
  GGS_declaredRoutineMap var_declaredRoutineMap_5067 = GGS_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_5202 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_5202.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5067.setter_insertKey (enumerator_5202.current_mRoutineName (HERE), enumerator_5202.current_mRequiredBank (HERE), enumerator_5202.current_mReturnedBank (HERE), enumerator_5202.current_mPreservesBank (HERE), enumerator_5202.current_mIsNoReturn (HERE), enumerator_5202.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 97)) ;
    }
    enumerator_5202.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_5485 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_5532 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList ()) ;
  while (enumerator_5532.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_declaredRoutineMap_5067.getter_hasKey (enumerator_5532.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5532.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5532.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unusedDeclarationUnicity_5485.getter_hasKey (enumerator_5532.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_5532.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5532.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_usedRoutineSet_4785.getter_hasKey (enumerator_5532.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 113)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_5532.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5532.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_5485.plusPlusAssignOperation (enumerator_5532.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 116)) ;
    enumerator_5532.gotoNextObject () ;
  }
  UpEnumerator_declaredRoutineMap enumerator_6080 (var_declaredRoutineMap_5067) ;
  while (enumerator_6080.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_usedRoutineSet_4785.getter_hasKey (enumerator_6080.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_and (var_unusedDeclarationUnicity_5485.getter_hasKey (enumerator_6080.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_6080.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6080.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)) ;
      }
    }
    enumerator_6080.gotoNextObject () ;
  }
  GGS_stringset var_inlinedRoutineSet_6349 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_6389 (constinArgument_inPiccoloModel.readProperty_mInlinedRoutineList ()) ;
  while (enumerator_6389.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_declaredRoutineMap_5067.getter_hasKey (enumerator_6389.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_6389.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6389.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = var_usedRoutineSet_4785.getter_hasKey (enumerator_6389.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 128)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 128)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_6389.current_mValue (HERE).readProperty_location (), GGS_string ("useless declaration, the '").add_operation (enumerator_6389.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        var_inlinedRoutineSet_6349.plusPlusAssignOperation (enumerator_6389.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 131)) ;
      }
    }
    enumerator_6389.gotoNextObject () ;
  }
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6810 = constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList () ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_6910 = constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList () ;
  {
  routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (var_inlinedRoutineSet_6349, var_declaredRoutineMap_5067, var_interruptDefinitionList_6810, var_routineDefinitionList_6910, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 136)) ;
  }
  UpEnumerator_checkpicList enumerator_7197 (constinArgument_inPiccoloModel.readProperty_mCheckpicList ()) ;
  while (enumerator_7197.hasCurrentObject ()) {
    GGS_bool var_found_7259 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_7282 (enumerator_7197.current_mValueList (HERE)) ;
    bool bool_16 = var_found_7259.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
    if (enumerator_7282.hasCurrentObject () && bool_16) {
      while (enumerator_7282.hasCurrentObject () && bool_16) {
        var_found_7259 = GGS_bool (ComparisonKind::equal, enumerator_7282.current_mValue (HERE).readProperty_string ().objectCompare (var_piccoloDeviceName_1710)) ;
        enumerator_7282.gotoNextObject () ;
        if (enumerator_7282.hasCurrentObject ()) {
          bool_16 = var_found_7259.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = var_found_7259.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 148)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_7197.current_mErrorLocation (HERE), GGS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1710, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)) ;
      }
    }
    enumerator_7197.gotoNextObject () ;
  }
  GGS_bool var_hasHighInterrupt_7565 = GGS_bool (false) ;
  GGS_bool var_highInterruptIsFast_7602 = GGS_bool (false) ;
  GGS_bool var_hasLowInterrupt_7642 = GGS_bool (false) ;
  GGS_bool var_lowInterruptIsFast_7678 = GGS_bool (false) ;
  UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_7741 (var_interruptDefinitionList_6810) ;
  while (enumerator_7741.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 158)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GenericArray <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_7741.current_mInterruptName (HERE).readProperty_location (), GGS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 159)) ;
      }
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, enumerator_7741.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("high"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        var_highInterruptIsFast_7602 = enumerator_7741.current_mFastReturn (HERE) ;
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = var_hasHighInterrupt_7565.boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GenericArray <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_7741.current_mInterruptName (HERE).readProperty_location (), GGS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 164)) ;
          }
        }
        var_hasHighInterrupt_7565 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = GGS_bool (ComparisonKind::equal, enumerator_7741.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("low"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          var_lowInterruptIsFast_7678 = enumerator_7741.current_mFastReturn (HERE) ;
          GalgasBool test_25 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_25) {
            test_25 = var_hasLowInterrupt_7642.boolEnum () ;
            if (GalgasBool::boolTrue == test_25) {
              GenericArray <FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (enumerator_7741.current_mInterruptName (HERE).readProperty_location (), GGS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 170)) ;
            }
          }
          var_hasLowInterrupt_7642 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7741.current_mInterruptName (HERE).readProperty_location (), GGS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_highInterruptIsFast_7602.operator_and (var_lowInterruptIsFast_7678 COMMA_SOURCE_FILE ("pic18_semantics.galgas", 176)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_7741.current_mInterruptName (HERE).readProperty_location (), GGS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 177)) ;
      }
    }
    enumerator_7741.gotoNextObject () ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_8750 ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    test_30 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 182)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      UpEnumerator_configDefinitionList enumerator_8869 (constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList ()) ;
      while (enumerator_8869.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_8869.current_mDefinitionLocation (HERE), GGS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
        enumerator_8869.gotoNextObject () ;
      }
      var_actualConfigurationMap_8750 = GGS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_30) {
    {
    routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_993.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_896, var_actualConfigurationMap_8750, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 188)) ;
    }
  }
  GGS_uint var_RAMsize_9318 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_ramBankTable enumerator_9363 (var_ramBank_1066) ;
  while (enumerator_9363.hasCurrentObject ()) {
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::greaterThan, enumerator_9363.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_9318)).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        var_RAMsize_9318 = enumerator_9363.current_mLastAddressPlusOne (HERE) ;
      }
    }
    enumerator_9363.gotoNextObject () ;
  }
  GGS_constantMap var_constantMap_9544 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  {
  var_constantMap_9544.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("ROM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler COMMA_HERE), var_piccoloDeviceModel_993.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)) ;
  }
  {
  var_constantMap_9544.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("RAM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler COMMA_HERE), var_RAMsize_9318.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)) ;
  }
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (ComparisonKind::notEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_regularProgram (SOURCE_FILE ("pic18_semantics.galgas", 208)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      GGS_lstring var_bootloaderSizeString_9929 = GGS_lstring::init_21__21_ (GGS_string ("BOOTLOADER_RESERVED_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)), inCompiler COMMA_HERE) ;
      {
      var_constantMap_9544.setter_insertKey (var_bootloaderSizeString_9929, var_bootloaderReservedROMsize_1536.readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)) ;
      }
    }
  }
  GGS_stringset var_usedRegisters_10141 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_constantDefinitionList enumerator_10192 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList ()) ;
  while (enumerator_10192.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_10334 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_10192.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_993.readProperty_mRegisterTable (), var_constantMap_9544, var_result_10334, var_usedRegisters_10141, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)) ;
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      test_34 = var_piccoloDeviceModel_993.readProperty_mRegisterTable ().getter_hasKey (enumerator_10192.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 216)).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        GenericArray <FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_10192.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_10192.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
      }
    }
    if (GalgasBool::boolFalse == test_34) {
      {
      var_constantMap_9544.setter_insertKey (enumerator_10192.current_mConstantName (HERE), var_result_10334, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 219)) ;
      }
    }
    enumerator_10192.gotoNextObject () ;
  }
  GGS_declaredByteMap var_declaredByteMap_10920 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_9544, var_usedRegisters_10141, var_ramBank_1066, var_piccoloDeviceModel_993.readProperty_mRegisterTable (), var_listFileContents_896, var_registerTable_1682, var_declaredByteMap_10920, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 223)) ;
  }
  GalgasBool test_36 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_36) {
    test_36 = GGS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GGS_programKind::class_func_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 235)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_36) {
      UpEnumerator_ramBankTable enumerator_11180 (var_ramBank_1066) ;
      while (enumerator_11180.hasCurrentObject ()) {
        GalgasBool test_37 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_37) {
          test_37 = var_bootloaderReservedRAMmap_1106.getter_hasKey (enumerator_11180.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 237)).boolEnum () ;
          if (GalgasBool::boolTrue == test_37) {
            GGS_luint var_bootloaderReservedSize_11277 ;
            var_bootloaderReservedRAMmap_1106.method_searchKey (enumerator_11180.current_lkey (HERE), var_bootloaderReservedSize_11277, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)) ;
            GalgasBool test_38 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_38) {
              test_38 = GGS_bool (ComparisonKind::greaterThan, enumerator_11180.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11180.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 240)).objectCompare (var_bootloaderReservedSize_11277.readProperty_uint ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_38) {
                GenericArray <FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)), GGS_string ("for '").add_operation (enumerator_11180.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GGS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (enumerator_11180.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11180.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GGS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).add_operation (var_bootloaderReservedSize_11277.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_semantics.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 243)).add_operation (GGS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 244)), fixItArray39  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_37) {
          GalgasBool test_40 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_40) {
            test_40 = GGS_bool (ComparisonKind::greaterThan, enumerator_11180.current_mFirstFreeAddress (HERE).objectCompare (enumerator_11180.current_mFirstAddress (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_40) {
              GenericArray <FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)), GGS_string ("for '").add_operation (enumerator_11180.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GGS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (enumerator_11180.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11180.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GGS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)), fixItArray41  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)) ;
            }
          }
        }
        enumerator_11180.gotoNextObject () ;
      }
    }
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inSourceFileName, var_piccoloDeviceModel_993.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 257)), var_macroMap_4516, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1203, var_userRoutineDeclarationListForBootloaderImplementation_1293, var_bootloaderReservedROMsize_1536, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1377, var_userRoutineDeclarationListForUserProgramImplementation_1468, var_accessBankSplitOffset_1024, var_registerTable_1682, var_declaredByteMap_10920, var_routineDefinitionList_6910, constinArgument_inPiccoloModel.readProperty_mProgramKind (), var_constantMap_9544, var_usedRegisters_10141, constinArgument_inPiccoloModel.readProperty_mDataList (), var_interruptDefinitionList_6810, constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), var_ramBank_1066, var_hasHighInterrupt_7565, var_hasLowInterrupt_7642, var_piccoloDeviceModel_993.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_993.readProperty_mRegisterTable (), var_actualConfigurationMap_8750, constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), var_listFileContents_896, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 255)) ;
  }
  GalgasBool test_42 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_42) {
    test_42 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_42) {
      var_listFileContents_896.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)) ;
      GGS_string var_listFile_13295 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 286)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 286)) ;
      GGS_bool joker_13422 ; // Joker input parameter
      var_listFileContents_896.method_writeToFileWhenDifferentContents (var_listFile_13295, joker_13422, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 287)) ;
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
  GGS_string var_sourceFileBaseName_734 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)).getter_deletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_734.objectCompare (constinArgument_inBootloaderName.readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
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
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_processorType::Enumeration::enum_baseline:
    {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, constinArgument_inReservedRomSize.readProperty_uint ().objectCompare (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReservedRomSize.readProperty_location (), GGS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GGS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GGS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GGS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42)), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
    }
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).add_operation (GGS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.readProperty_mRamBankTable () ;
  UpEnumerator_bootloaderReservedRAMmap enumerator_2465 (constinArgument_inBootloaderReservedRAMmap) ;
  while (enumerator_2465.hasCurrentObject ()) {
    GGS_uint var_firstAddress_2551 ;
    GGS_uint var_firstFreeAddress_2569 ;
    GGS_uint var_lastAddressPlusOne_2591 ;
    GGS_uintlist var_mirrorOffsetList_2622 ;
    outArgument_outRamBank.method_searchKey (enumerator_2465.current_lkey (HERE), var_firstAddress_2551, var_firstFreeAddress_2569, var_lastAddressPlusOne_2591, var_mirrorOffsetList_2622, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 48)) ;
    var_firstFreeAddress_2569 = var_firstFreeAddress_2569.add_operation (enumerator_2465.current_mReservedSize (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 49)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterThan, var_firstFreeAddress_2569.objectCompare (var_lastAddressPlusOne_2591)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2465.current_mReservedSize (HERE).readProperty_location (), GGS_string ("reserved size is greater than size of '").add_operation (enumerator_2465.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GGS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (var_lastAddressPlusOne_2591.substract_operation (var_firstAddress_2551, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2569, enumerator_2465.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 54)) ;
      }
      outArgument_outListFileContents.plusAssignOperation(GGS_string ("'").add_operation (enumerator_2465.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GGS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (enumerator_2465.current_mReservedSize (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GGS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_firstAddress_2551.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (var_firstFreeAddress_2569.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (GGS_string (").\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }
    enumerator_2465.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("BOOTLOADER ROUTINES").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("Routine").getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)).add_operation (GGS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)) ;
  GGS_stringset var_routineNameSet_3613 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_uint var_entryPointAddress_3655 = GGS_uint (uint32_t (4U)) ;
  UpEnumerator_routineDeclarationList enumerator_3705 (constinArgument_inBootloaderRoutineDeclarationList) ;
  while (enumerator_3705.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_routineNameSet_3613.getter_hasKey (enumerator_3705.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3705.current_mRoutineName (HERE).readProperty_location (), GGS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
      }
    }
    var_routineNameSet_3613.plusPlusAssignOperation (enumerator_3705.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 70)) ;
    outArgument_outListFileContents.plusAssignOperation(enumerator_3705.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (var_entryPointAddress_3655.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) ;
    var_entryPointAddress_3655 = var_entryPointAddress_3655.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::equal, var_entryPointAddress_3655.objectCompare (GGS_uint (uint32_t (8U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        var_entryPointAddress_3655 = GGS_uint (uint32_t (12U)) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::equal, var_entryPointAddress_3655.objectCompare (GGS_uint (uint32_t (24U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          var_entryPointAddress_3655 = GGS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_3705.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 79)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("USER PROGRAM ROUTINES").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("Routine").getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)).add_operation (GGS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)) ;
  var_entryPointAddress_3655 = constinArgument_inReservedRomSize.readProperty_uint () ;
  UpEnumerator_routineDeclarationList enumerator_4753 (constinArgument_inUserRoutineDeclarationList) ;
  while (enumerator_4753.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_routineNameSet_3613.getter_hasKey (enumerator_4753.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4753.current_mRoutineName (HERE).readProperty_location (), GGS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
      }
    }
    var_routineNameSet_3613.plusPlusAssignOperation (enumerator_4753.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 90)) ;
    outArgument_outListFileContents.plusAssignOperation(enumerator_4753.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (var_entryPointAddress_3655.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) ;
    var_entryPointAddress_3655 = var_entryPointAddress_3655.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
    enumerator_4753.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable () ;
  GGS_stringset joker_5367 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  {
  GGS_declaredByteMap joker_5492 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GGS_constantMap::init (inCompiler COMMA_HERE), joker_5367, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable (), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5492, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 97)) ;
  }
  outArgument_outListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)) ;
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

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_checkBCC [4] = {
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

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_checkBRA_5F_RCALL [4] = {
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

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement [4] = {
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
      GenericArray <FixItDescription> fixItArray1 ;
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

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code [6] = {
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
      GenericArray <FixItDescription> fixItArray1 ;
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

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code [4] = {
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
      GenericArray <FixItDescription> fixItArray1 ;
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

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code [4] = {
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
  var_binaryCode_23626.addAssignOperation (GGS_uint (uint32_t (60416U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)) ;
  var_binaryCode_23626.addAssignOperation (GGS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)) ;
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 639)), var_binaryCode_23626  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 638)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code [3] = {
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
  var_binaryCode_24069.addAssignOperation (GGS_uint (uint32_t (61184U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)) ;
  var_binaryCode_24069.addAssignOperation (GGS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)) ;
  result_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 653)), var_binaryCode_24069  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 652)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code [3] = {
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

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_definition_5F_label [2] = {
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
//Overriding extension method '@pic18Instruction_block performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList_1147 = GGS_pic_31__38_BlockInstructionBlockList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1242 (temp_0.readProperty_mBlockList ()) ;
  while (enumerator_1242.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_1464 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_1242.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1464, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList_1147.addAssignOperation (enumerator_1242.current_mBlockName (HERE), var_instructionList_1464, enumerator_1242.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1242.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1242.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_3 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_block::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mStartBlockName (), var_inlinedBlockList_1147, temp_3.readProperty_mEndOfBlockInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FOREVER performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                     const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                     const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                     GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_2286 ;
  {
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2286, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_FOREVER::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_instructionList_2286, temp_2.readProperty_mEndOfInstructionList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_do_while performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                         const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                         const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                         GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_repeatedInstructionList_2951 ;
  {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2951, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GGS_pic_31__38_DoWhilePartList var_whilePartList_2985 = GGS_pic_31__38_DoWhilePartList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  UpEnumerator_pic_31__38_DoWhilePartList enumerator_3060 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_3060.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_3294 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_3060.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3294, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList_2985.addAssignOperation (enumerator_3060.current_mCondition (HERE), var_instructionList_3294, enumerator_3060.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_3060.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_3 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_do_5F_while::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_repeatedInstructionList_2951, temp_3.readProperty_mEndOfRepeatedInstructionList (), var_whilePartList_2985, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_savebank performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                      const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                      const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                      GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_4065 ;
  {
  const GGS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_4065, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  const GGS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_3 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_savebank::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mRegister (), var_instructionList_4065, temp_3.readProperty_mEndOfSaveBankInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_structured_if performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                              const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                              const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                              GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_thenInstructionList_4756 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mThenInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4756, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GGS_pic_31__38_InstructionList var_elseInstructionList_4964 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_4964, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_structured_5F_if::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mIfCondition (), var_thenInstructionList_4756, var_elseInstructionList_4964, temp_4.readProperty_mEndOfElsePartLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JSR performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                 const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                 const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                 GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_inlineDone_5591 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_JSR temp_1 = this ;
    const GGS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
    const GGS_pic_31__38_Instruction_5F_JSR temp_3 = this ;
    test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (temp_2.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (temp_3.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_luint var_requiredBank_5880 ;
      GGS_bool var_isNoReturn_5974 ;
      GGS_pic_31__38_InstructionList var_instructionList_6018 ;
      const GGS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      GGS_luint joker_5899 ; // Joker input parameter
      GGS_bool joker_5931 ; // Joker input parameter
      constinArgument_inDeclaredRoutineMap.method_searchKey (temp_4.readProperty_mTargetLabel (), var_requiredBank_5880, joker_5899, joker_5931, var_isNoReturn_5974, var_instructionList_6018, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isNoReturn_5974.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_Instruction_5F_JSR temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray7  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
          var_inlineDone_5591.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_5880.readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            const GGS_pic_31__38_Instruction_5F_JSR temp_9 = this ;
            ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_checkbank::init_21__21_ (temp_9.readProperty_mInstructionLocation (), var_requiredBank_5880.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
          }
        }
        GGS_stringset var_currentlyInlinedRoutineSet_6343 = constinArgument_inCurrentlyInlinedRoutineSet ;
        const GGS_pic_31__38_Instruction_5F_JSR temp_10 = this ;
        var_currentlyInlinedRoutineSet_6343.plusPlusAssignOperation (temp_10.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
        UpEnumerator_pic_31__38_InstructionList enumerator_6520 (var_instructionList_6018) ;
        while (enumerator_6520.hasCurrentObject ()) {
          callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_6520.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6343, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
          enumerator_6520.gotoNextObject () ;
        }
        var_inlineDone_5591 = GGS_bool (true) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_inlineDone_5591 = GGS_bool (false) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_inlineDone_5591.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_12 = this ;
      ioArgument_ioInstructionList.addAssignOperation (temp_12  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList????!'
//
//--------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (const GGS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                   const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GGS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_InstructionList enumerator_7278 (constinArgument_inInstructionList) ;
  while (enumerator_7278.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_7278.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_7278.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                              const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                              GGS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                              GGS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7827 = GGS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_7936 (ioArgument_ioInterruptDefinitionList) ;
  while (enumerator_7936.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_8173 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_7936.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GGS_stringset::class_func_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_8173, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7827.addAssignOperation (enumerator_7936.current_mInterruptName (HERE), enumerator_7936.current_mFastReturn (HERE), var_instructionList_8173, enumerator_7936.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7936.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7827 ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_8409 = GGS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_8555 (ioArgument_ioRoutineDefinitionList) ;
  while (enumerator_8555.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_8788 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_8555.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GGS_stringset::class_func_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8788, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_8409.addAssignOperation (enumerator_8555.current_mRoutineName (HERE), enumerator_8555.current_mRequiredBank (HERE), enumerator_8555.current_mReturnedBank (HERE), enumerator_8555.current_mPreservesBank (HERE), enumerator_8555.current_mIsNoReturn (HERE), var_instructionList_8788, enumerator_8555.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8555.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_8409 ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_NULL generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & /* ioArgument_ioAssemblyInstructionList */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_PAGE generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::init_21_ (temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::init_21__21_ (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mIsRegular (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                             const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                             GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::init_21__21_ (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mPage (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_FD generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                      const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                      GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FD::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_F generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                     const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                     GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_F::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_FB generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                      const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                      GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mSkipIfSet (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_WO_OPERAND generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                  const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                  GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_TRIS generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_TRIS temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_TRIS temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_TRIS temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_TRIS::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOperand (), temp_2.readProperty_mOpcode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_literalOperation generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                    const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                    GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mLiteralValue (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_LABEL generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                    const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                    GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::init_21_ (temp_0.readProperty_mLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_MNOP generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                        const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 152)) ;
    }
  }
  GGS_uint var_idx_6904 = GGS_uint (uint32_t (0U)) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6914 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6914 = true ;
    while (loop_6914) {
      const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_6914 = GGS_bool (ComparisonKind::lowerThan, var_idx_6904.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6914) {
        loop_6914 = GGS_bool (ComparisonKind::lowerThan, var_idx_6904.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6914 && (0 == variant_6914)) {
        loop_6914 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)) ;
      }
      if (loop_6914) {
        variant_6914 -= 1 ;
        const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_6 = this ;
        ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_NOP (SOURCE_FILE ("baseline_build_assembly_code.galgas", 160)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158)) ;
        var_idx_6904.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 161)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_GOTO generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_GOTO temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JUMP generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                         const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_1 = this ;
  GGS_uint var_pageChangeFlags_7964 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 183)) ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_2 = this ;
  GGS_uint var_targetPageFlags_8031 = temp_2.readProperty_mTargetPage () ;
  GGS_uint var_idx_8078 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (8U)).isValid ()) {
    uint32_t variant_8088 = GGS_uint (uint32_t (8U)).uintValue () ;
    bool loop_8088 = true ;
    while (loop_8088) {
      loop_8088 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_7964.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_8088) {
        loop_8088 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_7964.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_8088 && (0 == variant_8088)) {
        loop_8088 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 186)) ;
      }
      if (loop_8088) {
        variant_8088 -= 1 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_7964.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 187)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GGS_uint var_bitIndex_8182 ;
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 189)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                GGS_uint var_sliceIndex_8377 ;
                GGS_uint var_sliceSize_8409 ;
                const GGS_baseline_5F_intermediate_5F_JUMP temp_5 = this ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA"), temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_8377, var_sliceSize_8409, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 190)) ;
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_idx_8078.objectCompare (var_sliceSize_8409)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    const GGS_baseline_5F_intermediate_5F_JUMP temp_7 = this ;
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("internal error, idx (").add_operation (var_idx_8078.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GGS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (var_sliceSize_8409.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)) ;
                  }
                }
                var_bitIndex_8182 = var_sliceIndex_8377.add_operation (var_idx_8078, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 198)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA").add_operation (var_idx_8078.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_uint var_sliceIndex_8822 ;
                  GGS_uint var_sliceSize_8854 ;
                  const GGS_baseline_5F_intermediate_5F_JUMP temp_10 = this ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA").add_operation (var_idx_8078.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_8822, var_sliceSize_8854, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 200)) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_sliceSize_8854.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      const GGS_baseline_5F_intermediate_5F_JUMP temp_12 = this ;
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize (").add_operation (var_sliceSize_8854.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)).add_operation (GGS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)) ;
                    }
                  }
                  var_bitIndex_8182 = var_sliceIndex_8822 ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                const GGS_baseline_5F_intermediate_5F_JUMP temp_14 = this ;
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 210)) ;
                var_bitIndex_8182.drop () ; // Release error dropped variable
              }
            }
            const GGS_baseline_5F_intermediate_5F_JUMP temp_16 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const GalgasBool test_18 = GGS_bool (ComparisonKind::notEqual, var_targetPageFlags_8031.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
            }else if (GalgasBool::boolFalse == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_8182, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212)) ;
          }
        }
        var_pageChangeFlags_7964 = var_pageChangeFlags_7964.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 218)) ;
        var_targetPageFlags_8031 = var_targetPageFlags_8031.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 219)) ;
        var_idx_8078 = var_idx_8078.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 220)) ;
      }
    }
  }
  const GGS_baseline_5F_intermediate_5F_JUMP temp_19 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_20 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_CALL generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_CALL temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_CALL::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JSR generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                        const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_1 = this ;
  GGS_uint var_pageChangeFlags_10474 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 245)) ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_2 = this ;
  GGS_uint var_targetPageFlags_10541 = temp_2.readProperty_mTargetPage () ;
  GGS_uint var_idx_10588 = GGS_uint (uint32_t (0U)) ;
  GGS_baseline_5F_assembly_5F_instructionList var_pageRestoreInstructions_10602 = GGS_baseline_5F_assembly_5F_instructionList::init (inCompiler COMMA_HERE) ;
  if (GGS_uint (uint32_t (8U)).isValid ()) {
    uint32_t variant_10667 = GGS_uint (uint32_t (8U)).uintValue () ;
    bool loop_10667 = true ;
    while (loop_10667) {
      loop_10667 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10474.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_10667) {
        loop_10667 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10474.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_10667 && (0 == variant_10667)) {
        loop_10667 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 249)) ;
      }
      if (loop_10667) {
        variant_10667 -= 1 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10474.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 250)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GGS_uint var_bitIndex_10761 ;
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 252)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                GGS_uint var_sliceIndex_10956 ;
                GGS_uint var_sliceSize_10988 ;
                const GGS_baseline_5F_intermediate_5F_JSR temp_5 = this ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA"), temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_10956, var_sliceSize_10988, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 253)) ;
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_idx_10588.objectCompare (var_sliceSize_10988)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    const GGS_baseline_5F_intermediate_5F_JSR temp_7 = this ;
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("internal error, idx (").add_operation (var_idx_10588.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GGS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (var_sliceSize_10988.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)) ;
                  }
                }
                var_bitIndex_10761 = var_sliceIndex_10956.add_operation (var_idx_10588, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 261)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA").add_operation (var_idx_10588.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_uint var_sliceIndex_11401 ;
                  GGS_uint var_sliceSize_11433 ;
                  const GGS_baseline_5F_intermediate_5F_JSR temp_10 = this ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA").add_operation (var_idx_10588.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_11401, var_sliceSize_11433, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 263)) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_sliceSize_11433.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      const GGS_baseline_5F_intermediate_5F_JSR temp_12 = this ;
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize (").add_operation (var_sliceSize_11433.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)).add_operation (GGS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)) ;
                    }
                  }
                  var_bitIndex_10761 = var_sliceIndex_11401 ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                const GGS_baseline_5F_intermediate_5F_JSR temp_14 = this ;
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 273)) ;
                var_bitIndex_10761.drop () ; // Release error dropped variable
              }
            }
            const GGS_baseline_5F_intermediate_5F_JSR temp_16 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const GalgasBool test_18 = GGS_bool (ComparisonKind::notEqual, var_targetPageFlags_10541.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
            }else if (GalgasBool::boolFalse == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_10761, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275)) ;
            const GGS_baseline_5F_intermediate_5F_JSR temp_19 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_20 ;
            const GalgasBool test_21 = GGS_bool (ComparisonKind::equal, var_targetPageFlags_10541.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              temp_20 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
            }else if (GalgasBool::boolFalse == test_21) {
              temp_20 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
            }
            var_pageRestoreInstructions_10602.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20, constinArgument_inSTATUSregister, var_bitIndex_10761, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280)) ;
          }
        }
        var_pageChangeFlags_10474 = var_pageChangeFlags_10474.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 286)) ;
        var_targetPageFlags_10541 = var_targetPageFlags_10541.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 287)) ;
        var_idx_10588 = var_idx_10588.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 288)) ;
      }
    }
  }
  const GGS_baseline_5F_intermediate_5F_JSR temp_22 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_23 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_CALL::init_21__21_ (temp_22.readProperty_mInstructionLocation (), temp_23.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290)) ;
  UpEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12516 (var_pageRestoreInstructions_10602) ;
  while (enumerator_12516.hasCurrentObject ()) {
    ioArgument_ioAssemblyInstructionList.addAssignOperation (enumerator_12516.current_mInstruction (HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 294)) ;
    enumerator_12516.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                              const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                              GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mRegisterDescription (), temp_2.readProperty_mIncrement (), temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
    test_4 = temp_5.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
      ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_SKIP::init_21_ (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311)) ;
    }
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_7.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (temp_8.readProperty_mTargetLabel (), temp_9.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_assembly_code????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_assembly_5F_code_3F__3F__3F__3F__26_ (const GGS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                        const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                        const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_14196 (constinArgument_inGeneratedInstructionList) ;
  while (enumerator_14196.hasCurrentObject ()) {
    callExtensionMethod_generateAssemblyCode ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14196.current_mInstruction (HERE).ptr (), constinArgument_inSTATUSregister, constinArgument_inStatusRegisterBitSliceTable, ioArgument_ioAssemblyInstructionList, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 333)) ;
    enumerator_14196.gotoNextObject () ;
  }
  UpEnumerator_actualConfigurationMap enumerator_14445 (constinArgument_inActualConfigurationMap) ;
  while (enumerator_14445.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_14445.current_mRegisterAddress (HERE).add_operation (enumerator_14445.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)) ;
    }
    {
    routine_emitCode_3F_ (enumerator_14445.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 338)) ;
    }
    enumerator_14445.gotoNextObject () ;
  }
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)) ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 39)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 41)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'
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
//Overriding extension method '@midrange_intermediate_pseudo_ORG enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GGS_uint & ioArgument_ioAddress,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_actualInstruction enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_enterLabelAtAddress (GGS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                     GGS_uint & ioArgument_ioAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  ioArgument_ioAddress = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_NULL generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_pseudo_ORG generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_FD generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_FB generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip generateBinaryCodeAtAddress'
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
      GenericArray <FixItDescription> fixItArray1 ;
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
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GGS_string ("CALL (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GGS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 286)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JUMP generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_GOTO generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_JSR generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_CALL generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition generateBinaryCodeAtAddress'
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
  var_s_16855.plusAssignOperation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)) ;
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
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_CLRW generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_NOP generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_RETURN generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_RETFIE generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_SLEEP generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_instruction_literalOperation generateBinaryCodeAtAddress'
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
//Overriding extension method '@midrange_intermediate_pseudo_LABEL generateBinaryCodeAtAddress'
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
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GGS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (GGS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (var_targetAddress_22017.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GGS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), fixItArray4  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)) ;
    }
  }
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (ioArgument_ioAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 631)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_MNOP generateBinaryCodeAtAddress'
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
      GenericArray <FixItDescription> fixItArray3 ;
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
        variant_22892 -= 1 ;
        {
        routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (0U)), ioArgument_ioAddress, GGS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 650)) ;
        }
        var_idx_22882.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 651)) ;
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
  UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_23976 (constinArgument_inGeneratedInstructionList) ;
  while (enumerator_23976.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_23976.current_mInstruction (HERE).ptr (), var_symbolTable_23900, var_currentAddress_23950, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 674)) ;
    enumerator_23976.gotoNextObject () ;
  }
  GGS_uint var_lastAddressForFirstPass_24112 = var_currentAddress_23950 ;
  outArgument_outUsedROMsize = var_currentAddress_23950 ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 682)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 683)) ;
  }
  var_currentAddress_23950 = GGS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress_3F_ (GGS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 685)) ;
  }
  UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24619 (constinArgument_inGeneratedInstructionList) ;
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
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_23950.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (var_lastAddressForFirstPass_24112.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 700)).add_operation (GGS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_lastAddressForFirstPass_24112.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), GGS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24112.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (GGS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 704)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)) ;
      }
    }
  }
  UpEnumerator_actualConfigurationMap enumerator_25545 (constinArgument_inActualConfigurationMap) ;
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
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'
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
//Overriding extension method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'
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
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)), GGS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)).add_operation (GGS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (temp_2.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)) ;
    }
  }
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_4 = this ;
  ioArgument_ioAddress = temp_4.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_actualInstruction defineLabelAtAddress'
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
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Routine too long, crosses page boundary at this instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 52)) ;
    }
  }
  ioArgument_ioAddress = var_nextAddress_1932 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_NULL compute'
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
//Overriding extension method '@midrange_intermediate_actualInstruction compute'
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
//Overriding extension method '@midrange_intermediate_pseudo_ORG compute'
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
//Overriding extension method '@midrange_intermediate_JUMP compute'
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
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)).add_operation (GGS_string (":  JUMP to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JSR compute'
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
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)).add_operation (GGS_string (":  JSR to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL compute'
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
      GenericArray <FixItDescription> fixItArray4 ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("COMPUTE JSR and JUMP").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)) ;
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
        variant_13187 -= 1 ;
        var_JUMP_5F_or_5F_JSR_5F_fixed_13134 = GGS_bool (false) ;
        var_iteration_13171.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Pass ").add_operation (var_iteration_13171.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)) ;
        GGS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable_13471 = GGS_midrange_5F_symbolTableForConvertingRelatives::init (inCompiler COMMA_HERE) ;
        GGS_uint var_currentAddress_13545 = GGS_uint (uint32_t (0U)) ;
        UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13573 (ioArgument_ioGeneratedInstructionList) ;
        while (enumerator_13573.hasCurrentObject ()) {
          callExtensionMethod_defineLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13573.current_mInstruction (HERE).ptr (), var_symbolTable_13471, var_currentAddress_13545, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 330)) ;
          enumerator_13573.gotoNextObject () ;
        }
        GGS_uint var_lastAddressForFirstPass_13716 = var_currentAddress_13545 ;
        var_currentAddress_13545 = GGS_uint (uint32_t (0U)) ;
        UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13852 (ioArgument_ioGeneratedInstructionList) ;
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
            GenericArray <FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_13545.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (GGS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (var_lastAddressForFirstPass_13716.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 341)).add_operation (GGS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)) ;
          }
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_JUMP_5F_or_5F_JSR_5F_fixed_13134.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No JUMP, no JSR to fix\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)) ;
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Program size: ").add_operation (var_currentAddress_13545.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)).add_operation (GGS_string (" instructions\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18AbstractConditionTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                       GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                       GGS_uint & outArgument_outStackNeeds,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueStackNeeds_1598 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_trueStackNeeds_1598, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 41)) ;
  GGS_uint var_falseStackNeeds_1774 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_falseStackNeeds_1774, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 46)) ;
  GGS_uint temp_2 ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, var_trueStackNeeds_1598.objectCompare (var_falseStackNeeds_1774)).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = var_trueStackNeeds_1598 ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = var_falseStackNeeds_1774 ;
  }
  outArgument_outStackNeeds = temp_2 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                 GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                 GGS_uint & outArgument_outStackNeeds,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_2166 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_2166.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2166.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 62)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 62)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (enumerator_2166.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 63)) ;
      }
    }
    enumerator_2166.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                  GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                  GGS_uint & outArgument_outStackNeeds,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_2611 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_2611.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2611.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 77)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 77)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (enumerator_2611.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 78)) ;
      }
    }
    enumerator_2611.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                          GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                          GGS_uint & outArgument_outStackNeeds,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 91)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 91)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (temp_2.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 92)) ;
    }
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                     GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                     GGS_uint & outArgument_outStackNeeds,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 104)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 104)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 105)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 107)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 107)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      ioArgument_ioBlockToExploreSet.plusPlusAssignOperation (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 108)) ;
    }
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                   GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                   GGS_uint & outArgument_outStackNeeds,
                                                                                                   Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                            GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                            GGS_uint & outArgument_outStackNeeds,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                           GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                           GGS_uint & outArgument_outStackNeeds,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator exploreAccessibleBlocksForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                            GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                            GGS_uint & outArgument_outStackNeeds,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR buildCalledRoutineSetForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioRoutineCalledSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 168)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildCalledRoutineSetForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_5769 (temp_0.readProperty_mTargetInstructions ()) ;
  while (enumerator_5769.hasCurrentObject ()) {
    callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_5769.current_mInstruction (HERE).ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 176)) ;
    enumerator_5769.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_condition_skip_instruction buildCalledRoutineSetForStackComputations'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 184)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18StackComputations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_StackComputations_26__3F_ (GGS_string & ioArgument_ioListFileContents,
                                                    const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("STACK COMPUTATIONS").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)) ;
  GGS_stringset var_startLabelsToExplore_6779 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_blockMapForStackComputation var_blockMapForStackComputation_6821 = GGS_blockMapForStackComputation::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_6889 (constinArgument_inBlockList) ;
  while (enumerator_6889.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_6889.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_stack_computations.galgas", 204)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_startLabelsToExplore_6779.plusPlusAssignOperation (enumerator_6889.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 205)) ;
      }
    }
    {
    var_blockMapForStackComputation_6821.setter_insertKey (enumerator_6889.current_mBlock (HERE).readProperty_mLabel (), enumerator_6889.current_mBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 207)) ;
    }
    enumerator_6889.gotoNextObject () ;
  }
  GGS_routineCallMap var_routineCallMap_7186 = GGS_routineCallMap::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).isValid ()) {
    uint32_t variant_7209 = constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).uintValue () ;
    bool loop_7209 = true ;
    while (loop_7209) {
      loop_7209 = GGS_bool (ComparisonKind::greaterThan, var_startLabelsToExplore_6779.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_7209) {
        loop_7209 = GGS_bool (ComparisonKind::greaterThan, var_startLabelsToExplore_6779.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_7209 && (0 == variant_7209)) {
        loop_7209 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)) ;
      }
      if (loop_7209) {
        variant_7209 -= 1 ;
        GGS_string var_startLabel_7294 = var_startLabelsToExplore_6779.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 214)) ;
        {
        var_startLabelsToExplore_6779.setter_removeKey (var_startLabel_7294 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 215)) ;
        }
        GGS_stringset var_blockToExploreSet_7432 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        var_blockToExploreSet_7432.plusPlusAssignOperation (var_startLabel_7294  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 218)) ;
        GGS_stringset var_exploredBlockSet_7521 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_stringset var_calledRoutineSet_7563 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_uint var_terminatorStackNeeds_7600 = GGS_uint (uint32_t (0U)) ;
        if (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).isValid ()) {
          uint32_t variant_7629 = constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).uintValue () ;
          bool loop_7629 = true ;
          while (loop_7629) {
            loop_7629 = GGS_bool (ComparisonKind::greaterThan, var_blockToExploreSet_7432.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
            if (loop_7629) {
              loop_7629 = GGS_bool (ComparisonKind::greaterThan, var_blockToExploreSet_7432.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
            }
            if (loop_7629 && (0 == variant_7629)) {
              loop_7629 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)) ;
            }
            if (loop_7629) {
              variant_7629 -= 1 ;
              GGS_string var_b_7725 = var_blockToExploreSet_7432.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 225)) ;
              {
              var_blockToExploreSet_7432.setter_removeKey (var_b_7725 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 226)) ;
              }
              var_exploredBlockSet_7521.plusPlusAssignOperation (var_b_7725  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 227)) ;
              GGS_ipic_31__38_Block var_aBlock_7905 ;
              var_blockMapForStackComputation_6821.method_searchKey (var_b_7725.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 228)), var_aBlock_7905, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 228)) ;
              GGS_uint var_tsn_8051 ;
              callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_AbstractBlockTerminator *) var_aBlock_7905.readProperty_mTerminator ().ptr (), var_blockToExploreSet_7432, var_exploredBlockSet_7521, var_tsn_8051, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 229)) ;
              GalgasBool test_1 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_1) {
                test_1 = GGS_bool (ComparisonKind::greaterThan, var_tsn_8051.objectCompare (var_terminatorStackNeeds_7600)).boolEnum () ;
                if (GalgasBool::boolTrue == test_1) {
                  var_terminatorStackNeeds_7600 = var_tsn_8051 ;
                }
              }
              UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_8175 (var_aBlock_7905.readProperty_mInstructionList ()) ;
              while (enumerator_8175.hasCurrentObject ()) {
                callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_8175.current_mInstruction (HERE).ptr (), var_calledRoutineSet_7563, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 238)) ;
                enumerator_8175.gotoNextObject () ;
              }
            }
          }
        }
        {
        var_routineCallMap_7186.setter_insertKey (var_startLabel_7294.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 241)), var_calledRoutineSet_7563, var_terminatorStackNeeds_7600, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 241)) ;
        }
        UpEnumerator_stringset enumerator_8414 (var_calledRoutineSet_7563) ;
        while (enumerator_8414.hasCurrentObject ()) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_routineCallMap_7186.getter_hasKey (enumerator_8414.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              var_startLabelsToExplore_6779.plusPlusAssignOperation (enumerator_8414.current_key (HERE)  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 244)) ;
            }
          }
          enumerator_8414.gotoNextObject () ;
        }
      }
    }
  }
  GGS_routineStackRequirementMap var_routineStackRequirementMap_8657 = GGS_routineStackRequirementMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_progress_8696 = GGS_bool (true) ;
  if (var_routineCallMap_7186.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).isValid ()) {
    uint32_t variant_8714 = var_routineCallMap_7186.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).uintValue () ;
    bool loop_8714 = true ;
    while (loop_8714) {
      loop_8714 = var_progress_8696.isValid () ;
      if (loop_8714) {
        loop_8714 = var_progress_8696.boolValue () ;
      }
      if (loop_8714 && (0 == variant_8714)) {
        loop_8714 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)) ;
      }
      if (loop_8714) {
        variant_8714 -= 1 ;
        var_progress_8696 = GGS_bool (false) ;
        GGS_routineCallMap var_tempRoutineCallMap_8815 = var_routineCallMap_7186 ;
        var_routineCallMap_7186 = GGS_routineCallMap::init (inCompiler COMMA_HERE) ;
        UpEnumerator_routineCallMap enumerator_8908 (var_tempRoutineCallMap_8815) ;
        while (enumerator_8908.hasCurrentObject ()) {
          GGS_uint var_levels_8973 = enumerator_8908.current_mTerminatorStackNeeds (HERE) ;
          GGS_bool var_solved_9020 = GGS_bool (true) ;
          UpEnumerator_stringset enumerator_9045 (enumerator_8908.current_mCalledRoutineSet (HERE)) ;
          bool bool_3 = var_solved_9020.isValidAndTrue () ;
          if (enumerator_9045.hasCurrentObject () && bool_3) {
            while (enumerator_9045.hasCurrentObject () && bool_3) {
              var_solved_9020 = var_routineStackRequirementMap_8657.getter_hasKey (enumerator_9045.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 262)) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_solved_9020.boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GGS_uint var_rLevel_9242 ;
                  var_routineStackRequirementMap_8657.method_searchKey (enumerator_9045.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 264)), var_rLevel_9242, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 264)) ;
                  GalgasBool test_5 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_5) {
                    test_5 = GGS_bool (ComparisonKind::lowerOrEqual, var_levels_8973.objectCompare (var_rLevel_9242)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_5) {
                      var_levels_8973 = var_rLevel_9242.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 266)) ;
                    }
                  }
                }
              }
              enumerator_9045.gotoNextObject () ;
              if (enumerator_9045.hasCurrentObject ()) {
                bool_3 = var_solved_9020.isValidAndTrue () ;
              }
            }
          }
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_solved_9020.boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              var_routineStackRequirementMap_8657.setter_insertKey (enumerator_8908.current_lkey (HERE), var_levels_8973, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 271)) ;
              }
              var_progress_8696 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            {
            var_routineCallMap_7186.setter_insertKey (enumerator_8908.current_lkey (HERE), enumerator_8908.current_mCalledRoutineSet (HERE), enumerator_8908.current_mTerminatorStackNeeds (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 274)) ;
            }
          }
          enumerator_8908.gotoNextObject () ;
        }
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Levels Routine\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 278)) ;
  UpEnumerator_routineStackRequirementMap enumerator_9636 (var_routineStackRequirementMap_8657) ;
  while (enumerator_9636.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_9636.current_mLevels (HERE).getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).getter_stringByLeftPadding (GGS_uint (uint32_t (6U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (enumerator_9636.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)) ;
    enumerator_9636.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 282)) ;
  GGS_bool var_noRecursiveRoutine_9842 = GGS_bool (ComparisonKind::equal, var_routineCallMap_7186.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 284)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_noRecursiveRoutine_9842.operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 285)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (gOption_piccoloOptions_doNotWarnRecursive.readProperty_value ()).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 286)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 287)), GGS_string ("There are recursive routines"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 287)) ;
        }
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("The following routines are recursive:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 289)) ;
      UpEnumerator_routineCallMap enumerator_10146 (var_routineCallMap_7186) ;
      while (enumerator_10146.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  - ").add_operation (enumerator_10146.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)) ;
        enumerator_10146.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 293)) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_noRecursiveRoutine_9842.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      GGS_uint var_mainLevels_10399 ;
      var_routineStackRequirementMap_8657.method_searchKey (GGS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 297)), var_mainLevels_10399, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 297)) ;
      GGS_uint var_totalLevels_10425 = var_mainLevels_10399 ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = var_routineStackRequirementMap_8657.getter_hasKey (GGS_string (".HIGH_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 299)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GGS_uint var_highIntLevels_10601 ;
          var_routineStackRequirementMap_8657.method_searchKey (GGS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 300)), var_highIntLevels_10601, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 300)) ;
          var_totalLevels_10425 = var_totalLevels_10425.add_operation (var_highIntLevels_10601, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)) ;
        }
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = var_routineStackRequirementMap_8657.getter_hasKey (GGS_string (".LOW_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 303)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GGS_uint var_lowIntLevels_10825 ;
          var_routineStackRequirementMap_8657.method_searchKey (GGS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 304)), var_lowIntLevels_10825, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 304)) ;
          var_totalLevels_10425 = var_totalLevels_10425.add_operation (var_lowIntLevels_10825, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)) ;
        }
      }
      {
      routine_print_3F_ (GGS_string ("Max stack depth: ").add_operation (var_totalLevels_10425.getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)) ;
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::greaterThan, var_totalLevels_10425.objectCompare (GGS_uint (uint32_t (31U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 309)), GGS_string ("Max stack depth is greater than 31"), fixItArray14  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 309)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_BitTest addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 12)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_SEMI_COLON addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 19)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_IncDec addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 26)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JUMP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 33)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_GOTO addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 40)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CALL addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FOREVER addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_FOREVER temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 54)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_STATIC_REPEAT addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 61)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_MNOP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_F addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CLRW addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CLRWDT addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_SLEEP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FB addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_NOP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_banksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrangeInstruction_checkbank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrangeInstruction_checknobank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_banksel_register addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_do_while addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 134)) ;
  }
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  UpEnumerator_midrange_5F_partList enumerator_4362 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_4362.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_4362.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 136)) ;
    }
    enumerator_4362.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_nobanksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_savebank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 150)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_structured_if addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_instruction_5F_structured_5F_if temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 157)) ;
  }
  {
  const GGS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 158)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FD addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_literalOperation addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'addMidRangeUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (const GGS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                                 GGS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_midrange_5F_instructionList enumerator_6111 (constinArgument_inInstructionList) ;
  while (enumerator_6111.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) enumerator_6111.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 186)) ;
    enumerator_6111.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'midrange_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GGS_stringset function_midrange_5F_computeUsedRoutines (const GGS_midrange_5F_interruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                        const GGS_midrange_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 197)) ;
  UpEnumerator_midrange_5F_interruptDefinitionList enumerator_6657 (constinArgument_inInterruptDefinitionList) ;
  while (enumerator_6657.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_6657.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 200)) ;
    }
    enumerator_6657.gotoNextObject () ;
  }
  GGS_stringset var_s_6853 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("midrange_used_routines.galgas", 207)).isValid ()) {
    uint32_t variant_6872 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("midrange_used_routines.galgas", 207)).uintValue () ;
    bool loop_6872 = true ;
    while (loop_6872) {
      loop_6872 = GGS_bool (ComparisonKind::notEqual, var_s_6853.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_6872) {
        loop_6872 = GGS_bool (ComparisonKind::notEqual, var_s_6853.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_6872 && (0 == variant_6872)) {
        loop_6872 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_used_routines.galgas", 207)) ;
      }
      if (loop_6872) {
        variant_6872 -= 1 ;
        var_s_6853 = result_outUsedRoutineSet ;
        UpEnumerator_midrange_5F_routineDefinitionList enumerator_7020 (constinArgument_inRoutineDefinitionList) ;
        while (enumerator_7020.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_7020.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 211)).boolEnum () ;
            if (GalgasBool::boolTrue == test_0) {
              {
              routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_7020.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 212)) ;
              }
            }
          }
          enumerator_7020.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_midrange_5F_computeUsedRoutines [3] = {
  & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList,
  & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_midrange_5F_computeUsedRoutines (Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GGS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_interruptDefinitionList operand0 = GGS_midrange_5F_interruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                   inCompiler
                                                                                                                   COMMA_THERE) ;
  const GGS_midrange_5F_routineDefinitionList operand1 = GGS_midrange_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  return function_midrange_5F_computeUsedRoutines (operand0,
                                                   operand1,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_midrange_5F_computeUsedRoutines ("midrange_computeUsedRoutines",
                                                                                 functionWithGenericHeader_midrange_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 2,
                                                                                 functionArgs_midrange_5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_NULL buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_buildAssemblyCode (GGS_string & /* ioArgument_ioString */,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_ORG buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_FD buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioString.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 41)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioString.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 43)) ;
  }
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 45)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_FB buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string (", ").add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)) ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 56)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 64)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioString.plusAssignOperation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 66)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioString.plusAssignOperation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 68)) ;
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string (", ").add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)) ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_F buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)) ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 81)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'
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
      ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (GGS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (GGS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioString.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 96)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    ioArgument_ioString.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 98)) ;
  }
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 100)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_localLabel_2984 = GGS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO ").add_operation (var_localLabel_2984, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
      ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
      ioArgument_ioString.plusAssignOperation(var_localLabel_2984.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
    ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO ").add_operation (temp_8.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JUMP buildAssemblyCode'
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
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 117)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 118)) ;
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
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 122)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 123)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO   ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_GOTO buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO   ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JSR buildAssemblyCode'
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
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 143)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 144)) ;
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
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 148)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 149)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  CALL  ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  switch (temp_3.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 154)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 155)) ;
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
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 159)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 160)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_CALL buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  CALL  ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_NOP buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                    GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'
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
      GenericArray <FixItDescription> fixItArray3 ;
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
        variant_6984 -= 1 ;
        ioArgument_ioString.plusAssignOperation(GGS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx_6974.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
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
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  errorlevel -306 ; No Warning on crossing page boundary\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 304)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 307)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  ORG 0\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 308)) ;
  GGS_uint var_bccLabelIndex_9146 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9171 (constinArgument_inInstructionList) ;
  while (enumerator_9171.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9171.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_9146, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9171.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  UpEnumerator_registerTable enumerator_9427 (constinArgument_inPredefinedRegisters) ;
  while (enumerator_9427.hasCurrentObject ()) {
    GGS_uint var_firstRegister_9473 ;
    enumerator_9427.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9473, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.plusAssignOperation(enumerator_9427.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister_9473.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9427.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  UpEnumerator_registerTable enumerator_9781 (constinArgument_inAllRegisters) ;
  while (enumerator_9781.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_9781.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_firstRegister_9882 ;
        enumerator_9781.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9882, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
        outArgument_outAssemblyCode.plusAssignOperation(enumerator_9781.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister_9882.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
      }
    }
    enumerator_9781.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("W EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
      UpEnumerator_actualConfigurationMap enumerator_10356 (constinArgument_inActualConfigurationMap) ;
      while (enumerator_10356.hasCurrentObject ()) {
        outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  __config ").add_operation (enumerator_10356.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10356.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
        enumerator_10356.gotoNextObject () ;
      }
    }
  }
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 341)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 342)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateLineWithCode?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (const GGS_uint constinArgument_inAddress,
                                                           const GGS_codeList constinArgument_inCode,
                                                           const GGS_stringlist constinArgument_inIpicText,
                                                           const GGS_uint constinArgument_inMin,
                                                           const GGS_uint constinArgument_inMax,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_ipicText_1391 = constinArgument_inIpicText ;
  if (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).isValid ()) {
    uint32_t variant_1415 = constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).uintValue () ;
    bool loop_1415 = true ;
    while (loop_1415) {
      loop_1415 = GGS_bool (ComparisonKind::lowerThan, var_ipicText_1391.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).isValid () ;
      if (loop_1415) {
        loop_1415 = GGS_bool (ComparisonKind::lowerThan, var_ipicText_1391.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).boolValue () ;
      }
      if (loop_1415 && (0 == variant_1415)) {
        loop_1415 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_code_generation.galgas", 41)) ;
      }
      if (loop_1415) {
        variant_1415 -= 1 ;
        var_ipicText_1391.addAssignOperation (GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 43)) ;
      }
    }
  }
  GGS_uint var_address_1529 = constinArgument_inAddress ;
  GGS_bool var_first_1555 = GGS_bool (true) ;
  UpEnumerator_stringlist enumerator_1575 (var_ipicText_1391) ;
  UpEnumerator_codeList enumerator_1612 (constinArgument_inCode) ;
  while (enumerator_1575.hasCurrentObject () && enumerator_1612.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_x_36_string (var_address_1529, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)) ;
    var_address_1529 = var_address_1529.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (enumerator_1612.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)) ;
    GGS_string var_s_1748 = GGS_string (" ") ;
    UpEnumerator_uintlist enumerator_1765 (enumerator_1612.current_mBinaryCode (HERE)) ;
    while (enumerator_1765.hasCurrentObject ()) {
      var_s_1748.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_string (enumerator_1765.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)) ;
      enumerator_1765.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssignOperation(var_s_1748.getter_stringByRightPadding (GGS_uint (uint32_t (13U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)) ;
    var_s_1748 = GGS_string::makeEmptyString () ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = var_first_1555 ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (constinArgument_inMax)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (GGS_uint (uint32_t (99999U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_s_1748.plusAssignOperation(constinArgument_inMin.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 59)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_s_1748.plusAssignOperation(GGS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 61)) ;
        }
        var_s_1748.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 63)) ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMax.objectCompare (GGS_uint (uint32_t (99999U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_s_1748.plusAssignOperation(constinArgument_inMax.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 65)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          var_s_1748.plusAssignOperation(GGS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 67)) ;
        }
        var_s_1748.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 69)) ;
      }
    }
    ioArgument_ioListFileContents.plusAssignOperation(var_s_1748.getter_stringByRightPadding (GGS_uint (uint32_t (12U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_1612.current_mAssemblyCode (HERE).getter_stringByRightPadding (GGS_uint (uint32_t (50U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 73)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_1575.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 74)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 75)) ;
    var_first_1555 = GGS_bool (false) ;
    enumerator_1575.gotoNextObject () ;
    enumerator_1612.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_2480 (var_ipicText_1391.getter_subListFromIndex (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 79))) ;
  while (enumerator_2480.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_x_36_string (var_address_1529, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByRightPadding (GGS_uint (uint32_t (76U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)) ;
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_2480.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 82)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 83)) ;
    enumerator_2480.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18GenerateCode?????????&?!!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (const GGS_string constinArgument_inSourceFileName,
                                                                                           const GGS_programKind constinArgument_inProgramKind,
                                                                                           const GGS_uint constinArgument_inBootloaderReservedROMsize,
                                                                                           const GGS_uint constinArgument_inROMsize,
                                                                                           const GGS_string constinArgument_inProcessorName,
                                                                                           const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                                           const GGS_registerTable constinArgument_inAllRegisters,
                                                                                           const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                           const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                           const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                                                                           GGS_uint & outArgument_outUsedROMsize,
                                                                                           GGS_generatedCodeMap & outArgument_outGeneratedCodeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  outArgument_outGeneratedCodeMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CODE GENERATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 222)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Code generation:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 223)) ;
      }
    }
  }
  GGS_symbolTableForRelativesResolution var_symbolTable_7623 ;
  GGS_uint var_firstDataAddress_7650 ;
  {
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inGeneratedBlockList, GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE), var_symbolTable_7623, var_firstDataAddress_7650, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 226)) ;
  }
  GGS_uint var_dataAddress_7741 = var_firstDataAddress_7650 ;
  GGS_pic_31__38__5F_dataAddressMap var_dataAddressMap_7800 = GGS_pic_31__38__5F_dataAddressMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38__5F_dataMap enumerator_7839 (constinArgument_inDataMap) ;
  while (enumerator_7839.hasCurrentObject ()) {
    {
    var_dataAddressMap_7800.setter_insertKey (enumerator_7839.current_lkey (HERE), var_dataAddress_7741, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 236)) ;
    }
    var_dataAddress_7741 = var_dataAddress_7741.add_operation (enumerator_7839.current_mData (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 237)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 237)) ;
    enumerator_7839.gotoNextObject () ;
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 240)) ;
  }
  GGS_string var_assemblyString_8048 = GGS_string::makeEmptyString () ;
  GGS_bigint var_relocatableCodeSize_8074 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 242)) ;
  GGS_bigint var_blockStartAddress_8104 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 243)) ;
  outArgument_outGeneratedCodeMap = GGS_generatedCodeMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_8161 (constinArgument_inGeneratedBlockList) ;
  GGS_uint index_8156 (uint32_t (0)) ;
  while (enumerator_8161.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_8225 ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::lowerThan, index_8156.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 247)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 247)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_nextBlockLabel_8225 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_8156.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 248)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      var_nextBlockLabel_8225 = GGS_string::makeEmptyString () ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_8161.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 252)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_blockStartAddress_8104 = enumerator_8161.current_mBlock (HERE).readProperty_mAddress ().getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 253)) ;
        {
        routine_setEmitAddress_3F_ (var_blockStartAddress_8104.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 254)) ;
        }
      }
    }
    extensionMethod_generateCodeForBlock (enumerator_8161.current_mBlock (HERE), var_symbolTable_7623, var_dataAddressMap_7800, var_blockStartAddress_8104.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 259)), var_nextBlockLabel_8225, ioArgument_ioListFileContents, var_assemblyString_8048, outArgument_outGeneratedCodeMap, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 256)) ;
    GGS_uint var_blockSize_8793 = extensionGetter_blockSize (enumerator_8161.current_mBlock (HERE), var_nextBlockLabel_8225, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 265)) ;
    var_blockStartAddress_8104 = var_blockStartAddress_8104.add_operation (var_blockSize_8793.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 266)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_8161.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 267)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_relocatableCodeSize_8074 = var_relocatableCodeSize_8074.add_operation (var_blockSize_8793.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 268)) ;
      }
    }
    enumerator_8161.gotoNextObject () ;
    index_8156.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 245)) ;
  }
  var_dataAddress_7741 = var_firstDataAddress_7650 ;
  UpEnumerator_pic_31__38__5F_dataMap enumerator_9077 (constinArgument_inDataMap) ;
  const bool bool_4 = true ;
  if (enumerator_9077.hasCurrentObject () && bool_4) {
    {
    routine_setEmitAddress_3F_ (var_dataAddress_7741, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 275)) ;
    }
    {
    GGS_codeList temp_5 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    temp_5.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("    ORG ").add_operation (var_dataAddress_7741.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279)) ;
    temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("    ORG ").add_operation (var_dataAddress_7741.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279)) ;
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7741, temp_5, temp_6, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 280)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 276)) ;
    }
    var_assemblyString_8048.plusAssignOperation(GGS_string ("    ORG ").add_operation (var_dataAddress_7741.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)) ;
    while (enumerator_9077.hasCurrentObject () && bool_4) {
      {
      GGS_codeList temp_7 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      temp_7.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("_data_").add_operation (enumerator_9077.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)) ;
      temp_8.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("_data_").add_operation (enumerator_9077.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)) ;
      routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7741, temp_7, temp_8, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 290)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 286)) ;
      }
      var_assemblyString_8048.plusAssignOperation(GGS_string ("_data_").add_operation (enumerator_9077.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)) ;
      UpEnumerator_uintlist enumerator_9666 (enumerator_9077.current_mData (HERE)) ;
      while (enumerator_9666.hasCurrentObject ()) {
        var_assemblyString_8048.plusAssignOperation(GGS_string ("    DW ").add_operation (enumerator_9666.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)) ;
        {
        routine_emitCode_3F_ (enumerator_9666.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 297)) ;
        }
        {
        GGS_codeList temp_9 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_10.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (enumerator_9666.current_mValue (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_9.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (GGS_string ("    DW ").add_operation (enumerator_9666.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)), temp_10, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        GGS_stringlist temp_11 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301)) ;
        temp_11.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("    DW ").add_operation (enumerator_9666.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301)) ;
        routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7741, temp_9, temp_11, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 302)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 298)) ;
        }
        var_dataAddress_7741 = var_dataAddress_7741.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 306)) ;
        enumerator_9666.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 308)) ;
      enumerator_9077.gotoNextObject () ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 310)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      routine_print_3F_ (GGS_string ("  Relocatable code size: ").add_operation (var_relocatableCodeSize_8074.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)).add_operation (GGS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)) ;
      }
    }
  }
  outArgument_outUsedROMsize = var_dataAddress_7741 ;
  switch (constinArgument_inProgramKind.enumValue ()) {
  case GGS_programKind::Enumeration::invalid:
    break ;
  case GGS_programKind::Enumeration::enum_regularProgram:
  case GGS_programKind::Enumeration::enum_userProgram:
    {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::greaterThan, outArgument_outUsedROMsize.objectCompare (constinArgument_inROMsize)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)), GGS_string ("the program uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (GGS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)) ;
        }
      }
    }
    break ;
  case GGS_programKind::Enumeration::enum_bootloaderProgram:
    {
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::greaterThan, outArgument_outUsedROMsize.objectCompare (constinArgument_inBootloaderReservedROMsize)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)), GGS_string ("the bootloader uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (GGS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (constinArgument_inBootloaderReservedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)), fixItArray16  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)) ;
        }
      }
    }
    break ;
  }
  UpEnumerator_actualConfigurationMap enumerator_10845 (constinArgument_inActualConfigurationMap) ;
  while (enumerator_10845.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_10845.current_mRegisterAddress (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 328)) ;
    }
    {
    routine_emitByte_3F_ (enumerator_10845.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 329)) ;
    }
    enumerator_10845.gotoNextObject () ;
  }
  GGS_string var_contents_11025 ;
  {
  routine_getGeneratedContents_21_ (var_contents_11025, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 332)) ;
  }
  GGS_string var_destinationFile_11041 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 333)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 333)) ;
  GGS_bool joker_11171 ; // Joker input parameter
  var_contents_11025.method_writeToFileWhenDifferentContents (var_destinationFile_11041, joker_11171, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 334)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (gOption_piccoloOptions_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_string var_baseName_11273 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("ipic18_code_generation.galgas", 337)).getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 337)) ;
      GGS_string var_cContents_11399 ;
      {
      routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_11273, var_cContents_11399, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 338)) ;
      }
      var_destinationFile_11041 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 339)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 339)) ;
      GGS_bool joker_11545 ; // Joker input parameter
      var_cContents_11399.method_writeToFileWhenDifferentContents (var_destinationFile_11041, joker_11545, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 340)) ;
      GGS_string var_hContents_11595 ;
      {
      routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_11273, var_hContents_11595, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 341)) ;
      }
      var_destinationFile_11041 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 342)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 342)) ;
      GGS_bool joker_11741 ; // Joker input parameter
      var_hContents_11595.method_writeToFileWhenDifferentContents (var_destinationFile_11041, joker_11741, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 343)) ;
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (gOption_piccoloOptions_generateAssembly.readProperty_value ()).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_code_generation.galgas", 346)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 346)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      {
      routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (constinArgument_inSourceFileName, constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inAllRegisters, constinArgument_inActualConfigurationMap, var_assemblyString_8048, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 347)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18GenerateAssemblyFile??????'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inSourceFileName,
                                                                      const GGS_string constinArgument_inProcessorName,
                                                                      const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                      const GGS_registerTable constinArgument_inAllRegisters,
                                                                      const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                      const GGS_string constinArgument_inAssemblyCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_assemblyString_12763 = GGS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 371)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 371)) ;
  var_assemblyString_12763.plusAssignOperation(GGS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 373)) ;
  var_assemblyString_12763.plusAssignOperation(constinArgument_inAssemblyCode, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 374)) ;
  var_assemblyString_12763.plusAssignOperation(GGS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 376)) ;
  UpEnumerator_registerTable enumerator_13012 (constinArgument_inPredefinedRegisters) ;
  while (enumerator_13012.hasCurrentObject ()) {
    GGS_uint var_firstRegister_13087 ;
    enumerator_13012.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13087, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)) ;
    var_assemblyString_12763.plusAssignOperation(enumerator_13012.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (var_firstRegister_13087.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)) ;
    enumerator_13012.gotoNextObject () ;
  }
  var_assemblyString_12763.plusAssignOperation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 381)) ;
  var_assemblyString_12763.plusAssignOperation(GGS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 383)) ;
  UpEnumerator_registerTable enumerator_13349 (constinArgument_inAllRegisters) ;
  while (enumerator_13349.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_13349.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 385)).operator_not (SOURCE_FILE ("ipic18_code_generation.galgas", 385)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_firstRegister_13479 ;
        enumerator_13349.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13479, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)) ;
        var_assemblyString_12763.plusAssignOperation(enumerator_13349.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (var_firstRegister_13479.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)) ;
      }
    }
    enumerator_13349.gotoNextObject () ;
  }
  var_assemblyString_12763.plusAssignOperation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 390)) ;
  var_assemblyString_12763.plusAssignOperation(GGS_string (";--- Piccolo defined symbols\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 392)) ;
  var_assemblyString_12763.plusAssignOperation(GGS_string ("W EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 393)) ;
  var_assemblyString_12763.plusAssignOperation(GGS_string ("FAST EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 394)) ;
  var_assemblyString_12763.plusAssignOperation(GGS_string ("BSR_ACCESS EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 395)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 397)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_assemblyString_12763.plusAssignOperation(GGS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 398)) ;
      UpEnumerator_actualConfigurationMap enumerator_13982 (constinArgument_inActualConfigurationMap) ;
      while (enumerator_13982.hasCurrentObject ()) {
        var_assemblyString_12763.plusAssignOperation(GGS_string ("  __config ").add_operation (enumerator_13982.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (enumerator_13982.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)) ;
        enumerator_13982.gotoNextObject () ;
      }
    }
  }
  var_assemblyString_12763.plusAssignOperation(GGS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 404)) ;
  var_assemblyString_12763.plusAssignOperation(GGS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 405)) ;
  GGS_string var_asmDestinationFile_14325 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 407)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 407)) ;
  GGS_bool joker_14466 ; // Joker input parameter
  var_assemblyString_12763.method_writeToFileWhenDifferentContents (var_asmDestinationFile_14325, joker_14466, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 408)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_PAGE setCurrentAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentWordAdress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioCurrentWordAdress = temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 27)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL isLABEL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::getter_isLABEL (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GGS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE isLABEL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_isLABEL (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GGS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE isLABEL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_isLABEL (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GGS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL isNULL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_NULL::getter_isNULL (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GGS_bool (true) ;
//---
  return result_outIsNULL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GGS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_GOTO nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_GOTO::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_JUMP::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  result_outIsReachable = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 126)))) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_GOTO enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 143)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JUMP enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 150)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_CALL enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 157)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JSR enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_LABEL defineLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GGS_baselineSymbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GGS_uint constinArgument_inLineIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 191)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                  const GGS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                  GGS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GGS_uint var_currentAddress_7916 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_8080 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 205)).isValid ()) {
    uint32_t variant_8096 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 205)).uintValue () ;
    bool loop_8096 = true ;
    while (loop_8096) {
      loop_8096 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7916.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8080.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).isValid () ;
      if (loop_8096) {
        loop_8096 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7916.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8080.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).boolValue () ;
      }
      if (loop_8096 && (0 == variant_8096)) {
        loop_8096 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 205)) ;
      }
      if (loop_8096) {
        variant_8096 -= 1 ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_baseline_5F_intermediate_5F_actualInstruction var_instr_8228 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7916, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) ;
          if (nullptr == var_instr_8228.ptr ()) {
            test_0 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8228 ;
            var_found_8080 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          var_currentAddress_7916.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 214)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                             const GGS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                             GGS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                             GGS_stringset & outArgument_outReachedLabelSet,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GGS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 226)) ;
  GGS_uint var_currentAddress_8987 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_9151 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid ()) {
    uint32_t variant_9167 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 232)).uintValue () ;
    bool loop_9167 = true ;
    while (loop_9167) {
      loop_9167 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_8987.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 233)))).operator_and (var_found_9151.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 233)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 233)).isValid () ;
      if (loop_9167) {
        loop_9167 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_8987.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 233)))).operator_and (var_found_9151.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 233)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 233)).boolValue () ;
      }
      if (loop_9167 && (0 == variant_9167)) {
        loop_9167 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 232)) ;
      }
      if (loop_9167) {
        variant_9167 -= 1 ;
        GGS_baseline_5F_intermediate_5F_instruction var_instruction_9296 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8987, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 235)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_baseline_5F_intermediate_5F_actualInstruction var_instr_9386 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (var_instruction_9296.ptr ())) ;
          if (nullptr == var_instr_9386.ptr ()) {
            test_0 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_9386 ;
            var_found_9151 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE var_instr_9659 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (var_instruction_9296.ptr ())) ;
            if (nullptr == var_instr_9659.ptr ()) {
              test_1 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_9659 ;
              var_found_9151 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL var_instr_9845 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_9296.ptr ())) ;
              if (nullptr == var_instr_9845.ptr ()) {
                test_2 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_9845 ;
                outArgument_outReachedLabelSet.plusPlusAssignOperation (var_instr_9845.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 248)) ;
                var_currentAddress_8987.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 249)) ;
              }
            }
            if (GalgasBool::boolFalse == test_2) {
              var_currentAddress_8987.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 251)) ;
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_baseline_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations_26__26_ (GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)) ;
  GGS_baselineSymbolTableForOptimizations var_symbolTable_21861 = GGS_baselineSymbolTableForOptimizations::init (inCompiler COMMA_HERE) ;
  UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21921 (ioArgument_ioGeneratedInstructionList) ;
  GGS_uint index_21916 (uint32_t (0)) ;
  while (enumerator_21921.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_21921.current_mInstruction (HERE).ptr (), var_symbolTable_21861, index_21916, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
    enumerator_21921.gotoNextObject () ;
    index_21916.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 538)) ;
  }
  GGS_bool var_optimizationsDone_22112 = GGS_bool (true) ;
  GGS_uint var_iteration_22149 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 544)).isValid ()) {
    uint32_t variant_22165 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 544)).uintValue () ;
    bool loop_22165 = true ;
    while (loop_22165) {
      loop_22165 = var_optimizationsDone_22112.isValid () ;
      if (loop_22165) {
        loop_22165 = var_optimizationsDone_22112.boolValue () ;
      }
      if (loop_22165 && (0 == variant_22165)) {
        loop_22165 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
      }
      if (loop_22165) {
        variant_22165 -= 1 ;
        var_optimizationsDone_22112 = GGS_bool (false) ;
        var_iteration_22149.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Pass ").add_operation (var_iteration_22149.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)) ;
        UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22384 (ioArgument_ioGeneratedInstructionList) ;
        GGS_uint index_22379 (uint32_t (0)) ;
        while (enumerator_22384.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE var_inst_22450 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (enumerator_22384.current_mInstruction (HERE).ptr ())) ;
            if (nullptr == var_inst_22450.ptr ()) {
              test_0 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_0) {
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) var_inst_22450.ptr (), index_22379, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22112, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 555)) ;
            }
          }
          if (GalgasBool::boolFalse == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              GGS_baseline_5F_intermediate_5F_GOTO var_inst_22739 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (enumerator_22384.current_mInstruction (HERE).ptr ())) ;
              if (nullptr == var_inst_22739.ptr ()) {
                test_1 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_1) {
                callExtensionMethod_optimizeGOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_inst_22739.ptr (), var_symbolTable_21861, index_22379, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22112, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 558)) ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                GGS_baseline_5F_intermediate_5F_JUMP var_inst_22976 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JUMP *> (enumerator_22384.current_mInstruction (HERE).ptr ())) ;
                if (nullptr == var_inst_22976.ptr ()) {
                  test_2 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_2) {
                  callExtensionMethod_optimizeJUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) var_inst_22976.ptr (), var_symbolTable_21861, index_22379, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22112, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 561)) ;
                }
              }
              if (GalgasBool::boolFalse == test_2) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  GGS_baseline_5F_intermediate_5F_CALL var_inst_23213 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_CALL *> (enumerator_22384.current_mInstruction (HERE).ptr ())) ;
                  if (nullptr == var_inst_23213.ptr ()) {
                    test_3 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_3) {
                    callExtensionMethod_optimizeCALL ((cPtr_baseline_5F_intermediate_5F_CALL *) var_inst_23213.ptr (), var_symbolTable_21861, index_22379, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22112, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_3) {
                  GalgasBool test_4 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_4) {
                    GGS_baseline_5F_intermediate_5F_JSR var_inst_23450 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JSR *> (enumerator_22384.current_mInstruction (HERE).ptr ())) ;
                    if (nullptr == var_inst_23450.ptr ()) {
                      test_4 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_4) {
                      callExtensionMethod_optimizeJSR ((cPtr_baseline_5F_intermediate_5F_JSR *) var_inst_23450.ptr (), var_symbolTable_21861, index_22379, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22112, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 567)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_4) {
                    GalgasBool test_5 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_5) {
                      GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition var_inst_23684 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (enumerator_22384.current_mInstruction (HERE).ptr ())) ;
                      if (nullptr == var_inst_23684.ptr ()) {
                        test_5 = GalgasBool::boolFalse ;
                      }
                      if (GalgasBool::boolTrue == test_5) {
                        callExtensionMethod_optimizeTestDecInc ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) var_inst_23684.ptr (), var_symbolTable_21861, index_22379, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22112, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 570)) ;
                      }
                    }
                  }
                }
              }
            }
          }
          enumerator_22384.gotoNextObject () ;
          index_22379.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 551)) ;
        }
        GGS_stringset var_referencedLabels_24027 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24068 (ioArgument_ioGeneratedInstructionList) ;
        while (enumerator_24068.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24068.current_mInstruction (HERE).ptr (), var_referencedLabels_24027, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
          enumerator_24068.gotoNextObject () ;
        }
        UpEnumerator_baselineSymbolTableForOptimizations enumerator_24199 (var_symbolTable_21861) ;
        while (enumerator_24199.hasCurrentObject ()) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_referencedLabels_24027.getter_hasKey (enumerator_24199.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              GGS_uint var_definitionLine_24326 ;
              var_symbolTable_21861.method_searchKey (enumerator_24199.current_lkey (HERE), var_definitionLine_24326, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (var_definitionLine_24326.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (GGS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (enumerator_24199.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (GGS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), var_definitionLine_24326, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 583)) ;
              }
              {
              GGS_uint joker_24611 ; // Joker input parameter
              var_symbolTable_21861.setter_removeKey (enumerator_24199.current_lkey (HERE), joker_24611, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
              }
            }
          }
          enumerator_24199.gotoNextObject () ;
        }
        GGS_bool var_reachable_24676 = GGS_bool (true) ;
        GGS_bool var_skippingInstruction_24707 = GGS_bool (false) ;
        GGS_bool var_previousWasSkippingInstruction_24749 = GGS_bool (false) ;
        UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24797 (ioArgument_ioGeneratedInstructionList) ;
        GGS_uint index_24792 (uint32_t (0)) ;
        while (enumerator_24797.hasCurrentObject ()) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = var_reachable_24676.operator_or (var_previousWasSkippingInstruction_24749 COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 592)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              var_reachable_24676 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24797.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 593)) ;
              var_previousWasSkippingInstruction_24749 = var_skippingInstruction_24707 ;
              var_skippingInstruction_24707 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24797.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GGS_bool var_isLABEL_25132 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24797.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = var_isLABEL_25132.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 598)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24797.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 598)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 598)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 598)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (index_24792.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)).add_operation (GGS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), index_24792, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 600)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_8) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = var_isLABEL_25132.boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  var_reachable_24676 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24797.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 602)) ;
                  var_previousWasSkippingInstruction_24749 = GGS_bool (false) ;
                  var_skippingInstruction_24707 = GGS_bool (false) ;
                }
              }
            }
          }
          enumerator_24797.gotoNextObject () ;
          index_24792.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_optimizationsDone_22112.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 608)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No optimization\n\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 609)) ;
            GGS_uint var_currentAddress_25749 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_25779 (ioArgument_ioGeneratedInstructionList) ;
            while (enumerator_25779.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_25779.current_mInstruction (HERE).ptr (), var_currentAddress_25749, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 613)) ;
              enumerator_25779.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Minimum code size: ").add_operation (var_currentAddress_25749.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)).add_operation (GGS_string (" words\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::getter_isLABELorORG (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GGS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_isLABELorORG (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GGS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL isNULL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_NULL::getter_isNULL (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GGS_bool (true) ;
//---
  return result_outIsNULL ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JUMP enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 53)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_GOTO enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 59)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_CALL enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 65)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JSR enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 71)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 77)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GGS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_JUMP::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


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
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabel'
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
        variant_7007 -= 1 ;
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
          var_currentAddress_6827.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 178)) ;
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
        variant_8078 -= 1 ;
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
                outArgument_outReachedLabelSet.plusPlusAssignOperation (var_instr_8754.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 212)) ;
                var_currentAddress_7898.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 213)) ;
              }
            }
            if (GalgasBool::boolFalse == test_2) {
              var_currentAddress_7898.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 215)) ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)) ;
  GGS_symbolTableForOptimizations var_symbolTable_23756 = GGS_symbolTableForOptimizations::init (inCompiler COMMA_HERE) ;
  UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_23808 (ioArgument_ioGeneratedInstructionList) ;
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
        variant_24052 -= 1 ;
        var_optimizationsDone_23999 = GGS_bool (false) ;
        var_iteration_24036.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 556)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Pass ").add_operation (var_iteration_24036.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
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
              variant_24282 -= 1 ;
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
        UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26213 (ioArgument_ioGeneratedInstructionList) ;
        while (enumerator_26213.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26213.current_mInstruction (HERE).ptr (), var_referencedLabels_26172, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 587)) ;
          enumerator_26213.gotoNextObject () ;
        }
        UpEnumerator_symbolTableForOptimizations enumerator_26346 (var_symbolTable_23756) ;
        while (enumerator_26346.hasCurrentObject ()) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_referencedLabels_26172.getter_hasKey (enumerator_26346.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 590)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GGS_uint var_definitionLine_26473 ;
              GGS_bool joker_26488 ; // Joker input parameter
              var_symbolTable_23756.method_searchKey (enumerator_26346.current_lkey (HERE), var_definitionLine_26473, joker_26488, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (var_definitionLine_26473.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GGS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (enumerator_26346.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GGS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)) ;
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
        UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26950 (ioArgument_ioGeneratedInstructionList) ;
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
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (index_26945.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)).add_operation (GGS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)) ;
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
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No optimization\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 619)) ;
            GGS_uint var_currentAddress_27908 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_27938 (ioArgument_ioGeneratedInstructionList) ;
            while (enumerator_27938.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27938.current_mInstruction (HERE).ptr (), var_currentAddress_27908, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 623)) ;
              enumerator_27938.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Minimum code size: ").add_operation (var_currentAddress_27908.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)).add_operation (GGS_string (" instructions\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleBaselineInstructionList?????&&&!??&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (const GGS_uint constinArgument_inCurrentPage,
                                                                                            const GGS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                                                            const GGS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                            GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                            GGS_bool & outArgument_outContinuesInSequence,
                                                                                            const GGS_routineKind constinArgument_inRoutineKind,
                                                                                            const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GGS_bool (true) ;
  UpEnumerator_baseline_5F_instructionList enumerator_2484 (constinArgument_inInstructionList) ;
  GGS_uint index_2479 (uint32_t (0)) ;
  while (enumerator_2484.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 74)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2484.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 75)) ;
        outArgument_outContinuesInSequence = GGS_bool (true) ;
      }
    }
    GGS_bool temp_2 ;
    const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, index_2479.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)).objectCompare (constinArgument_inInstructionList.getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = constinArgument_inLastInstructionShouldReturn ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) enumerator_2484.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_2, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 78)) ;
    enumerator_2484.gotoNextObject () ;
    index_2479.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_WO_OPERAND build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                                 const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                 const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                 const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("the last routine instruction should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 124)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::init_21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 126)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'acceptableTRISoperand'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_acceptableTRISoperand (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_set ; // Returned variable
  result_set = GGS_stringset::init (inCompiler COMMA_HERE) ;
  result_set.plusPlusAssignOperation (GGS_string ("GPIO")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 133)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTA")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 134)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTB")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 135)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTC")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 136)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTD")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 137)) ;
  result_set.plusPlusAssignOperation (GGS_string ("PORTE")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 138)) ;
//---
  return result_set ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_acceptableTRISoperand = false ;
static GGS_stringset gOnceFunctionResult_acceptableTRISoperand ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_acceptableTRISoperand (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptableTRISoperand) {
    gOnceFunctionResult_acceptableTRISoperand = onceFunction_acceptableTRISoperand (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptableTRISoperand = true ;
  }
  return gOnceFunctionResult_acceptableTRISoperand ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_acceptableTRISoperand (void) {
  gOnceFunctionResult_acceptableTRISoperand.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_acceptableTRISoperand (nullptr,
                                                                 releaseOnceFunctionResult_acceptableTRISoperand) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_acceptableTRISoperand [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_acceptableTRISoperand (Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_acceptableTRISoperand (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_acceptableTRISoperand ("acceptableTRISoperand",
                                                                       functionWithGenericHeader_acceptableTRISoperand,
                                                                       & kTypeDescriptor_GALGAS_stringset,
                                                                       0,
                                                                       functionArgs_acceptableTRISoperand) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_TRIS build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_TRIS::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                        const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                        const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                        GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_TRIS temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction but should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 156)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_baseline_5F_instruction_5F_TRIS temp_4 = this ;
    test_3 = function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).getter_hasKey (temp_4.readProperty_mOperand ().readProperty_string () COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_string var_s_5837 = GGS_string::makeEmptyString () ;
      UpEnumerator_stringset enumerator_5853 (function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 161))) ;
      while (enumerator_5853.hasCurrentObject ()) {
        var_s_5837.plusAssignOperation(enumerator_5853.current_key (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 162)) ;
        enumerator_5853.gotoNextObject () ;
        if (enumerator_5853.hasCurrentObject ()) {
          var_s_5837.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 163)) ;
        }
      }
      const GGS_baseline_5F_instruction_5F_TRIS temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("invalid TRIS operand; accepted operand are: ").add_operation (var_s_5837, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)), fixItArray6  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)) ;
    }
  }
  GGS_uintlist var_registerAddressList_6096 ;
  GGS_registerProtection var_protection_6125 ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_7 = this ;
  GGS_uint joker_6116_3 ; // Joker input parameter
  GGS_bitSliceTable joker_6116_2 ; // Joker input parameter
  GGS_string joker_6116_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mOperand (), var_registerAddressList_6096, joker_6116_3, joker_6116_2, joker_6116_1, var_protection_6125, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 168)) ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mOperand (), GGS_bool (true), var_protection_6125, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 169)) ;
  GGS_uint var_opcode_6255 ;
  var_registerAddressList_6096.method_first (var_opcode_6255, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 170)) ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_9 = this ;
  const GGS_baseline_5F_instruction_5F_TRIS temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_TRIS::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mOperand (), var_opcode_6255, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 172)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_MNOP build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_MNOP::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                        const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                        const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                        GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                        GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                        const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_MNOP temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray2  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 190)) ;
    }
  }
  const GGS_baseline_5F_instruction_5F_MNOP temp_3 = this ;
  const GGS_baseline_5F_instruction_5F_MNOP temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 192)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_literalOperation build_baseline_intermediate_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GGS_uint /* constinArgument_inCurrentPage */,
                                                                                                                    const GGS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                    const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                    const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                    GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                    GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                    GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                                    GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                    const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                    const GGS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_1 = this ;
    test_0 = constinArgument_inLastInstructionShouldReturn.operator_and (GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLiteralInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 209)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("this instruction is the last routine instruction and should be MOVLW"), fixItArray3  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 210)) ;
    }
  }
  GGS_sint_36__34_ var_immediatValue_8294 ;
  const GGS_baseline_5F_instruction_5F_literalOperation temp_4 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_4.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_immediatValue_8294, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_immediatValue_8294.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_immediatValue_8294.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 214)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_immediatValue_8294.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)).add_operation (GGS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)), fixItArray7  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 221)), var_immediatValue_8294.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 222)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 219)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_10 = this ;
    const GGS_baseline_5F_instruction_5F_literalOperation temp_11 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mLiteralInstruction (), var_immediatValue_8294.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 227)).getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 227)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 224)) ;
  }
}

