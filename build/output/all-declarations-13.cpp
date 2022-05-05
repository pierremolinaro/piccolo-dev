#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                              GALGAS_midrange_5F_symbolTableForConvertingRelatives & ioArgument_ioRoutineSymbolTable,
                                                                                              GALGAS_uint & ioArgument_ioAddress,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 28)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_defineLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                            GALGAS_uint & ioArgument_ioAddress,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, ioArgument_ioAddress.objectCompare (temp_1.readProperty_mOrigin ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)), GALGAS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)).add_operation (GALGAS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (temp_2.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_4 = object ;
  ioArgument_ioAddress = temp_4.readProperty_mOrigin () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_defineLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction defineLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_actualInstruction * object = (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = object ;
  GALGAS_uint var_nextAddress_1942 = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_nextAddress_1942.operator_xor (ioArgument_ioAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Routine too long, crosses page boundary at this instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 52)) ;
    }
  }
  ioArgument_ioAddress = var_nextAddress_1942 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (void) {
  enterExtensionMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                             extensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_defineLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL compute'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_NULL_compute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_compute (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_compute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction compute'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_compute (defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_compute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG compute'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_compute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP compute'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_uint var_targetAddress_4693 ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_4693, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 116)) ;
  GALGAS_uint var_flags_4734 = ioArgument_ioAddress.operator_xor (var_targetAddress_4693 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 118)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__4799 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_flags_4734.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 120)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__4799 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_targetAddress_4693.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 122)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    test_3 = GALGAS_bool (kIsEqual, var_flags_4734.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__5080 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 130)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_targetAddress_4693.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 131)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_6 = object ;
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_7 = object ;
    test_5 = GALGAS_bool (kIsNotEqual, var_bit_31__31__4799.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32__5080.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 137)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_midrange_5F_intermediate_5F_JUMP temp_8 = object ;
      const GALGAS_midrange_5F_intermediate_5F_JUMP temp_9 = object ;
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

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_JUMP_compute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_compute (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_compute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR compute'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_uint var_targetAddress_6244 ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_6244, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 159)) ;
  GALGAS_uint var_flags_6285 = ioArgument_ioAddress.operator_xor (var_targetAddress_6244 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 161)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__6350 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_flags_6285.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__6350 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_targetAddress_6244.operator_and (GALGAS_uint ((uint32_t) 2048U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    test_3 = GALGAS_bool (kIsEqual, var_flags_6285.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__6631 = GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 173)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_targetAddress_6244.operator_and (GALGAS_uint ((uint32_t) 4096U) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_6 = object ;
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_7 = object ;
    test_5 = GALGAS_bool (kIsNotEqual, var_bit_31__31__6350.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GALGAS_bool (kIsNotEqual, var_bit_31__32__6631.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 180)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_midrange_5F_intermediate_5F_JSR temp_8 = object ;
      const GALGAS_midrange_5F_intermediate_5F_JSR temp_9 = object ;
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

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_JSR_compute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_compute (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_compute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL compute'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_uint var_targetAddress_7798 ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_7798, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 201)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_targetAddress_7798.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = object ;
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (var_targetAddress_7798.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 205)), fixItArray4  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (void) {
  enterExtensionMethod_compute (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_compute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'midrange_compute_JSR_JUMP'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("COMPUTE JSR and JUMP").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)) ;
  GALGAS_bool var_JUMP_5F_or_5F_JSR_5F_fixed_13160 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_13189 = GALGAS_uint ((uint32_t) 0U) ;
  if (ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).isValid ()) {
    uint32_t variant_13200 = ioArgument_ioGeneratedInstructionList.getter_length (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).uintValue () ;
    bool loop_13200 = true ;
    while (loop_13200) {
      loop_13200 = var_JUMP_5F_or_5F_JSR_5F_fixed_13160.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).isValid () ;
      if (loop_13200) {
        loop_13200 = var_JUMP_5F_or_5F_JSR_5F_fixed_13160.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).boolValue () ;
      }
      if (loop_13200 && (0 == variant_13200)) {
        loop_13200 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)) ;
      }
      if (loop_13200) {
        variant_13200 -- ;
        var_JUMP_5F_or_5F_JSR_5F_fixed_13160 = GALGAS_bool (false) ;
        var_iteration_13189.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_13189.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)) ;
        GALGAS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable_13490 = GALGAS_midrange_5F_symbolTableForConvertingRelatives::constructor_emptyMap (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 327)) ;
        GALGAS_uint var_currentAddress_13575 = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13601 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        while (enumerator_13601.hasCurrentObject ()) {
          callExtensionMethod_defineLabelAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13601.current_mInstruction (HERE).ptr (), var_symbolTable_13490, var_currentAddress_13575, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 330)) ;
          enumerator_13601.gotoNextObject () ;
        }
        GALGAS_uint var_lastAddressForFirstPass_13755 = var_currentAddress_13575 ;
        var_currentAddress_13575 = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13880 (ioArgument_ioGeneratedInstructionList, kENUMERATION_UP) ;
        GALGAS_uint index_13866 ((uint32_t) 0) ;
        while (enumerator_13880.hasCurrentObject ()) {
          callExtensionMethod_compute ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13880.current_mInstruction (HERE).ptr (), var_symbolTable_13490, var_currentAddress_13575, var_JUMP_5F_or_5F_JSR_5F_fixed_13160, ioArgument_ioGeneratedInstructionList, index_13866, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 336)) ;
          var_currentAddress_13575 = var_currentAddress_13575.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13880.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 337)) ;
          enumerator_13880.gotoNextObject () ;
          index_13866.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 335)) ;
        }
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_13755.objectCompare (var_currentAddress_13575)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_13575.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (GALGAS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (var_lastAddressForFirstPass_13755.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 341)).add_operation (GALGAS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_JUMP_5F_or_5F_JSR_5F_fixed_13160.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).boolEnum () ;
          if (kBoolTrue == test_2) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No JUMP, no JSR to fix\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Program size: ").add_operation (var_currentAddress_13575.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)).add_operation (GALGAS_string (" instructions\n"
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

static void extensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                GALGAS_string & /* ioArgument_ioString */,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         GALGAS_string & ioArgument_ioString,
                                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                           GALGAS_string & ioArgument_ioString,
                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioString.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_string & ioArgument_ioString,
                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = object ;
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

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_string & ioArgument_ioString,
                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 56)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      GALGAS_string & ioArgument_ioString,
                                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 64)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 66)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 68)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 72)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                            GALGAS_string & ioArgument_ioString,
                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 81)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     GALGAS_string & ioArgument_ioString,
                                                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = object ;
  ioArgument_ioString.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = object ;
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
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = object ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_localLabel_2993 = GALGAS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (var_localLabel_2993, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = object ;
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
      ioArgument_ioString.plusAssign_operation(var_localLabel_2993.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = object ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_8.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = object ;
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
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = object ;
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
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                               GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = object ;
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = object ;
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_2 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = object ;
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
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_4 = object ;
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

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                GALGAS_string & ioArgument_ioString,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                              GALGAS_string & ioArgument_ioString,
                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                GALGAS_string & ioArgument_ioString,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           GALGAS_string & ioArgument_ioString,
                                                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_buildAssemblyCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_string & ioArgument_ioString,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)) ;
    }
  }
  GALGAS_uint var_idx_6972 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = object ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6983 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6983 = true ;
    while (loop_6983) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = object ;
      loop_6983 = GALGAS_bool (kIsStrictInf, var_idx_6972.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6983) {
        loop_6983 = GALGAS_bool (kIsStrictInf, var_idx_6972.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6983 && (0 == variant_6983)) {
        loop_6983 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)) ;
      }
      if (loop_6983) {
        variant_6983 -- ;
        ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx_6972.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (void) {
  enterExtensionMethod_buildAssemblyCode (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_buildAssemblyCode, NULL) ;

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
  GALGAS_uint var_bccLabelIndex_9152 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9176 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_9176.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9176.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_9152, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9176.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  cEnumerator_registerTable enumerator_9421 (constinArgument_inPredefinedRegisters, kENUMERATION_UP) ;
  while (enumerator_9421.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_9479 ;
    enumerator_9421.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9479, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.plusAssign_operation(enumerator_9421.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister_9479.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9421.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  cEnumerator_registerTable enumerator_9773 (constinArgument_inAllRegisters, kENUMERATION_UP) ;
  while (enumerator_9773.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_9773.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_uint var_firstRegister_9886 ;
        enumerator_9773.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9886, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
        outArgument_outAssemblyCode.plusAssign_operation(enumerator_9773.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister_9886.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
      }
    }
    enumerator_9773.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("W EQU 1\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Configuration\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
      cEnumerator_actualConfigurationMap enumerator_10359 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
      while (enumerator_10359.hasCurrentObject ()) {
        outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_10359.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10359.current_mRegisterValue (HERE).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
        enumerator_10359.gotoNextObject () ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 15)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)) ;
  {
  routine_emitCode (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 28)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 29)) ;
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
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 39)) ;
  callExtensionMethod_print ((const cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 41)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                             GALGAS_midrange_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 68)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                            extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                           GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                            extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction enterLabelAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                               GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_actualInstruction * object = (const cPtr_midrange_5F_intermediate_5F_actualInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_actualInstruction) ;
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = object ;
  ioArgument_ioAddress = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (void) {
  enterExtensionMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction.mSlotID,
                                            extensionMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_actualInstruction_enterLabelAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                          const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                          GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_NULL_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                   const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                   const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                   const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                   const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_uint & ioArgument_ioAddress,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG) ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = object ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = object ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = object ;
  routine_setEmitAddress (temp_1.readProperty_mOrigin ().add_operation (temp_2.readProperty_mOrigin (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)) ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_3 = object ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 126)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_ORG_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                       const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                       const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                       const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                       const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                                       GALGAS_uint & ioArgument_ioAddress,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FD) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = object ;
  GALGAS_uint var_code_5768 = extensionGetter_basecode (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 160)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_2 = object ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_5768 = var_code_5768.operator_or (GALGAS_uint ((uint32_t) 128U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 162)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = object ;
  var_code_5768 = var_code_5768.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_4 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_5768, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 165)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FD_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                      const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_F * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_F) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = object ;
  GALGAS_uint var_code_6681 = extensionGetter_baseCode (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 187)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = object ;
  var_code_6681 = var_code_6681.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_2 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_6681, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 189)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                       const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                       const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                       const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                       const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                                       GALGAS_uint & ioArgument_ioAddress,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = object ;
  GALGAS_uint var_code_7504 = extensionGetter_baseCode (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 212)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = object ;
  var_code_7504 = var_code_7504.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = object ;
  var_code_7504 = var_code_7504.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_3 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_7504, ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 215)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_FB_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                                const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code_8163 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_8163 = GALGAS_uint ((uint32_t) 7168U) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_8163 = GALGAS_uint ((uint32_t) 6144U) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = object ;
  var_code_8163 = var_code_8163.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = object ;
  var_code_8163 = var_code_8163.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_4 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_8163, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 236)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_generateBinaryCodeAtAddress, NULL) ;

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
  GALGAS_uint var_code_8695 = GALGAS_uint ((uint32_t) 10240U).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint ((uint32_t) 2047U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  GALGAS_uint var_code_9668 = GALGAS_uint ((uint32_t) 8192U).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint ((uint32_t) 2047U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).operator_and (GALGAS_uint ((uint32_t) 63488U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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

static void extensionMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                          const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                          const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_uint & ioArgument_ioAddress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  GALGAS_stringset var_usedRegisters_10772 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 299)) ;
  GALGAS_uint var_targetAddress_10867 ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_10867, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 300)) ;
  GALGAS_registerExpression var_PCLATH_5F_register_10926 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 302)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_11242 ;
  GALGAS_bitSliceTable joker_11248 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_10926.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 309)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_11242, joker_11248, var_usedRegisters_10772, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 307)) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = object ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).operator_or (var_PCLATH_5F_IPICregisterDescription_11242.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 319)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).operator_or (var_PCLATH_5F_IPICregisterDescription_11242.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 326)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = object ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).operator_or (var_PCLATH_5F_IPICregisterDescription_11242.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 336)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).operator_or (var_PCLATH_5F_IPICregisterDescription_11242.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 343)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_3 = object ;
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_10867, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 352)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_JUMP_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                          const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_uint & ioArgument_ioAddress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  GALGAS_uint var_targetAddress_12819 ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_12819, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 365)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_1 = object ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_2 = object ;
  routine_emit_5F_midrange_5F_GOTOinstruction (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_12819, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 367)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_GOTO_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                         const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  GALGAS_stringset var_usedRegisters_13341 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 379)) ;
  GALGAS_uint var_targetAddress_13441 ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_13441, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 381)) ;
  GALGAS_registerExpression var_PCLATH_5F_register_13500 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 384))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 384)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 386))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 383)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_13823 ;
  GALGAS_bitSliceTable joker_13829 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register_13500.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 390)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_13823, joker_13829, var_usedRegisters_13341, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 388)) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = object ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 400)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 407)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_2 = object ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 417)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 424)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = object ;
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_13441, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 432)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_4 = object ;
  switch (temp_4.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 435)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 442)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_5 = object ;
  switch (temp_5.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 452)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).operator_or (var_PCLATH_5F_IPICregisterDescription_13823.readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 459)) ;
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

