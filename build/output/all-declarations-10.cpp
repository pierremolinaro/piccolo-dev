#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@ipic18_skip_instruction_FDA performInstructionRelativeBranchResolution'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction ;
  callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 832)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 831)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_n.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_outModifiedEmbeddedInstruction, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, object->mAttribute_mRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 840)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@ipic18_intermediate_JSR instructionSize'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  switch (object->mAttribute_mKind.enumValue ()) {
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
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@ipic18_intermediate_JSR instructionRelativeBranchOverflow'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const enumGalgasBool test_0 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 874)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 874)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 875)) ;
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (void) {
  enterCategoryMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                         categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18_intermediate_JSR performInstructionRelativeBranchResolution'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                           GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 893)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 893)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 894)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (GALGAS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 895)) ;
        outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 896))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 896)) ;
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 899)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 899)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 901)).reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 900)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 900)).add_operation (GALGAS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 901)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 902)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 902))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 900)) ;
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@ipic18_intermediate_JSR instructionDisplay'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  GALGAS_string var_s ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      var_s = GALGAS_string ("JSR ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 913)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 913)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      var_s = GALGAS_string ("RCALL ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 914)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 914)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      var_s = GALGAS_string ("CALL ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 915)) ;
    }
    break ;
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 917)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@ipic18_intermediate_JSR generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                             const GALGAS_uint constinArgument_inAddress,
                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                             GALGAS_codeList & outArgument_outCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 927)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 930)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 932)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@ipic18_intermediate_instruction_computed_rcall instructionSize'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)).substract_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize, NULL) ;

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
  outArgument_outInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mKind  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 148)) ;
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
  GALGAS_bitSliceTable joker_6102 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_6102, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 165)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, var_IPICregisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 174)) ;
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
  GALGAS_bitSliceTable joker_6998 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_6998, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 194)) ;
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code ;
  switch (object->mAttribute_mFAinstruction.enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 205)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 206)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 207)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 208)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 209)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 211)), GALGAS_string ("*** INTERNAL ERROR ***")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 211)) ;
      var_code.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, var_code, var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 213)) ;
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
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mAttribute_mSourceRegisterName.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_sourceIPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 231)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mAttribute_mDestinationRegisterName.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_destinationIPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 237)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_sourceIPICregisterDescription, var_destinationIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 243)) ;
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
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 261)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 270)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mBitOrientedOp, var_IPICregisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 277)) ;
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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 296)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 298)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 298)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 299)).add_operation (GALGAS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 299))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 299)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLiteralInstruction, var_result.operator_and (GALGAS_sint ((int32_t) 255L).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 305)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 305)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 305))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 302)) ;
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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 320)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 322)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 323)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 323))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 323)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (object->mAttribute_mInstructionLocation, var_result.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 328))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 326)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mFSRindex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 343)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFSRindex.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the LFSR register idx (").add_operation (object->mAttribute_mFSRindex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 344)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 344)).add_operation (GALGAS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 344))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 344)) ;
  }
  GALGAS_sint_36__34_ var_result ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 347)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 349)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 350)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 350))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 350)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mFSRindex, var_result.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 355))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 352)) ;
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
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_requiredBank, var_returnedBank, var_preservesBank, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 371)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 372)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 372)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 373)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 373)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 373)) ;
    var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 374)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 375)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 376)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 378))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 378)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 380)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 383)) ;
  }
  const enumGalgasBool test_5 = var_preservesBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioCurrentBank = var_returnedBank ;
    const enumGalgasBool test_6 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("the routine call should preserve bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 388)) ;
    }
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, object->mAttribute_mKind  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 392)) ;
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("Bank index should be <= 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 441)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 442)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checkbank fail: there is no selected bank")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 443)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (object->mAttribute_mBankIndex)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 445)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 445)).add_operation (object->mAttribute_mBankIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 445))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 445)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 469)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 470)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 470))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 470)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 471)) ;
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
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 493)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 504)) ;
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
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_loopLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 534)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 534)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 535)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 538)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_loopLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 541))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 541))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 537))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 537)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 543)) ;
  ioArgument_ioBlockLabel = var_loopLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 545)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list execution is endless")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 565)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 568)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_loopLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 571))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 567))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 567)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 575)) ;
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 578)) ;
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 600)) ;
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 602)) ;
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
  GALGAS_registerExpression var_BSRregister = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 627))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 627)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 628))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 628))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 628)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 629))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 626)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) var_BSRregister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_BSR_5F_IPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 631)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mAttribute_mRegister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 638)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_BSR_5F_IPICregisterDescription, var_save_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645)) ;
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 651)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSaveBankInstruction, GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 670)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_save_5F_IPICregisterDescription, var_BSR_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 673))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 673)) ;
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
  GALGAS_sint_36__34_ var_lowerBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)) ;
  GALGAS_sint_36__34_ var_upperBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 698)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound.objectCompare (var_upperBound)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 701)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 701)).add_operation (var_upperBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 701)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 701))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 701)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 702)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 703)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 703)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 703))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 703)) ;
    }
  }
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap = constinArgument_inConstantMap ;
  {
  var_tempConstantMap.modifier_insertKey (object->mAttribute_mConstantName, var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 708)) ;
  }
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 709)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_finalBank.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstruction, GALGAS_string ("enclosed instruction list should not modify bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)) ;
  }
  GALGAS_sint_36__34_ var_idx = var_lowerBound.add_operation (GALGAS_uint ((uint32_t) 1U).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 734)) ;
  if (var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)).add_operation (GALGAS_uint ((uint32_t) 1U).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)).isValid ()) {
    uint32_t variant_25987 = var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)).add_operation (GALGAS_uint ((uint32_t) 1U).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)).uintValue () ;
    bool loop_25987 = true ;
    while (loop_25987) {
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_idx.objectCompare (var_upperBound)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_25987 = test_4.isValid () ;
      if (loop_25987) {
        loop_25987 = test_4.boolValue () ;
      }
      if (loop_25987 && (0 == variant_25987)) {
        loop_25987 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)) ;
      }
      if (loop_25987) {
        variant_25987 -- ;
        GALGAS_constantMap var_constantMap = constinArgument_inConstantMap ;
        {
        var_constantMap.modifier_insertKey (object->mAttribute_mConstantName, var_idx, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 737)) ;
        }
        {
        routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 738)) ;
        }
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 756)) ;
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 779)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 781)).objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mBankIndex.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("selected bank idx should be lower or equal to 15")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 782)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 783)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 784)).objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioCurrentBank = object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 785)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mBankIndex  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 786))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 786)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mBankIndex.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_5, GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 788)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 788)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 788))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 788)) ;
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 812)) ;
  }
  GALGAS_uint var_registerAddress ;
  callCategoryMethod_getRegisterAddress ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_registerAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)) ;
  GALGAS_uint var_newBank = var_registerAddress.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioCurrentBank = var_newBank ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_luint::constructor_new (var_newBank, object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 821)).mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 821))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 819))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 819)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 823)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_3, GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 823)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 823))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 823)) ;
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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 840)) ;
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
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 858)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 882)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOccurrenceFactor.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("occurrence argument is zero: no generated code")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 883)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 886))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 886)) ;
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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 909)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 911)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 912)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 912)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 912))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 912)) ;
  }
  GALGAS_uint var_address = var_result.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 914)) ;
  GALGAS_registerExpression var_TBLPTRU = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 917)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 918))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 918))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 918)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 919))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 916)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription ;
  GALGAS_bitSliceTable joker_33090 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_33090, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 921)) ;
  GALGAS_uint var_upper = var_address.right_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 930)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_upper.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 934)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 932))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 932)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_upper.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 940)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 938))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 938)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 946)), var_upper  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 944))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 944)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 950)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 948))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 948)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRH = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 956)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 957))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 957))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 957)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 958))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 955)) ;
  GALGAS_bitSliceTable joker_34318 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_34318, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 960)) ;
  GALGAS_uint var_high = var_address.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 969)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 969)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_high.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 973)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 971))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 971)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_high.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 978)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 976))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 976)) ;
    }else if (kBoolFalse == test_4) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), var_high  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 981))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 981)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRL = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 993))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 993))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 993)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 994))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 991)) ;
  GALGAS_bitSliceTable joker_35533 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_35533, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 996)) ;
  GALGAS_uint var_low = var_address.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1005)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_low.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1009)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1007))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1007)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_low.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)) ;
    }else if (kBoolFalse == test_6) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1019)), var_low  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1023)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1021))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1021)) ;
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
  constinArgument_inDataMap.method_searchKey (object->mAttribute_mDataName, var_data, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1046)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mDataIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1048)).objectCompare (var_data.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1048)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDataIndex.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("index should be < ").add_operation (var_data.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1049)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1049)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1049))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1049)) ;
  }
  GALGAS_registerExpression var_TBLPTRU = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1054))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1054))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1054)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1052)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription ;
  GALGAS_bitSliceTable joker_37654 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_37654, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1057)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1073)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071)) ;
  GALGAS_registerExpression var_TBLPTRH = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1077)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1079))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
  GALGAS_bitSliceTable joker_38351 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_38351, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1093)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1093)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1097)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1095))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1095)) ;
  GALGAS_registerExpression var_TBLPTRL = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1101)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1103))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
  GALGAS_bitSliceTable joker_39047 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_outIPICregisterDescription, joker_39047, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1105)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mDataName, object->mAttribute_mDataIndex.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1117)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1117)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1114))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1114)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1121)), var_outIPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1119))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1119)) ;
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
  GALGAS_uint joker_40217 ; // Joker input parameter
  GALGAS_bool joker_40220 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_requiredBank, joker_40217, joker_40220, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1144)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1145)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1145)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1146)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1146)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1146)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1146)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1146)) ;
    var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1147)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1148)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1149)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1151)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1151))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1151)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1153)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1155)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1163))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1163))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166)) ;
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
  cEnumerator_lstringlist enumerator_42006 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_42006.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint var_returnedBank ;
    GALGAS_bool var_preservesBank ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_42006.current_mValue (HERE), var_isNoReturn, var_requiredBank, var_returnedBank, var_preservesBank, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1192)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1193)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1193)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_42006.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)) ;
      var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)) ;
      }
      GALGAS_location location_2 (enumerator_42006.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1201)) ;
    }
    const enumGalgasBool test_3 = var_isNoReturn.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_42006.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_42006.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1204)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1204)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1204))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1204)) ;
    }
    const enumGalgasBool test_5 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1206)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1206)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_42006.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (enumerator_42006.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1207)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1207)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1207))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1207)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1208)).operator_and (var_preservesBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1208)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1208)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = var_someReturnsBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_returnedBankSelection = var_returnedBank ;
          var_someReturnsBank = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_returnedBankSelection.objectCompare (var_returnedBank)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string var_errorMessage = GALGAS_string ("the '").add_operation (enumerator_42006.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1213)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1213)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1213)) ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1214)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_errorMessage.dotAssign_operation (GALGAS_string ("no bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)) ;
            }else if (kBoolFalse == test_10) {
              var_errorMessage.dotAssign_operation (GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
            }
            var_errorMessage.dotAssign_operation (GALGAS_string (", but previous routine(s) return(s) ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)) ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_returnedBankSelection.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1220)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              var_errorMessage.dotAssign_operation (GALGAS_string ("no bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1221)) ;
            }else if (kBoolFalse == test_11) {
              var_errorMessage.dotAssign_operation (GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1223)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1223))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1223)) ;
            }
            GALGAS_location location_12 (enumerator_42006.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_12, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1225)) ;
          }
        }
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_13 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)).operator_and (var_preservesBank COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)).boolEnum () ;
        if (kBoolTrue == test_13) {
        }
      }
    }
    enumerator_42006.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection ;
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1233)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_14) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1235)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1235)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1235))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1235)) ;
  }else if (kBoolFalse == test_14) {
    const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_15) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1237)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1237)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1237))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1237)) ;
    }else if (kBoolFalse == test_15) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_size.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1238)).objectCompare (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1238)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)).add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)) ;
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1242)) ;
  cEnumerator_lstringlist enumerator_44503 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_44503.hasCurrentObject ()) {
    var_targetInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (enumerator_44503.current_mValue (HERE).mAttribute_location, enumerator_44503.current_mValue (HERE), GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1244))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1244))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1244)) ;
    enumerator_44503.gotoNextObject () ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, var_targetInstructionList, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)) ;
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
  cEnumerator_lstringlist enumerator_45512 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_45512.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint joker_45599 ; // Joker input parameter
    GALGAS_bool joker_45602 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_45512.current_mValue (HERE), var_isNoReturn, var_requiredBank, joker_45599, joker_45602, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1273)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1274)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1274)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_45512.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1275)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1275)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1275)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1275)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1275)) ;
      var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)) ;
      }
      GALGAS_location location_2 (enumerator_45512.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1284)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1284)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1284)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_45512.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("for being named in a computed goto, the '").add_operation (enumerator_45512.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)).add_operation (GALGAS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)) ;
    }
    enumerator_45512.gotoNextObject () ;
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed goto instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1292)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1295)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1297)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1297)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1297))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1297)) ;
  }else if (kBoolFalse == test_5) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1299)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1299)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1299))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1299)) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_size.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)).objectCompare (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)).add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1301)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1305)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1304))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1304)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1312)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1314)) ;
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
  GALGAS_uint var_returnedBankValue = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1338)) ;
  cEnumerator_lstringlist enumerator_48267 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_48267.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn ;
    GALGAS_uint var_requiredBank ;
    GALGAS_uint var_returnedBank ;
    GALGAS_bool var_preservesBank ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_48267.current_mValue (HERE), var_isNoReturn, var_requiredBank, var_returnedBank, var_preservesBank, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1340)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (enumerator_48267.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)) ;
      var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1344)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1345)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1346)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)) ;
      }
      GALGAS_location location_2 (enumerator_48267.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1350)) ;
    }
    const enumGalgasBool test_3 = var_preservesBank.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_allReturnBank = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_returnedBankValue.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1355)))).operator_and (GALGAS_bool (kIsNotEqual, var_returnedBankValue.objectCompare (var_returnedBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1355)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (enumerator_48267.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1356)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1356)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1356)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1356)).add_operation (var_returnedBankValue.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1357)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1357)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1357))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1356)) ;
      }else if (kBoolFalse == test_4) {
        var_allPreserveBankSetting = GALGAS_bool (false) ;
        var_returnedBankValue = var_returnedBank ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (enumerator_48267.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_48267.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1363)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1363))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1363)) ;
    }
    enumerator_48267.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = var_allReturnBank.operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1367)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1367)).boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioCurrentBank = var_returnedBankValue ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_9 = var_allReturnBank.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1369)).operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1369)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1369)).boolEnum () ;
    if (kBoolTrue == test_9) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)) ;
    }
  }
  const enumGalgasBool test_10 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)).boolEnum () ;
  if (kBoolTrue == test_10) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invoked routine(s) do(es) not preserve bank selection")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1373)) ;
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed bra instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1380)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1383)) ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_11) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1385)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1385)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1385))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1385)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_12) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1387)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1387)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1387))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1387)) ;
    }else if (kBoolFalse == test_12) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, var_size.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1388)).objectCompare (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1388)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1389)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1389)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1389)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1389)).add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1389)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1389)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1389))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1389)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1393)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1396))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1392))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1392)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1402)) ;
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
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1426)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed retlw instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1428)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1431)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1433)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1433)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1433))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1433)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_size.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1435)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1435)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1435))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1435)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_size.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1436)).objectCompare (object->mAttribute_mImmediateExpressionList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1436)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the constant list length (").add_operation (object->mAttribute_mImmediateExpressionList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1437)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1437)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1437)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1437)).add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1437)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1437)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1437))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1437)) ;
      }
    }
  }
  GALGAS_uintlist var_literalValues = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1440)) ;
  cEnumerator_immediatExpressionList enumerator_52902 (object->mAttribute_mImmediateExpressionList, kEnumeration_up) ;
  GALGAS_uint index_52870 ((uint32_t) 0) ;
  while (enumerator_52902.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_52902.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1442)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_v.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_v.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1443)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1443)).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value with idx ").add_operation (index_52870.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1444)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1444)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1444)).add_operation (var_v.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1444)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1444)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1444))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1444)) ;
    }
    var_literalValues.addAssign_operation (var_v.operator_and (GALGAS_sint ((int32_t) 255L).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1446)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1446)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1446))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1446)) ;
    enumerator_52902.gotoNextObject () ;
    index_52870.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1441)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_literalValues, object->mAttribute_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1457)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1459)) ;
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
  GALGAS_uint joker_54403 ; // Joker input parameter
  GALGAS_bool joker_54406 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_requiredBank, joker_54403, joker_54406, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1480)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage = GALGAS_string ("the routine '").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)).add_operation (var_requiredBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1482)) ;
    var_errorMessage.dotAssign_operation (GALGAS_string (", but bank selection ")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1484)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is not defined")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1485)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage.dotAssign_operation (GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1487))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1487)) ;
    }
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)) ;
  }
  GALGAS_conditionalBranchMode var_mode ;
  const enumGalgasBool test_5 = object->mAttribute_mIsBcc.boolEnum () ;
  if (kBoolTrue == test_5) {
    var_mode = GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1497)) ;
  }else if (kBoolFalse == test_5) {
    var_mode = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1499)) ;
  }
  GALGAS_lstring var_label_30_ = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1502)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1502)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1502)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1506)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, object->mAttribute_mTargetLabel, var_mode, var_label_30_, var_mode  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1509))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1505))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1505)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1516)) ;
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
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1549)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.reader_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1571)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1571)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, object->mAttribute_mSkipIfSet, var_IPICregisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1574))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1574)) ;
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
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1603)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_58891 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_58891, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.reader_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, var_baseCode, var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.operator_and (object->mAttribute_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1662)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1663)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = object->mAttribute_mIncrement.operator_and (object->mAttribute_mSkipIfZero.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1664)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1664)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1665)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_mIncrement.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1666)).operator_and (object->mAttribute_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1666)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1667)) ;
      }else if (kBoolFalse == test_2) {
        var_baseCode = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1669)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_60956 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_60956, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1672)) ;
  GALGAS_uint var_currentBank = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction ;
  callCategoryMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1683)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_currentBank.objectCompare (var_currentBank)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEmbeddedInstruction.reader_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1696)), GALGAS_string ("this instruction does not preserve bank setting")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1696)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_embeddedInstruction, var_baseCode, var_IPICregisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)) ;
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
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1729)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1729)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1730)) ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1731)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1731)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1731)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1732)) ;
  GALGAS_lstring var_exitLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1733)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1733)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1733)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1734)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mIfCondition.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, var_testTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1736)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mThenInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1757)) ;
  }
  GALGAS_bool var_thenContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = var_thenContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1778)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1781))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1781))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1777))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1777)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1783)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1786)) ;
  }
  GALGAS_bool var_elseContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_1 = var_elseContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1807)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1810))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1810))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1806))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1806)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1812)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank.objectCompare (var_thenBranchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank ;
  }else if (kBoolFalse == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1817)) ;
    var_elseBranchFinalBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1818)) ;
  }
  const enumGalgasBool test_3 = var_thenContinuesInSequence.operator_or (var_elseContinuesInSequence COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1821)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioBlockLabel = var_exitLabel ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1824)) ;
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
  constinArgument_inMacroMap.method_searchKey (object->mAttribute_mMacroName, var_constantNameList, var_instructionList, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1847)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1848)).objectCompare (var_constantNameList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1848)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, var_constantNameList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1850)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1850)).add_operation (GALGAS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1850))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1849)) ;
  }
  GALGAS_constantMap var_constantMap = constinArgument_inConstantMap ;
  cEnumerator_immediatExpressionList enumerator_66564 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  cEnumerator_lstringlist enumerator_66600 (var_constantNameList, kEnumeration_up) ;
  while (enumerator_66564.hasCurrentObject () && enumerator_66600.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_expressionValue ;
    callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_66564.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap, var_expressionValue, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1854)) ;
    {
    var_constantMap.modifier_insertKey (enumerator_66600.current_mValue (HERE), var_expressionValue, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1855)) ;
    }
    enumerator_66564.gotoNextObject () ;
    enumerator_66600.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList (var_instructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1858)) ;
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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mCaseExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1915)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1917)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("case value is evaluated as ").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1918)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1918)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1918))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1918)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCaseConstantMap.reader_hasKey (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1921)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1921)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1922)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1922)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1922))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1922)) ;
    inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.reader_locationForKey (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1923)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1923)), GALGAS_string ("the '").add_operation (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1923)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1923)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1923))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1923)) ;
  }else if (kBoolFalse == test_1) {
    {
    ioArgument_ioCaseConstantMap.modifier_insertKey (GALGAS_lstring::constructor_new (var_result.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1925)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1925)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1925)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1930)), ioArgument_ioLastComparisonValue.substract_operation (var_result, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1931)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1931)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1931))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1928))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1928)) ;
  ioArgument_ioLastComparisonValue = var_result ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1935)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1935)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1935)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1936)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1940)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1942)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1938)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1947)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1951)) ;
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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mMinExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1968)) ;
  GALGAS_sint_36__34_ var_maxBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mMaxExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1969)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_minBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1972)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1973)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1973)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1973))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1973)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_maxBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1976)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, var_maxBound.objectCompare (var_minBound)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("max bound (").add_operation (var_maxBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1981)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1981)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1981)).add_operation (var_minBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1981)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1981)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1981))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1981)) ;
    var_ok = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_3 = var_ok.boolEnum () ;
  if (kBoolTrue == test_3) {
    cEnumerator_range enumerator_71725 (GALGAS_range::constructor_new (var_minBound.reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)), var_maxBound.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)), kEnumeration_up) ;
    while (enumerator_71725.hasCurrentObject ()) {
      const enumGalgasBool test_4 = ioArgument_ioCaseConstantMap.reader_hasKey (enumerator_71725.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1987)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (enumerator_71725.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1988)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1988)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1988))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1988)) ;
        inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.reader_locationForKey (enumerator_71725.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1989)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1989)), GALGAS_string ("the '").add_operation (enumerator_71725.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1989)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1989)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1989)) ;
      }else if (kBoolFalse == test_4) {
        {
        ioArgument_ioCaseConstantMap.modifier_insertKey (GALGAS_lstring::constructor_new (enumerator_71725.current (HERE).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1991)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1991)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1991)) ;
        }
      }
      enumerator_71725.gotoNextObject () ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1997)), ioArgument_ioLastComparisonValue.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1998)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1998)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1998))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1995))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1995)) ;
    GALGAS_lstring var_greaterThanLowBoundLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2000)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2000)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2000)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2001)) ;
    GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2002)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2002)), object->mAttribute_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2002)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2003)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2007)), var_greaterThanLowBoundLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2009)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2011))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2005)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2018)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2023)), var_maxBound.substract_operation (var_minBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2024)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2024)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2024)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2024)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2024))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2021))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2021)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32_ = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2028)), var_conditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2030)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2032))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2026)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2035)), var_greaterThanLowBoundLabel, ioArgument_ioGeneratedInstructionList, var_t_32_  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2034))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2034)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2039)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    ioArgument_ioLastComparisonValue = var_maxBound.add_operation (GALGAS_uint ((uint32_t) 1U).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2042)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2042)) ;
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
  GALGAS_caseConstantMap var_caseConstantMap = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2064)) ;
  GALGAS_lstring var_exitLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2066)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2066)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2066)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  GALGAS_bool var_continuesInSequence = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2074)) ;
  GALGAS_bool var_finalBankSettingDefined = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_75513 (object->mAttribute_mCaseList, kEnumeration_up) ;
  while (enumerator_75513.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2079)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2079)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2079)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2080)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_75720 (enumerator_75513.current_mCaseExpressionList (HERE), kEnumeration_up) ;
    while (enumerator_75720.hasCurrentObject ()) {
      callCategoryMethod_analyzeCaseItem ((const cPtr_pic_31__38_AbstractCaseItem *) enumerator_75720.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel, ioArgument_ioUsedRegisters, var_caseConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2083)) ;
      enumerator_75720.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel ;
    GALGAS_uint var_branchFinalBank = var_initialBankSetting ;
    {
    routine_analyzeInstructionList (enumerator_75513.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2100)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_continuesInSequence = GALGAS_bool (true) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2121)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2124))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2120)) ;
    }
    const enumGalgasBool test_1 = var_finalBankSettingDefined.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_finalBankSetting.objectCompare (var_branchFinalBank)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_branchFinalBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = var_branchFinalBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_finalBankSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_finalBankSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131)) ;
        }
        inCompiler->emitSemanticError (enumerator_75513.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2128)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2129)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2130)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2131))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2128)) ;
      }
    }else if (kBoolFalse == test_1) {
      var_finalBankSettingDefined = GALGAS_bool (true) ;
      var_finalBankSetting = var_branchFinalBank ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    enumerator_75513.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank = var_initialBankSetting ;
  {
  routine_analyzeInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2143)) ;
  }
  GALGAS_bool var_thenContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_7 = var_thenContinuesInSequence.boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2164)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_exitLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2167))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2167))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2163))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2163)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2169)) ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_finalBankSetting.objectCompare (var_branchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_branchFinalBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_10) {
      temp_9 = var_branchFinalBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)) ;
    }
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_finalBankSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2175)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_12) {
      temp_11 = var_finalBankSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2175)) ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mElseBranchStartLocation, GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2172)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2173)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2174)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2175))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2172)) ;
  }
  ioArgument_ioCurrentBank = var_finalBankSetting ;
  const enumGalgasBool test_13 = var_continuesInSequence.boolEnum () ;
  if (kBoolTrue == test_13) {
    ioArgument_ioBlockLabel = var_exitLabel ;
  }else if (kBoolFalse == test_13) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2183)) ;
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
  GALGAS_lstring var_startLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2206)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2206)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2206)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2207)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2210)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_startLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2213))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2213))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2209))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2209)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2214)) ;
  ioArgument_ioBlockLabel = var_startLabel ;
  GALGAS_uint var_repeatedBranchFinalBank = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2218)) ;
  }
  GALGAS_bool var_repeatedInstructionsContinuesInSequence = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2238)) ;
  }
  const enumGalgasBool test_1 = var_repeatedInstructionsContinuesInSequence.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2240)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfRepeatedInstructionList, GALGAS_string ("This branch makes the next code unreachable")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2241)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_81141 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_81141.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2246)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2246)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2246)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2247)) ;
    GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2248)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2248)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2248)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2249)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator ;
    callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) enumerator_81141.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, var_testTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2251)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2264)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2263))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2263)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2268)) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel ;
    GALGAS_uint var_branchFinalBank = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList (enumerator_81141.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2271)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_81141.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2290)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (enumerator_81141.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch makes the next code unreachable")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2293)) ;
    }
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2296)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_startLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2299))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2299))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2295))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2295)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2300)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel ;
    enumerator_81141.gotoNextObject () ;
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
  const enumGalgasBool test_0 = ioArgument_ioBlockInitialBankSelectionMap.reader_hasKey (GALGAS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2350)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_otherInitialBlockSetting ;
    GALGAS_string var_otherBlockName ;
    ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2351)), var_otherInitialBlockSetting, var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2351)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2354)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inInitialBlockSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2354)) ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = var_otherInitialBlockSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356)) ;
      }
      inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2353)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2354)).add_operation (var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2355)).add_operation (GALGAS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2355)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2355)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2356))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2353)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.modifier_insertKey (GALGAS_string ("-").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2360)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2360)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioVisitedBlockSet.reader_hasKey (object->mAttribute_mNextBlock.mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioVisitedBlockSet.addAssign_operation (object->mAttribute_mNextBlock.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)) ;
    ioArgument_ioContinueAccessibilityExploration = GALGAS_bool (true) ;
    GALGAS_pic_31__38_InstructionList joker_86229 ; // Joker input parameter
    GALGAS_abstractBlockTerminationForBlockInstruction joker_86232 ; // Joker input parameter
    GALGAS_location joker_86235 ; // Joker input parameter
    constinArgument_inBlockMap.method_searchKey (object->mAttribute_mNextBlock, joker_86229, joker_86232, joker_86235, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2377)) ;
    const enumGalgasBool test_1 = ioArgument_ioBlockInitialBankSelectionMap.reader_hasKey (object->mAttribute_mNextBlock.mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2378)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_otherInitialBlockSetting ;
      GALGAS_string var_otherBlockName ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (object->mAttribute_mNextBlock, var_otherInitialBlockSetting, var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2379)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2382)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = constinArgument_inInitialBlockSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2382)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2384)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_otherInitialBlockSetting.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2384)) ;
        }
        GALGAS_location location_7 (object->mAttribute_mNextBlock.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("this block goes to '").add_operation (object->mAttribute_mNextBlock.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2381)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2381)).add_operation (GALGAS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2381)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2381)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2382)).add_operation (var_otherBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2383)).add_operation (GALGAS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2383)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2383)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2384))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2381)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      ioArgument_ioBlockInitialBankSelectionMap.modifier_insertKey (object->mAttribute_mNextBlock, constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2388)) ;
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
  callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mTrueTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2403)) ;
  callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mFalseTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2412)) ;
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
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mNextBlock.mAttribute_location, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (object->mAttribute_mNextBlock.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2450)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2450)), object->mAttribute_mNextBlock.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2450)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2451))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2448)) ;
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
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mLocation, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2469)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2469)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2470))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2467)) ;
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
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2486)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2486)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2486)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2487)) ;
  GALGAS_lstring var_conditionFalseLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2488)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2488)), object->mAttribute_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2488)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2489)) ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, var_conditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2491)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_trueTerminator ;
  callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mTrueTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2504)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2516)), var_conditionTrueLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2518)), var_trueTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2515))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2515)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_falseTerminator ;
  callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mAttribute_mFalseTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2521)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2533)), var_conditionFalseLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2535)), var_falseTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2532))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2532)) ;
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
  GALGAS_string var_labelForBlock = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2559)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2562)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mStartBlockName.mAttribute_location, GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (object->mAttribute_mStartBlockName.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567)), object->mAttribute_mStartBlockName.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2568))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2565))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2561))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2561)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2569)) ;
  GALGAS_blockInstructionBlockMap var_blockMap = GALGAS_blockInstructionBlockMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2571)) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_93014 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_93014.hasCurrentObject ()) {
    {
    var_blockMap.modifier_insertKey (enumerator_93014.current_mBlockName (HERE), enumerator_93014.current_mInstructionList (HERE), enumerator_93014.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_93014.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2573)) ;
    }
    enumerator_93014.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InstructionList joker_93207 ; // Joker input parameter
  GALGAS_abstractBlockTerminationForBlockInstruction joker_93210 ; // Joker input parameter
  GALGAS_location joker_93213 ; // Joker input parameter
  var_blockMap.method_searchKey (object->mAttribute_mStartBlockName, joker_93207, joker_93210, joker_93213, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2576)) ;
  GALGAS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap = GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2577)) ;
  {
  var_blockInitialBankSelectionMap.modifier_insertKey (object->mAttribute_mStartBlockName, ioArgument_ioCurrentBank, GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2578)) ;
  }
  GALGAS_stringset var_accessibleBlockSet = GALGAS_stringset::constructor_setWithString (object->mAttribute_mStartBlockName.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2580)) ;
  GALGAS_stringset var_handledBlockSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2581)) ;
  GALGAS_bool var_continueAccessibilityExploration = GALGAS_bool (true) ;
  GALGAS_bool var_continuesInSequence = GALGAS_bool (false) ;
  if (object->mAttribute_mBlockList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)).isValid ()) {
    uint32_t variant_93618 = object->mAttribute_mBlockList.reader_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)).uintValue () ;
    bool loop_93618 = true ;
    while (loop_93618) {
      loop_93618 = var_continueAccessibilityExploration.isValid () ;
      if (loop_93618) {
        loop_93618 = var_continueAccessibilityExploration.boolValue () ;
      }
      if (loop_93618 && (0 == variant_93618)) {
        loop_93618 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)) ;
      }
      if (loop_93618) {
        variant_93618 -- ;
        var_continueAccessibilityExploration = GALGAS_bool (false) ;
        cEnumerator_stringset enumerator_93796 (var_accessibleBlockSet.substract_operation (var_handledBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)), kEnumeration_up) ;
        while (enumerator_93796.hasCurrentObject ()) {
          var_handledBlockSet.addAssign_operation (enumerator_93796.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2587)) ;
          GALGAS_pic_31__38_InstructionList var_instructionList ;
          GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination ;
          GALGAS_location var_endOfBlock ;
          var_blockMap.method_searchKey (enumerator_93796.current (HERE).reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2589)), var_instructionList, var_blockTermination, var_endOfBlock, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2588)) ;
          GALGAS_uint var_currentBank ;
          GALGAS_string joker_94194 ; // Joker input parameter
          var_blockInitialBankSelectionMap.method_searchKey (enumerator_93796.current (HERE).reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2595)), var_currentBank, joker_94194, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2595)) ;
          ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (enumerator_93796.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2596)), var_blockMap.reader_locationForKey (enumerator_93796.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2596))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2596)) ;
          {
          routine_analyzeInstructionList (var_instructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)) ;
          }
          GALGAS_ipic_31__38_AbstractBlockTerminator var_terminator ;
          callCategoryMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock, var_terminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2615)) ;
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            inCompiler->emitSemanticError (var_endOfBlock, GALGAS_string ("execution will not reach the end of the block, but endless block is not allowed")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2627)) ;
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2630)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2629))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2629)) ;
          ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2635)) ;
          callCategoryMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination.ptr (), var_accessibleBlockSet, var_blockMap, enumerator_93796.current (HERE), var_currentBank, var_blockInitialBankSelectionMap, var_continuesInSequence, var_continueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2637)) ;
          enumerator_93796.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_95748 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_95748.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_accessibleBlockSet.reader_hasKey (enumerator_95748.current_mBlockName (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2642)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2642)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_95748.current_mBlockName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_2, GALGAS_string ("this block is not accessible from '").add_operation (object->mAttribute_mStartBlockName.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2643)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2643)).add_operation (GALGAS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2643))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2643)) ;
    }
    enumerator_95748.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = var_continuesInSequence.boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2648)), object->mAttribute_mStartBlockName.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2648)) ;
    GALGAS_string joker_96119 ; // Joker input parameter
    var_blockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2649)), ioArgument_ioCurrentBank, joker_96119, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2649)) ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2651)) ;
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
  outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mConditionLocation, object->mAttribute_mCondition, constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2691)), constinArgument_inConditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2693))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2687)) ;
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
  GALGAS_bitSliceTable joker_98310 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_98310, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2709)) ;
  GALGAS_ipic_31__38_RegisterComparison var_ipicComparison ;
  GALGAS_bool var_complementaryBranch ;
  switch (object->mAttribute_mComparison.enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2723)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2726)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2729)) ;
      var_complementaryBranch = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2732)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2735)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      var_ipicComparison = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2738)) ;
      var_complementaryBranch = GALGAS_bool (true) ;
    }
    break ;
  }
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2742)).mAttribute_location ;
  const enumGalgasBool test_0 = var_complementaryBranch.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2746))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2746)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2747))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2747)), var_IPICregisterDescription, var_ipicComparison  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2744)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2753))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2753)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2754))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2754)), var_IPICregisterDescription, var_ipicComparison  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2751)) ;
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
  GALGAS_bitSliceTable joker_100753 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_100753, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2773)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2783)).mAttribute_location ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2787))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2787)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2788))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2788)), var_IPICregisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2785)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2795))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2795)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2796))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2796)), var_IPICregisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2793)) ;
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
  GALGAS_bitSliceTable joker_102397 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_102397, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2816)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2826)).mAttribute_location ;
  const enumGalgasBool test_0 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2830))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2830)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2831))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2831)), var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2828)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2836))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2836)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2837))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2837)), var_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2834)) ;
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
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2855)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2864)) ;
  GALGAS_location var_location = object->mAttribute_mRegisterExpression.reader_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2872)).mAttribute_location ;
  outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (var_location, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2875))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2875)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2876))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2876)), var_IPICregisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2873)) ;
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
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2895)) ;
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
  GALGAS_lstring var_conditionTrueLabel = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2923)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2923)), constinArgument_inConditionTrueLabel.mAttribute_location  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2923)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2924)) ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2926)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator ;
  callCategoryMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2939)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2953)), var_conditionTrueLabel, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2955)), var_secondTestBlockTerminator  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2952))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2952)) ;
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

