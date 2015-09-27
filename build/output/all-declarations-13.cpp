#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-13.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_F_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
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
  GALGAS_uint var_code = categoryReader_baseCode (object->mAttribute_mFinstruction, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 187)) ;
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 188)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 189)) ;
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
                                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                      const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_FB) ;
  GALGAS_uint var_code = categoryReader_baseCode (object->mAttribute_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 212)) ;
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 213)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) ;
  var_code = var_code.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 215)) ;
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
                                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
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
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 234)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) ;
  var_code = var_code.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 236)) ;
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
                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                         const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = (const cPtr_midrange_5F_intermediate_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  GALGAS_stringset var_usedRegisters = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 299)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 301)) ;
  GALGAS_registerExpression var_PCLATH_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 306))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_11233 ; // Joker input parameter
  callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 311)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription, joker_11233, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 309)) ;
  switch (object->mAttribute_mBit_31__31_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 322)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 322)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 322)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 322)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 322)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 321)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 329)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 329)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 329)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 329)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 329)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 328)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  switch (object->mAttribute_mBit_31__32_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 339)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 339)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 339)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 339)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 339)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 338)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 346)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 346)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 346)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 346)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 346)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 345)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck (object->mAttribute_mTargetLabel.mAttribute_string, var_targetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 354)) ;
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
                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = (const cPtr_midrange_5F_intermediate_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 368)) ;
  {
  routine_emit_5F_midrange_5F_GOTOinstruction (object->mAttribute_mInstructionLocation, ioArgument_ioAddress, object->mAttribute_mTargetLabel.mAttribute_string, var_targetAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 370)) ;
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
                                                                                        const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                        const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                        const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        GALGAS_uint & ioArgument_ioAddress,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JSR * object = (const cPtr_midrange_5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JSR) ;
  GALGAS_stringset var_usedRegisters = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 382)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385)) ;
  GALGAS_registerExpression var_PCLATH_5F_register = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("PCLATH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 388))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 388)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 389))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 389))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 389)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 390))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 387)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription ;
  GALGAS_bitSliceTable joker_13894 ; // Joker input parameter
  callCategoryMethod_resolveMidrangeAccess ((const cPtr_registerExpression *) var_PCLATH_5F_register.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 395)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription, joker_13894, var_usedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 393)) ;
  switch (object->mAttribute_mBit_31__31_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 406)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 406)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 406)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 406)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 406)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 405)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 413)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 413)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 413)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 413)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 413)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 412)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  switch (object->mAttribute_mBit_31__32_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 423)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 423)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 423)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 423)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 423)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 422)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 430)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 430)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 430)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 430)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 430)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 429)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck (object->mAttribute_mTargetLabel.mAttribute_string, var_targetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 437)) ;
  }
  switch (object->mAttribute_mBit_31__31_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 441)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 441)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 441)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 441)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 441)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 440)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 3U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 448)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 448)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 448)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 448)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 448)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 447)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  switch (object->mAttribute_mBit_31__32_.enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 4096U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 458)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 458)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 458)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 458)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 458)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 457)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 5120U).operator_or (GALGAS_uint ((uint32_t) 4U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 465)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 465)).operator_or (var_PCLATH_5F_IPICregisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 465)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 465)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 465)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 464)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
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
                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_CALL * object = (const cPtr_midrange_5F_intermediate_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_CALL) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 485)) ;
  {
  routine_emit_5F_midrange_5F_CALLinstruction (object->mAttribute_mInstructionLocation, ioArgument_ioAddress, object->mAttribute_mTargetLabel.mAttribute_string, var_targetAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 487)) ;
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
                                                                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
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
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 506)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 128U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 507)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("midrange_build_binary_code.galgas", 509)).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 509)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 509)) ;
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_build_binary_code.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 510))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 510)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress (var_code, ioArgument_ioAddress, var_s, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    routine_emit_5F_midrange_5F_GOTOinstruction (object->mAttribute_mInstructionLocation, ioArgument_ioAddress, GALGAS_string ("$ + 2"), ioArgument_ioAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 514)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 514)) ;
    }
  }
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (object->mAttribute_mTargetLabel, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 518))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 518)), var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 518)) ;
  {
  routine_emit_5F_midrange_5F_GOTOinstruction (object->mAttribute_mInstructionLocation, ioArgument_ioAddress, object->mAttribute_mTargetLabel, var_targetAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 519)) ;
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 100U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 531)) ;
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 256U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 543)) ;
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 0U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 555)) ;
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 8U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 567)) ;
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 9U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 579)) ;
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
  routine_emitMidrangeCodeAtWordAddress (GALGAS_uint ((uint32_t) 99U), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 591)) ;
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
                                                                                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                    const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                                    const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                    GALGAS_uint & ioArgument_ioAddress,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code = categoryReader_baseCode (object->mAttribute_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 618)) ;
  var_code = var_code.operator_or (object->mAttribute_mLiteralValue COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 619)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  routine_emitMidrangeCodeAtWordAddress (var_code, ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 620)) ;
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
                                                                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                    const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                    const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                    GALGAS_uint & ioArgument_ioAddress,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inRoutineSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 632)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetAddress.objectCompare (ioArgument_ioAddress)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Internal second pass error: the '").add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 634)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 634)).add_operation (ioArgument_ioAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 635)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 635)).add_operation (var_targetAddress.reader_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 635)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 636))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 634)) ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = object ;
  routine_emitNoMidrangeCodeAtWordAddress (ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 638)) ;
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
                                                                                                        const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                        const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                        const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        GALGAS_uint & ioArgument_ioAddress,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 650)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOccurrenceFactor.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("No generated code")  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 651)) ;
  }
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 654)).isValid ()) {
    uint32_t variant_22929 = object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 654)).uintValue () ;
    bool loop_22929 = true ;
    while (loop_22929) {
      loop_22929 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 655)))).isValid () ;
      if (loop_22929) {
        loop_22929 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("midrange_build_binary_code.galgas", 655)))).boolValue () ;
      }
      if (loop_22929 && (0 == variant_22929)) {
        loop_22929 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_build_binary_code.galgas", 654)) ;
      }
      if (loop_22929) {
        variant_22929 -- ;
        {
        routine_emitMidrangeDirectCodeAtWordAddress (GALGAS_uint ((uint32_t) 0U), ioArgument_ioAddress, GALGAS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 657)) ;
        }
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 658)) ;
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
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 179)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 179)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 180)) ;
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
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
      {
        const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 201)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 201)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 202)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 203)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 203)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 203)).add_operation (GALGAS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 203)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 203)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 203))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 203)) ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLabel, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 204))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 204)) ;
        }
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        const enumGalgasBool test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 207)).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, object->mAttribute_mLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)).add_operation (GALGAS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 210))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)) ;
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
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      var_name = GALGAS_string ("JUMP ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      var_name = GALGAS_string ("BRA ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      var_name = GALGAS_string ("GOTO ") ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inNextBlockLabel.objectCompare (object->mAttribute_mLabel.mAttribute_string)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string ("(").add_operation (var_name, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 229)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 229)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 229)) ;
  }else if (kBoolFalse == test_0) {
    result_outResult = var_name.add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 231)) ;
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
    outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_terminators.galgas", 243)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_targetAddress ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 245)) ;
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, object->mAttribute_mLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 248)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress, object->mAttribute_mLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 250)) ;
      }
      break ;
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
        inCompiler->castError ("ipic_31__38_JumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 262)) ;
      }
    }
    GALGAS_ipic_31__38_JumpTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (var_t.reader_mLabel (SOURCE_FILE ("ipic18_terminators.galgas", 263)).mAttribute_string)).operator_and (GALGAS_bool (kIsEqual, object->mAttribute_mKind.objectCompare (var_t.reader_mKind (SOURCE_FILE ("ipic18_terminators.galgas", 263)))) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 263)) ;
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
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 276)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 277)) ;
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
  callCategoryMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 289)) ;
  callCategoryMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 296)) ;
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
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 314)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 315)) ;
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
  result_outResult = object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 324)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 324)) ;
  switch (object->mAttribute_mComparison.enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      result_outResult.dotAssign_operation (GALGAS_string ("==")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 327)) ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      result_outResult.dotAssign_operation (GALGAS_string (">")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 329)) ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      result_outResult.dotAssign_operation (GALGAS_string ("<")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 331)) ;
    }
    break ;
  }
  result_outResult.dotAssign_operation (GALGAS_string (" W \? ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 333)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 334))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 334)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 335)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 336))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 336)) ;
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
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 350)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 359)) ;
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
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 373)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
    if (var_outModifiedFalseTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator.ptr ())) {
        temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 374)) ;
      }
    }
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (object->mAttribute_mInstructionLocation, temp_2, temp_3, object->mAttribute_mRegisterDescription, object->mAttribute_mComparison  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 371)) ;
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
  switch (object->mAttribute_mComparison.enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      var_binCode = GALGAS_uint ((uint32_t) 25088U) ;
      var_assemblyCode = GALGAS_string ("    CPFSEQ") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      var_binCode = GALGAS_uint ((uint32_t) 25600U) ;
      var_assemblyCode = GALGAS_string ("    CPFSGT") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      var_binCode = GALGAS_uint ((uint32_t) 24576U) ;
      var_assemblyCode = GALGAS_string ("    CPFSLT") ;
    }
    break ;
  }
  var_assemblyCode.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 401))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 401)) ;
  var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 402)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 402)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 402)) ;
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 403)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 404)) ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 405)) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 409))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 407)) ;
  GALGAS_codeList var_falseTerminatorCode ;
  callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 412)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 411)) ;
  outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 417)) ;
  GALGAS_codeList var_trueTerminatorCode ;
  callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 419)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 419)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 418)) ;
  outArgument_outCode.dotAssign_operation (var_trueTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 424)) ;
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
        inCompiler->castError ("pic_31__38_RegisterComparisonTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 434)) ;
      }
    }
    GALGAS_pic_31__38_RegisterComparisonTerminator var_t = temp_1 ;
    result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 435)) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 437)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mComparison.objectCompare (var_t.reader_mComparison (SOURCE_FILE ("ipic18_terminators.galgas", 440)))) ;
    }
    const enumGalgasBool test_4 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_4) {
      result_outResult = categoryReader_isEqualToRegister (object->mAttribute_mRegisterDescription, var_t.reader_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 443)) ;
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
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 457)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 458)) ;
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
  result_outResult = object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 467)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" Z \? ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 468)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 469))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 469)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 470)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 471))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 471)) ;
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
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 485)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 494)) ;
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
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 508)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
    if (var_outModifiedFalseTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator.ptr ())) {
        temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 509)) ;
      }
    }
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, temp_2, temp_3, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 506)) ;
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
  GALGAS_string var_assemblyCode = GALGAS_string ("    TSTFSZ ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 522)) ;
  var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 523)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 523)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 523)) ;
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 524)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 525)) ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 526)) ;
  }
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 530))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 528)) ;
  GALGAS_codeList var_falseTerminatorCode ;
  callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 533)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 532)) ;
  outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 538)) ;
  GALGAS_codeList var_trueTerminatorCode ;
  callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 540)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 540)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 539)) ;
  outArgument_outCode.dotAssign_operation (var_trueTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 545)) ;
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
        inCompiler->castError ("pic_31__38_TestRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 555)) ;
      }
    }
    GALGAS_pic_31__38_TestRegisterTerminator var_t = temp_1 ;
    result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 556)) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 558)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = categoryReader_isEqualToRegister (object->mAttribute_mRegisterDescription, var_t.reader_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 561)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@pic18BitTestTerminator terminatorDisplay'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_pic_31__38_BitTestTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  result_outResult = object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 575)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 575)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 575)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 575)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 576))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 576)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 577)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 578))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 578)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_BitTestTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                         categoryReader_pic_31__38_BitTestTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_BitTestTerminator_terminatorDisplay (defineCategoryReader_pic_31__38_BitTestTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 592)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 601)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_BitTestTerminator temp_1 = object ;
    outArgument_outModifiedTerminator = temp_1 ;
  }else if (kBoolFalse == test_0) {
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_2 ;
    if (var_outModifiedTrueTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator.ptr ())) {
        temp_2 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 615)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
    if (var_outModifiedFalseTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator.ptr ())) {
        temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 616)) ;
      }
    }
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (object->mAttribute_mInstructionLocation, temp_2, temp_3, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 613)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                                 categoryMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_pic_31__38_BitTestTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@pic18BitTestTerminator generateTerminatorCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 630)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_binCode = GALGAS_uint ((uint32_t) 45056U) ;
    GALGAS_string var_assemblyCode = GALGAS_string ("    BTFSC ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 633)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 633)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 633)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 634)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 634)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 634)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 635)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 635)) ;
    const enumGalgasBool test_1 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 636)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 637)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 638)) ;
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 642))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 640)) ;
    GALGAS_codeList var_falseTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 644)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 643)) ;
    outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_binCode = GALGAS_uint ((uint32_t) 40960U) ;
    GALGAS_string var_assemblyCode = GALGAS_string ("    BTFSS ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 653)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 653)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 653)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 654)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 654)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 654)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) ;
    const enumGalgasBool test_2 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 656)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 657)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 658)) ;
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 662))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 660)) ;
    GALGAS_codeList var_trueTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 664)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 663)) ;
    outArgument_outCode.dotAssign_operation (var_trueTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 669)) ;
    GALGAS_codeList var_falseTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 671)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 671)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 670)) ;
    outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 676)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                              categoryMethod_pic_31__38_BitTestTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_generateTerminatorCode (defineCategoryMethod_pic_31__38_BitTestTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@pic18BitTestTerminator isEqualToTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_pic_31__38_BitTestTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_pic_31__38_BitTestTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_pic_31__38_BitTestTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_pic_31__38_BitTestTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("pic_31__38_BitTestTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 687)) ;
      }
    }
    GALGAS_pic_31__38_BitTestTerminator var_t = temp_1 ;
    result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 688)) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 690)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mBitNumber.objectCompare (var_t.reader_mBitNumber (SOURCE_FILE ("ipic18_terminators.galgas", 693)))) ;
    }
    const enumGalgasBool test_4 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_4) {
      result_outResult = categoryReader_isEqualToRegister (object->mAttribute_mRegisterDescription, var_t.reader_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 696)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_BitTestTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                           categoryReader_pic_31__38_BitTestTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_BitTestTerminator_isEqualToTerminator (defineCategoryReader_pic_31__38_BitTestTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18IncDecRegisterTerminator terminatorDisplay'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string ("INCF ") ;
  }else if (kBoolFalse == test_0) {
    result_outResult = GALGAS_string ("DECF ") ;
  }
  result_outResult.dotAssign_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 715))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 715)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 717)) ;
  }else if (kBoolFalse == test_1) {
    result_outResult.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 719)) ;
  }
  result_outResult.dotAssign_operation (GALGAS_string (" Z \? ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 721)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 722))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 722)) ;
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 723)) ;
  result_outResult.dotAssign_operation (callCategoryReader_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 724))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 724)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                         categoryReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_IncDecRegisterTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 738)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 747)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioConversionCount.objectCompare (var_n)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = object ;
    outArgument_outModifiedTerminator = temp_1 ;
  }else if (kBoolFalse == test_0) {
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_2 ;
    if (var_outModifiedTrueTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator.ptr ())) {
        temp_2 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 761)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_3 ;
    if (var_outModifiedFalseTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator.ptr ())) {
        temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 762)) ;
      }
    }
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (object->mAttribute_mInstructionLocation, temp_2, temp_3, object->mAttribute_mRegisterDescription, object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 759)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18IncDecRegisterTerminator generateTerminatorCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                        GALGAS_codeList & outArgument_outCode,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 776)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_mIncrement.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_uint ((uint32_t) 15360U) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_uint ((uint32_t) 11264U) ;
    }
    GALGAS_uint var_binCode = temp_1 ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mAttribute_mIncrement.boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("    INCFSZ") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string ("    DECFSZ") ;
    }
    GALGAS_string var_assemblyCode = temp_3 ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 780)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 780))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 780)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 781)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 781)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 781)) ;
    const enumGalgasBool test_5 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
    if (kBoolTrue == test_5) {
      var_assemblyCode.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 783)) ;
    }else if (kBoolFalse == test_5) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 785)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 786)) ;
    }
    const enumGalgasBool test_6 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 788)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 789)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 790)) ;
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 794))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)) ;
    GALGAS_codeList var_falseTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 796)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 795)) ;
    outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 801)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint temp_7 ;
    const enumGalgasBool test_8 = object->mAttribute_mIncrement.boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_uint ((uint32_t) 18432U) ;
    }else if (kBoolFalse == test_8) {
      temp_7 = GALGAS_uint ((uint32_t) 19456U) ;
    }
    GALGAS_uint var_binCode = temp_7 ;
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = object->mAttribute_mIncrement.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string ("    INFSNZ") ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string ("    DCFSNZ") ;
    }
    GALGAS_string var_assemblyCode = temp_9 ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_terminators.galgas", 806)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 806))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 806)) ;
    var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_terminators.galgas", 807)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
    const enumGalgasBool test_11 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
    if (kBoolTrue == test_11) {
      var_assemblyCode.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 809)) ;
    }else if (kBoolFalse == test_11) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 811)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 812)) ;
    }
    const enumGalgasBool test_12 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_terminators.galgas", 814)).boolEnum () ;
    if (kBoolTrue == test_12) {
      var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 815)) ;
      var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 816)) ;
    }
    outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, GALGAS_uintlist::constructor_listWithValue (var_binCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 820))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)) ;
    GALGAS_codeList var_trueTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 822)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 821)) ;
    outArgument_outCode.dotAssign_operation (var_trueTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 827)) ;
    GALGAS_codeList var_falseTerminatorCode ;
    callCategoryMethod_generateTerminatorCode ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 829)).add_operation (callCategoryReader_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 829)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 829)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 828)) ;
    outArgument_outCode.dotAssign_operation (var_falseTerminatorCode  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 834)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18IncDecRegisterTerminator isEqualToTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_IncDecRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_IncDecRegisterTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_IncDecRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 845)) ;
      }
    }
    GALGAS_ipic_31__38_IncDecRegisterTerminator var_t = temp_1 ;
    result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionTrue (SOURCE_FILE ("ipic18_terminators.galgas", 846)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 846)) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = callCategoryReader_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), var_t.reader_mSingleInstructionTerminatorIfConditionFalse (SOURCE_FILE ("ipic18_terminators.galgas", 848)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 848)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mIncrement.objectCompare (var_t.reader_mIncrement (SOURCE_FILE ("ipic18_terminators.galgas", 851)))) ;
    }
    const enumGalgasBool test_4 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_4) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_m_5F_W_5F_isDestination.objectCompare (var_t.reader_m_5F_W_5F_isDestination (SOURCE_FILE ("ipic18_terminators.galgas", 854)))) ;
    }
    const enumGalgasBool test_5 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_5) {
      result_outResult = categoryReader_isEqualToRegister (object->mAttribute_mRegisterDescription, var_t.reader_mRegisterDescription (SOURCE_FILE ("ipic18_terminators.galgas", 857)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 857)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                           categoryReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_IncDecRegisterTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@ipic18ComputedRETLWTerminator terminatorSize'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (object->mAttribute_mLiteralValues.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 876)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 876)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 876)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18ComputedRETLWTerminator terminatorDisplay'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED RETLW") ;
  cEnumerator_uintlist enumerator_30496 (object->mAttribute_mLiteralValues, kEnumeration_up) ;
  while (enumerator_30496.hasCurrentObject ()) {
    result_outResult.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_30496.current_mValue (HERE).reader_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 886)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 886))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 886)) ;
    enumerator_30496.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  const enumGalgasBool test_1 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 902)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 902)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 902)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 903)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 904)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 904))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 904)) ;
      outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLiteralValues, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 905)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 919)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 919)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 919)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 920)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18ComputedRETLWTerminator generateTerminatorCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       const GALGAS_uint constinArgument_inAddress,
                                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GALGAS_codeList & outArgument_outCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  GALGAS_lstring var_goto_32_label = GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 932)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 933)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, var_goto_32_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 935)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, var_goto_32_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 937)) ;
  }
  cEnumerator_uintlist enumerator_32552 (object->mAttribute_mLiteralValues, kEnumeration_up) ;
  while (enumerator_32552.hasCurrentObject ()) {
    outArgument_outCode.addAssign_operation (GALGAS_string ("    RETLW ").add_operation (enumerator_32552.current_mValue (HERE).reader_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 941)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 941)), GALGAS_uintlist::constructor_listWithValue (GALGAS_uint ((uint32_t) 3072U).operator_or (enumerator_32552.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 942))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 942))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 940)) ;
    enumerator_32552.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18ComputedRETLWTerminator isEqualToTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                           const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedRETLWTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_ComputedRETLWTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_ComputedRETLWTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 953)) ;
      }
    }
    GALGAS_ipic_31__38_ComputedRETLWTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mLiteralValues.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 954)).objectCompare (var_t.reader_mLiteralValues (SOURCE_FILE ("ipic18_terminators.galgas", 954)).reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 954)))) ;
    cEnumerator_uintlist enumerator_33173 (object->mAttribute_mLiteralValues, kEnumeration_up) ;
    cEnumerator_uintlist enumerator_33203 (var_t.reader_mLiteralValues (SOURCE_FILE ("ipic18_terminators.galgas", 955)), kEnumeration_up) ;
    bool bool_2 = result_outResult.isValidAndTrue () ;
    if (enumerator_33173.hasCurrentObject () && enumerator_33203.hasCurrentObject () && bool_2) {
      while (enumerator_33173.hasCurrentObject () && enumerator_33203.hasCurrentObject () && bool_2) {
        result_outResult = GALGAS_bool (kIsEqual, enumerator_33173.current_mValue (HERE).objectCompare (enumerator_33203.current_mValue (HERE))) ;
        enumerator_33173.gotoNextObject () ;
        enumerator_33203.gotoNextObject () ;
        if (enumerator_33173.hasCurrentObject () && enumerator_33203.hasCurrentObject ()) {
          bool_2 = result_outResult.isValidAndTrue () ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18ComputedGotoTerminator terminatorDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED GOTO ") ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (" (uses RCALL)")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 972)) ;
  }else if (kBoolFalse == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (" (uses CALL)")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 974)) ;
  }
  cEnumerator_lstringlist enumerator_33764 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_33764.hasCurrentObject ()) {
    result_outResult.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_33764.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 977))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 977)) ;
    enumerator_33764.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ComputedGotoTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@ipic18ComputedGotoTerminator terminatorSize'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ComputedGotoTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 991)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 991)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 991)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedGotoTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ComputedGotoTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedGotoTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ComputedGotoTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  const enumGalgasBool test_1 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1006)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1006)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1006)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1007)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1008)).add_operation (GALGAS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1008))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1008)) ;
      outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1009)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1023)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1023)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1023)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1024)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18ComputedGotoTerminator generateTerminatorCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GALGAS_codeList & outArgument_outCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  GALGAS_lstring var_goto_34_label = GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1036)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1037)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, var_goto_34_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1039)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, var_goto_34_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1041)) ;
  }
  cEnumerator_lstringlist enumerator_36120 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_36120.hasCurrentObject ()) {
    GALGAS_uint var_targetLabelAddress ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_36120.current_mValue (HERE), var_targetLabelAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1044)) ;
    outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress, enumerator_36120.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1045))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1045)) ;
    enumerator_36120.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18ComputedGotoTerminator isEqualToTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedGotoTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_ComputedGotoTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_ComputedGotoTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1056)) ;
      }
    }
    GALGAS_ipic_31__38_ComputedGotoTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1057)).objectCompare (var_t.reader_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1057)).reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1057)))) ;
    cEnumerator_lstringlist enumerator_36767 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
    cEnumerator_lstringlist enumerator_36796 (var_t.reader_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1058)), kEnumeration_up) ;
    bool bool_2 = result_outResult.isValidAndTrue () ;
    if (enumerator_36767.hasCurrentObject () && enumerator_36796.hasCurrentObject () && bool_2) {
      while (enumerator_36767.hasCurrentObject () && enumerator_36796.hasCurrentObject () && bool_2) {
        result_outResult = GALGAS_bool (kIsEqual, enumerator_36767.current_mValue (HERE).mAttribute_string.objectCompare (enumerator_36796.current_mValue (HERE).mAttribute_string)) ;
        enumerator_36767.gotoNextObject () ;
        enumerator_36796.gotoNextObject () ;
        if (enumerator_36767.hasCurrentObject () && enumerator_36796.hasCurrentObject ()) {
          bool_2 = result_outResult.isValidAndTrue () ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ComputedGotoTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@ipic18ComputedBraTerminator terminatorSize'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ComputedBraTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1078)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedBraTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ComputedBraTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedBraTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ComputedBraTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@ipic18ComputedBraTerminator terminatorDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  result_outResult = GALGAS_string ("COMPUTED BRA") ;
  cEnumerator_lstringlist enumerator_37586 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_37586.hasCurrentObject ()) {
    result_outResult.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_37586.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1088)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1088))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1088)) ;
    enumerator_37586.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ComputedBraTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  cEnumerator_lstringlist enumerator_38085 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_38085.hasCurrentObject ()) {
    const enumGalgasBool test_0 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_38085.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1103)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1103)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_38085.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1105)).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1104)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1104)).add_operation (GALGAS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1105)).add_operation (enumerator_38085.current_mValue (HERE).reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1105)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1105)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1106))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1104)) ;
    }
    enumerator_38085.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = object ;
  outArgument_outModifiedTerminator = temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1111)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1111)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1112)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1113)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1113))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1113)) ;
      outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabels, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1114)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  GALGAS_uint var_address ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1129)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1129)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1129)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1130)) ;
    }
    var_address = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1132)) ;
  }else if (kBoolFalse == test_0) {
    var_address = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1134)) ;
  }
  cEnumerator_lstringlist enumerator_39425 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_39425.hasCurrentObject ()) {
    const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_39425.current_mValue (HERE), var_address, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1137)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1137)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, enumerator_39425.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1138)) ;
    }
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1140)) ;
    enumerator_39425.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18ComputedBraTerminator generateTerminatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_uint constinArgument_inAddress,
                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                     const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  GALGAS_lstring var_goto_32_label = GALGAS_string ("_computed_goto_2").reader_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1151)) ;
  GALGAS_uint var_targetAddress ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1152)) ;
  GALGAS_uint var_address ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, var_goto_32_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1155)) ;
    var_address = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1156)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, var_goto_32_label, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1158)) ;
    var_address = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1159)) ;
  }
  cEnumerator_lstringlist enumerator_40292 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_40292.hasCurrentObject ()) {
    GALGAS_uint var_labelAddress ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_40292.current_mValue (HERE), var_labelAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1162)) ;
    outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address, var_labelAddress, enumerator_40292.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1163))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1163)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1164)) ;
    enumerator_40292.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18ComputedBraTerminator isEqualToTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_ComputedBraTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_ComputedBraTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_ComputedBraTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_ComputedBraTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1175)) ;
      }
    }
    GALGAS_ipic_31__38_ComputedBraTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabels.reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1176)).objectCompare (var_t.reader_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1176)).reader_length (SOURCE_FILE ("ipic18_terminators.galgas", 1176)))) ;
    cEnumerator_lstringlist enumerator_40957 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
    cEnumerator_lstringlist enumerator_40986 (var_t.reader_mTargetLabels (SOURCE_FILE ("ipic18_terminators.galgas", 1177)), kEnumeration_up) ;
    bool bool_2 = result_outResult.isValidAndTrue () ;
    if (enumerator_40957.hasCurrentObject () && enumerator_40986.hasCurrentObject () && bool_2) {
      while (enumerator_40957.hasCurrentObject () && enumerator_40986.hasCurrentObject () && bool_2) {
        result_outResult = GALGAS_bool (kIsEqual, enumerator_40957.current_mValue (HERE).mAttribute_string.objectCompare (enumerator_40986.current_mValue (HERE).mAttribute_string)) ;
        enumerator_40957.gotoNextObject () ;
        enumerator_40986.gotoNextObject () ;
        if (enumerator_40957.hasCurrentObject () && enumerator_40986.hasCurrentObject ()) {
          bool_2 = result_outResult.isValidAndTrue () ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ComputedBraTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18ConditionalJumpTerminator terminatorDisplay'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  switch (object->mAttribute_mConditionalBranch.enumValue ()) {
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
  result_outResult.dotAssign_operation (GALGAS_string (" \? ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1288)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string ("(").add_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1290)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1290))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1290)) ;
  }else if (kBoolFalse == test_0) {
    result_outResult.dotAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1292)) ;
  }
  result_outResult.dotAssign_operation (GALGAS_string (" : ")  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1294)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.dotAssign_operation (GALGAS_string ("(").add_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)) ;
  }else if (kBoolFalse == test_1) {
    result_outResult.dotAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1298)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (void) {
  enterCategoryReader_terminatorDisplay (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                         categoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay (defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
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
  GALGAS_conditionalBranchMode var_branchModeOnFalseLabel = object->mAttribute_mBranchModeOnFalseLabel ;
  GALGAS_conditionalBranchMode var_branchModeOnTrueLabel = object->mAttribute_mBranchModeOnTrueLabel ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
    case GALGAS_conditionalBranchMode::kNotBuilt:
      break ;
    case GALGAS_conditionalBranchMode::kEnum_native:
      {
        const enumGalgasBool test_1 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1317)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1317)).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1318)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1319)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1319)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1319)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1319)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1319))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1319)) ;
        }
      }
      break ;
    case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
      {
        const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1322)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1322)).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1323)) ;
          ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1324)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1324)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1324)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1324)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1324))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1324)) ;
        }
      }
      break ;
    case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
      {
      }
      break ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_3) {
      switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const enumGalgasBool test_4 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1331)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1331)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1332)) ;
            ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1333)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1333)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1333)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1333)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1333))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1333)) ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const enumGalgasBool test_5 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1336)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1336)).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1337)) ;
            ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1338)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1338)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1338)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1338)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1338))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1338)) ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
        }
        break ;
      }
    }else if (kBoolFalse == test_3) {
      switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const enumGalgasBool test_6 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1347)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1347)).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1348)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1349)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1349)) ;
              }
              const enumGalgasBool test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1351)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1351)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1351)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1352)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1353)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1353)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1353)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1353)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1353))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1353)) ;
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
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const enumGalgasBool test_8 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1360)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1360)).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1361)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1362)) ;
              }
              const enumGalgasBool test_9 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1364)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1364)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1364)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1365)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1366)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1366)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1366)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1366)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1366))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1366)) ;
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const enumGalgasBool test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1369)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1369)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1369)).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1370)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1371)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1371)) ;
              }
              const enumGalgasBool test_11 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1373)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1373)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1373)).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1374)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1375)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)) ;
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const enumGalgasBool test_12 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1378)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1378)).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_branchModeOnFalseLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1379)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1380)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1380)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1380)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1380)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1380))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1380)) ;
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const enumGalgasBool test_13 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1386)).boolEnum () ;
              if (kBoolTrue == test_13) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1387)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1388)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1388)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1388)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1388)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1388))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1388)) ;
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const enumGalgasBool test_14 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1391)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1391)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1391)).boolEnum () ;
              if (kBoolTrue == test_14) {
                var_branchModeOnTrueLabel = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1392)) ;
                ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1393)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1393)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_terminators.galgas", 1393)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1393)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1393))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1393)) ;
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
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, var_branchModeOnFalseLabel.objectCompare (object->mAttribute_mBranchModeOnFalseLabel)).operator_and (GALGAS_bool (kIsEqual, var_branchModeOnTrueLabel.objectCompare (object->mAttribute_mBranchModeOnTrueLabel)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).boolEnum () ;
  if (kBoolTrue == test_15) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = object ;
    outArgument_outModifiedTerminator = temp_16 ;
  }else if (kBoolFalse == test_15) {
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mConditionalBranch, object->mAttribute_mTargetLabelWhenTrue, var_branchModeOnTrueLabel, object->mAttribute_mTargetLabelWhenFalse, var_branchModeOnFalseLabel  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1402)) ;
    ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1409)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_performTerminatorRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_uint constinArgument_inAddress,
                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                   GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
    case GALGAS_conditionalBranchMode::kNotBuilt:
      break ;
    case GALGAS_conditionalBranchMode::kEnum_native:
      {
        const enumGalgasBool test_1 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1424)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1424)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1425)) ;
        }
      }
      break ;
    case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
      {
        const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1428)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1428)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1428)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1429)) ;
        }
      }
      break ;
    case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
      {
      }
      break ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_3) {
      switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const enumGalgasBool test_4 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1436)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1436)).boolEnum () ;
          if (kBoolTrue == test_4) {
            ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1437)) ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const enumGalgasBool test_5 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1440)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1440)).boolEnum () ;
          if (kBoolTrue == test_5) {
            ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1441)) ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
        }
        break ;
      }
    }else if (kBoolFalse == test_3) {
      switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const enumGalgasBool test_6 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1450)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1450)).boolEnum () ;
              if (kBoolTrue == test_6) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1451)) ;
              }
              const enumGalgasBool test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1453)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1453)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1453)).boolEnum () ;
              if (kBoolTrue == test_7) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1454)) ;
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
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const enumGalgasBool test_8 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1461)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1461)).boolEnum () ;
              if (kBoolTrue == test_8) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1462)) ;
              }
              const enumGalgasBool test_9 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1464)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1464)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1464)).boolEnum () ;
              if (kBoolTrue == test_9) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1465)) ;
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const enumGalgasBool test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1468)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1468)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1468)).boolEnum () ;
              if (kBoolTrue == test_10) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1469)) ;
              }
              const enumGalgasBool test_11 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1471)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1471)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1471)).boolEnum () ;
              if (kBoolTrue == test_11) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1472)) ;
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const enumGalgasBool test_12 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenFalse, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1475)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1475)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1475)).boolEnum () ;
              if (kBoolTrue == test_12) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1476)) ;
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const enumGalgasBool test_13 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1482)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1482)).boolEnum () ;
              if (kBoolTrue == test_13) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1483)) ;
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const enumGalgasBool test_14 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabelWhenTrue, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1486)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1486)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1486)).boolEnum () ;
              if (kBoolTrue == test_14) {
                ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1487)) ;
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
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_terminatorRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18ConditionalJumpTerminator terminatorSize'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
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
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
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
    }else if (kBoolFalse == test_1) {
      switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
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
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
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
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
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


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize (void) {
  enterCategoryReader_terminatorSize (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                      categoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize (defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_terminatorSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18ConditionalJumpTerminator generateTerminatorCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                         const GALGAS_uint constinArgument_inAddress,
                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                         GALGAS_codeList & outArgument_outCode,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  GALGAS_uint var_trueTargetAddress ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenTrue, var_trueTargetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1542)) ;
  GALGAS_uint var_falseTargetAddress ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabelWhenFalse, var_falseTargetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1543)) ;
  GALGAS_lstring var_Zlabel = GALGAS_lstring::constructor_new (GALGAS_string ("_Bcc_").add_operation (constinArgument_inAddress.reader_xString (SOURCE_FILE ("ipic18_terminators.galgas", 1544)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1544)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1544)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
    case GALGAS_conditionalBranchMode::kNotBuilt:
      break ;
    case GALGAS_conditionalBranchMode::kEnum_native:
      {
        outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1548)) ;
      }
      break ;
    case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
      {
        outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1550)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1550)) ;
        outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1551)), var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1551))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1551)) ;
        outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1552))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1552)) ;
      }
      break ;
    case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
      {
        outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1554)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1554)) ;
        outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1555))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1555)) ;
        outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)) ;
      }
      break ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, object->mAttribute_mConditionalBranch, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1561)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)) ;
          outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)), var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)) ;
          outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1565))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1565)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1567)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1567)) ;
          outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1568))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1568)) ;
          outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1569))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1569)) ;
        }
        break ;
      }
    }else if (kBoolFalse == test_1) {
      switch (object->mAttribute_mBranchModeOnFalseLabel.enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)), var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1579)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1580))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1580)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1586)), var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1586))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1586)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)), var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1589)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1590))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1590)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1591))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1591)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1593)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1593)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)), var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1595))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1595)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1596))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1596)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          switch (object->mAttribute_mBranchModeOnTrueLabel.enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1604)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1604)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1605)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1606)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)), var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1607)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 6U), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1609)), var_Zlabel, object->mAttribute_mConditionalBranch, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1609)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress, object->mAttribute_mTargetLabelWhenFalse, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1610))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1610)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_Zlabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1611))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1611)) ;
              outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress, object->mAttribute_mTargetLabelWhenTrue, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1612))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1612)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (void) {
  enterCategoryMethod_generateTerminatorCode (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                              categoryMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_generateTerminatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18ConditionalJumpTerminator isEqualToTerminator'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_ipic_31__38_AbstractBlockTerminator & constinArgument_inTerminator,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
    if (constinArgument_inTerminator.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
        temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1625)) ;
      }
    }
    GALGAS_ipic_31__38_ConditionalJumpTerminator var_t = temp_1 ;
    result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mConditionalBranch.objectCompare (var_t.reader_mConditionalBranch (SOURCE_FILE ("ipic18_terminators.galgas", 1626)))) ;
    const enumGalgasBool test_2 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenTrue.mAttribute_string.objectCompare (var_t.reader_mTargetLabelWhenTrue (SOURCE_FILE ("ipic18_terminators.galgas", 1628)).mAttribute_string)) ;
    }
    const enumGalgasBool test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mBranchModeOnTrueLabel.objectCompare (var_t.reader_mBranchModeOnTrueLabel (SOURCE_FILE ("ipic18_terminators.galgas", 1631)))) ;
    }
    const enumGalgasBool test_4 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_4) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mTargetLabelWhenFalse.mAttribute_string.objectCompare (var_t.reader_mTargetLabelWhenFalse (SOURCE_FILE ("ipic18_terminators.galgas", 1634)).mAttribute_string)) ;
    }
    const enumGalgasBool test_5 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_5) {
      result_outResult = GALGAS_bool (kIsEqual, object->mAttribute_mBranchModeOnFalseLabel.objectCompare (var_t.reader_mBranchModeOnFalseLabel (SOURCE_FILE ("ipic18_terminators.galgas", 1637)))) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (void) {
  enterCategoryReader_isEqualToTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                           categoryReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator (defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_isEqualToTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18_condition_skip_instruction instructionSize'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  result_outSize = GALGAS_uint ((uint32_t) 2U).add_operation (callCategoryReader_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                       categoryReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize (defineCategoryReader_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@ipic18_condition_skip_instruction instructionRelativeBranchOverflow'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               const GALGAS_uint constinArgument_inAddress,
                                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callCategoryMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 45)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 44)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (void) {
  enterCategoryMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                         categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow (defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_instructionRelativeBranchOverflow, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18InstructionWithNoOperand instructionDisplay'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38_InstructionWithNoOperand * object = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (categoryReader_mnemonic (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand.mSlotID,
                                          categoryReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay (defineCategoryReader_ipic_31__38_InstructionWithNoOperand_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@ipic18InstructionWithNoOperand generateCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_InstructionWithNoOperand_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                              GALGAS_codeList & outArgument_outCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_InstructionWithNoOperand * object = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  GALGAS_uint var_c ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT:
    {
      var_c = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW:
    {
      var_c = GALGAS_uint ((uint32_t) 7U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP:
    {
      var_c = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP:
    {
      var_c = GALGAS_uint ((uint32_t) 6U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH:
    {
      var_c = GALGAS_uint ((uint32_t) 5U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET:
    {
      var_c = GALGAS_uint ((uint32_t) 255U) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP:
    {
      var_c = GALGAS_uint ((uint32_t) 3U) ;
    }
    break ;
  }
  GALGAS_uintlist temp_0 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  temp_0.addAssign_operation (var_c  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (categoryReader_mnemonic (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), temp_0  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 111)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_InstructionWithNoOperand_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand.mSlotID,
                                    categoryMethod_ipic_31__38_InstructionWithNoOperand_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_InstructionWithNoOperand_generateCode (defineCategoryMethod_ipic_31__38_InstructionWithNoOperand_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_FDA instructionDisplay'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  GALGAS_string var_s ;
  switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_s = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_s = GALGAS_string ("ADDWFC") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_s = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_s = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_s = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_s = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_s = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_s = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_s = GALGAS_string ("RLCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_s = GALGAS_string ("RLNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_s = GALGAS_string ("RRCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_s = GALGAS_string ("RRNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_s = GALGAS_string ("SUBFWB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_s = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_s = GALGAS_string ("SUBWFB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_s = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_s = GALGAS_string ("XORWF") ;
    }
    break ;
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 144)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.operator_and (object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string (", W, BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 146)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 147)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_s.dotAssign_operation (GALGAS_string (", F, BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 148)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_s.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 150)) ;
      }else if (kBoolFalse == test_2) {
        var_s.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 152)) ;
      }
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 154)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_FDA generateCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint /* constinArgument_inAddress */,
                                                                                            const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  GALGAS_uint var_code ;
  switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_code = GALGAS_uint ((uint32_t) 9216U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_code = GALGAS_uint ((uint32_t) 8192U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_code = GALGAS_uint ((uint32_t) 5120U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_code = GALGAS_uint ((uint32_t) 7168U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_code = GALGAS_uint ((uint32_t) 1024U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_code = GALGAS_uint ((uint32_t) 10240U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_code = GALGAS_uint ((uint32_t) 4096U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_code = GALGAS_uint ((uint32_t) 20480U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_code = GALGAS_uint ((uint32_t) 13312U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_code = GALGAS_uint ((uint32_t) 17408U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_code = GALGAS_uint ((uint32_t) 12288U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_code = GALGAS_uint ((uint32_t) 16384U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_code = GALGAS_uint ((uint32_t) 21504U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_code = GALGAS_uint ((uint32_t) 23552U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_code = GALGAS_uint ((uint32_t) 22528U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_code = GALGAS_uint ((uint32_t) 14336U) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_code = GALGAS_uint ((uint32_t) 6144U) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 185)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 186)) ;
  }
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 188)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 189)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = object ;
  GALGAS_uintlist temp_3 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)) ;
  temp_3.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)), temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@ipic18_intermediate_instruction_FA instructionDisplay'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  GALGAS_string var_s ;
  switch (object->mAttribute_mFAinstruction.enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_s = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_s = GALGAS_string ("MOVWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_s = GALGAS_string ("MULWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_s = GALGAS_string ("NEGF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_s = GALGAS_string ("SETF") ;
    }
    break ;
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 213)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 214)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18_intermediate_instruction_FA generateCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                           const GALGAS_uint /* constinArgument_inAddress */,
                                                                                           const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  GALGAS_uint var_code ;
  switch (object->mAttribute_mFAinstruction.enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code = GALGAS_uint ((uint32_t) 27136U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code = GALGAS_uint ((uint32_t) 28160U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code = GALGAS_uint ((uint32_t) 512U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code = GALGAS_uint ((uint32_t) 27648U) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code = GALGAS_uint ((uint32_t) 26624U) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 233)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 234)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
  temp_2.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 237)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@ipic18_intermediate_instruction_MOVFF instructionSize'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 4U) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_MOVFF instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  GALGAS_string var_s = GALGAS_string ("MOVFF ").add_operation (object->mAttribute_mSourceRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)).add_operation (object->mAttribute_mDestinationRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 258)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_MOVFF generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  GALGAS_uintlist var_code = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 268)) ;
  var_code.addAssign_operation (GALGAS_uint ((uint32_t) 49152U).operator_or (object->mAttribute_mSourceRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) ;
  var_code.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (object->mAttribute_mDestinationRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)), var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 271)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@ipic18_intermediate_instruction_literalOperation instructionDisplay'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  GALGAS_string var_s = categoryReader_mnemonic (object->mAttribute_mLiteralInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)).add_operation (object->mAttribute_mLiteralValue.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 284)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18_intermediate_instruction_literalOperation generateCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                         const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                         const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                         const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                         GALGAS_codeList & outArgument_outCode,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  GALGAS_uint var_code ;
  switch (object->mAttribute_mLiteralInstruction.enumValue ()) {
  case GALGAS_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      var_code = GALGAS_uint ((uint32_t) 3840U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code = GALGAS_uint ((uint32_t) 2816U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code = GALGAS_uint ((uint32_t) 2304U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code = GALGAS_uint ((uint32_t) 3584U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MULLW:
    {
      var_code = GALGAS_uint ((uint32_t) 3328U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      var_code = GALGAS_uint ((uint32_t) 2048U) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code = GALGAS_uint ((uint32_t) 2560U) ;
    }
    break ;
  }
  var_code = var_code.operator_or (object->mAttribute_mLiteralValue COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 304)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = object ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  temp_1.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 305)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@ipic18_intermediate_instruction_LFSR instructionSize'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 4U) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_LFSR instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  GALGAS_string var_s = GALGAS_string ("LFSR ").add_operation (object->mAttribute_mFSRindex.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (object->mAttribute_mValue.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 325)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_LFSR generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  GALGAS_uintlist var_code = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)) ;
  var_code.addAssign_operation (GALGAS_uint ((uint32_t) 60928U).operator_or (object->mAttribute_mFSRindex.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)).left_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)).operator_or (object->mAttribute_mValue.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) ;
  var_code.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (object->mAttribute_mValue.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 338)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_FBA instructionDisplay'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  GALGAS_string var_s = categoryReader_mnemonic (object->mAttribute_mBitOrientedOp, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 351)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_FBA generateCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint /* constinArgument_inAddress */,
                                                                                            const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  GALGAS_uint var_code ;
  switch (object->mAttribute_mBitOrientedOp.enumValue ()) {
  case GALGAS_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code = GALGAS_uint ((uint32_t) 36864U) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code = GALGAS_uint ((uint32_t) 32768U) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BTG:
    {
      var_code = GALGAS_uint ((uint32_t) 28672U) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 367)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 368)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) ;
  var_code = var_code.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  temp_2.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 372)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_MOVLB instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  GALGAS_string var_s = GALGAS_string ("MOVLB ").add_operation (object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)).reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 385)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_MOVLB generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  GALGAS_uint var_code = GALGAS_uint ((uint32_t) 256U).operator_or (object->mAttribute_mBankIndex.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = object ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  temp_1.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 396)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_TBLRD instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  GALGAS_string var_s = GALGAS_string ("TBLRD ").add_operation (categoryReader_mnemonic (object->mAttribute_mOption, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 409)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_TBLRD generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  GALGAS_uint var_code ;
  switch (object->mAttribute_mOption.enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code = GALGAS_uint ((uint32_t) 8U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code = GALGAS_uint ((uint32_t) 9U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code = GALGAS_uint ((uint32_t) 10U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code = GALGAS_uint ((uint32_t) 11U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = object ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)) ;
  temp_1.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 426)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_TBLWT instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  GALGAS_string var_s = GALGAS_string ("TBLWT ").add_operation (categoryReader_mnemonic (object->mAttribute_mOption, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 439)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_TBLWT generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  GALGAS_uint var_code ;
  switch (object->mAttribute_mOption.enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code = GALGAS_uint ((uint32_t) 12U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code = GALGAS_uint ((uint32_t) 13U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code = GALGAS_uint ((uint32_t) 14U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code = GALGAS_uint ((uint32_t) 15U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = object ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
  temp_1.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 456)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@ipic18_intermediate_instruction_MNOP instructionSize'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  result_outSize = object->mAttribute_mOccurrenceFactor.mAttribute_uint.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 470)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_MNOP instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  GALGAS_string var_s = GALGAS_string ("MNOP ").add_operation (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)).reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 477)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_MNOP generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 488)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 490)).isValid ()) {
    uint32_t variant_15747 = object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 490)).uintValue () ;
    bool loop_15747 = true ;
    while (loop_15747) {
      loop_15747 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 491)))).isValid () ;
      if (loop_15747) {
        loop_15747 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 491)))).boolValue () ;
      }
      if (loop_15747 && (0 == variant_15747)) {
        loop_15747 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 490)) ;
      }
      if (loop_15747) {
        variant_15747 -- ;
        GALGAS_uintlist temp_0 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        temp_0.addAssign_operation (GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    NOP"), temp_0  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 494)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_NOPBRA instructionSize'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  result_outSize = object->mAttribute_mOccurrenceFactor.mAttribute_uint.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 506)) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (void) {
  enterCategoryReader_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                       categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_NOPBRA instructionDisplay'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  GALGAS_string var_s = GALGAS_string ("NOPBRA ").add_operation (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)).reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
  temp_0.addAssign_operation (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
  result_outResult = temp_0 ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_NOPBRA generateCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 524)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 526)).isValid ()) {
    uint32_t variant_16833 = object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 526)).uintValue () ;
    bool loop_16833 = true ;
    while (loop_16833) {
      loop_16833 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 527)))).isValid () ;
      if (loop_16833) {
        loop_16833 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mOccurrenceFactor.reader_uint (SOURCE_FILE ("ipic18_regular_instructions.galgas", 527)))).boolValue () ;
      }
      if (loop_16833 && (0 == variant_16833)) {
        loop_16833 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 526)) ;
      }
      if (loop_16833) {
        variant_16833 -- ;
        GALGAS_uintlist temp_0 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        temp_0.addAssign_operation (GALGAS_uint ((uint32_t) 53248U)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    BRA $+2"), temp_0  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 530)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18_intermediate_MOV_LABEL_W instructionDisplay'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  GALGAS_string var_s = GALGAS_string ("MOVLW ((").add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (object->mAttribute_mOffset.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (object->mAttribute_mRightShift.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 542)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18_intermediate_MOV_LABEL_W generateCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                           const GALGAS_uint /* constinArgument_inAddress */,
                                                                                           const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  GALGAS_uint var_address ;
  constinArgument_inDataAddressMap.method_searchKey (object->mAttribute_mLabel, var_address, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 552)) ;
  GALGAS_uint var_code = var_address.add_operation (object->mAttribute_mOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)).right_shift_operation (object->mAttribute_mRightShift COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)) ;
  GALGAS_uint var_code_5F_MOVLW = GALGAS_uint ((uint32_t) 3584U) ;
  GALGAS_uintlist temp_0 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 557)) ;
  temp_0.addAssign_operation (var_code.operator_or (var_code_5F_MOVLW COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 557))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 557)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    MOVLW ((_data_").add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (object->mAttribute_mOffset.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (object->mAttribute_mRightShift.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), temp_0  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 555)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18_intermediate_instruction_BLANK instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  GALGAS_string var_s = GALGAS_string ("BLANK ").add_operation (object->mAttribute_mBlankValue.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 567)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 568)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18_intermediate_instruction_BLANK generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  GALGAS_uint var_code = GALGAS_uint ((uint32_t) 61440U).operator_or (object->mAttribute_mBlankValue COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 578)) ;
  GALGAS_uintlist temp_0 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
  temp_0.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)), temp_0  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 579)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_intermediate_instruction_FNOP instructionDisplay'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  GALGAS_string var_s = GALGAS_string ("FNOP ").add_operation (object->mAttribute_mBlankValue.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 591)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 592)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP.mSlotID,
                                          categoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (defineCategoryReader_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_intermediate_instruction_FNOP generateCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  GALGAS_uint var_code = GALGAS_uint ((uint32_t) 61440U).operator_or (object->mAttribute_mBlankValue COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 602)) ;
  GALGAS_uintlist temp_0 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 605)) ;
  temp_0.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 605)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code.reader_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)), temp_0  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 603)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP.mSlotID,
                                    categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@ipic18_skip_instruction_compare_register instructionDisplay'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  GALGAS_string var_s = object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 615)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 615)) ;
  switch (object->mAttribute_mCompareInstruction.enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s.dotAssign_operation (GALGAS_string ("!= W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 617)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s.dotAssign_operation (GALGAS_string ("<= W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 618)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s.dotAssign_operation (GALGAS_string (">= W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 619)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s.dotAssign_operation (GALGAS_string ("!= 0")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 620)) ;
    }
    break ;
  }
  var_s.dotAssign_operation (GALGAS_string (" \? ").add_operation (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 623)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                          categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18_skip_instruction_compare_register generateCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                    const GALGAS_uint constinArgument_inAddress,
                                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  GALGAS_uint var_code ;
  switch (object->mAttribute_mCompareInstruction.enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_code = GALGAS_uint ((uint32_t) 25088U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_code = GALGAS_uint ((uint32_t) 25600U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_code = GALGAS_uint ((uint32_t) 24576U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_code = GALGAS_uint ((uint32_t) 26112U) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 641)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 642)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)) ;
  GALGAS_string var_s = GALGAS_string ("    ") ;
  switch (object->mAttribute_mCompareInstruction.enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s.dotAssign_operation (GALGAS_string ("CPFSEQ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 648)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s.dotAssign_operation (GALGAS_string ("CPFSGT")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 649)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s.dotAssign_operation (GALGAS_string ("CPFSLT")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 650)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s.dotAssign_operation (GALGAS_string ("TSTFSZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 651)) ;
    }
    break ;
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 653))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)) ;
  const enumGalgasBool test_1 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 654)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_s.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 655)) ;
  }
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
  temp_2.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s, temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 658)) ;
  GALGAS_codeList var_c ;
  callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 662)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 661)) ;
  outArgument_outCode.dotAssign_operation (var_c  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 667)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                    categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@ipic18_skip_instruction_compare_register performInstructionRelativeBranchResolution'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                  const GALGAS_uint constinArgument_inAddress,
                                                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction ;
  callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 682)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 681)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_n.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_outModifiedEmbeddedInstruction, object->mAttribute_mCompareInstruction, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 690)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18_skip_instruction_BitTestSkip instructionDisplay'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 707)) ;
  }
  var_s.dotAssign_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)) ;
  GALGAS_stringlist var_x = callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 711)) ;
  var_s.dotAssign_operation (var_x.reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 712))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 712)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 713)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                          categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18_skip_instruction_BitTestSkip generateCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint constinArgument_inAddress,
                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_code = GALGAS_uint ((uint32_t) 40960U) ;
  }else if (kBoolFalse == test_0) {
    var_code = GALGAS_uint ((uint32_t) 45056U) ;
  }
  const enumGalgasBool test_1 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 729)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_code = var_code.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 730)) ;
  }
  var_code = var_code.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)) ;
  var_code = var_code.operator_or (object->mAttribute_mBitNumber.left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)) ;
  GALGAS_string var_s = GALGAS_string ("    ") ;
  const enumGalgasBool test_2 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_2) {
    var_s.dotAssign_operation (GALGAS_string ("BTFSS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 737)) ;
  }else if (kBoolFalse == test_2) {
    var_s.dotAssign_operation (GALGAS_string ("BTFSC")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 739)) ;
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)).add_operation (object->mAttribute_mBitNumber.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)) ;
  GALGAS_uintlist temp_3 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 745)) ;
  temp_3.addAssign_operation (var_code  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 745)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s, temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 743)) ;
  GALGAS_codeList var_c ;
  callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 747)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 746)) ;
  outArgument_outCode.dotAssign_operation (var_c  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                    categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@ipic18_skip_instruction_BitTestSkip performInstructionRelativeBranchResolution'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                          const GALGAS_uint constinArgument_inAddress,
                                                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                          GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction ;
  callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 767)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 766)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_n.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, var_outModifiedEmbeddedInstruction, object->mAttribute_mSkipIfSet, object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 775)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                                                  categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@ipic18_skip_instruction_FDA instructionDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  GALGAS_string var_s ;
  switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_s = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_s = GALGAS_string ("DCFSNZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_s = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_s = GALGAS_string ("INFSNZ") ;
    }
    break ;
  }
  var_s.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)) ;
  const enumGalgasBool test_0 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 800)) ;
  }
  var_s.dotAssign_operation (GALGAS_string (" \? ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 802)) ;
  GALGAS_stringlist var_x = callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 803)) ;
  var_s.dotAssign_operation (var_x.reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 805)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (void) {
  enterCategoryReader_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                          categoryReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (defineCategoryReader_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@ipic18_skip_instruction_FDA generateCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                    const GALGAS_uint constinArgument_inAddress,
                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  GALGAS_uint var_binCode ;
  switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_binCode = GALGAS_uint ((uint32_t) 11264U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_binCode = GALGAS_uint ((uint32_t) 19456U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_binCode = GALGAS_uint ((uint32_t) 15360U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_binCode = GALGAS_uint ((uint32_t) 18432U) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 822)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 823)) ;
  }
  var_binCode = var_binCode.operator_or (object->mAttribute_mRegisterDescription.reader_mRegisterAddress (SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)) ;
  GALGAS_string var_assemblyCode = GALGAS_string ("    ") ;
  switch (object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code.enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_assemblyCode.dotAssign_operation (GALGAS_string ("DECFSZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 829)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_assemblyCode.dotAssign_operation (GALGAS_string ("DCFSNZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 830)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_assemblyCode.dotAssign_operation (GALGAS_string ("INCFSZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 831)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_assemblyCode.dotAssign_operation (GALGAS_string ("INFSNZ")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 832)) ;
    }
    break ;
  }
  var_assemblyCode.dotAssign_operation (GALGAS_string (" ").add_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 834))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)) ;
  const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_assemblyCode.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 836)) ;
  }else if (kBoolFalse == test_1) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 838)) ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (", F")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 839)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mRegisterDescription.reader_mNeedsBSR (SOURCE_FILE ("ipic18_regular_instructions.galgas", 841)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_binCode = var_binCode.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 842)) ;
    var_assemblyCode.dotAssign_operation (GALGAS_string (", BSR_ACCESS")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 843)) ;
  }
  GALGAS_uintlist temp_3 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
  temp_3.addAssign_operation (var_binCode  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode, temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)) ;
  GALGAS_codeList var_c ;
  callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 850)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 849)) ;
  outArgument_outCode.dotAssign_operation (var_c  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 855)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                    categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode, NULL) ;

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
  callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 870)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 869)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_n.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_outModifiedEmbeddedInstruction, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, object->mAttribute_mRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 878)) ;
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
      const enumGalgasBool test_0 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 912)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 912)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 913)) ;
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
      const enumGalgasBool test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 931)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 931)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 932)) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)) ;
        outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 934))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 934)) ;
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const enumGalgasBool test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 937)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 937)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, object->mAttribute_mTargetLabel, constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 939)).reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)).add_operation (GALGAS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 939)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 940))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)) ;
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
      var_s = GALGAS_string ("JSR ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      var_s = GALGAS_string ("RCALL ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      var_s = GALGAS_string ("CALL ").add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)) ;
    }
    break ;
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 955)) ;
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
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_targetAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 965)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress, object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 968)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress, object->mAttribute_mTargetLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 970)) ;
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
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)).substract_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 994)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.dotAssign_operation (GALGAS_string ("(uses CALL)")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 995)) ;
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 997)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_31976 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_31976.hasCurrentObject ()) {
    cEnumerator_stringlist enumerator_32028 (callCategoryReader_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_31976.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 999)), kEnumeration_up) ;
    while (enumerator_32028.hasCurrentObject ()) {
      result_outResult.addAssign_operation (GALGAS_string ("   ").add_operation (enumerator_32028.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1000))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1000)) ;
      enumerator_32028.gotoNextObject () ;
    }
    enumerator_31976.gotoNextObject () ;
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
  GALGAS_uint var_address = constinArgument_inAddress.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1012)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_32502 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_32502.hasCurrentObject ()) {
    callCategoryMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32502.current_mInstruction (HERE).ptr (), var_address, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1020)) ;
    enumerator_32502.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1024)) ;
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
  GALGAS_uint var_address = constinArgument_inAddress.add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_33463 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_33463.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction joker_33689 ; // Joker input parameter
    callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_33463.current_mInstruction (HERE).ptr (), var_address, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount, var_unusedListing, joker_33689, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1044)) ;
    var_address = var_address.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
    enumerator_33463.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").reader_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)).add_operation (GALGAS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)) ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetInstructions, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1058)) ;
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
  GALGAS_lstring var_target = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_goto_4"), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1073)) ;
  GALGAS_uint var_computetedGoto_34_Address ;
  constinArgument_inSymbolTable.method_searchKey (var_target, var_computetedGoto_34_Address, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1075)) ;
  GALGAS_uint var_currentInstructionAddress ;
  const enumGalgasBool test_0 = object->mAttribute_mUsesRCALL.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_currentInstructionAddress = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1079)) ;
    outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address, var_target, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1080)) ;
  }else if (kBoolFalse == test_0) {
    var_currentInstructionAddress = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1082)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address, var_target, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1083)) ;
  }
  GALGAS_uint var_instructionFollowingComputedRcallAddress = var_currentInstructionAddress.add_operation (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).multiply_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)) ;
  GALGAS_lstring var_nextInstructionLabel = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_").add_operation (constinArgument_inAddress.reader_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_35256 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_35256.hasCurrentObject ()) {
    var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1089)) ;
    GALGAS_codeList var_instructionCode ;
    callCategoryMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_35256.current_mInstruction (HERE).ptr (), var_currentInstructionAddress, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1090)) ;
    outArgument_outCode.dotAssign_operation (var_instructionCode  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)) ;
    var_currentInstructionAddress = var_currentInstructionAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mTargetInstructions.reader_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1098)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress, var_instructionFollowingComputedRcallAddress, var_nextInstructionLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)) ;
      var_currentInstructionAddress = var_currentInstructionAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)) ;
    }
    enumerator_35256.gotoNextObject () ;
  }
  outArgument_outCode.dotAssign_operation (function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)) ;
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
//                        Overriding category method '@pic18Instruction_NOPBRA addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (defineCategoryMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines, NULL) ;

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
  cEnumerator_lstringlist enumerator_4151 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_4151.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4151.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 143)) ;
    enumerator_4151.gotoNextObject () ;
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
  cEnumerator_lstringlist enumerator_4442 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_4442.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4442.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 154)) ;
    enumerator_4442.gotoNextObject () ;
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
  cEnumerator_lstringlist enumerator_4734 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_4734.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4734.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 165)) ;
    enumerator_4734.gotoNextObject () ;
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
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mRepeatedInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 183)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_5340 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_5340.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_5340.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 185)) ;
    }
    enumerator_5340.gotoNextObject () ;
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
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 203)) ;
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
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 212)) ;
  }
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 213)) ;
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
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_6593 (object->mAttribute_mCaseList, kEnumeration_up) ;
  while (enumerator_6593.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_6593.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 223)) ;
    }
    enumerator_6593.gotoNextObject () ;
  }
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 225)) ;
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
  GALGAS_lstringlist joker_7033 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (object->mAttribute_mMacroName, joker_7033, var_instructionList, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 234)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (var_instructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 235)) ;
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
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 268)) ;
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
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9802 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_9802.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_9802.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 334)) ;
    }
    enumerator_9802.gotoNextObject () ;
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
//                        Overriding category method '@pic18Instruction_block performInlining'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_Instruction_5F_block_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                            const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                            const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                            GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  GALGAS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList = GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 33)) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1131 (object->mAttribute_mBlockList, kEnumeration_up) ;
  while (enumerator_1131.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList ;
    {
    routine_performInlineFromInstructionList (enumerator_1131.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList.addAssign_operation (enumerator_1131.current_mBlockName (HERE), var_instructionList, enumerator_1131.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1131.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1131.gotoNextObject () ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_block::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mStartBlockName, var_inlinedBlockList, object->mAttribute_mEndOfBlockInstruction  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_Instruction_5F_block_performInlining (void) {
  enterCategoryMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                       categoryMethod_pic_31__38_Instruction_5F_block_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_performInlining (defineCategoryMethod_pic_31__38_Instruction_5F_block_performInlining, NULL) ;

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
  routine_performInlineFromInstructionList (object->mAttribute_mInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (object->mAttribute_mInstructionLocation, var_instructionList, object->mAttribute_mEndOfInstructionList  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
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
  routine_performInlineFromInstructionList (object->mAttribute_mRepeatedInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GALGAS_pic_31__38_DoWhilePartList var_whilePartList = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 91)) ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_2893 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_2893.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList ;
    {
    routine_performInlineFromInstructionList (enumerator_2893.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList.addAssign_operation (enumerator_2893.current_mCondition (HERE), var_instructionList, enumerator_2893.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_2893.gotoNextObject () ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (object->mAttribute_mInstructionLocation, var_repeatedInstructionList, object->mAttribute_mEndOfRepeatedInstructionList, var_whilePartList  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
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
  routine_performInlineFromInstructionList (object->mAttribute_mInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegister, var_instructionList, object->mAttribute_mEndOfSaveBankInstruction  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
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
  routine_performInlineFromInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GALGAS_pic_31__38_InstructionList var_elseInstructionList ;
  {
  routine_performInlineFromInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mIfCondition, var_thenInstructionList, var_elseInstructionList, object->mAttribute_mEndOfElsePartLocation  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
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
  const enumGalgasBool test_0 = constinArgument_inDeclaredRoutineMap.reader_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.reader_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.reader_hasKey (object->mAttribute_mTargetLabel.mAttribute_string COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_luint var_requiredBank ;
    GALGAS_bool var_isNoReturn ;
    GALGAS_pic_31__38_InstructionList var_instructionList ;
    GALGAS_luint joker_5546 ; // Joker input parameter
    GALGAS_bool joker_5578 ; // Joker input parameter
    constinArgument_inDeclaredRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_requiredBank, joker_5546, joker_5578, var_isNoReturn, var_instructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
    const enumGalgasBool test_1 = var_isNoReturn.boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a \"noreturn\" routine cannot be inlined")  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
      var_inlineDone.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_requiredBank.mAttribute_uint.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (object->mAttribute_mInstructionLocation, var_requiredBank.mAttribute_uint  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
      }
      GALGAS_stringset var_currentlyInlinedRoutineSet = constinArgument_inCurrentlyInlinedRoutineSet ;
      var_currentlyInlinedRoutineSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
      cEnumerator_pic_31__38_InstructionList enumerator_6173 (var_instructionList, kEnumeration_up) ;
      while (enumerator_6173.hasCurrentObject ()) {
        callCategoryMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6173.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
        enumerator_6173.gotoNextObject () ;
      }
      var_inlineDone = GALGAS_bool (true) ;
    }
  }else if (kBoolFalse == test_0) {
    var_inlineDone = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_4 = var_inlineDone.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_5 = object ;
    ioArgument_ioInstructionList.addAssign_operation (temp_5  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
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
  GALGAS_bitSliceTable joker_6094 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_6094, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 165)) ;
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
  GALGAS_bitSliceTable joker_6990 ; // Joker input parameter
  callCategoryMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription, joker_6990, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 194)) ;
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 504)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 504)) ;
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
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 538)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_loopLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 541))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 541)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 542)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 537))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 537)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 546)) ;
  ioArgument_ioBlockLabel = var_loopLabel ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list execution is endless")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 568)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 571)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mAttribute_mInstructionLocation, var_loopLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 574))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 574)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 575)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 570))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 570)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 584)) ;
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 606)) ;
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 608)) ;
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
  GALGAS_registerExpression var_BSRregister = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 633))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 633)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 634))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 634))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 634)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 635))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 632)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) var_BSRregister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_BSR_5F_IPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 637)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription ;
  callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mAttribute_mRegister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 644)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_BSR_5F_IPICregisterDescription, var_save_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 651)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 656)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 651)) ;
  GALGAS_uint var_finalBank = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mAttribute_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 660)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSaveBankInstruction, GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 679)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mAttribute_mInstructionLocation, var_save_5F_IPICregisterDescription, var_BSR_5F_IPICregisterDescription  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 682)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 687)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 682)) ;
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
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 710)) ;
  GALGAS_sint_36__34_ var_upperBound ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 711)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound.objectCompare (var_upperBound)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (var_upperBound.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 714)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 715)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)).reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 716)) ;
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
  GALGAS_sint_36__34_ var_idx = var_lowerBound.add_operation (GALGAS_uint ((uint32_t) 1U).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 747)) ;
  if (var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).add_operation (GALGAS_uint ((uint32_t) 1U).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).isValid ()) {
    uint32_t variant_26087 = var_upperBound.substract_operation (var_lowerBound, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).add_operation (GALGAS_uint ((uint32_t) 1U).reader_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).reader_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 748)).uintValue () ;
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