static void defineExtensionMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_JSR_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                          const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                          const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_uint & ioArgument_ioAddress,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  GALGAS_uint var_targetAddress_16347 ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_16347, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 479)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_1 = object ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_2 = object ;
  routine_emit_5F_midrange_5F_CALLinstruction (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_16347, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 481)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_CALL_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                               const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_code_16885 ;
  GALGAS_string var_s_16901 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_16885 = GALGAS_uint ((uint32_t) 3840U) ;
      var_s_16901 = GALGAS_string ("INCFSZ") ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_16885 = GALGAS_uint ((uint32_t) 2816U) ;
    var_s_16901 = GALGAS_string ("DECFSZ") ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = object ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_16885 = var_code_16885.operator_or (GALGAS_uint ((uint32_t) 128U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 501)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = object ;
  var_code_16885 = var_code_16885.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = object ;
  var_s_16901.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code_16885, ioArgument_ioAddress, var_s_16901, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 505)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = object ;
    test_6 = temp_7.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = object ;
      routine_emit_5F_midrange_5F_GOTOinstruction (temp_8.readProperty_mInstructionLocation (), ioArgument_ioAddress, GALGAS_string ("$ + 2"), ioArgument_ioAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)) ;
      }
    }
  }
  GALGAS_uint var_targetAddress_17575 ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (temp_9.readProperty_mTargetLabel (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)), var_targetAddress_17575, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_10 = object ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = object ;
  routine_emit_5F_midrange_5F_GOTOinstruction (temp_10.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_11.readProperty_mTargetLabel (), var_targetAddress_17575, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 512)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 100U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 524)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 256U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 536)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_CLRW_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                        const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                        const GALGAS_constantMap /* constinArgument_inConstantMap */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 0U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 548)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_NOP_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 8U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 560)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETURN_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 9U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 572)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_RETFIE_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 99U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 584)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_SLEEP_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                     const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                     const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                     const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                                     const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  GALGAS_uint var_code_21461 = extensionGetter_baseCode (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 611)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  var_code_21461 = var_code_21461.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 612)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code_21461, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 613)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress_22076 ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = object ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_22076, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 625)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_targetAddress_22076.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = object ;
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (var_targetAddress_22076.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), fixItArray4  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)) ;
    }
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_5 = object ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 631)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_pseudo_5F_LABEL_generateBinaryCodeAtAddress, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP generateBinaryCodeAtAddress'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                         const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 644)) ;
    }
  }
  GALGAS_uint var_idx_22931 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = object ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_22942 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_22942 = true ;
    while (loop_22942) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = object ;
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
        routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 0U), ioArgument_ioAddress, GALGAS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 650)) ;
        }
        var_idx_22931.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 651)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (void) {
  enterExtensionMethod_generateBinaryCodeAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                                    extensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress (defineExtensionMethod_midrange_5F_intermediate_5F_instruction_5F_MNOP_generateBinaryCodeAtAddress, NULL) ;

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
  GALGAS_midrange_5F_symbolTable var_symbolTable_23955 = GALGAS_midrange_5F_symbolTable::constructor_emptyMap (SOURCE_FILE ("midrange_build_binary_code.galgas", 671)) ;
  GALGAS_uint var_currentAddress_24016 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24040 (constinArgument_inGeneratedInstructionList, kENUMERATION_UP) ;
  while (enumerator_24040.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24040.current_mInstruction (HERE).ptr (), var_symbolTable_23955, var_currentAddress_24016, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 674)) ;
    enumerator_24040.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_24187 = var_currentAddress_24016 ;
  outArgument_outUsedROMsize = var_currentAddress_24016 ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 682)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 683)) ;
  }
  var_currentAddress_24016 = GALGAS_uint ((uint32_t) 0U) ;
  {
  routine_setEmitAddress (GALGAS_uint ((uint32_t) 0U), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 685)) ;
  }
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24683 (constinArgument_inGeneratedInstructionList, kENUMERATION_UP) ;
  while (enumerator_24683.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24683.current_mInstruction (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, constinArgument_inTotalBankCount, var_symbolTable_23955, ioArgument_ioListFileContents, var_currentAddress_24016, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)) ;
    {
    routine_checkCurrentEmitAddress (var_currentAddress_24016.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 696)) ;
    }
    enumerator_24683.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_lastAddressForFirstPass_24187.objectCompare (var_currentAddress_24016)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_24016.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (var_lastAddressForFirstPass_24187.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 700)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_lastAddressForFirstPass_24187.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24187.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 704)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)) ;
      }
    }
  }
  cEnumerator_actualConfigurationMap enumerator_25611 (constinArgument_inActualConfigurationMap, kENUMERATION_UP) ;
  while (enumerator_25611.hasCurrentObject ()) {
    {
    routine_setEmitAddress (enumerator_25611.current_mRegisterAddress (HERE).add_operation (enumerator_25611.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 709)) ;
    }
    {
    routine_emitCode (enumerator_25611.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)) ;
    }
    enumerator_25611.gotoNextObject () ;
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
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_2510.current_mExpression (HERE).ptr (), var_registerTable_2247, var_constantMap_2171, var_result_2627, var_usedRegisters_2207, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 54)) ;
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
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list (var_piccoloDeviceModel_1256.readProperty_mRomSize ().readProperty_uint ().add_operation (GALGAS_uint ((uint32_t) 2047U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)).divide_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)), var_piccoloDeviceModel_1256.readProperty_mBankCount ().readProperty_uint (), var_constantMap_2171, var_piccoloDeviceModel_1256.readProperty_mSharedBankName (), var_registerTable_2247, constinArgument_inPiccoloModel, var_hasInterrupt_1647, var_generatedInstructionList_3714, var_listFileContents_1125, var_usedRegisters_2207, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 75)) ;
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
    test_24 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 132)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 132)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations (var_generatedInstructionList_3714, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 133)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 136)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP (var_generatedInstructionList_3714, var_listFileContents_1125, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 137)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 141)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
          var_verboseMessage_7716.plusAssign_operation(var_usedROMsize_6809.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).divide_operation (var_piccoloDeviceModel_1256.readProperty_mRomSize ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 170)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
          cEnumerator_ramBankTable enumerator_8027 (var_ramBank_2965, kENUMERATION_UP) ;
          while (enumerator_8027.hasCurrentObject ()) {
            GALGAS_uint var_bankSize_8070 = enumerator_8027.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_8027.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)) ;
            GALGAS_uint var_usedSize_8135 = enumerator_8027.current_mFirstFreeAddress (HERE).substract_operation (enumerator_8027.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)) ;
            var_verboseMessage_7716.plusAssign_operation(GALGAS_string ("  Bank '").add_operation (enumerator_8027.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)).add_operation (GALGAS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)) ;
            var_verboseMessage_7716.plusAssign_operation(var_usedSize_8135.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 175)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)) ;
            var_verboseMessage_7716.plusAssign_operation(var_bankSize_8070.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 176)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)) ;
            var_verboseMessage_7716.plusAssign_operation(var_usedSize_8135.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).divide_operation (var_bankSize_8070, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 177)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)) ;
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
          var_accessBankSplitOffset_1052 = GALGAS_uint ((uint32_t) 96U) ;
        }
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1052 = GALGAS_uint ((uint32_t) 128U) ;
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
      var_bootloaderReservedROMsize_1568 = GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49))  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)) ;
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
  GALGAS_uint var_RAMsize_9438 = GALGAS_uint ((uint32_t) 0U) ;
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
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_10336.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_1018.readProperty_mRegisterTable (), var_constantMap_9668, var_result_10473, var_usedRegisters_10279, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)) ;
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
      var_listFileContents_919.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)).add_operation (GALGAS_string ("\n"
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
      outArgument_outAccessBankSplitOffset = GALGAS_uint ((uint32_t) 96U) ;
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint ((uint32_t) 128U) ;
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
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GALGAS_string ("\n"
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
    GALGAS_uintlist var_mirrorOffsetList_2638 ;
    outArgument_outRamBank.method_searchKey (enumerator_2485.current_lkey (HERE), var_firstAddress_2570, var_firstFreeAddress_2592, var_lastAddressPlusOne_2616, var_mirrorOffsetList_2638, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 48)) ;
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
      outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_2485.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (enumerator_2485.current_mReservedSize (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_firstAddress_2570.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (var_firstFreeAddress_2592.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (GALGAS_string (").\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }
    enumerator_2485.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)) ;
  GALGAS_stringset var_routineNameSet_3627 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 64)) ;
  GALGAS_uint var_entryPointAddress_3680 = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_3714 (constinArgument_inBootloaderRoutineDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3714.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_routineNameSet_3627.getter_hasKey (enumerator_3714.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3714.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
      }
    }
    var_routineNameSet_3627.addAssign_operation (enumerator_3714.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 70)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_3714.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (var_entryPointAddress_3680.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) ;
    var_entryPointAddress_3680 = var_entryPointAddress_3680.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsEqual, var_entryPointAddress_3680.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_entryPointAddress_3680 = GALGAS_uint ((uint32_t) 12U) ;
      }
    }
    if (kBoolFalse == test_10) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsEqual, var_entryPointAddress_3680.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
        if (kBoolTrue == test_11) {
          var_entryPointAddress_3680 = GALGAS_uint ((uint32_t) 28U) ;
        }
      }
    }
    enumerator_3714.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 79)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("USER PROGRAM ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)) ;
  var_entryPointAddress_3680 = constinArgument_inReservedRomSize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_4762 (constinArgument_inUserRoutineDeclarationList, kENUMERATION_UP) ;
  while (enumerator_4762.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_routineNameSet_3627.getter_hasKey (enumerator_4762.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4762.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
      }
    }
    var_routineNameSet_3627.addAssign_operation (enumerator_4762.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 90)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_4762.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 40U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (var_entryPointAddress_3680.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) ;
    var_entryPointAddress_3680 = var_entryPointAddress_3680.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
    enumerator_4762.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable () ;
  GALGAS_stringset joker_5376 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 101)) ;
  {
  GALGAS_declaredByteMap joker_5491 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections (GALGAS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 100)), joker_5376, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable (), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5491, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 97)) ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch analyze'
//
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
  GALGAS_caseConstantMap var_caseConstantMap_2445 = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18-switch-instruction.galgas", 61)) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = object ;
  GALGAS_lstring var_exitLabel_2502 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 64)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue_2662 = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  GALGAS_bool var_continuesInSequence_2745 = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting_2783 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting_2828 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 71)) ;
  GALGAS_bool var_finalBankSettingDefined_2877 = GALGAS_bool (false) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = object ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_2947 (temp_1.readProperty_mCaseList (), kENUMERATION_UP) ;
  while (enumerator_2947.hasCurrentObject ()) {
    const GALGAS_pic_31__38_Instruction_5F_switch temp_2 = object ;
    GALGAS_lstring var_conditionTrueLabel_3010 = GALGAS_lstring::constructor_new (GALGAS_string (".L.accepted.").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), temp_2.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_3148 (enumerator_2947.current_mCaseExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_3148.hasCurrentObject ()) {
      GALGAS_string var_conditionLabel_3200 = ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 79)) ;
      ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 80)) ;
      callExtensionMethod_analyzeCaseItem ((const cPtr_pic_31__38_AbstractCaseItem *) enumerator_3148.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_3010, var_conditionLabel_3200, ioArgument_ioUsedRegisters, var_caseConstantMap_2445, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_2662, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 81)) ;
      enumerator_3148.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel_3647 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_3010 ;
    GALGAS_uint var_branchFinalBank_3730 = var_initialBankSetting_2783 ;
    {
    routine_analyzeInstructionList (enumerator_2947.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_3730, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 98)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_continuesInSequence_2745 = GALGAS_bool (true) ;
        const GALGAS_pic_31__38_Instruction_5F_switch temp_4 = object ;
        ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 119)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), var_exitLabel_2502, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 122))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 122)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 123)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118)) ;
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_finalBankSettingDefined_2877.boolEnum () ;
      if (kBoolTrue == test_5) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_2828.objectCompare (var_branchFinalBank_3730)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_branchFinalBank_3730.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = var_branchFinalBank_3730.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)) ;
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
      var_finalBankSetting_2828 = var_branchFinalBank_3730 ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 139)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_3647 ;
    enumerator_2947.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank_5279 = var_initialBankSetting_2783 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_12 = object ;
  routine_analyzeInstructionList (temp_12.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_5279, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 144)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_5732 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_5732.boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_14 = object ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 165)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_14.readProperty_mInstructionLocation (), var_exitLabel_2502, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 168))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 168)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 169)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 173)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_2828.objectCompare (var_branchFinalBank_5279)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_16 = object ;
      GALGAS_string temp_17 ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, var_branchFinalBank_5279.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        temp_17 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_18) {
        temp_17 = var_branchFinalBank_5279.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)) ;
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

static void defineExtensionMethod_pic_31__38_Instruction_5F_switch_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_switch_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_switch_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
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
  const cPtr_pic_31__38_SimpleConstantCaseItem * object = (const cPtr_pic_31__38_SimpleConstantCaseItem *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_SimpleConstantCaseItem) ;
  GALGAS_sint_36__34_ var_result_8097 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mCaseExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_8097, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 225)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_8097.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_8097.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 227)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCaseExpressionLocation (), GALGAS_string ("case value is evaluated as ").add_operation (var_result_8097.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), fixItArray3  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_8097.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mCaseExpressionLocation (), GALGAS_string ("the '").add_operation (var_result_8097.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), fixItArray6  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)) ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_8097.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), GALGAS_string ("the '").add_operation (var_result_8097.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_pic_31__38_SimpleConstantCaseItem temp_8 = object ;
    ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (var_result_8097.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), temp_8.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)) ;
    }
  }
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_9 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_9.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 240)), ioArgument_ioLastComparisonValue.substract_operation (var_result_8097, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 243)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)) ;
  ioArgument_ioLastComparisonValue = var_result_8097 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_10 = object ;
  GALGAS_lstring var_conditionFalseLabel_9054 = GALGAS_lstring::constructor_new (GALGAS_string (".L.value.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)), temp_10.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)) ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_11 = object ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t_9234 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_11.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18-switch-instruction.galgas", 252)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 254)), var_conditionFalseLabel_9054, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 256))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 250)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 259)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_9234, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 263)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 266)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_9054 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (void) {
  enterExtensionMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem.mSlotID,
                                        extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
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
  const cPtr_pic_31__38_IntervalCaseItem * object = (const cPtr_pic_31__38_IntervalCaseItem *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_IntervalCaseItem) ;
  GALGAS_sint_36__34_ var_minBound_10340 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mMinExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_10340, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 284)) ;
  GALGAS_sint_36__34_ var_maxBound_10441 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.readProperty_mMaxExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_10441, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 285)) ;
  GALGAS_bool var_ok_10474 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_minBound_10340.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound_10340.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 288)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mCaseExpressionLocation (), GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound_10340.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), fixItArray4  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)) ;
      var_ok_10474 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsStrictSup, var_maxBound_10441.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound_10441.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mCaseExpressionLocation (), GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound_10441.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)) ;
      var_ok_10474 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsInfOrEqual, var_maxBound_10441.objectCompare (var_minBound_10340)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mCaseExpressionLocation (), GALGAS_string ("max bound (").add_operation (var_maxBound_10441.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (var_minBound_10340.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), fixItArray10  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)) ;
      var_ok_10474 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (kIsEqual, var_maxBound_10441.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_and (GALGAS_bool (kIsEqual, var_minBound_10340.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 299)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_IntervalCaseItem temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mCaseExpressionLocation (), GALGAS_string ("condition is always true"), fixItArray13  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 300)) ;
        var_ok_10474 = GALGAS_bool (false) ;
      }
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_ok_10474.boolEnum () ;
    if (kBoolTrue == test_14) {
      cEnumerator_range enumerator_11279 (GALGAS_range::constructor_new (var_minBound_10340.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), var_maxBound_10441.substract_operation (var_minBound_10340, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), kENUMERATION_UP) ;
      while (enumerator_11279.hasCurrentObject ()) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_11279.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_pic_31__38_IntervalCaseItem temp_16 = object ;
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mCaseExpressionLocation (), GALGAS_string ("the '").add_operation (enumerator_11279.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), fixItArray17  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)) ;
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_11279.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), GALGAS_string ("the '").add_operation (enumerator_11279.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), fixItArray18  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)) ;
          }
        }
        if (kBoolFalse == test_15) {
          {
          const GALGAS_pic_31__38_IntervalCaseItem temp_19 = object ;
          ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_11279.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), temp_19.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)) ;
          }
        }
        enumerator_11279.gotoNextObject () ;
      }
      const GALGAS_pic_31__38_IntervalCaseItem temp_20 = object ;
      GALGAS_lstring var_firstConditionAcceptedLabel_11727 = GALGAS_lstring::constructor_new (GALGAS_string (".L.first.accepted.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)), temp_20.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_21 = object ;
      GALGAS_lstring var_firstConditionRejectedLabel_11853 = GALGAS_lstring::constructor_new (GALGAS_string (".L.first.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)), temp_21.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_22 = object ;
      GALGAS_lstring var_intervalRejectedLabel_11973 = GALGAS_lstring::constructor_new (GALGAS_string (".L.interval.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)), temp_22.readProperty_mCaseExpressionLocation ()  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_23 = object ;
      GALGAS_ipic_31__38_SequentialInstruction var_secondTestInstruction_12159 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_23.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 320)), var_maxBound_10441.substract_operation (var_minBound_10340, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 318)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_24 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_24.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 326)), ioArgument_ioLastComparisonValue.add_operation (GALGAS_sint_36__34_ ((int64_t) 255LL), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).substract_operation (var_maxBound_10441, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 329)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_25 = object ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_12688 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_25.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 334)), var_firstConditionAcceptedLabel_11727, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 336)), var_firstConditionRejectedLabel_11853, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 338))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 332)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 342)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_12688, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 346)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_26 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      temp_26.addAssign_operation (var_secondTestInstruction_12159, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_27 = object ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 351)), var_firstConditionRejectedLabel_11853, temp_26, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_27.readProperty_mCaseExpressionLocation (), var_intervalRejectedLabel_11973, GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 354))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 354)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 355)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_28 = object ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32__13488 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_28.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 361)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 363)), var_intervalRejectedLabel_11973, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 365))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 359)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_29 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      temp_29.addAssign_operation (var_secondTestInstruction_12159, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 369)), var_firstConditionAcceptedLabel_11727, temp_29, var_t_32__13488, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 373)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368)) ;
      ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18-switch-instruction.galgas", 377)) ;
      ioArgument_ioBlockLabel = var_intervalRejectedLabel_11973 ;
      ioArgument_ioLastComparisonValue = var_minBound_10340 ;
    }
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
//
//Overriding extension method '@pic18Instruction_switch addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_switch * object = (const cPtr_pic_31__38_Instruction_5F_switch *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_switch) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = object ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_14335 (temp_0.readProperty_mCaseList (), kENUMERATION_UP) ;
  while (enumerator_14335.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_14335.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 391)) ;
    }
    enumerator_14335.gotoNextObject () ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 393)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines, NULL) ;

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
  GALGAS_sint var_displacement_16516 = var_targetAddress_16490.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 478)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_16516.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_16516.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 479)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 479)) ;
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
  GALGAS_uint var_targetAddress_17013 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_17013, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 490)) ;
  GALGAS_sint var_displacement_17039 = var_targetAddress_17013.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 491)) ;
  result_outDisplacementOK = GALGAS_bool (kIsInfOrEqual, var_displacement_17039.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_and (GALGAS_bool (kIsSupOrEqual, var_displacement_17039.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 492)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 492)) ;
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
  GALGAS_uint var_targetAddress_17503 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_17503, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 502)) ;
  result_outDisplacement = var_targetAddress_17503.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 503)) ;
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
  GALGAS_sint var_displacement_18046 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 519)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_18046.objectCompare (GALGAS_sint ((int32_t) 127L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_18046.objectCompare (GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 520)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 521)) ;
    }
  }
  GALGAS_conditional_5F_branch var_conditionalBranch_18345 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inComplemented.boolEnum () ;
    if (kBoolTrue == test_2) {
      switch (constinArgument_inConditionalBranch.enumValue ()) {
      case GALGAS_conditional_5F_branch::kNotBuilt:
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bz:
        {
          var_conditionalBranch_18345 = GALGAS_conditional_5F_branch::constructor_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 527)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnz:
        {
          var_conditionalBranch_18345 = GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bn:
        {
          var_conditionalBranch_18345 = GALGAS_conditional_5F_branch::constructor_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnn:
        {
          var_conditionalBranch_18345 = GALGAS_conditional_5F_branch::constructor_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bc:
        {
          var_conditionalBranch_18345 = GALGAS_conditional_5F_branch::constructor_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 531)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnc:
        {
          var_conditionalBranch_18345 = GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 532)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bov:
        {
          var_conditionalBranch_18345 = GALGAS_conditional_5F_branch::constructor_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 533)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnov:
        {
          var_conditionalBranch_18345 = GALGAS_conditional_5F_branch::constructor_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 534)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    var_conditionalBranch_18345 = constinArgument_inConditionalBranch ;
  }
  GALGAS_uint var_baseCode_18974 ;
  GALGAS_string var_mnemonic_18997 ;
  switch (var_conditionalBranch_18345.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      var_baseCode_18974 = GALGAS_uint ((uint32_t) 57344U) ;
      var_mnemonic_18997 = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      var_baseCode_18974 = GALGAS_uint ((uint32_t) 57600U) ;
      var_mnemonic_18997 = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      var_baseCode_18974 = GALGAS_uint ((uint32_t) 58880U) ;
      var_mnemonic_18997 = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      var_baseCode_18974 = GALGAS_uint ((uint32_t) 59136U) ;
      var_mnemonic_18997 = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      var_baseCode_18974 = GALGAS_uint ((uint32_t) 57856U) ;
      var_mnemonic_18997 = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      var_baseCode_18974 = GALGAS_uint ((uint32_t) 58112U) ;
      var_mnemonic_18997 = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      var_baseCode_18974 = GALGAS_uint ((uint32_t) 58368U) ;
      var_mnemonic_18997 = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      var_baseCode_18974 = GALGAS_uint ((uint32_t) 58624U) ;
      var_mnemonic_18997 = GALGAS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (var_mnemonic_18997, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 553)), GALGAS_uintlist::constructor_listWithValue (var_baseCode_18974.operator_or (var_displacement_18046.operator_and (GALGAS_sint ((int32_t) 255L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 552)) ;
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
  GALGAS_sint var_displacement_19843 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 564)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_19843.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_19843.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 565)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_19843.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (GALGAS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 567)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 566)) ;
    }
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 570)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 55296U).operator_or (var_displacement_19843.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 569)) ;
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
  GALGAS_sint var_displacement_20581 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (GALGAS_sint ((int32_t) 2L), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)).right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 581)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_displacement_20581.objectCompare (GALGAS_sint ((int32_t) 1023L))).operator_or (GALGAS_bool (kIsStrictInf, var_displacement_20581.objectCompare (GALGAS_sint ((int32_t) 1024L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 582)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_20581.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (GALGAS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 584)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 583)) ;
    }
  }
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 587)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 53248U).operator_or (var_displacement_20581.operator_and (GALGAS_sint ((int32_t) 2047L) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 588))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 586)) ;
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
  GALGAS_uintlist var_binaryCode_21269 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 597)) ;
  var_binaryCode_21269.addAssign_operation (GALGAS_uint ((uint32_t) 60416U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 598)) ;
  var_binaryCode_21269.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 599)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 601)), var_binaryCode_21269  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 600)) ;
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
  GALGAS_uintlist var_binaryCode_21703 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_block_representation.galgas", 611)) ;
  var_binaryCode_21703.addAssign_operation (GALGAS_uint ((uint32_t) 61184U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 612)) ;
  var_binaryCode_21703.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 613)) ;
  result_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 615)), var_binaryCode_21703  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 614)) ;
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

static GALGAS_string extensionGetter_ipic_31__38_ReturnTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                     const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETURN") ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ReturnTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ReturnTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ReturnTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ReturnTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ReturnTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ReturnTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ReturnTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ReturnTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ReturnTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                 const GALGAS_uint /* constinArgument_inAddress */,
                                                                                 const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                 GALGAS_codeList & outArgument_outCode,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    RETURN"), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 18U)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 48))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 46)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ReturnTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ReturnTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_RetfieTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetfieTerminator * object = (const cPtr_ipic_31__38_RetfieTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetfieTerminator) ;
  result_outResult = GALGAS_string ("RETFIE") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_RetfieTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mFastReturn ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" FAST"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 70)) ;
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetfieTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_RetfieTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetfieTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_RetfieTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_RetfieTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetfieTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_RetfieTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetfieTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_RetfieTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                 const GALGAS_uint /* constinArgument_inAddress */,
                                                                                 const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                 const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 GALGAS_codeList & outArgument_outCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetfieTerminator * object = (const cPtr_ipic_31__38_RetfieTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetfieTerminator) ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = object ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_1 = object ;
  GALGAS_uint temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mFastReturn ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_uint ((uint32_t) 17U) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_uint ((uint32_t) 16U) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), GALGAS_uintlist::constructor_listWithValue (temp_2  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 89)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_RetfieTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_RetfieTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_RetlwTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = object ;
  result_outResult = GALGAS_string ("RETLW ").add_operation (temp_0.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 111)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetlwTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_RetlwTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetlwTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_RetlwTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_RetlwTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                               const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_RetlwTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_RetlwTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetlwTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_RetlwTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                const GALGAS_uint /* constinArgument_inAddress */,
                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = object ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_1 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 3072U).operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 129)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_RetlwTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_RetlwTerminator var_t_4553 (dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (NULL == var_t_4553.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_RetlwTerminator temp_1 = object ;
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

static void defineExtensionGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_RetlwTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_JumpTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                              const GALGAS_string constinArgument_inNextBlockLabel,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 0U) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    switch (temp_2.readProperty_mKind ().enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        result_outSize = GALGAS_uint ((uint32_t) 2U) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        result_outSize = GALGAS_uint ((uint32_t) 4U) ;
      }
      break ;
    }
  }
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_JumpTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_JumpTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_JumpTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_JumpTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                         GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
      switch (temp_2.readProperty_mKind ().enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_JumpTerminator temp_4 = object ;
            test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_4.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 185)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 185)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_ipic_31__38_JumpTerminator temp_5 = object ;
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

static void defineExtensionMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_JumpTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = object ;
      switch (temp_3.readProperty_mKind ().enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
        {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            const GALGAS_ipic_31__38_JumpTerminator temp_5 = object ;
            test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_5.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 207)).boolEnum () ;
            if (kBoolTrue == test_4) {
              ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_6 = object ;
              const GALGAS_ipic_31__38_JumpTerminator temp_7 = object ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_6.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_8 = object ;
              const GALGAS_ipic_31__38_JumpTerminator temp_9 = object ;
              outArgument_outModifiedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mLabel (), GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 210))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 210)) ;
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            const GALGAS_ipic_31__38_JumpTerminator temp_11 = object ;
            test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_11.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 213)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 213)).boolEnum () ;
            if (kBoolTrue == test_10) {
              const GALGAS_ipic_31__38_JumpTerminator temp_12 = object ;
              const GALGAS_ipic_31__38_JumpTerminator temp_13 = object ;
              const GALGAS_ipic_31__38_JumpTerminator temp_14 = object ;
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

static void defineExtensionMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_JumpTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_JumpTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  GALGAS_string var_name_7314 ;
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = object ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      var_name_7314 = GALGAS_string ("JUMP ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      var_name_7314 = GALGAS_string ("BRA ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      var_name_7314 = GALGAS_string ("GOTO ") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = object ;
      result_outResult = GALGAS_string ("(").add_operation (var_name_7314, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_4 = object ;
    result_outResult = var_name_7314.add_operation (temp_4.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 237)) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_JumpTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_JumpTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_JumpTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_JumpTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_codeList & outArgument_outCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_terminators.galgas", 249)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_targetAddress_8036 ;
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mLabel (), var_targetAddress_8036, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 251)) ;
    const GALGAS_ipic_31__38_JumpTerminator temp_3 = object ;
    switch (temp_3.readProperty_mKind ().enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_4 = object ;
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_8036, temp_4.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 254)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_5 = object ;
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress_8036, temp_5.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 256)) ;
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_JumpTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_JumpTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_JumpTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_JumpTerminator var_t_8753 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (NULL == var_t_8753.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_1 = object ;
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (var_t_8753.readProperty_mLabel ().readProperty_string ())).operator_and (GALGAS_bool (kIsEqual, temp_2.readProperty_mKind ().objectCompare (var_t_8753.readProperty_mKind ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 273)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_JumpTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_JumpTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_JumpTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_JumpTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = object ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = object ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 288)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_AbstractConditionTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                      const GALGAS_uint constinArgument_inAddress,
                                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                      const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = object ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 301)) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = object ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 308)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 326)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                       extensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize (defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 336)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
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
  result_outResult.plusAssign_operation(GALGAS_string (" W \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 345)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 346)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 347)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 348)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                          extensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay (defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_uint var_n_11794 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_12097 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_12097, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 362)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_12386 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_12386, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 371)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_11794)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = object ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = object ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_12097.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_12097.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_12097.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_12097.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 385)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_12386.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_12386.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_12386.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_12386.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 386)) ;
      }
    }
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = object ;
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = object ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mComparison ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 383)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                                  extensionMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_uint constinArgument_inAddress,
                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  GALGAS_uint var_binCode_13090 ;
  GALGAS_string var_assemblyCode_13117 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  switch (temp_0.readProperty_mComparison ().enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      var_binCode_13090 = GALGAS_uint ((uint32_t) 25088U) ;
      var_assemblyCode_13117 = GALGAS_string ("    CPFSEQ") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      var_binCode_13090 = GALGAS_uint ((uint32_t) 25600U) ;
      var_assemblyCode_13117 = GALGAS_string ("    CPFSGT") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      var_binCode_13090 = GALGAS_uint ((uint32_t) 24576U) ;
      var_assemblyCode_13117 = GALGAS_string ("    CPFSLT") ;
    }
    break ;
  }
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = object ;
  var_assemblyCode_13117.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = object ;
  var_binCode_13090 = var_binCode_13090.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 414)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = object ;
    test_3 = temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_3) {
      var_binCode_13090 = var_binCode_13090.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 416)) ;
      var_assemblyCode_13117.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 417)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_13117, GALGAS_uintlist::constructor_listWithValue (var_binCode_13090  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 421))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 419)) ;
  GALGAS_codeList var_falseTerminatorCode_13911 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_5 = object ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 424)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_13911, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 423)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_13911, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 429)) ;
  GALGAS_codeList var_trueTerminatorCode_14196 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = object ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = object ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_7.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 431)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_14196, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 430)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_14196, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 436)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                               extensionMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
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
      GALGAS_pic_31__38_RegisterComparisonTerminator var_t_14597 = temp_1 ;
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = object ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_14597.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 447)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = object ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_14597.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 449)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mComparison ().objectCompare (var_t_14597.readProperty_mComparison ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = object ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_14597.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 455)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                            extensionGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator (defineExtensionGetter_pic_31__38_RegisterComparisonTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_pic_31__38_TestRegisterTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 469)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_TestRegisterTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                       extensionGetter_pic_31__38_TestRegisterTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_TestRegisterTerminator_terminatorSize (defineExtensionGetter_pic_31__38_TestRegisterTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString () ;
  result_outResult.plusAssign_operation(GALGAS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 480)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 481)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 482)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 483)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                          extensionGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay (defineExtensionGetter_pic_31__38_TestRegisterTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_uint var_n_16598 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_16901 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_16901, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 497)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_17190 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_17190, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 506)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_16598)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = object ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = object ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_16901.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_16901.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_16901.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_16901.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 520)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_17190.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_17190.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_17190.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_17190.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 521)) ;
      }
    }
    const GALGAS_pic_31__38_TestRegisterTerminator temp_7 = object ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 518)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                                  extensionMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_pic_31__38_TestRegisterTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                      GALGAS_codeList & outArgument_outCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  GALGAS_uint var_binCode_17858 = GALGAS_uint ((uint32_t) 26112U) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  GALGAS_string var_assemblyCode_17894 = GALGAS_string ("    TSTFSZ ").add_operation (temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 534)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = object ;
  var_binCode_17858 = var_binCode_17858.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 535)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = object ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_binCode_17858 = var_binCode_17858.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 537)) ;
      var_assemblyCode_17894.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 538)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_17894, GALGAS_uintlist::constructor_listWithValue (var_binCode_17858  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 542))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 540)) ;
  GALGAS_codeList var_falseTerminatorCode_18474 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = object ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 545)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_18474, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 544)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_18474, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 550)) ;
  GALGAS_codeList var_trueTerminatorCode_18759 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_5 = object ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = object ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 552)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_18759, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 551)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_18759, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 557)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                               extensionMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode (defineExtensionMethod_pic_31__38_TestRegisterTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
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
      GALGAS_pic_31__38_TestRegisterTerminator var_t_19142 = temp_1 ;
      const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = object ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_19142.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 568)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = object ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_19142.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 570)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = object ;
          result_outResult = extensionGetter_isEqualToRegister (temp_6.readProperty_mRegisterDescription (), var_t_19142.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 573)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                            extensionGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator (defineExtensionGetter_pic_31__38_TestRegisterTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_pic_31__38_BitTestTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = object ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = object ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (temp_1.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 587)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_2 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 588)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 589)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_3 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 590)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_BitTestTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                          extensionGetter_pic_31__38_BitTestTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_BitTestTerminator_terminatorDisplay (defineExtensionGetter_pic_31__38_BitTestTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    const GALGAS_uint constinArgument_inAddress,
                                                                                                    const GALGAS_string constinArgument_inBlockLabel,
                                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                    const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                    GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  GALGAS_uint var_n_20691 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_20994 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_20994, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 604)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_21283 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_21283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 613)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_20691)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = object ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_BitTestTerminator temp_4 = object ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_20994.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_20994.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_20994.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_20994.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 627)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_21283.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_21283.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_21283.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_21283.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 628)) ;
      }
    }
    const GALGAS_pic_31__38_BitTestTerminator temp_7 = object ;
    const GALGAS_pic_31__38_BitTestTerminator temp_8 = object ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 625)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                                  extensionMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                 const GALGAS_uint constinArgument_inAddress,
                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                 const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 GALGAS_codeList & outArgument_outCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_BitTestTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 642)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_binCode_22123 = GALGAS_uint ((uint32_t) 45056U) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = object ;
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = object ;
      GALGAS_string var_assemblyCode_22161 = GALGAS_string ("    BTFSC ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 645)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_4 = object ;
      var_binCode_22123 = var_binCode_22123.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_5 = object ;
      var_binCode_22123 = var_binCode_22123.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 647)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_pic_31__38_BitTestTerminator temp_7 = object ;
        test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (kBoolTrue == test_6) {
          var_binCode_22123 = var_binCode_22123.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
          var_assemblyCode_22161.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_22161, GALGAS_uintlist::constructor_listWithValue (var_binCode_22123  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 654))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 652)) ;
      GALGAS_codeList var_falseTerminatorCode_22784 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_8 = object ;
      callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_8.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 656)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_22784, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_22784, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_binCode_22926 = GALGAS_uint ((uint32_t) 40960U) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_9 = object ;
    const GALGAS_pic_31__38_BitTestTerminator temp_10 = object ;
    GALGAS_string var_assemblyCode_22964 = GALGAS_string ("    BTFSS ").add_operation (temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)).add_operation (temp_10.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 665)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_11 = object ;
    var_binCode_22926 = var_binCode_22926.operator_or (temp_11.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_12 = object ;
    var_binCode_22926 = var_binCode_22926.operator_or (temp_12.readProperty_mBitNumber ().left_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 667)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_BitTestTerminator temp_14 = object ;
      test_13 = temp_14.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_13) {
        var_binCode_22926 = var_binCode_22926.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 669)) ;
        var_assemblyCode_22964.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 670)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_22964, GALGAS_uintlist::constructor_listWithValue (var_binCode_22926  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 674))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 672)) ;
    GALGAS_codeList var_trueTerminatorCode_23571 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_15 = object ;
    callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_15.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 676)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_23571, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 675)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_23571, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 681)) ;
    GALGAS_codeList var_falseTerminatorCode_23884 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_16 = object ;
    const GALGAS_pic_31__38_BitTestTerminator temp_17 = object ;
    callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_16.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_17.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 683)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_23884, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 682)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_23884, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 688)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                               extensionMethod_pic_31__38_BitTestTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (defineExtensionMethod_pic_31__38_BitTestTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_pic_31__38_BitTestTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
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
      GALGAS_pic_31__38_BitTestTerminator var_t_24263 = temp_1 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = object ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_24263.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 700)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_BitTestTerminator temp_4 = object ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_24263.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 702)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_BitTestTerminator temp_6 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mBitNumber ().objectCompare (var_t_24263.readProperty_mBitNumber ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_BitTestTerminator temp_8 = object ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_24263.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 708)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_pic_31__38_BitTestTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                            extensionGetter_pic_31__38_BitTestTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_pic_31__38_BitTestTerminator_isEqualToTerminator (defineExtensionGetter_pic_31__38_BitTestTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult = GALGAS_string ("INCF ") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_string ("DECF ") ;
  }
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
  result_outResult.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 727)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = object ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_3) {
    result_outResult.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 731)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 733)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 734)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 735)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = object ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 736)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                            const GALGAS_uint constinArgument_inAddress,
                                                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                            GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  GALGAS_uint var_n_26073 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_26376 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_26376, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 750)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_26665 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = object ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_26665, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 759)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n_26073)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_3 = object ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = object ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_26376.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_26376.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_26376.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_26376.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 773)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_26665.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_26665.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_26665.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_26665.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 774)) ;
      }
    }
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_7 = object ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = object ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = object ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 771)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                         GALGAS_codeList & outArgument_outCode,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 788)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
      GALGAS_uint temp_3 ;
      const enumGalgasBool test_4 = temp_2.readProperty_mIncrement ().boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_uint ((uint32_t) 15360U) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_uint ((uint32_t) 11264U) ;
      }
      GALGAS_uint var_binCode_27551 = temp_3 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = object ;
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = temp_5.readProperty_mIncrement ().boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string ("    INCFSZ") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_string ("    DECFSZ") ;
      }
      GALGAS_string var_assemblyCode_27638 = temp_6 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = object ;
      var_assemblyCode_27638.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)) ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = object ;
      var_binCode_27551 = var_binCode_27551.operator_or (temp_9.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 793)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 793)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_11 = object ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_10) {
          var_assemblyCode_27638.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 795)) ;
        }
      }
      if (kBoolFalse == test_10) {
        var_binCode_27551 = var_binCode_27551.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 797)) ;
        var_assemblyCode_27638.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 798)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_13 = object ;
        test_12 = temp_13.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (kBoolTrue == test_12) {
          var_binCode_27551 = var_binCode_27551.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 801)) ;
          var_assemblyCode_27638.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_27638, GALGAS_uintlist::constructor_listWithValue (var_binCode_27551  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 806))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 804)) ;
      GALGAS_codeList var_falseTerminatorCode_28400 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_14 = object ;
      callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_14.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 808)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_28400, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_28400, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_15 = object ;
    GALGAS_uint temp_16 ;
    const enumGalgasBool test_17 = temp_15.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_uint ((uint32_t) 18432U) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_uint ((uint32_t) 19456U) ;
    }
    GALGAS_uint var_binCode_28542 = temp_16 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_18 = object ;
    GALGAS_string temp_19 ;
    const enumGalgasBool test_20 = temp_18.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = GALGAS_string ("    INFSNZ") ;
    }else if (kBoolFalse == test_20) {
      temp_19 = GALGAS_string ("    DCFSNZ") ;
    }
    GALGAS_string var_assemblyCode_28629 = temp_19 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_21 = object ;
    var_assemblyCode_28629.plusAssign_operation(GALGAS_string (" ").add_operation (temp_21.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)) ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_22 = object ;
    var_binCode_28542 = var_binCode_28542.operator_or (temp_22.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 819)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 819)) ;
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_24 = object ;
      test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
      if (kBoolTrue == test_23) {
        var_assemblyCode_28629.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 821)) ;
      }
    }
    if (kBoolFalse == test_23) {
      var_binCode_28542 = var_binCode_28542.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 823)) ;
      var_assemblyCode_28629.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 824)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_26 = object ;
      test_25 = temp_26.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_25) {
        var_binCode_28542 = var_binCode_28542.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 827)) ;
        var_assemblyCode_28629.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 828)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_28629, GALGAS_uintlist::constructor_listWithValue (var_binCode_28542  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 832))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 830)) ;
    GALGAS_codeList var_trueTerminatorCode_29375 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_27 = object ;
    callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_27.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 834)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_29375, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 833)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_29375, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 839)) ;
    GALGAS_codeList var_falseTerminatorCode_29688 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_28 = object ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_29 = object ;
    callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_28.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_29.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 841)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_29688, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 840)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_29688, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 846)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
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
      GALGAS_ipic_31__38_IncDecRegisterTerminator var_t_30091 = temp_1 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_30091.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 858)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = object ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_30091.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 860)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mIncrement ().objectCompare (var_t_30091.readProperty_mIncrement ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_8.readProperty_m_5F_W_5F_isDestination ().objectCompare (var_t_30091.readProperty_m_5F_W_5F_isDestination ())) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_10 = object ;
          result_outResult = extensionGetter_isEqualToRegister (temp_10.readProperty_mRegisterDescription (), var_t_30091.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 869)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = object ;
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (temp_2.readProperty_mLiteralValues ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 888)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED RETLW") ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = object ;
  cEnumerator_uintlist enumerator_31456 (temp_0.readProperty_mLiteralValues (), kENUMERATION_UP) ;
  while (enumerator_31456.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31456.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 898)) ;
    enumerator_31456.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                           const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                           GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = object ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 914)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 914)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 914)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 915)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 916)) ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_4 = object ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_5 = object ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralValues (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 917)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                  GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = object ;
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

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GALGAS_codeList & outArgument_outCode,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  GALGAS_lstring var_goto_32_label_33245 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 944)) ;
  GALGAS_uint var_targetAddress_33340 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_33245, var_targetAddress_33340, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 945)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_33340, var_goto_32_label_33245, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 947)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_33340, var_goto_32_label_33245, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 949)) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = object ;
  cEnumerator_uintlist enumerator_33548 (temp_2.readProperty_mLiteralValues (), kENUMERATION_UP) ;
  while (enumerator_33548.hasCurrentObject ()) {
    outArgument_outCode.addAssign_operation (GALGAS_string ("    RETLW ").add_operation (enumerator_33548.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 953)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 3072U).operator_or (enumerator_33548.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 954))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 954))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 952)) ;
    enumerator_33548.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
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
      GALGAS_ipic_31__38_ComputedRETLWTerminator var_t_34041 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mLiteralValues ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 966)).objectCompare (var_t_34041.readProperty_mLiteralValues ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 966)))) ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_3 = object ;
      cEnumerator_uintlist enumerator_34183 (temp_3.readProperty_mLiteralValues (), kENUMERATION_UP) ;
      cEnumerator_uintlist enumerator_34219 (var_t_34041.readProperty_mLiteralValues (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_34183.hasCurrentObject () && enumerator_34219.hasCurrentObject () && bool_4) {
        while (enumerator_34183.hasCurrentObject () && enumerator_34219.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_34183.current_mValue (HERE).objectCompare (enumerator_34219.current_mValue (HERE))) ;
          enumerator_34183.gotoNextObject () ;
          enumerator_34219.gotoNextObject () ;
          if (enumerator_34183.hasCurrentObject () && enumerator_34219.hasCurrentObject ()) {
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

static void defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED GOTO ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" (uses RCALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 984)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult.plusAssign_operation(GALGAS_string (" (uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 986)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
  cEnumerator_lstringlist enumerator_34794 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_34794.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_34794.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 989)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 989)) ;
    enumerator_34794.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1003)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                          const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                          GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                          GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1018)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1018)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1018)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1019)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)).add_operation (GALGAS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1020)) ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_4 = object ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_5 = object ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mTargetLabels (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1021)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = object ;
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

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_uint constinArgument_inAddress,
                                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GALGAS_codeList & outArgument_outCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  GALGAS_lstring var_goto_34_label_36893 = GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1048)) ;
  GALGAS_uint var_targetAddress_36988 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label_36893, var_targetAddress_36988, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1049)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_36988, var_goto_34_label_36893, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_36988, var_goto_34_label_36893, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1053)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
  cEnumerator_lstringlist enumerator_37196 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_37196.hasCurrentObject ()) {
    GALGAS_uint var_targetLabelAddress_37290 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_37196.current_mValue (HERE), var_targetLabelAddress_37290, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1056)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress_37290, enumerator_37196.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1057)) ;
    enumerator_37196.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
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
      GALGAS_ipic_31__38_ComputedGotoTerminator var_t_37718 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1069)).objectCompare (var_t_37718.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1069)))) ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_3 = object ;
      cEnumerator_lstringlist enumerator_37857 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      cEnumerator_lstringlist enumerator_37892 (var_t_37718.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_37857.hasCurrentObject () && enumerator_37892.hasCurrentObject () && bool_4) {
        while (enumerator_37857.hasCurrentObject () && enumerator_37892.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_37857.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_37892.current_mValue (HERE).readProperty_string ())) ;
          enumerator_37857.gotoNextObject () ;
          enumerator_37892.gotoNextObject () ;
          if (enumerator_37857.hasCurrentObject () && enumerator_37892.hasCurrentObject ()) {
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

static void defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ComputedBraTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = object ;
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1090)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedBraTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ComputedBraTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedBraTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ComputedBraTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED BRA") ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = object ;
  cEnumerator_lstringlist enumerator_38700 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_38700.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_38700.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1100)) ;
    enumerator_38700.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ComputedBraTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                         const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = object ;
  cEnumerator_lstringlist enumerator_39210 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_39210.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_39210.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1115)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1115)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = object ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_39210.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1116)).add_operation (GALGAS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).add_operation (enumerator_39210.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1118)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1116)) ;
      }
    }
    enumerator_39210.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_4 = object ;
  outArgument_outModifiedTerminator = temp_4 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_6 = object ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1123)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1123)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1123)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1124)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1125)) ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_8 = object ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_9 = object ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabels (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1126)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  GALGAS_uint var_address_40319 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1141)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1141)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1141)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1142)) ;
        }
      }
      var_address_40319 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1144)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_address_40319 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1146)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = object ;
  cEnumerator_lstringlist enumerator_40590 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_40590.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_40590.current_mValue (HERE), var_address_40319, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1149)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1149)).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, enumerator_40590.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1150)) ;
      }
    }
    var_address_40319 = var_address_40319.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1152)) ;
    enumerator_40590.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GALGAS_codeList & outArgument_outCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  GALGAS_lstring var_goto_32_label_41098 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1163)) ;
  GALGAS_uint var_targetAddress_41193 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_41098, var_targetAddress_41193, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1164)) ;
  GALGAS_uint var_address_41214 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_41193, var_goto_32_label_41098, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1167)) ;
      var_address_41214 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1168)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_41193, var_goto_32_label_41098, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1170)) ;
    var_address_41214 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1171)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = object ;
  cEnumerator_lstringlist enumerator_41477 (temp_2.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_41477.hasCurrentObject ()) {
    GALGAS_uint var_labelAddress_41565 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_41477.current_mValue (HERE), var_labelAddress_41565, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1174)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address_41214, var_labelAddress_41565, enumerator_41477.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)) ;
    var_address_41214 = var_address_41214.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1176)) ;
    enumerator_41477.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
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
      GALGAS_ipic_31__38_ComputedBraTerminator var_t_42018 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1188)).objectCompare (var_t_42018.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_terminators.galgas", 1188)))) ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = object ;
      cEnumerator_lstringlist enumerator_42156 (temp_3.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      cEnumerator_lstringlist enumerator_42191 (var_t_42018.readProperty_mTargetLabels (), kENUMERATION_UP) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_42156.hasCurrentObject () && enumerator_42191.hasCurrentObject () && bool_4) {
        while (enumerator_42156.hasCurrentObject () && enumerator_42191.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (kIsEqual, enumerator_42156.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_42191.current_mValue (HERE).readProperty_string ())) ;
          enumerator_42156.gotoNextObject () ;
          enumerator_42191.gotoNextObject () ;
          if (enumerator_42156.hasCurrentObject () && enumerator_42191.hasCurrentObject ()) {
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

static void defineExtensionGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ComputedBraTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = object ;
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
  result_outResult.plusAssign_operation(GALGAS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1300)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = object ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
    result_outResult.plusAssign_operation(temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1304)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1306)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1308)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
    result_outResult.plusAssign_operation(temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1310)) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (void) {
  enterExtensionGetter_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                          extensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                             const GALGAS_uint constinArgument_inAddress,
                                                                                                             const GALGAS_string constinArgument_inBlockLabel,
                                                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                             const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                             GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                                             GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = object ;
  GALGAS_conditionalBranchMode var_branchModeOnFalseLabel_48066 = temp_0.readProperty_mBranchModeOnFalseLabel () ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = object ;
  GALGAS_conditionalBranchMode var_branchModeOnTrueLabel_48148 = temp_1.readProperty_mBranchModeOnTrueLabel () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = object ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
      switch (temp_4.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
            test_5 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_6.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1329)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1329)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_branchModeOnFalseLabel_48066 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1330)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = object ;
            test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1334)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1334)).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_branchModeOnFalseLabel_48066 = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1335)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = object ;
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
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_12 = object ;
      test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = object ;
        switch (temp_13.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = object ;
              test_14 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_15.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1343)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1343)).boolEnum () ;
              if (kBoolTrue == test_14) {
                var_branchModeOnTrueLabel_48148 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1344)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = object ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (temp_16.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1345)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = object ;
              test_17 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_18.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1348)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1348)).boolEnum () ;
              if (kBoolTrue == test_17) {
                var_branchModeOnTrueLabel_48148 = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1349)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = object ;
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
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = object ;
      switch (temp_20.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = object ;
          switch (temp_21.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = object ;
                test_22 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_23.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1359)).boolEnum () ;
                if (kBoolTrue == test_22) {
                  var_branchModeOnFalseLabel_48066 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1360)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (temp_24.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1361)) ;
                }
              }
              enumGalgasBool test_25 = kBoolTrue ;
              if (kBoolTrue == test_25) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = object ;
                test_25 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_26.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1363)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1363)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_branchModeOnTrueLabel_48148 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1364)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = object ;
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
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = object ;
          switch (temp_28.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_29 = kBoolTrue ;
              if (kBoolTrue == test_29) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = object ;
                test_29 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_30.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1372)).boolEnum () ;
                if (kBoolTrue == test_29) {
                  var_branchModeOnTrueLabel_48148 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1373)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (temp_31.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1374)) ;
                }
              }
              enumGalgasBool test_32 = kBoolTrue ;
              if (kBoolTrue == test_32) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = object ;
                test_32 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_33.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1376)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1376)).boolEnum () ;
                if (kBoolTrue == test_32) {
                  var_branchModeOnFalseLabel_48066 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1377)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (temp_34.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = object ;
                test_35 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_36.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1381)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_branchModeOnFalseLabel_48066 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1382)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (temp_37.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1383)) ;
                }
              }
              enumGalgasBool test_38 = kBoolTrue ;
              if (kBoolTrue == test_38) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = object ;
                test_38 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_39.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1385)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1385)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1385)).boolEnum () ;
                if (kBoolTrue == test_38) {
                  var_branchModeOnTrueLabel_48148 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1386)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (temp_40.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1387)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_41 = kBoolTrue ;
              if (kBoolTrue == test_41) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = object ;
                test_41 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_42.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1390)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1390)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1390)).boolEnum () ;
                if (kBoolTrue == test_41) {
                  var_branchModeOnFalseLabel_48066 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1391)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = object ;
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
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = object ;
          switch (temp_44.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_45 = kBoolTrue ;
              if (kBoolTrue == test_45) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = object ;
                test_45 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_46.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1398)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1398)).boolEnum () ;
                if (kBoolTrue == test_45) {
                  var_branchModeOnTrueLabel_48148 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1399)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = object ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (temp_47.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1400)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_48 = kBoolTrue ;
              if (kBoolTrue == test_48) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_49 = object ;
                test_48 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_49.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1403)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1403)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1403)).boolEnum () ;
                if (kBoolTrue == test_48) {
                  var_branchModeOnTrueLabel_48148 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1404)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_50 = object ;
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
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_52 = object ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_53 = object ;
    test_51 = GALGAS_bool (kIsEqual, var_branchModeOnFalseLabel_48066.objectCompare (temp_52.readProperty_mBranchModeOnFalseLabel ())).operator_and (GALGAS_bool (kIsEqual, var_branchModeOnTrueLabel_48148.objectCompare (temp_53.readProperty_mBranchModeOnTrueLabel ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1411)).boolEnum () ;
    if (kBoolTrue == test_51) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_54 = object ;
      outArgument_outModifiedTerminator = temp_54 ;
    }
  }
  if (kBoolFalse == test_51) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_55 = object ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_56 = object ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_57 = object ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_58 = object ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_55.readProperty_mInstructionLocation (), temp_56.readProperty_mConditionalBranch (), temp_57.readProperty_mTargetLabelWhenTrue (), var_branchModeOnTrueLabel_48148, temp_58.readProperty_mTargetLabelWhenFalse (), var_branchModeOnFalseLabel_48066  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1414)) ;
    ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1421)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (void) {
  enterExtensionMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                                  extensionMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                    const GALGAS_uint constinArgument_inAddress,
                                                                                                    const GALGAS_string constinArgument_inBlockLabel,
                                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                    const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                    GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
            test_3 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_4.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1436)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1436)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = object ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1437)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
            test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_7.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1440)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1440)).boolEnum () ;
            if (kBoolTrue == test_6) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
              ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1441)) ;
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
  if (kBoolFalse == test_0) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = object ;
      test_9 = GALGAS_bool (kIsEqual, temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_9) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = object ;
        switch (temp_11.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = object ;
              test_12 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_13.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1448)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1448)).boolEnum () ;
              if (kBoolTrue == test_12) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = object ;
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1449)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = object ;
              test_15 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_16.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1452)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1452)).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_17 = object ;
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_17.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1453)) ;
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
    if (kBoolFalse == test_9) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = object ;
      switch (temp_18.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = object ;
          switch (temp_19.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_20 = kBoolTrue ;
              if (kBoolTrue == test_20) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = object ;
                test_20 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_21.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1462)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1462)).boolEnum () ;
                if (kBoolTrue == test_20) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1463)) ;
                }
              }
              enumGalgasBool test_23 = kBoolTrue ;
              if (kBoolTrue == test_23) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = object ;
                test_23 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_24.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1465)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1465)).boolEnum () ;
                if (kBoolTrue == test_23) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_25.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1466)) ;
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
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = object ;
          switch (temp_26.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = object ;
                test_27 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_28.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1473)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1473)).boolEnum () ;
                if (kBoolTrue == test_27) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_29.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)) ;
                }
              }
              enumGalgasBool test_30 = kBoolTrue ;
              if (kBoolTrue == test_30) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = object ;
                test_30 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_31.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1476)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1476)).boolEnum () ;
                if (kBoolTrue == test_30) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_32 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_32.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_33 = kBoolTrue ;
              if (kBoolTrue == test_33) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = object ;
                test_33 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_34.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1480)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1480)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1480)).boolEnum () ;
                if (kBoolTrue == test_33) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_35 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_35.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)) ;
                }
              }
              enumGalgasBool test_36 = kBoolTrue ;
              if (kBoolTrue == test_36) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = object ;
                test_36 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_37.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1483)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1483)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1483)).boolEnum () ;
                if (kBoolTrue == test_36) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_38 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_38.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1484)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_39 = kBoolTrue ;
              if (kBoolTrue == test_39) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = object ;
                test_39 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_40.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1487)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1487)).boolEnum () ;
                if (kBoolTrue == test_39) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_41 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_41.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1488)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = object ;
          switch (temp_42.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_43 = kBoolTrue ;
              if (kBoolTrue == test_43) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = object ;
                test_43 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_44.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1494)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1494)).boolEnum () ;
                if (kBoolTrue == test_43) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_45 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_45.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1495)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_46 = kBoolTrue ;
              if (kBoolTrue == test_46) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = object ;
                test_46 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_47.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1498)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1498)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1498)).boolEnum () ;
                if (kBoolTrue == test_46) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_48 = object ;
                  ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_48.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1499)) ;
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
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (void) {
  enterExtensionMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                         extensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          result_outSize = GALGAS_uint ((uint32_t) 2U) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          result_outSize = GALGAS_uint ((uint32_t) 4U) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          result_outSize = GALGAS_uint ((uint32_t) 6U) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
      test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = object ;
        switch (temp_5.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            result_outSize = GALGAS_uint ((uint32_t) 2U) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            result_outSize = GALGAS_uint ((uint32_t) 4U) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
            result_outSize = GALGAS_uint ((uint32_t) 6U) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
      switch (temp_6.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
          switch (temp_7.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint ((uint32_t) 4U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
          switch (temp_8.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              result_outSize = GALGAS_uint ((uint32_t) 4U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint ((uint32_t) 8U) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = object ;
          switch (temp_9.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              result_outSize = GALGAS_uint ((uint32_t) 6U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint ((uint32_t) 8U) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint ((uint32_t) 10U) ;
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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize (void) {
  enterExtensionGetter_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                       extensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize (defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_terminatorSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator generateTerminatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          GALGAS_codeList & outArgument_outCode,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  GALGAS_uint var_trueTargetAddress_59085 ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabelWhenTrue (), var_trueTargetAddress_59085, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1554)) ;
  GALGAS_uint var_falseTargetAddress_59171 ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabelWhenFalse (), var_falseTargetAddress_59171, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1555)) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
  GALGAS_lstring var_Zlabel_59185 = GALGAS_lstring::constructor_new (GALGAS_string ("_Bcc_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_terminators.galgas", 1556)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)), temp_2.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = object ;
      switch (temp_5.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = object ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59171, temp_6.readProperty_mTargetLabelWhenFalse (), temp_7.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)), var_Zlabel_59185, temp_8.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)) ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = object ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), var_falseTargetAddress_59171, temp_9.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59185, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = object ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1566)), var_Zlabel_59185, temp_10.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1566)) ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = object ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59171, temp_11.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1567)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1567)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59185, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1568)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1568)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = object ;
      test_12 = GALGAS_bool (kIsEqual, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = object ;
        switch (temp_14.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = object ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = object ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59085, temp_15.readProperty_mTargetLabelWhenTrue (), temp_16.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_17 = object ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)), var_Zlabel_59185, temp_17.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)) ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = object ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), var_trueTargetAddress_59085, temp_18.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59185, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = object ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1579)), var_Zlabel_59185, temp_19.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1579)) ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = object ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59085, temp_20.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1580)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1580)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59185, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1581)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1581)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_12) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = object ;
      switch (temp_21.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = object ;
          switch (temp_22.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = object ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59171, temp_23.readProperty_mTargetLabelWhenFalse (), temp_24.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)), var_trueTargetAddress_59085, temp_25.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = object ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59171, temp_26.readProperty_mTargetLabelWhenFalse (), temp_27.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1591)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59085, temp_28.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1592)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1592)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = object ;
          switch (temp_29.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = object ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59085, temp_30.readProperty_mTargetLabelWhenTrue (), temp_31.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_32 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), var_falseTargetAddress_59171, temp_32.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1600)), var_Zlabel_59185, temp_33.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1600)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), var_falseTargetAddress_59171, temp_34.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59185, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_35 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59085, temp_35.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)), var_Zlabel_59185, temp_36.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)), var_falseTargetAddress_59171, temp_37.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59185, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_38 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59085, temp_38.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1608)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1608)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = object ;
          switch (temp_39.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = object ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_41 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59085, temp_40.readProperty_mTargetLabelWhenTrue (), temp_41.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59171, temp_42.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1616)), var_Zlabel_59185, temp_43.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1616)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59171, temp_44.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59185, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_45 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), var_trueTargetAddress_59085, temp_45.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = object ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1621)), var_Zlabel_59185, temp_46.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1621)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59171, temp_47.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1622)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1622)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59185, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1623)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1623)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_48 = object ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59085, temp_48.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1624)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1624)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (void) {
  enterExtensionMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                               extensionMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator isEqualToTerminator'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1637)) ;
        }
      }
      GALGAS_ipic_31__38_ConditionalJumpTerminator var_t_64429 = temp_1 ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = object ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mConditionalBranch ().objectCompare (var_t_64429.readProperty_mConditionalBranch ())) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_t_64429.readProperty_mTargetLabelWhenTrue ().readProperty_string ())) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_6.readProperty_mBranchModeOnTrueLabel ().objectCompare (var_t_64429.readProperty_mBranchModeOnTrueLabel ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_t_64429.readProperty_mTargetLabelWhenFalse ().readProperty_string ())) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = object ;
          result_outResult = GALGAS_bool (kIsEqual, temp_10.readProperty_mBranchModeOnFalseLabel ().objectCompare (var_t_64429.readProperty_mBranchModeOnFalseLabel ())) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (void) {
  enterExtensionGetter_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                            extensionGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (defineExtensionGetter_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_condition_skip_instruction instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = object ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                        extensionGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (defineExtensionGetter_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction instructionRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = object ;
  callExtensionMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 45)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 44)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (void) {
  enterExtensionMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                          extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18InstructionWithNoOperand instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38_InstructionWithNoOperand * object = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_0 = object ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (extensionGetter_mnemonic (temp_0.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand.mSlotID,
                                           extensionGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay (defineExtensionGetter_ipic_31__38_InstructionWithNoOperand_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18InstructionWithNoOperand generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38_InstructionWithNoOperand_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                               GALGAS_codeList & outArgument_outCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_InstructionWithNoOperand * object = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  GALGAS_uint var_c_2918 ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_0 = object ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT:
    {
      var_c_2918 = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW:
    {
      var_c_2918 = GALGAS_uint ((uint32_t) 7U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP:
    {
      var_c_2918 = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP:
    {
      var_c_2918 = GALGAS_uint ((uint32_t) 6U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH:
    {
      var_c_2918 = GALGAS_uint ((uint32_t) 5U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET:
    {
      var_c_2918 = GALGAS_uint ((uint32_t) 255U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP:
    {
      var_c_2918 = GALGAS_uint ((uint32_t) 3U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  temp_2.addAssign_operation (var_c_2918  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (extensionGetter_mnemonic (temp_1.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38_InstructionWithNoOperand_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand.mSlotID,
                                     extensionMethod_ipic_31__38_InstructionWithNoOperand_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38_InstructionWithNoOperand_generateCode (defineExtensionMethod_ipic_31__38_InstructionWithNoOperand_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FDA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  GALGAS_string var_s_3566 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = object ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_s_3566 = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_s_3566 = GALGAS_string ("ADDWFC") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_s_3566 = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_s_3566 = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_s_3566 = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_s_3566 = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_s_3566 = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_s_3566 = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_s_3566 = GALGAS_string ("RLCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_s_3566 = GALGAS_string ("RLNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_s_3566 = GALGAS_string ("RRCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_s_3566 = GALGAS_string ("RRNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_s_3566 = GALGAS_string ("SUBFWB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_s_3566 = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_s_3566 = GALGAS_string ("SUBWFB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_s_3566 = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_s_3566 = GALGAS_string ("XORWF") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_1 = object ;
  var_s_3566.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_3 = object ;
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = object ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_and (temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_s_3566.plusAssign_operation(GALGAS_string (", W, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 146)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = object ;
      test_5 = temp_6.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_5) {
        var_s_3566.plusAssign_operation(GALGAS_string (", F, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 148)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_8 = object ;
        test_7 = temp_8.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_7) {
          var_s_3566.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 150)) ;
        }
      }
      if (kBoolFalse == test_7) {
        var_s_3566.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 152)) ;
      }
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_3566  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 154)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FDA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  GALGAS_uint var_code_4790 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = object ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 9216U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 8192U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 5120U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 7168U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 1024U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 10240U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 4096U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 20480U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 13312U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 17408U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 12288U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 16384U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 21504U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 23552U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 22528U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 14336U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_code_4790 = GALGAS_uint ((uint32_t) 6144U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = object ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_4790 = var_code_4790.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 186)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = object ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 188)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_code_4790 = var_code_4790.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 189)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_5 = object ;
  var_code_4790 = var_code_4790.operator_or (temp_5.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = object ;
  GALGAS_uintlist temp_7 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)) ;
  temp_7.addAssign_operation (var_code_4790  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), temp_7  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  GALGAS_string var_s_5982 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = object ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_s_5982 = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_s_5982 = GALGAS_string ("MOVWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_s_5982 = GALGAS_string ("MULWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_s_5982 = GALGAS_string ("NEGF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_s_5982 = GALGAS_string ("SETF") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = object ;
  var_s_5982.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_5982  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 214)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint /* constinArgument_inAddress */,
                                                                                            const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  GALGAS_uint var_code_6591 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = object ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_6591 = GALGAS_uint ((uint32_t) 27136U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_6591 = GALGAS_uint ((uint32_t) 28160U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_6591 = GALGAS_uint ((uint32_t) 512U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_6591 = GALGAS_uint ((uint32_t) 27648U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_6591 = GALGAS_uint ((uint32_t) 26624U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_2 = object ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_6591 = var_code_6591.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 234)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_3 = object ;
  var_code_6591 = var_code_6591.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_4 = object ;
  GALGAS_uintlist temp_5 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
  temp_5.addAssign_operation (var_code_6591  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), temp_5  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 237)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 4U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = object ;
  GALGAS_string var_s_7556 = GALGAS_string ("MOVFF ").add_operation (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_7556  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 258)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  GALGAS_uintlist var_code_8059 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 268)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = object ;
  var_code_8059.addAssign_operation (GALGAS_uint ((uint32_t) 49152U).operator_or (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = object ;
  var_code_8059.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_2 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), var_code_8059  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 271)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_literalOperation instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = object ;
  GALGAS_string var_s_8690 = extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (temp_2.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)) ;
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 284)) ;
  temp_3.addAssign_operation (var_s_8690  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 284)) ;
  result_outResult = temp_3 ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_literalOperation generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                          const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                          const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                          const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                          GALGAS_codeList & outArgument_outCode,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code_9163 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  switch (temp_0.readProperty_mLiteralInstruction ().enumValue ()) {
  case GALGAS_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      var_code_9163 = GALGAS_uint ((uint32_t) 3840U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_9163 = GALGAS_uint ((uint32_t) 2816U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_9163 = GALGAS_uint ((uint32_t) 2304U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_9163 = GALGAS_uint ((uint32_t) 3584U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MULLW:
    {
      var_code_9163 = GALGAS_uint ((uint32_t) 3328U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      var_code_9163 = GALGAS_uint ((uint32_t) 2048U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_9163 = GALGAS_uint ((uint32_t) 2560U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = object ;
  var_code_9163 = var_code_9163.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 304)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = object ;
  GALGAS_uintlist temp_3 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  temp_3.addAssign_operation (var_code_9163  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 305)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode, NULL) ;

