#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 4U) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = object ;
  GALGAS_string var_s_10073 = GALGAS_string ("LFSR ").add_operation (temp_0.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)).add_operation (temp_1.readProperty_mValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_10073  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 325)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_LFSR generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  GALGAS_uintlist var_code_10524 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = object ;
  var_code_10524.addAssign_operation (GALGAS_uint ((uint32_t) 60928U).operator_or (temp_0.readProperty_mFSRindex ().readProperty_uint ().left_shift_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)).operator_or (temp_1.readProperty_mValue ().right_shift_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_2 = object ;
  var_code_10524.addAssign_operation (GALGAS_uint ((uint32_t) 61440U).operator_or (temp_2.readProperty_mValue ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_3 = object ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_3.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), var_code_10524  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 338)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FBA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_1 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = object ;
  GALGAS_string var_s_11094 = extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_11094  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 351)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FBA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint /* constinArgument_inAddress */,
                                                                                             const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  GALGAS_uint var_code_11593 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = object ;
  switch (temp_0.readProperty_mBitOrientedOp ().enumValue ()) {
  case GALGAS_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code_11593 = GALGAS_uint ((uint32_t) 36864U) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code_11593 = GALGAS_uint ((uint32_t) 32768U) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BTG:
    {
      var_code_11593 = GALGAS_uint ((uint32_t) 28672U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = object ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_11593 = var_code_11593.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 368)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_3 = object ;
  var_code_11593 = var_code_11593.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_4 = object ;
  var_code_11593 = var_code_11593.operator_or (temp_4.readProperty_mBitNumber ().left_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_5 = object ;
  GALGAS_uintlist temp_6 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  temp_6.addAssign_operation (var_code_11593  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 372)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVLB instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = object ;
  GALGAS_string var_s_12338 = GALGAS_string ("MOVLB ").add_operation (temp_0.readProperty_mBankIndex ().readProperty_uint ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_12338  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 385)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVLB generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = object ;
  GALGAS_uint var_code_12768 = GALGAS_uint ((uint32_t) 256U).operator_or (temp_0.readProperty_mBankIndex ().readProperty_uint () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  temp_2.addAssign_operation (var_code_12768  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 396)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLRD instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = object ;
  GALGAS_string var_s_13246 = GALGAS_string ("TBLRD ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 408)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_13246  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 409)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  GALGAS_uint var_code_13667 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = object ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code_13667 = GALGAS_uint ((uint32_t) 8U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code_13667 = GALGAS_uint ((uint32_t) 9U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code_13667 = GALGAS_uint ((uint32_t) 10U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code_13667 = GALGAS_uint ((uint32_t) 11U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)) ;
  temp_2.addAssign_operation (var_code_13667  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 426)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLWT instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = object ;
  GALGAS_string var_s_14289 = GALGAS_string ("TBLWT ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 438)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_14289  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 439)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  GALGAS_uint var_code_14710 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = object ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code_14710 = GALGAS_uint ((uint32_t) 12U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code_14710 = GALGAS_uint ((uint32_t) 13U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code_14710 = GALGAS_uint ((uint32_t) 14U) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code_14710 = GALGAS_uint ((uint32_t) 15U) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_1 = object ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
  temp_2.addAssign_operation (var_code_14710  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 457)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 456)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 470)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  GALGAS_string var_s_15540 = GALGAS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 476)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_15540  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 477)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MNOP generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 488)) ;
  GALGAS_uint var_idx_15995 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = object ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_16006 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_16006 = true ;
    while (loop_16006) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = object ;
      loop_16006 = GALGAS_bool (kIsStrictInf, var_idx_15995.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_16006) {
        loop_16006 = GALGAS_bool (kIsStrictInf, var_idx_15995.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_16006 && (0 == variant_16006)) {
        loop_16006 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 490)) ;
      }
      if (loop_16006) {
        variant_16006 -- ;
        GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        temp_2.addAssign_operation (GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    NOP"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
        var_idx_15995.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 494)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = object ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 506)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = object ;
  GALGAS_string var_s_16685 = GALGAS_string ("NOPBRA ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 512)) ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
  temp_1.addAssign_operation (var_s_16685  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  outArgument_outCode = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 524)) ;
  GALGAS_uint var_idx_17099 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = object ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_17110 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_17110 = true ;
    while (loop_17110) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = object ;
      loop_17110 = GALGAS_bool (kIsStrictInf, var_idx_17099.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_17110) {
        loop_17110 = GALGAS_bool (kIsStrictInf, var_idx_17099.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_17110 && (0 == variant_17110)) {
        loop_17110 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 526)) ;
      }
      if (loop_17110) {
        variant_17110 -- ;
        GALGAS_uintlist temp_2 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        temp_2.addAssign_operation (GALGAS_uint ((uint32_t) 53248U)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    BRA $+2"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
        var_idx_17099.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 530)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_MOV_LABEL_W instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = object ;
  GALGAS_string var_s_17567 = GALGAS_string ("MOVLW ((").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (temp_1.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (temp_2.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 541)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_17567  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 542)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_MOV_LABEL_W generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_uint /* constinArgument_inAddress */,
                                                                                            const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                            const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                            GALGAS_codeList & outArgument_outCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  GALGAS_uint var_address_18075 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = object ;
  constinArgument_inDataAddressMap.method_searchKey (temp_0.readProperty_mLabel (), var_address_18075, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 552)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = object ;
  GALGAS_uint var_code_18093 = var_address_18075.add_operation (temp_1.readProperty_mOffset (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)).right_shift_operation (temp_2.readProperty_mRightShift (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 553)) ;
  GALGAS_uint var_code_5F_MOVLW_18172 = GALGAS_uint ((uint32_t) 3584U) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_3 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_4 = object ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_5 = object ;
  GALGAS_uintlist temp_6 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 557)) ;
  temp_6.addAssign_operation (var_code_18093.operator_or (var_code_5F_MOVLW_18172 COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 557))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 557)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    MOVLW ((_data_").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (temp_4.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (temp_5.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 555)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_BLANK instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = object ;
  GALGAS_string var_s_18674 = GALGAS_string ("BLANK ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 567)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_18674  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 568)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_BLANK generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                               const GALGAS_uint /* constinArgument_inAddress */,
                                                                                               const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                               GALGAS_codeList & outArgument_outCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = object ;
  GALGAS_uint var_code_19100 = GALGAS_uint ((uint32_t) 61440U).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 578)) ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
  temp_1.addAssign_operation (var_code_19100  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 581)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code_19100.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 580)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 579)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FNOP instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = object ;
  GALGAS_string var_s_19547 = GALGAS_string ("FNOP ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 591)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_19547  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 592)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FNOP generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAddress */,
                                                                                              const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                              GALGAS_codeList & outArgument_outCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = object ;
  GALGAS_uint var_code_19971 = GALGAS_uint ((uint32_t) 61440U).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 602)) ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 605)) ;
  temp_1.addAssign_operation (var_code_19971  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 605)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (GALGAS_string ("    DW ").add_operation (var_code_19971.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 604)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 603)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_compare_register instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = object ;
  GALGAS_string var_s_20426 = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 615)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
  switch (temp_1.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s_20426.plusAssign_operation(GALGAS_string ("!= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 617)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s_20426.plusAssign_operation(GALGAS_string ("<= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 618)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s_20426.plusAssign_operation(GALGAS_string (">= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 619)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s_20426.plusAssign_operation(GALGAS_string ("!= 0"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 620)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = object ;
  var_s_20426.plusAssign_operation(GALGAS_string (" \? ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 622)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_20426  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 623)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                           extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                     const GALGAS_uint constinArgument_inAddress,
                                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  GALGAS_uint var_code_21075 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = object ;
  switch (temp_0.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_code_21075 = GALGAS_uint ((uint32_t) 25088U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_code_21075 = GALGAS_uint ((uint32_t) 25600U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_code_21075 = GALGAS_uint ((uint32_t) 24576U) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_code_21075 = GALGAS_uint ((uint32_t) 26112U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = object ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_21075 = var_code_21075.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 642)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = object ;
  var_code_21075 = var_code_21075.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 644)) ;
  GALGAS_string var_s_21417 = GALGAS_string ("    ") ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = object ;
  switch (temp_4.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s_21417.plusAssign_operation(GALGAS_string ("CPFSEQ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 648)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s_21417.plusAssign_operation(GALGAS_string ("CPFSGT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 649)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s_21417.plusAssign_operation(GALGAS_string ("CPFSLT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 650)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s_21417.plusAssign_operation(GALGAS_string ("TSTFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 651)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = object ;
  var_s_21417.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 653)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_7 = object ;
    test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_s_21417.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 655)) ;
    }
  }
  GALGAS_uintlist temp_8 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
  temp_8.addAssign_operation (var_code_21075  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s_21417, temp_8  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 658)) ;
  GALGAS_codeList var_c_21905 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_9 = object ;
  callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) temp_9.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 662)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_21905, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 661)) ;
  outArgument_outCode.plusAssign_operation(var_c_21905, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 667)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                     extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_uint var_n_22377 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_22643 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 682)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_22643, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 681)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_22377.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = object ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_22643, temp_4.readProperty_mCompareInstruction (), temp_5.readProperty_mRegisterDescription ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 690)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_BitTestSkip instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  GALGAS_string var_s_23234 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_23234.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 707)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = object ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = object ;
  var_s_23234.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 709)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = object ;
  GALGAS_stringlist var_x_23396 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 711)) ;
  var_s_23234.plusAssign_operation(var_x_23396.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 712)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_23234  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 713)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                           extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                             const GALGAS_uint constinArgument_inAddress,
                                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                             const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                             GALGAS_codeList & outArgument_outCode,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  GALGAS_uint var_code_23834 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_23834 = GALGAS_uint ((uint32_t) 40960U) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_23834 = GALGAS_uint ((uint32_t) 45056U) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = object ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_23834 = var_code_23834.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 730)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = object ;
  var_code_23834 = var_code_23834.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 732)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = object ;
  var_code_23834 = var_code_23834.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GALGAS_uint ((uint32_t) 9U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 733)) ;
  GALGAS_string var_s_24145 = GALGAS_string ("    ") ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_7 = object ;
    test_6 = temp_7.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_s_24145.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 737)) ;
    }
  }
  if (kBoolFalse == test_6) {
    var_s_24145.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 739)) ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_8 = object ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_9 = object ;
  var_s_24145.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)).add_operation (temp_9.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)) ;
  GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 745)) ;
  temp_10.addAssign_operation (var_code_23834  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 745)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_s_24145, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 743)) ;
  GALGAS_codeList var_c_24504 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_11 = object ;
  callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 747)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_24504, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 746)) ;
  outArgument_outCode.plusAssign_operation(var_c_24504, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                     extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_uint var_n_24971 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_25237 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 767)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_25237, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 766)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_24971.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = object ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_25237, temp_4.readProperty_mSkipIfSet (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 775)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_FDA instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  GALGAS_string var_s_25821 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = object ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_s_25821 = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_s_25821 = GALGAS_string ("DCFSNZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_s_25821 = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_s_25821 = GALGAS_string ("INFSNZ") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = object ;
  var_s_25821.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 798)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = object ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_s_25821.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 800)) ;
    }
  }
  var_s_25821.plusAssign_operation(GALGAS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 802)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = object ;
  GALGAS_stringlist var_x_26126 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 803)) ;
  var_s_25821.plusAssign_operation(var_x_26126.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 804)) ;
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_25821  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 805)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                           extensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_skip_5F_instruction_5F_FDA_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                     const GALGAS_uint constinArgument_inAddress,
                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  GALGAS_uint var_binCode_26559 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = object ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_binCode_26559 = GALGAS_uint ((uint32_t) 11264U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_binCode_26559 = GALGAS_uint ((uint32_t) 19456U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_binCode_26559 = GALGAS_uint ((uint32_t) 15360U) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_binCode_26559 = GALGAS_uint ((uint32_t) 18432U) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = object ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_binCode_26559 = var_binCode_26559.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 823)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = object ;
  var_binCode_26559 = var_binCode_26559.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 825)) ;
  GALGAS_string var_assemblyCode_26942 = GALGAS_string ("    ") ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = object ;
  switch (temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_assemblyCode_26942.plusAssign_operation(GALGAS_string ("DECFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 829)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_assemblyCode_26942.plusAssign_operation(GALGAS_string ("DCFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 830)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_assemblyCode_26942.plusAssign_operation(GALGAS_string ("INCFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 831)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_assemblyCode_26942.plusAssign_operation(GALGAS_string ("INFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 832)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = object ;
  var_assemblyCode_26942.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 834)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_7 = object ;
    test_6 = temp_7.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_assemblyCode_26942.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 836)) ;
    }
  }
  if (kBoolFalse == test_6) {
    var_binCode_26559 = var_binCode_26559.operator_or (GALGAS_uint ((uint32_t) 512U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 838)) ;
    var_assemblyCode_26942.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 839)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_9 = object ;
    test_8 = temp_9.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_8) {
      var_binCode_26559 = var_binCode_26559.operator_or (GALGAS_uint ((uint32_t) 256U) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 842)) ;
      var_assemblyCode_26942.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 843)) ;
    }
  }
  GALGAS_uintlist temp_10 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
  temp_10.addAssign_operation (var_binCode_26559  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
  outArgument_outCode = GALGAS_codeList::constructor_listWithValue (var_assemblyCode_26942, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)) ;
  GALGAS_codeList var_c_27677 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_11 = object ;
  callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 850)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_27677, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 849)) ;
  outArgument_outCode.plusAssign_operation(var_c_27677, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 855)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                     extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_uint var_n_28136 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_28402 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = object ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 870)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_28402, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 869)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_n_28136.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = object ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = object ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_28402, temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 878)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR instructionRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                   const GALGAS_uint constinArgument_inAddress,
                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = object ;
        test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_2.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 912)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 912)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = object ;
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, temp_3.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 913)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (void) {
  enterExtensionMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                          extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_instructionRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = object ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = object ;
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_3.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 931)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 931)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 932)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_5 = object ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (temp_5.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 933)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_6 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = object ;
          outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (temp_6.readProperty_mInstructionLocation (), temp_7.readProperty_mTargetLabel (), GALGAS_jumpInstructionKind::constructor_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 934))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 934)) ;
        }
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_9 = object ;
        test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 937)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 937)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_11 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_11.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 939)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)).add_operation (GALGAS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 939)).add_operation (temp_12.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 940)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 938)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  GALGAS_string var_s_31042 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = object ;
      var_s_31042 = GALGAS_string ("JSR ").add_operation (temp_1.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = object ;
      var_s_31042 = GALGAS_string ("RCALL ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = object ;
      var_s_31042 = GALGAS_string ("CALL ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)) ;
    }
    break ;
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_31042  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 955)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_JSR_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                              const GALGAS_uint constinArgument_inAddress,
                                                                              const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                              GALGAS_codeList & outArgument_outCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  GALGAS_uint var_targetAddress_31648 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_31648, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 965)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = object ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = object ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_31648, temp_2.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 968)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = object ;
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_31648, temp_3.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 970)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionSize'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint ((uint32_t) 2U) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint ((uint32_t) 4U) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = object ;
  result_outSize = result_outSize.add_operation (GALGAS_uint ((uint32_t) 4U).multiply_operation (temp_2.readProperty_mTargetInstructions ().getter_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)).substract_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 987)) ;
//---
  return result_outSize ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (void) {
  enterExtensionGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                        extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionSize, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionDisplay'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringlist extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outResult ; // Returned variable
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  GALGAS_string var_s_32564 = GALGAS_string ("COMPUTED ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = object ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 994)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_32564.plusAssign_operation(GALGAS_string ("(uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 995)) ;
    }
  }
  result_outResult = GALGAS_stringlist::constructor_listWithValue (var_s_32564  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 997)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = object ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_32708 (temp_2.readProperty_mTargetInstructions (), kENUMERATION_UP) ;
  while (enumerator_32708.hasCurrentObject ()) {
    cEnumerator_stringlist enumerator_32757 (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32708.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 999)), kENUMERATION_UP) ;
    while (enumerator_32757.hasCurrentObject ()) {
      result_outResult.addAssign_operation (GALGAS_string ("   ").add_operation (enumerator_32757.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1000))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1000)) ;
      enumerator_32757.gotoNextObject () ;
    }
    enumerator_32708.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (void) {
  enterExtensionGetter_instructionDisplay (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                           extensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay (defineExtensionGetter_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionDisplay, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall instructionRelativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                                const GALGAS_uint constinArgument_inAddress,
                                                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                                GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = object ;
  GALGAS_uint temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mUsesRCALL ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_uint ((uint32_t) 4U) ;
  }
  GALGAS_uint var_address_33195 = constinArgument_inAddress.add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1012)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = object ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_33270 (temp_3.readProperty_mTargetInstructions (), kENUMERATION_UP) ;
  while (enumerator_33270.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_33270.current_mInstruction (HERE).ptr (), var_address_33195, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014)) ;
    var_address_33195 = var_address_33195.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1020)) ;
    enumerator_33270.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = object ;
    test_4 = temp_5.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1023)).boolEnum () ;
        if (kBoolTrue == test_6) {
          ioArgument_ioOverflowMap.addAssign_operation (constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1024)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (void) {
  enterExtensionMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                          extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_instructionRelativeBranchOverflow, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall performInstructionRelativeBranchResolution'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
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
  GALGAS_uint var_unusedConversionCount_34142 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_unusedListing_34174 = GALGAS_string::makeEmptyString () ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = object ;
  GALGAS_uint temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_uint ((uint32_t) 2U) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_uint ((uint32_t) 4U) ;
  }
  GALGAS_uint var_address_34199 = constinArgument_inAddress.add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1041)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = object ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34274 (temp_4.readProperty_mTargetInstructions (), kENUMERATION_UP) ;
  while (enumerator_34274.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction joker_34530 ; // Joker input parameter
    callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_34274.current_mInstruction (HERE).ptr (), var_address_34199, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount_34142, var_unusedListing_34174, joker_34530, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1044)) ;
    var_address_34199 = var_address_34199.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
    enumerator_34274.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_6 = object ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)).add_operation (GALGAS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1057)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = object ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = object ;
          outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetInstructions (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1058)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (void) {
  enterExtensionMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                                   extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_performInstructionRelativeBranchResolution, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           const GALGAS_uint constinArgument_inAddress,
                                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = object ;
  GALGAS_lstring var_target_35384 = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_goto_4"), temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1073)) ;
  GALGAS_uint var_computetedGoto_34_Address_35519 ;
  constinArgument_inSymbolTable.method_searchKey (var_target_35384, var_computetedGoto_34_Address_35519, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1075)) ;
  GALGAS_uint var_currentInstructionAddress_35559 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = object ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_currentInstructionAddress_35559 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1079)) ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address_35519, var_target_35384, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1080)) ;
    }
  }
  if (kBoolFalse == test_1) {
    var_currentInstructionAddress_35559 = constinArgument_inAddress.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1082)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address_35519, var_target_35384, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1083)) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = object ;
  GALGAS_uint var_instructionFollowingComputedRcallAddress_35907 = var_currentInstructionAddress_35559.add_operation (temp_3.readProperty_mTargetInstructions ().getter_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).multiply_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1085)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = object ;
  GALGAS_lstring var_nextInstructionLabel_36006 = GALGAS_lstring::constructor_new (GALGAS_string ("_computed_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)), temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)) ;
  GALGAS_uint var_idx_36103 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = object ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_36131 (temp_5.readProperty_mTargetInstructions (), kENUMERATION_UP) ;
  while (enumerator_36131.hasCurrentObject ()) {
    var_idx_36103.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1089)) ;
    GALGAS_codeList var_instructionCode_36321 ;
    callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_36131.current_mInstruction (HERE).ptr (), var_currentInstructionAddress_35559, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode_36321, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1090)) ;
    outArgument_outCode.plusAssign_operation(var_instructionCode_36321, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)) ;
    var_currentInstructionAddress_35559 = var_currentInstructionAddress_35559.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_7 = object ;
      test_6 = GALGAS_bool (kIsStrictInf, var_idx_36103.objectCompare (temp_7.readProperty_mTargetInstructions ().getter_length (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1098)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress_35559, var_instructionFollowingComputedRcallAddress_35907, var_nextInstructionLabel_36006, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1099)) ;
        var_currentInstructionAddress_35559 = var_currentInstructionAddress_35559.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)) ;
      }
    }
    enumerator_36131.gotoNextObject () ;
  }
  outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel_36006, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                     extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                                 const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                    const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_0 = object ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMP * object = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 42)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMPCC addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * object = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 51)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                               GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 60)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                          const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                          GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 69)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA16PTR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                    const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                   const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel_register addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_bra addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = object ;
  cEnumerator_lstringlist enumerator_4396 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_4396.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4396.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 151)) ;
    enumerator_4396.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_goto addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = object ;
  cEnumerator_lstringlist enumerator_4698 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_4698.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4698.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 162)) ;
    enumerator_4698.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_rcall addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = object ;
  cEnumerator_lstringlist enumerator_5001 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_5001.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_5001.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 173)) ;
    enumerator_5001.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_retlw addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 191)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = object ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_5636 (temp_1.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_5636.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_5636.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 193)) ;
    }
    enumerator_5636.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 211)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_0.readProperty_mThenInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 220)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = object ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 221)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_macro addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_macro * object = (const cPtr_pic_31__38_Instruction_5F_macro *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_macro) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_6970 ;
  const GALGAS_pic_31__38_Instruction_5F_macro temp_0 = object ;
  GALGAS_lstringlist joker_6948 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), joker_6948, var_instructionList_6970, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 230)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (var_instructionList_6970, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 231)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_0 = object ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 264)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                     const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block addUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = object ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9728 (temp_0.readProperty_mBlockList (), kENUMERATION_UP) ;
  while (enumerator_9728.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_9728.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 330)) ;
    }
    enumerator_9728.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addPic18UsedRoutinesFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addPic_31__38_UsedRoutinesFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_10111 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_10111.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_10111.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 342)) ;
    enumerator_10111.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pic18_computeUsedRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const GALGAS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                              const GALGAS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                              const GALGAS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                              const GALGAS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                              const GALGAS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 356)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_10859 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_10859.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_10859.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 359)) ;
    }
    enumerator_10859.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11083 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_11083.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11083.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 367)) ;
    enumerator_11083.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11261 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_11261.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11261.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    enumerator_11261.gotoNextObject () ;
  }
  GALGAS_stringset var_s_11427 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_used_routines.galgas", 374)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 375)).isValid ()) {
    uint32_t variant_11457 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 375)).uintValue () ;
    bool loop_11457 = true ;
    while (loop_11457) {
      loop_11457 = GALGAS_bool (kIsNotEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11457) {
        loop_11457 = GALGAS_bool (kIsNotEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11457 && (0 == variant_11457)) {
        loop_11457 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 375)) ;
      }
      if (loop_11457) {
        variant_11457 -- ;
        var_s_11427 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11601 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_11601.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11601.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11601.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 380)) ;
              }
            }
          }
          enumerator_11601.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_pic_31__38_InterruptDefinitionList operand0 = GALGAS_pic_31__38_InterruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                       inCompiler
                                                                                                                       COMMA_THERE) ;
  const GALGAS_pic_31__38_RoutineDefinitionList operand1 = GALGAS_pic_31__38_RoutineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                   inCompiler
                                                                                                                   COMMA_THERE) ;
  const GALGAS_pic_31__38_MacroMap operand2 = GALGAS_pic_31__38_MacroMap::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand3 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand4 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  return function_pic_31__38__5F_computeUsedRoutines (operand0,
                                                      operand1,
                                                      operand2,
                                                      operand3,
                                                      operand4,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_computeUsedRoutines ("pic18_computeUsedRoutines",
                                                                                    functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines,
                                                                                    & kTypeDescriptor_GALGAS_stringset,
                                                                                    5,
                                                                                    functionArgs_pic_31__38__5F_computeUsedRoutines) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_block_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                             const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                             const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                             GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  GALGAS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList_1162 = GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 33)) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = object ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1251 (temp_0.readProperty_mBlockList (), kENUMERATION_UP) ;
  while (enumerator_1251.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_1477 ;
    {
    routine_performInlineFromInstructionList (enumerator_1251.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1477, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList_1162.addAssign_operation (enumerator_1251.current_mBlockName (HERE), var_instructionList_1477, enumerator_1251.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1251.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1251.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_1 = object ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_3 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_block::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mStartBlockName (), var_inlinedBlockList_1162, temp_3.readProperty_mEndOfBlockInstruction ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_block_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_block_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                               GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_2303 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = object ;
  routine_performInlineFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2303, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_1 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_2 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (temp_1.readProperty_mInstructionLocation (), var_instructionList_2303, temp_2.readProperty_mEndOfInstructionList ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                   const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                   const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                   GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  GALGAS_pic_31__38_InstructionList var_repeatedInstructionList_2981 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = object ;
  routine_performInlineFromInstructionList (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2981, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GALGAS_pic_31__38_DoWhilePartList var_whilePartList_3005 = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 91)) ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = object ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_3094 (temp_1.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_3094.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_3325 ;
    {
    routine_performInlineFromInstructionList (enumerator_3094.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3325, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList_3005.addAssign_operation (enumerator_3094.current_mCondition (HERE), var_instructionList_3325, enumerator_3094.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_3094.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_3 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (temp_2.readProperty_mInstructionLocation (), var_repeatedInstructionList_2981, temp_3.readProperty_mEndOfRepeatedInstructionList (), var_whilePartList_3005  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_savebank_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_4101 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = object ;
  routine_performInlineFromInstructionList (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_4101, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = object ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_3 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mRegister (), var_instructionList_4101, temp_3.readProperty_mEndOfSaveBankInstruction ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_savebank_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                        const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                        const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                        GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  GALGAS_pic_31__38_InstructionList var_thenInstructionList_4801 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = object ;
  routine_performInlineFromInstructionList (temp_0.readProperty_mThenInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4801, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GALGAS_pic_31__38_InstructionList var_elseInstructionList_5009 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = object ;
  routine_performInlineFromInstructionList (temp_1.readProperty_mElseInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_5009, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = object ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mIfCondition (), var_thenInstructionList_4801, var_elseInstructionList_5009, temp_4.readProperty_mEndOfElsePartLocation ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR performInlining'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JSR_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                           const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                           const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                           GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  GALGAS_bool var_inlineDone_5632 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_1 = object ;
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_2 = object ;
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_3 = object ;
    test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (temp_2.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (temp_3.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_luint var_requiredBank_5923 ;
      GALGAS_bool var_isNoReturn_6015 ;
      GALGAS_pic_31__38_InstructionList var_instructionList_6064 ;
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_4 = object ;
      GALGAS_luint joker_5931 ; // Joker input parameter
      GALGAS_bool joker_5963 ; // Joker input parameter
      constinArgument_inDeclaredRoutineMap.method_searchKey (temp_4.readProperty_mTargetLabel (), var_requiredBank_5923, joker_5931, joker_5963, var_isNoReturn_6015, var_instructionList_6064, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isNoReturn_6015.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_Instruction_5F_JSR temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray7  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
          var_inlineDone_5632.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_5923.readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const GALGAS_pic_31__38_Instruction_5F_JSR temp_9 = object ;
            ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (temp_9.readProperty_mInstructionLocation (), var_requiredBank_5923.readProperty_uint ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
          }
        }
        GALGAS_stringset var_currentlyInlinedRoutineSet_6405 = constinArgument_inCurrentlyInlinedRoutineSet ;
        const GALGAS_pic_31__38_Instruction_5F_JSR temp_10 = object ;
        var_currentlyInlinedRoutineSet_6405.addAssign_operation (temp_10.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
        cEnumerator_pic_31__38_InstructionList enumerator_6568 (var_instructionList_6064, kENUMERATION_UP) ;
        while (enumerator_6568.hasCurrentObject ()) {
          callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6568.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6405, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
          enumerator_6568.gotoNextObject () ;
        }
        var_inlineDone_5632 = GALGAS_bool (true) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    var_inlineDone_5632 = GALGAS_bool (false) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_inlineDone_5632.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_12 = object ;
      ioArgument_ioInstructionList.addAssign_operation (temp_12  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JSR_performInlining) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_performInlining, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                               GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 213)) ;
  cEnumerator_pic_31__38_InstructionList enumerator_7334 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_7334.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_7334.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_7334.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                              GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                              GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7894 = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 233)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_8012 (ioArgument_ioInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_8012.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8241 ;
    {
    routine_performInlineFromInstructionList (enumerator_8012.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_8241, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7894.addAssign_operation (enumerator_8012.current_mInterruptName (HERE), enumerator_8012.current_mFastReturn (HERE), var_instructionList_8241, enumerator_8012.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_8012.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7894 ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_8483 = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 250)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8638 (ioArgument_ioRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_8638.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8865 ;
    {
    routine_performInlineFromInstructionList (enumerator_8638.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8865, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_8483.addAssign_operation (enumerator_8638.current_mRoutineName (HERE), enumerator_8638.current_mRequiredBank (HERE), enumerator_8638.current_mReturnedBank (HERE), enumerator_8638.current_mPreservesBank (HERE), enumerator_8638.current_mIsNoReturn (HERE), var_instructionList_8865, enumerator_8638.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8638.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_8483 ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayBlockList (const GALGAS_string constinArgument_inTitle,
                               GALGAS_string & ioArgument_ioListFileContents,
                               const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1393 (constinArgument_inGeneratedBlockList, kENUMERATION_UP) ;
  GALGAS_uint index_1385 ((uint32_t) 0) ;
  while (enumerator_1393.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1465 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, index_1385.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_1465 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1385.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_1465 = GALGAS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1393.current_mBlock (HERE), var_nextBlockLabel_1465, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1393.gotoNextObject () ;
    index_1385.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand temp_1 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 155)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6707 ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_1 = object ;
  GALGAS_bitSliceTable joker_6713 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, temp_1.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 178)), var_IPICregisterDescription_6707, joker_6713, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 173)) ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_3 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_4 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), var_IPICregisterDescription_6707, temp_4.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 183)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7645 ;
  const GALGAS_pic_31__38_Instruction_5F_FA temp_0 = object ;
  GALGAS_bitSliceTable joker_7651 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_7645, joker_7651, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 203)) ;
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7726 ;
  const GALGAS_pic_31__38_Instruction_5F_FA temp_1 = object ;
  switch (temp_1.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_7726 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 215)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_7726 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 216)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_7726 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 217)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_7726 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 218)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_7726 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 219)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)), GALGAS_string ("*** INTERNAL ERROR ***"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)) ;
      var_code_7726.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_pic_31__38_Instruction_5F_FA temp_3 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_3.readProperty_mInstructionLocation (), var_code_7726, var_IPICregisterDescription_7645  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 223)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_9049 ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) temp_0.readProperty_mSourceRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_sourceIPICregisterDescription_9049, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 241)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9319 ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_1 = object ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) temp_1.readProperty_mDestinationRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_destinationIPICregisterDescription_9319, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 248)) ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_2 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_2.readProperty_mInstructionLocation (), var_sourceIPICregisterDescription_9049, var_destinationIPICregisterDescription_9319  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 255)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_10207 ;
  GALGAS_bitSliceTable var_bitSliceTable_10245 ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_10207, var_bitSliceTable_10245, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 273)) ;
  GALGAS_uint var_bitNumber_10409 ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10245, var_bitNumber_10409, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 283)) ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_2 = object ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_3 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_10207, var_bitNumber_10409  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 290)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_sint_36__34_ var_result_11142 ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11142, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 309)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_11142.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_11142.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_11142.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)).add_operation (GALGAS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_4 = object ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_5 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_11142.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 315)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_sint_36__34_ var_result_12080 ;
  const GALGAS_pic_31__38_Instruction_5F_fnop temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12080, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 333)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_12080.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_12080.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_fnop temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_12080.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_fnop temp_4 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (temp_4.readProperty_mInstructionLocation (), var_result_12080.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 341))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 339)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_LFSR temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFSRindex ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_2 = object ;
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFSRindex ().readProperty_location (), GALGAS_string ("the LFSR register idx (").add_operation (temp_3.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).add_operation (GALGAS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)) ;
    }
  }
  GALGAS_sint_36__34_ var_result_13122 ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_5 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_5.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13122, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsStrictSup, var_result_13122.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_13122.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_13122.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_9 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_10 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mFSRindex (), var_result_13122.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 368))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 365)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR analyzeSimpleInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
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
  GALGAS_bool var_isNoReturn_14015 ;
  GALGAS_uint var_requiredBank_14039 ;
  GALGAS_uint var_returnedBank_14063 ;
  GALGAS_bool var_preservesBank_14088 ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_0 = object ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_14015, var_requiredBank_14039, var_returnedBank_14063, var_preservesBank_14088, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_14039.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_14039.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_2 = object ;
      GALGAS_string var_errorMessage_14191 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (var_requiredBank_14039.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)) ;
      var_errorMessage_14191.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 387)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 388)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_14191.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_14191.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_14191, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 393)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_14015.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_14088.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 398)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_14063 ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = constinArgument_inShouldPreserveBSR.boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_pic_31__38_Instruction_5F_JSR temp_11 = object ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("the routine call should preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 401)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_13 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_14 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_15 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (temp_13.readProperty_mInstructionLocation (), temp_14.readProperty_mTargetLabel (), temp_15.readProperty_mKind ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 405)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_checkbank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_checkbank temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mBankIndex ().objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_checkbank temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 454)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 455)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_Instruction_5F_checkbank temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_checkbank temp_8 = object ;
        test_7 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_Instruction_5F_checkbank temp_9 = object ;
          const GALGAS_pic_31__38_Instruction_5F_checkbank temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_checkbank temp_12 = object ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_checkbank_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_checknobank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_checknobank temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 484)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_checknobank_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18PiccoloSimpleInstruction analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  GALGAS_ipic_31__38_SequentialInstruction var_instruction_18822 ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction temp_0 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_18822, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 506)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction_18822, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction.mSlotID,
                                extensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_PiccoloSimpleInstruction_analyze (defineExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER analyze'
//
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
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = object ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 540)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 543)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_19849 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_4 = object ;
  GALGAS_lstring var_loopLabel_19901 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_5 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 551)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_5.readProperty_mInstructionLocation (), var_loopLabel_19901, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 554))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 554)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 555)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 559)) ;
  ioArgument_ioBlockLabel = var_loopLabel_19901 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_6 = object ;
  routine_analyzeInstructionList (temp_6.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 561)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfInstructionList (), GALGAS_string ("\"forever\" instruction list execution is endless"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_10 = object ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 584)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_10.readProperty_mInstructionLocation (), var_loopLabel_19901, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 587))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 587)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 588)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_19849)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfInstructionList (), GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 594)) ;
    }
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 597)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel analyze'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_nobanksel temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 619)) ;
    }
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 621)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank analyze'
//
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
  GALGAS_registerExpression var_BSRregister_23180 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 648))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23515 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) var_BSRregister_23180.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_BSR_5F_IPICregisterDescription_23515, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 650)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23809 ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_save_5F_IPICregisterDescription_23809, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 658)) ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_1.readProperty_mInstructionLocation (), var_BSR_5F_IPICregisterDescription_23515, var_save_5F_IPICregisterDescription_23809  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 671)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)) ;
  GALGAS_uint var_finalBank_24140 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = object ;
  routine_analyzeInstructionList (temp_2.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_24140, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 675)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_savebank temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfSaveBankInstruction (), GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 694)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_6 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (temp_6.readProperty_mInstructionLocation (), var_save_5F_IPICregisterDescription_23809, var_BSR_5F_IPICregisterDescription_23515  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 702)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_savebank_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique analyze'
//
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
  GALGAS_sint_36__34_ var_lowerBound_25745 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25745, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 725)) ;
  GALGAS_sint_36__34_ var_upperBound_25855 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_1 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25855, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 726)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_lowerBound_25745.objectCompare (var_upperBound_25855)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("lower bound (").add_operation (var_lowerBound_25745.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (var_upperBound_25855.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_upperBound_25855.substract_operation (var_lowerBound_25745, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("repeat count (").add_operation (var_upperBound_25855.substract_operation (var_lowerBound_25745, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_26296 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_26334 = constinArgument_inConstantMap ;
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_8 = object ;
  var_tempConstantMap_26334.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_25745, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 736)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_9 = object ;
  routine_analyzeInstructionList (temp_9.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_26334, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_26296, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 737)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 756)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_finalBank_26296.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list should not modify bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 759)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_27152 = var_lowerBound_25745.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
  if (var_upperBound_25855.substract_operation (var_lowerBound_25745, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).isValid ()) {
    uint32_t variant_27176 = var_upperBound_25855.substract_operation (var_lowerBound_25745, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).uintValue () ;
    bool loop_27176 = true ;
    while (loop_27176) {
      GALGAS_bool test_16 = GALGAS_bool (kIsInfOrEqual, var_idx_27152.objectCompare (var_upperBound_25855)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_27176 = test_16.isValid () ;
      if (loop_27176) {
        loop_27176 = test_16.boolValue () ;
      }
      if (loop_27176 && (0 == variant_27176)) {
        loop_27176 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)) ;
      }
      if (loop_27176) {
        variant_27176 -- ;
        GALGAS_constantMap var_constantMap_27289 = constinArgument_inConstantMap ;
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_17 = object ;
        var_constantMap_27289.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_27152, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
        }
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_18 = object ;
        routine_analyzeInstructionList (temp_18.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_27289, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 766)) ;
        }
        var_idx_27152.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 784)) ;
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
//
//Overriding extension method '@pic18Instruction_banksel analyze'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 807)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_Instruction_5F_banksel temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBankIndex ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("selected bank idx should be lower or equal to 15"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 811)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_8 = object ;
      test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_9 = object ;
        ioArgument_ioCurrentBank = temp_9.readProperty_mBankIndex ().readProperty_uint () ;
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_10 = object ;
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_11 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mBankIndex ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_13 = object ;
        test_12 = temp_13.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_pic_31__38_Instruction_5F_banksel temp_14 = object ;
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (temp_14.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)) ;
        }
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
//
//Overriding extension method '@pic18Instruction_banksel_register analyze'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 840)) ;
    }
  }
  GALGAS_uint var_registerAddress_30275 ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_3 = object ;
  callExtensionMethod_getRegisterAddress ((const cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_30275, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 842)) ;
  GALGAS_uint var_newBank_30388 = var_registerAddress_30275.right_shift_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_30388)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioCurrentBank = var_newBank_30388 ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_5 = object ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_6 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (temp_5.readProperty_mInstructionLocation (), GALGAS_luint::constructor_new (var_newBank_30388, temp_6.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 855))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 857)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)) ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_8 = object ;
      test_7 = temp_8.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (temp_9.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank_30388.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)) ;
      }
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
//
//Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'
//
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
  const GALGAS_pic_31__38_Instruction_5F_TBLRD temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD temp_1 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 877)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'
//
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
  const GALGAS_pic_31__38_Instruction_5F_TBLWT temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_TBLWT temp_1 = object ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 895)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP analyze'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_MNOP temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_MNOP temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 920)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_MNOP temp_4 = object ;
  const GALGAS_pic_31__38_Instruction_5F_MNOP temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 927)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_MNOP_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA analyze'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 951)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_4 = object ;
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_5 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 958)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR analyze'
//
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
  GALGAS_sint_36__34_ var_result_34910 ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34910, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_result_34910.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_34910.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_34910.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)) ;
    }
  }
  GALGAS_uint var_address_35141 = var_result_34910.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985)) ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_4 = object ;
  GALGAS_registerExpression var_TBLPTRU_35187 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 988)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_35558 ;
  GALGAS_bitSliceTable joker_35564 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_35187.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35558, joker_35564, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)) ;
  GALGAS_uint var_upper_35609 = var_address_35141.right_shift_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsEqual, var_upper_35609.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_6 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_6.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1006)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1009)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsEqual, var_upper_35609.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_8 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_8.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_9 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_9.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1022)), var_upper_35609  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_10 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_10.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1029)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_11 = object ;
  GALGAS_registerExpression var_TBLPTRH_36599 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_11.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1037)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1039))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1036)) ;
  GALGAS_bitSliceTable joker_36932 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_36599.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35558, joker_36932, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1041)) ;
  GALGAS_uint var_high_36976 = var_address_35141.right_shift_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_high_36976.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_13 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_13.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
    }
  }
  if (kBoolFalse == test_12) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsEqual, var_high_36976.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_15 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_15.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)) ;
      }
    }
    if (kBoolFalse == test_14) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_16 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_16.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071)), var_high_36976  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_17 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_18 = object ;
  GALGAS_registerExpression var_TBLPTRL_37970 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1085)) ;
  GALGAS_bitSliceTable joker_38302 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_37970.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35558, joker_38302, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090)) ;
  GALGAS_uint var_low_38345 = var_address_35141.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsEqual, var_low_38345.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_20 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_20.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1104)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1107)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsEqual, var_low_38345.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_22 = object ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1112)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1115)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)) ;
      }
    }
    if (kBoolFalse == test_21) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_23 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (temp_23.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1120)), var_low_38345  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_24 = object ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_24.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1127)), var_outIPICregisterDescription_35558  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)) ;
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
//
//Overriding extension method '@pic18Instruction_LDATA16PTR analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * object = (const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
  GALGAS_uintlist var_data_40049 ;
  GALGAS_bool var_isData_38__40062 ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_0 = object ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_40049, var_isData_38__40062, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1154)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__40062.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GALGAS_string ("this data is a byte array; use ldata8ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_5 = object ;
    test_4 = GALGAS_bool (kIsSupOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_40049.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GALGAS_string ("index should be < ").add_operation (var_data_40049.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_8 = object ;
  GALGAS_registerExpression var_TBLPTRU_40322 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1163)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_40694 ;
  GALGAS_bitSliceTable joker_40700 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_40322.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40694, joker_40700, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1168)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_9 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_10 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1181)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1184)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_12 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_12.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1188)), var_outIPICregisterDescription_40694  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1191)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_13 = object ;
  GALGAS_registerExpression var_TBLPTRH_41152 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)) ;
  GALGAS_bitSliceTable joker_41484 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_41152.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40694, joker_41484, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_14 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_15 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_16 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_17 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)), var_outIPICregisterDescription_40694  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1222)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_18 = object ;
  GALGAS_registerExpression var_TBLPTRL_41934 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1228))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1225)) ;
  GALGAS_bitSliceTable joker_42267 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_41934.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40694, joker_42267, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1230)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_19 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_20 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_21 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1243)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_22 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1250)), var_outIPICregisterDescription_40694  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1253)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
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
  const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * object = (const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
  GALGAS_uintlist var_data_43436 ;
  GALGAS_bool var_isData_38__43449 ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_0 = object ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_43436, var_isData_38__43449, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__43449.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GALGAS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_5 = object ;
    test_4 = GALGAS_bool (kIsSupOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_43436.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GALGAS_string ("index should be < ").add_operation (var_data_43436.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_8 = object ;
  GALGAS_registerExpression var_TBLPTRU_43733 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1286)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1288))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_44105 ;
  GALGAS_bitSliceTable joker_44111 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_43733.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44105, joker_44111, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1290)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_9 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_10 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_11 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1306)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_12 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_12.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)), var_outIPICregisterDescription_44105  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1313)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_13 = object ;
  GALGAS_registerExpression var_TBLPTRH_44559 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1316)) ;
  GALGAS_bitSliceTable joker_44891 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_44559.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44105, joker_44891, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_14 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_15 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_16 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_17 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)), var_outIPICregisterDescription_44105  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1344)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_18 = object ;
  GALGAS_registerExpression var_TBLPTRL_45337 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1350))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1347)) ;
  GALGAS_bitSliceTable joker_45670 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_45337.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44105, joker_45670, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1352)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_19 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_20 = object ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_21 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_22 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)), var_outIPICregisterDescription_44105  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1375)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMP analyze'
//
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
  GALGAS_bool var_isNoReturn_46875 ;
  GALGAS_uint var_requiredBank_46899 ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_0 = object ;
  GALGAS_uint joker_46901 ; // Joker input parameter
  GALGAS_bool joker_46904 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_46875, var_requiredBank_46899, joker_46901, joker_46904, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_46899.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_46899.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_2 = object ;
      GALGAS_string var_errorMessage_47008 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (var_requiredBank_46899.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)) ;
      var_errorMessage_47008.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1401)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1402)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_47008.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_47008.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_47008, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_46875.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1410)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_9 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_10 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1418)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1421)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMP_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_rcall analyze'
//
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
  GALGAS_bool var_someReturnsBank_48636 = GALGAS_bool (false) ;
  GALGAS_uint var_returnedBankSelection_48678 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = object ;
  cEnumerator_lstringlist enumerator_48708 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_48708.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_48793 ;
    GALGAS_uint var_requiredBank_48817 ;
    GALGAS_uint var_returnedBank_48841 ;
    GALGAS_bool var_preservesBank_48866 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_48708.current_mValue (HERE), var_isNoReturn_48793, var_requiredBank_48817, var_returnedBank_48841, var_preservesBank_48866, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1448)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_48817.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_48817.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_48973 = GALGAS_string ("the routine '").add_operation (enumerator_48708.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).add_operation (var_requiredBank_48817.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)) ;
        var_errorMessage_48973.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1452)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_48973.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_48973.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)) ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_48708.current_mValue (HERE).readProperty_location (), var_errorMessage_48973, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1457)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isNoReturn_48793.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_48708.current_mValue (HERE).readProperty_location (), GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_48708.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)) ;
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_48866.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_48708.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_48708.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).operator_and (var_preservesBank_48866.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).boolEnum () ;
        if (kBoolTrue == test_8) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_someReturnsBank_48636.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)).boolEnum () ;
            if (kBoolTrue == test_9) {
              var_returnedBankSelection_48678 = var_returnedBank_48841 ;
              var_someReturnsBank_48636 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsNotEqual, var_returnedBankSelection_48678.objectCompare (var_returnedBank_48841)).boolEnum () ;
              if (kBoolTrue == test_10) {
                GALGAS_string var_errorMessage_49887 = GALGAS_string ("the '").add_operation (enumerator_48708.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)) ;
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = GALGAS_bool (kIsEqual, var_returnedBank_48841.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)))).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    var_errorMessage_49887.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)) ;
                  }
                }
                if (kBoolFalse == test_11) {
                  var_errorMessage_49887.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank_48841.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)) ;
                }
                var_errorMessage_49887.plusAssign_operation(GALGAS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1475)) ;
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsEqual, var_returnedBankSelection_48678.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1476)))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    var_errorMessage_49887.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  var_errorMessage_49887.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_48678.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)) ;
                }
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_48708.current_mValue (HERE).readProperty_location (), var_errorMessage_49887, fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)) ;
              }
            }
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).operator_and (var_preservesBank_48866 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).boolEnum () ;
          if (kBoolTrue == test_14) {
          }
        }
      }
    }
    enumerator_48708.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_48678 ;
  GALGAS_sint_36__34_ var_size_50633 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_15 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_15.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_50633, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsStrictInf, var_size_50633.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_17 = object ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_50633.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)) ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsStrictSup, var_size_50633.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
      if (kBoolTrue == test_19) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_20 = object ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_50633.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)) ;
      }
    }
    if (kBoolFalse == test_19) {
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_23 = object ;
        test_22 = GALGAS_bool (kIsNotEqual, var_size_50633.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)).objectCompare (temp_23.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_24 = object ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_25 = object ;
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GALGAS_string ("the routine name list length (").add_operation (temp_25.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (var_size_50633.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), fixItArray26  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)) ;
        }
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList_51194 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_27 = object ;
  cEnumerator_lstringlist enumerator_51254 (temp_27.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_51254.hasCurrentObject ()) {
    var_targetInstructionList_51194.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (enumerator_51254.current_mValue (HERE).readProperty_location (), enumerator_51254.current_mValue (HERE), GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)) ;
    enumerator_51254.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_28 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_29 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (temp_28.readProperty_mInstructionLocation (), var_targetInstructionList_51194, temp_29.readProperty_mUsesRelativeCall ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1509)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_goto analyze'
//
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
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = object ;
  cEnumerator_lstringlist enumerator_52323 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_52323.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_52408 ;
    GALGAS_uint var_requiredBank_52432 ;
    GALGAS_uint joker_52434 ; // Joker input parameter
    GALGAS_bool joker_52437 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_52323.current_mValue (HERE), var_isNoReturn_52408, var_requiredBank_52432, joker_52434, joker_52437, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1533)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_52432.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_52432.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_52545 = GALGAS_string ("the routine '").add_operation (enumerator_52323.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).add_operation (var_requiredBank_52432.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)) ;
        var_errorMessage_52545.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1537)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_52545.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_52545.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)) ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_52323.current_mValue (HERE).readProperty_location (), var_errorMessage_52545, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_52408.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_52323.current_mValue (HERE).readProperty_location (), GALGAS_string ("for being named in a computed goto, the '").add_operation (enumerator_52323.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)).add_operation (GALGAS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)) ;
      }
    }
    enumerator_52323.gotoNextObject () ;
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
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept computed goto instruction"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1552)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_53417 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_8 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_8.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_53417, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsStrictInf, var_size_53417.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_53417.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)) ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsStrictSup, var_size_53417.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_13 = object ;
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_53417.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)) ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_16 = object ;
        test_15 = GALGAS_bool (kIsNotEqual, var_size_53417.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)).objectCompare (temp_16.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_17 = object ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_18 = object ;
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GALGAS_string ("the routine name list length (").add_operation (temp_18.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (var_size_53417.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_20 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_21 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_22 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1565)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (temp_20.readProperty_mInstructionLocation (), temp_21.readProperty_mTargetLabels (), temp_22.readProperty_mUsesRelativeCall ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1568)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1572)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1564))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1564)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1575)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1577)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_bra analyze'
//
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
  GALGAS_bool var_allPreserveBankSetting_55087 = GALGAS_bool (true) ;
  GALGAS_bool var_allReturnBank_55120 = GALGAS_bool (true) ;
  GALGAS_uint var_returnedBankValue_55151 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1601)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = object ;
  cEnumerator_lstringlist enumerator_55178 (temp_0.readProperty_mTargetLabels (), kENUMERATION_UP) ;
  while (enumerator_55178.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_55263 ;
    GALGAS_uint var_requiredBank_55287 ;
    GALGAS_uint var_returnedBank_55311 ;
    GALGAS_bool var_preservesBank_55336 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_55178.current_mValue (HERE), var_isNoReturn_55263, var_requiredBank_55287, var_returnedBank_55311, var_preservesBank_55336, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1603)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_55287.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_55287.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_55472 = GALGAS_string ("the routine '").add_operation (enumerator_55178.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).add_operation (var_requiredBank_55287.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)) ;
        var_errorMessage_55472.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_55472.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_55472.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)) ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_55178.current_mValue (HERE).readProperty_location (), var_errorMessage_55472, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1613)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_preservesBank_55336.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_allReturnBank_55120 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, var_returnedBankValue_55151.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)))).operator_and (GALGAS_bool (kIsNotEqual, var_returnedBankValue_55151.objectCompare (var_returnedBank_55311)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_55178.current_mValue (HERE).readProperty_location (), GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_55311.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (var_returnedBankValue_55151.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)) ;
        }
      }
      if (kBoolFalse == test_5) {
        var_allPreserveBankSetting_55087 = GALGAS_bool (false) ;
        var_returnedBankValue_55151 = var_returnedBank_55311 ;
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_55263.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_55178.current_mValue (HERE).readProperty_location (), GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_55178.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)) ;
      }
    }
    enumerator_55178.gotoNextObject () ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_allReturnBank_55120.operator_and (var_allPreserveBankSetting_55087.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBankValue_55151 ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_allReturnBank_55120.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)).operator_and (var_allPreserveBankSetting_55087.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_11 = object ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_55087.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("invoked routine(s) do(es) not preserve bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)) ;
    }
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
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_16 = object ;
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept computed bra instruction"), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1643)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_57280 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_18 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_18.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_57280, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1646)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsStrictInf, var_size_57280.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_57280.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GALGAS_bool (kIsStrictSup, var_size_57280.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_23 = object ;
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_57280.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)) ;
      }
    }
    if (kBoolFalse == test_22) {
      enumGalgasBool test_25 = kBoolTrue ;
      if (kBoolTrue == test_25) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_26 = object ;
        test_25 = GALGAS_bool (kIsNotEqual, var_size_57280.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)).objectCompare (temp_26.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)))).boolEnum () ;
        if (kBoolTrue == test_25) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_27 = object ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_28 = object ;
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mInstructionLocation (), GALGAS_string ("the routine name list length (").add_operation (temp_28.readProperty_mTargetLabels ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (var_size_57280.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), fixItArray29  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_30 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_31 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_32 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1656)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mTargetLabels (), temp_32.readProperty_mUsesRelativeCall ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1659)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1663)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1655))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1655)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1666)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1668)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_retlw analyze'
//
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
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_0 = object ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1692)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept computed retlw instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1694)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_59333 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_4 = object ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) temp_4.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_59333, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1697)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsStrictInf, var_size_59333.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_59333.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_size_59333.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_59333.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_12 = object ;
        test_11 = GALGAS_bool (kIsNotEqual, var_size_59333.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)).objectCompare (temp_12.readProperty_mImmediateExpressionList ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_13 = object ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_14 = object ;
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("the constant list length (").add_operation (temp_14.readProperty_mImmediateExpressionList ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (var_size_59333.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)) ;
        }
      }
    }
  }
  GALGAS_uintlist var_literalValues_59907 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1706)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_16 = object ;
  cEnumerator_immediatExpressionList enumerator_59951 (temp_16.readProperty_mImmediateExpressionList (), kENUMERATION_UP) ;
  GALGAS_uint index_59936 ((uint32_t) 0) ;
  while (enumerator_59951.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v_60063 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_59951.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_60063, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (kIsStrictSup, var_v_60063.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_v_60063.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_18 = object ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("immediate value with idx ").add_operation (index_59936.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (var_v_60063.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)) ;
      }
    }
    var_literalValues_59907.addAssign_operation (var_v_60063.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)) ;
    enumerator_59951.gotoNextObject () ;
    index_59936.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1707)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_20 = object ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_21 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1716)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (temp_20.readProperty_mInstructionLocation (), var_literalValues_59907, temp_21.readProperty_mUsesRelativeCall ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1719)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1723)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1715))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1715)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1726)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1728)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMPCC analyze'
//
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
  GALGAS_bool var_isNoReturn_61508 ;
  GALGAS_uint var_requiredBank_61532 ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_0 = object ;
  GALGAS_uint joker_61534 ; // Joker input parameter
  GALGAS_bool joker_61537 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_61508, var_requiredBank_61532, joker_61534, joker_61537, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_requiredBank_61532.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_61532.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_2 = object ;
      GALGAS_string var_errorMessage_61641 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).add_operation (var_requiredBank_61532.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)) ;
      var_errorMessage_61641.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1753)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_61641.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_61641.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_61641, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1758)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_61508.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1760)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1761)) ;
    }
  }
  GALGAS_conditionalBranchMode var_mode_62167 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_10 = object ;
    test_9 = temp_10.readProperty_mIsBcc ().boolEnum () ;
    if (kBoolTrue == test_9) {
      var_mode_62167 = GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1766)) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_mode_62167 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1768)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_11 = object ;
  GALGAS_lstring var_label_30__62335 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)), temp_11.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)) ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_12 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_13 = object ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_14 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1775)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mConditionalBranch (), temp_14.readProperty_mTargetLabel (), var_mode_62167, var_label_30__62335, var_mode_62167  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1778)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1785)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1774))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1774)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1788)) ;
  ioArgument_ioBlockLabel = var_label_30__62335 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest analyze'
//
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_63854 ;
  GALGAS_bitSliceTable var_bitSliceTable_63892 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_63854, var_bitSliceTable_63892, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1812)) ;
  GALGAS_uint var_bitNumber_64056 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_63892, var_bitNumber_64056, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1822)) ;
  GALGAS_uint var_currentBank_64118 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_64413 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_2 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_64118, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_64413, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1831)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_currentBank_64118.objectCompare (var_currentBank_64118)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1844)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_6 = object ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_7 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_64413, temp_7.readProperty_mSkipIfSet (), var_IPICregisterDescription_63854, var_bitNumber_64056  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1847)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1854)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1847)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON analyze'
//
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
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_65599 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = object ;
  switch (temp_0.readProperty_mOpCode ().enumValue ()) {
  case GALGAS_if_5F_semi_5F_colon_5F_op::kNotBuilt:
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSEQ:
    {
      var_baseCode_65599 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1878)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode_65599 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1879)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode_65599 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1880)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode_65599 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1881)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_66201 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_1 = object ;
  GALGAS_bitSliceTable joker_66207 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_1.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_66201, joker_66207, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1883)) ;
  GALGAS_uint var_currentBank_66292 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_66587 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_2 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_66292, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_66587, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1895)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_currentBank_66292.objectCompare (var_currentBank_66292)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_6 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_66587, var_baseCode_65599, var_IPICregisterDescription_66201  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1911)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1917)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1911)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec analyze'
//
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
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_67739 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_1 = object ;
    const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_2 = object ;
    test_0 = temp_1.readProperty_mIncrement ().operator_and (temp_2.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1941)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_67739 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1942)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_4 = object ;
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_5 = object ;
      test_3 = temp_4.readProperty_mIncrement ().operator_and (temp_5.readProperty_mSkipIfZero ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_baseCode_67739 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_7 = object ;
        const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_8 = object ;
        test_6 = temp_7.readProperty_mIncrement ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)).operator_and (temp_8.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_baseCode_67739 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)) ;
        }
      }
      if (kBoolFalse == test_6) {
        var_baseCode_67739 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1948)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_68365 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_9 = object ;
  GALGAS_bitSliceTable joker_68371 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_9.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_68365, joker_68371, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1951)) ;
  GALGAS_uint var_currentBank_68456 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_68751 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_10 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_10.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_68456, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_68751, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1963)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_currentBank_68456.objectCompare (var_currentBank_68456)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1976)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_14 = object ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_15 = object ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (temp_14.readProperty_mInstructionLocation (), var_embeddedInstruction_68751, var_baseCode_67739, var_IPICregisterDescription_68365, temp_15.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1979)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1979)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if analyze'
//
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
  GALGAS_uint var_elseBranchFinalBank_69884 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_69932 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = object ;
  GALGAS_lstring var_conditionTrueLabel_69985 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)) ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = object ;
  GALGAS_lstring var_conditionFalseLabel_70115 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), temp_1.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2015)) ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = object ;
  GALGAS_lstring var_exitLabel_70235 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)), temp_2.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_70666 ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = object ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) temp_3.readProperty_mIfCondition ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_69985, var_conditionFalseLabel_70115, ioArgument_ioUsedRegisters, var_testTerminator_70666, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2019)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2033)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_70666, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2037)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2032))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2032)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2040)) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel_69985 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = object ;
  routine_analyzeInstructionList (temp_4.readProperty_mThenInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank_69932, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2043)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_71457 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_thenContinuesInSequence_71457.boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_6 = object ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2064)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_6.readProperty_mInstructionLocation (), var_exitLabel_70235, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2063))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2063)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2072)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_70115 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_7 = object ;
  routine_analyzeInstructionList (temp_7.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank_69884, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)) ;
  }
  GALGAS_bool var_elseContinuesInSequence_72368 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_elseContinuesInSequence_72368.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_9 = object ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2096)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_9.readProperty_mInstructionLocation (), var_exitLabel_70235, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2099))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2099)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2100)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2095))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2095)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2104)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_69884.objectCompare (var_thenBranchFinalBank_69932)).boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_69884 ;
    }
  }
  if (kBoolFalse == test_10) {
    const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_11 = object ;
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (temp_11.readProperty_mEndOfElsePartLocation (), GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2109)) ;
    var_elseBranchFinalBank_69884 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2110)) ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_71457.operator_or (var_elseContinuesInSequence_72368 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2113)).boolEnum () ;
    if (kBoolTrue == test_13) {
      ioArgument_ioBlockLabel = var_exitLabel_70235 ;
    }
  }
  if (kBoolFalse == test_13) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)) ;
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
//
//Overriding extension method '@pic18Instruction_macro analyze'
//
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
  GALGAS_lstringlist var_constantNameList_73906 ;
  GALGAS_pic_31__38_InstructionList var_instructionList_73927 ;
  const GALGAS_pic_31__38_Instruction_5F_macro temp_0 = object ;
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), var_constantNameList_73906, var_instructionList_73927, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2139)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_pic_31__38_Instruction_5F_macro temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)).objectCompare (var_constantNameList_73906.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_macro temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), var_constantNameList_73906.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)).add_operation (GALGAS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)) ;
    }
  }
  GALGAS_constantMap var_constantMap_74137 = constinArgument_inConstantMap ;
  const GALGAS_pic_31__38_Instruction_5F_macro temp_5 = object ;
  cEnumerator_immediatExpressionList enumerator_74174 (temp_5.readProperty_mExpressionList (), kENUMERATION_UP) ;
  cEnumerator_lstringlist enumerator_74214 (var_constantNameList_73906, kENUMERATION_UP) ;
  while (enumerator_74174.hasCurrentObject () && enumerator_74214.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_expressionValue_74319 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_74174.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_74137, var_expressionValue_74319, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)) ;
    {
    var_constantMap_74137.setter_insertKey (enumerator_74214.current_mValue (HERE), var_expressionValue_74319, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)) ;
    }
    enumerator_74174.gotoNextObject () ;
    enumerator_74214.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList (var_instructionList_73927, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_74137, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2150)) ;
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
//
//Overriding extension method '@pic18Instruction_do_while analyze'
//
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
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = object ;
  GALGAS_lstring var_startLabel_75503 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2189)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2189)), temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2189)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2190)) ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2193)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_1.readProperty_mInstructionLocation (), var_startLabel_75503, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2196)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2197)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2192))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2192)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2200)) ;
  ioArgument_ioBlockLabel = var_startLabel_75503 ;
  GALGAS_uint var_repeatedBranchFinalBank_76064 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_2 = object ;
  routine_analyzeInstructionList (temp_2.readProperty_mRepeatedInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank_76064, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2204)) ;
  }
  GALGAS_bool var_repeatedInstructionsContinuesInSequence_76540 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank_76064)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfRepeatedInstructionList (), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2224)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_repeatedInstructionsContinuesInSequence_76540.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2226)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfRepeatedInstructionList (), GALGAS_string ("This branch makes the next code unreachable"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2227)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_9 = object ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_76955 (temp_9.readProperty_mWhilePartList (), kENUMERATION_UP) ;
  while (enumerator_76955.hasCurrentObject ()) {
    const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_10 = object ;
    GALGAS_lstring var_conditionTrueLabel_77024 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)), temp_10.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2233)) ;
    const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_11 = object ;
    GALGAS_lstring var_conditionFalseLabel_77157 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), temp_11.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2235)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_77606 ;
    callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) enumerator_76955.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_77024, var_conditionFalseLabel_77157, ioArgument_ioUsedRegisters, var_testTerminator_77606, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2237)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2250)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_77606, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2254)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2249))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2249)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2257)) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_77024 ;
    GALGAS_uint var_branchFinalBank_77946 = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList (enumerator_76955.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_77946, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2260)) ;
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank_77946)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_76955.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_76955.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch makes the next code unreachable"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2282)) ;
      }
    }
    const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_16 = object ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2285)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_16.readProperty_mInstructionLocation (), var_startLabel_75503, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2292)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_77157 ;
    enumerator_76955.gotoNextObject () ;
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
//
//Overriding extension method '@exitBlockTerminationForBlockInstruction addVisitedBlocks'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GALGAS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2342)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_otherInitialBlockSetting_80929 ;
      GALGAS_string var_otherBlockName_80957 ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2343)), var_otherInitialBlockSetting_80929, var_otherBlockName_80957, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2343)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting_80929.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_exitBlockTerminationForBlockInstruction temp_2 = object ;
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string ("no bank") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)) ;
          }
          GALGAS_string temp_5 ;
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting_80929.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            temp_5 = GALGAS_string ("no bank") ;
          }else if (kBoolFalse == test_6) {
            temp_5 = var_otherInitialBlockSetting_80929.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)) ;
          }
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)).add_operation (var_otherBlockName_80957, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (GALGAS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)) ;
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
//
//Overriding extension method '@gotoTerminationForBlockInstruction addVisitedBlocks'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_gotoTerminationForBlockInstruction temp_1 = object ;
    test_0 = ioArgument_ioVisitedBlockSet.getter_hasKey (temp_1.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2366)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2366)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_gotoTerminationForBlockInstruction temp_2 = object ;
      ioArgument_ioVisitedBlockSet.addAssign_operation (temp_2.readProperty_mNextBlock ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)) ;
      ioArgument_ioContinueAccessibilityExploration = GALGAS_bool (true) ;
      const GALGAS_gotoTerminationForBlockInstruction temp_3 = object ;
      GALGAS_pic_31__38_InstructionList joker_82220 ; // Joker input parameter
      GALGAS_abstractBlockTerminationForBlockInstruction joker_82223 ; // Joker input parameter
      GALGAS_location joker_82226 ; // Joker input parameter
      constinArgument_inBlockMap.method_searchKey (temp_3.readProperty_mNextBlock (), joker_82220, joker_82223, joker_82226, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2369)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_gotoTerminationForBlockInstruction temp_5 = object ;
        test_4 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (temp_5.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2370)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_uint var_otherInitialBlockSetting_82405 ;
          GALGAS_string var_otherBlockName_82433 ;
          const GALGAS_gotoTerminationForBlockInstruction temp_6 = object ;
          ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (temp_6.readProperty_mNextBlock (), var_otherInitialBlockSetting_82405, var_otherBlockName_82433, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting_82405.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
            if (kBoolTrue == test_7) {
              const GALGAS_gotoTerminationForBlockInstruction temp_8 = object ;
              const GALGAS_gotoTerminationForBlockInstruction temp_9 = object ;
              GALGAS_string temp_10 ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GALGAS_string ("no bank") ;
              }else if (kBoolFalse == test_11) {
                temp_10 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)) ;
              }
              GALGAS_string temp_12 ;
              const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting_82405.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)))).boolEnum () ;
              if (kBoolTrue == test_13) {
                temp_12 = GALGAS_string ("no bank") ;
              }else if (kBoolFalse == test_13) {
                temp_12 = var_otherInitialBlockSetting_82405.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)) ;
              }
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mNextBlock ().readProperty_location (), GALGAS_string ("this block goes to '").add_operation (temp_9.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (GALGAS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)).add_operation (var_otherBlockName_82433, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (GALGAS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        {
        const GALGAS_gotoTerminationForBlockInstruction temp_15 = object ;
        ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (temp_15.readProperty_mNextBlock (), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2380)) ;
        }
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
//
//Overriding extension method '@testTerminationForBlockInstruction addVisitedBlocks'
//
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
  const GALGAS_testTerminationForBlockInstruction temp_0 = object ;
  callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) temp_0.readProperty_mTrueTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2395)) ;
  const GALGAS_testTerminationForBlockInstruction temp_1 = object ;
  callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) temp_1.readProperty_mFalseTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2404)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_testTerminationForBlockInstruction_addVisitedBlocks) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_testTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gotoTerminationForBlockInstruction generateBlock'
//
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
  const GALGAS_gotoTerminationForBlockInstruction temp_0 = object ;
  const GALGAS_gotoTerminationForBlockInstruction temp_1 = object ;
  const GALGAS_gotoTerminationForBlockInstruction temp_2 = object ;
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_0.readProperty_mNextBlock ().readProperty_location (), GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (temp_1.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2442)), temp_2.readProperty_mNextBlock ().readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2442)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2443))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2440)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gotoTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_gotoTerminationForBlockInstruction_generateBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_generateBlock (defineExtensionMethod_gotoTerminationForBlockInstruction_generateBlock, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@exitBlockTerminationForBlockInstruction generateBlock'
//
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
  const GALGAS_exitBlockTerminationForBlockInstruction temp_0 = object ;
  const GALGAS_exitBlockTerminationForBlockInstruction temp_1 = object ;
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_0.readProperty_mLocation (), GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2461)), temp_1.readProperty_mLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2461)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2462))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2459)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_exitBlockTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_exitBlockTerminationForBlockInstruction_generateBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_generateBlock (defineExtensionMethod_exitBlockTerminationForBlockInstruction_generateBlock, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testTerminationForBlockInstruction generateBlock'
//
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
  const GALGAS_testTerminationForBlockInstruction temp_0 = object ;
  GALGAS_lstring var_conditionTrueLabel_86311 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2479)) ;
  const GALGAS_testTerminationForBlockInstruction temp_1 = object ;
  GALGAS_lstring var_conditionFalseLabel_86430 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480)), temp_1.readProperty_mLocation ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2481)) ;
  const GALGAS_testTerminationForBlockInstruction temp_2 = object ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) temp_2.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_86311, var_conditionFalseLabel_86430, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2483)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_trueTerminator_87129 ;
  const GALGAS_testTerminationForBlockInstruction temp_3 = object ;
  callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) temp_3.readProperty_mTrueTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator_87129, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2496)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2508)), var_conditionTrueLabel_86311, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2510)), var_trueTerminator_87129, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2512)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2507))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2507)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_falseTerminator_87645 ;
  const GALGAS_testTerminationForBlockInstruction temp_4 = object ;
  callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) temp_4.readProperty_mFalseTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator_87645, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2516)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2528)), var_conditionFalseLabel_86430, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2530)), var_falseTerminator_87645, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2532)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2527))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2527)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_testTerminationForBlockInstruction_generateBlock) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_generateBlock (defineExtensionMethod_testTerminationForBlockInstruction_generateBlock, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block analyze'
//
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
  GALGAS_string var_labelForBlock_88542 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = object ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_1 = object ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_2 = object ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2561)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (temp_0.readProperty_mStartBlockName ().readProperty_location (), GALGAS_lstring::constructor_new (var_labelForBlock_88542.add_operation (temp_1.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2566)), temp_2.readProperty_mStartBlockName ().readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2566)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2564)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2568)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2560))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2560)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2571)) ;
  GALGAS_blockInstructionBlockMap var_blockMap_89120 = GALGAS_blockInstructionBlockMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2573)) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_3 = object ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_89242 (temp_3.readProperty_mBlockList (), kENUMERATION_UP) ;
  while (enumerator_89242.hasCurrentObject ()) {
    {
    var_blockMap_89120.setter_insertKey (enumerator_89242.current_mBlockName (HERE), enumerator_89242.current_mInstructionList (HERE), enumerator_89242.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_89242.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2575)) ;
    }
    enumerator_89242.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_4 = object ;
  GALGAS_pic_31__38_InstructionList joker_89461 ; // Joker input parameter
  GALGAS_abstractBlockTerminationForBlockInstruction joker_89464 ; // Joker input parameter
  GALGAS_location joker_89467 ; // Joker input parameter
  var_blockMap_89120.method_searchKey (temp_4.readProperty_mStartBlockName (), joker_89461, joker_89464, joker_89467, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2578)) ;
  GALGAS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap_89504 = GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2579)) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_block temp_5 = object ;
  var_blockInitialBankSelectionMap_89504.setter_insertKey (temp_5.readProperty_mStartBlockName (), ioArgument_ioCurrentBank, GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2580)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_6 = object ;
  GALGAS_stringset var_accessibleBlockSet_89689 = GALGAS_stringset::constructor_setWithString (temp_6.readProperty_mStartBlockName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2582)) ;
  GALGAS_stringset var_handledBlockSet_89768 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2583)) ;
  GALGAS_bool var_continueAccessibilityExploration_89836 = GALGAS_bool (true) ;
  GALGAS_bool var_continuesInSequence_89875 = GALGAS_bool (false) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_7 = object ;
  if (temp_7.readProperty_mBlockList ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).isValid ()) {
    uint32_t variant_89890 = temp_7.readProperty_mBlockList ().getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).uintValue () ;
    bool loop_89890 = true ;
    while (loop_89890) {
      loop_89890 = var_continueAccessibilityExploration_89836.isValid () ;
      if (loop_89890) {
        loop_89890 = var_continueAccessibilityExploration_89836.boolValue () ;
      }
      if (loop_89890 && (0 == variant_89890)) {
        loop_89890 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)) ;
      }
      if (loop_89890) {
        variant_89890 -- ;
        var_continueAccessibilityExploration_89836 = GALGAS_bool (false) ;
        cEnumerator_stringset enumerator_90073 (var_accessibleBlockSet_89689.substract_operation (var_handledBlockSet_89768, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2588)), kENUMERATION_UP) ;
        while (enumerator_90073.hasCurrentObject ()) {
          var_handledBlockSet_89768.addAssign_operation (enumerator_90073.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2589)) ;
          GALGAS_pic_31__38_InstructionList var_instructionList_90232 ;
          GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination_90307 ;
          GALGAS_location var_endOfBlock_90341 ;
          var_blockMap_89120.method_searchKey (enumerator_90073.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2591)), var_instructionList_90232, var_blockTermination_90307, var_endOfBlock_90341, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2590)) ;
          GALGAS_uint var_currentBank_90469 ;
          GALGAS_string joker_90471 ; // Joker input parameter
          var_blockInitialBankSelectionMap_89504.method_searchKey (enumerator_90073.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)), var_currentBank_90469, joker_90471, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)) ;
          ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock_88542.add_operation (enumerator_90073.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2598)), var_blockMap_89120.getter_locationForKey (enumerator_90073.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2598))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2598)) ;
          {
          routine_analyzeInstructionList (var_instructionList_90232, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank_90469, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2599)) ;
          }
          GALGAS_ipic_31__38_AbstractBlockTerminator var_terminator_91347 ;
          callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_90307.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank_90469, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock_88542, var_terminator_91347, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2617)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_endOfBlock_90341, GALGAS_string ("execution will not reach the end of the block, but endless block is not allowed"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2629)) ;
            }
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2632)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator_91347, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2636)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2631))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2631)) ;
          ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2639)) ;
          callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_90307.ptr (), var_accessibleBlockSet_89689, var_blockMap_89120, enumerator_90073.current (HERE), var_currentBank_90469, var_blockInitialBankSelectionMap_89504, var_continuesInSequence_89875, var_continueAccessibilityExploration_89836, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2641)) ;
          enumerator_90073.gotoNextObject () ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_10 = object ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_92055 (temp_10.readProperty_mBlockList (), kENUMERATION_UP) ;
  while (enumerator_92055.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_accessibleBlockSet_89689.getter_hasKey (enumerator_92055.current_mBlockName (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2646)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2646)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_Instruction_5F_block temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticWarning (enumerator_92055.current_mBlockName (HERE).readProperty_location (), GALGAS_string ("this block is not accessible from '").add_operation (temp_12.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)).add_operation (GALGAS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)) ;
      }
    }
    enumerator_92055.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_continuesInSequence_89875.boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_pic_31__38_Instruction_5F_block temp_15 = object ;
      ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock_88542.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2652)), temp_15.readProperty_mStartBlockName ().readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2652)) ;
      GALGAS_string joker_92457 ; // Joker input parameter
      var_blockInitialBankSelectionMap_89504.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2653)), ioArgument_ioCurrentBank, joker_92457, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2653)) ;
    }
  }
  if (kBoolFalse == test_14) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2655)) ;
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
//
//Overriding extension method '@pic18BccInStructuredCondition analyzeCondition'
//
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
  const GALGAS_pic_31__38_BccInStructuredCondition temp_0 = object ;
  const GALGAS_pic_31__38_BccInStructuredCondition temp_1 = object ;
  outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (temp_0.readProperty_mConditionLocation (), temp_1.readProperty_mCondition (), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2695)), constinArgument_inConditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2697))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2691)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition.mSlotID,
                                         extensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (defineExtensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonCondition analyzeCondition'
//
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_94676 ;
  const GALGAS_pic_31__38_RegisterComparisonCondition temp_0 = object ;
  GALGAS_bitSliceTable joker_94682 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_94676, joker_94682, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2713)) ;
  GALGAS_ipic_31__38_RegisterComparison var_ipicComparison_94779 ;
  GALGAS_bool var_complementaryBranch_94811 ;
  const GALGAS_pic_31__38_RegisterComparisonCondition temp_1 = object ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      var_ipicComparison_94779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2728)) ;
      var_complementaryBranch_94811 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      var_ipicComparison_94779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2731)) ;
      var_complementaryBranch_94811 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      var_ipicComparison_94779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2734)) ;
      var_complementaryBranch_94811 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      var_ipicComparison_94779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2737)) ;
      var_complementaryBranch_94811 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      var_ipicComparison_94779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2740)) ;
      var_complementaryBranch_94811 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      var_ipicComparison_94779 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2743)) ;
      var_complementaryBranch_94811 = GALGAS_bool (true) ;
    }
    break ;
  }
  const GALGAS_pic_31__38_RegisterComparisonCondition temp_2 = object ;
  GALGAS_location var_location_95610 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_complementaryBranch_94811.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location_95610, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_95610, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2751))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2751)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_95610, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2752))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2752)), var_IPICregisterDescription_94676, var_ipicComparison_94779  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2749)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location_95610, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_95610, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2758))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2758)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_95610, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2759))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2759)), var_IPICregisterDescription_94676, var_ipicComparison_94779  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2756)) ;
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
//
//Overriding extension method '@pic18IncDecRegisterInCondition analyzeCondition'
//
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_97162 ;
  const GALGAS_pic_31__38_IncDecRegisterInCondition temp_0 = object ;
  GALGAS_bitSliceTable joker_97168 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_97162, joker_97168, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2778)) ;
  const GALGAS_pic_31__38_IncDecRegisterInCondition temp_1 = object ;
  GALGAS_location var_location_97258 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_IncDecRegisterInCondition temp_3 = object ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_IncDecRegisterInCondition temp_4 = object ;
      const GALGAS_pic_31__38_IncDecRegisterInCondition temp_5 = object ;
      outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location_97258, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_97258, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2793))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2793)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_97258, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2794))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2794)), var_IPICregisterDescription_97162, temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2791)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_IncDecRegisterInCondition temp_6 = object ;
    const GALGAS_pic_31__38_IncDecRegisterInCondition temp_7 = object ;
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location_97258, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_97258, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2801))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2801)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_97258, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2802))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2802)), var_IPICregisterDescription_97162, temp_6.readProperty_mIncrement (), temp_7.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2799)) ;
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
//
//Overriding extension method '@pic18RegisterTestCondition analyzeCondition'
//
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_98862 ;
  const GALGAS_pic_31__38_RegisterTestCondition temp_0 = object ;
  GALGAS_bitSliceTable joker_98868 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_98862, joker_98868, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2822)) ;
  const GALGAS_pic_31__38_RegisterTestCondition temp_1 = object ;
  GALGAS_location var_location_98958 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_RegisterTestCondition temp_3 = object ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location_98958, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_98958, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2837))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2837)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_98958, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2838))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2838)), var_IPICregisterDescription_98862  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2835)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location_98958, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_98958, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2843))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2843)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_98958, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2844))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2844)), var_IPICregisterDescription_98862  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2841)) ;
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
//
//Overriding extension method '@pic18BitTestInStructuredCondition analyzeCondition'
//
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
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_100457 ;
  GALGAS_bitSliceTable var_bitSliceTable_100495 ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition temp_0 = object ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_100457, var_bitSliceTable_100495, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2862)) ;
  GALGAS_uint var_bitNumber_100659 ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition temp_1 = object ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_100495, var_bitNumber_100659, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2872)) ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition temp_2 = object ;
  GALGAS_location var_location_100726 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (var_location_100726, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_100726, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2883))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2883)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_100726, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2884))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2884)), var_IPICregisterDescription_100457, var_bitNumber_100659  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2881)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition.mSlotID,
                                         extensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (defineExtensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18NegateCondition analyzeCondition'
//
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
  const GALGAS_pic_31__38_NegateCondition temp_0 = object ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2903)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_NegateCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_NegateCondition.mSlotID,
                                         extensionMethod_pic_31__38_NegateCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_NegateCondition_analyzeCondition (defineExtensionMethod_pic_31__38_NegateCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18AndCondition analyzeCondition'
//
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
  GALGAS_lstring var_conditionTrueLabel_102464 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)), constinArgument_inConditionTrueLabel.readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2932)) ;
  const GALGAS_pic_31__38_AndCondition temp_0 = object ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_102464, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2934)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator_103225 ;
  const GALGAS_pic_31__38_AndCondition temp_1 = object ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator_103225, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2947)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2961)), var_conditionTrueLabel_102464, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2963)), var_secondTestBlockTerminator_103225, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2965)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2960))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2960)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_pic_31__38_AndCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_AndCondition.mSlotID,
                                         extensionMethod_pic_31__38_AndCondition_analyzeCondition) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_pic_31__38_AndCondition_analyzeCondition (defineExtensionMethod_pic_31__38_AndCondition_analyzeCondition, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
  cEnumerator_pic_31__38_InstructionList enumerator_104252 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_104252.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_104252.current_mInstruction (HERE).readProperty_mInstructionLocation (), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2995)) ;
        ioArgument_ioBlockLabel = GALGAS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2996)) ;
      }
    }
    callExtensionMethod_analyze ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_104252.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2998)) ;
    enumerator_104252.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze_data_sections'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_5F_data_5F_sections (const GALGAS_dataList constinArgument_inDataDefinitionList,
                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                         GALGAS_pic_31__38__5F_dataMap & outArgument_outDataMap,
                                                         GALGAS_constantMap & ioArgument_ioConstantMap,
                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDataMap.drop () ; // Release 'out' argument
  outArgument_outDataMap = GALGAS_pic_31__38__5F_dataMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3033)) ;
  cEnumerator_dataList enumerator_105540 (constinArgument_inDataDefinitionList, kENUMERATION_UP) ;
  const bool bool_0 = true ;
  if (enumerator_105540.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("DATA DECLARATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)) ;
    while (enumerator_105540.hasCurrentObject () && bool_0) {
      GALGAS_uintlist var_data_105856 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3040)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = enumerator_105540.current_mIsByteList (HERE).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsNotEqual, enumerator_105540.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3042)).operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3042)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (enumerator_105540.current_mDataName (HERE).readProperty_location (), GALGAS_string ("the data8 byte count should be even"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data8 '").add_operation (enumerator_105540.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (enumerator_105540.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (enumerator_105540.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)) ;
          {
          ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_105540.current_mDataName (HERE).readProperty_string ().add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)), enumerator_105540.current_mDataName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)), enumerator_105540.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)) ;
          }
          GALGAS_sint var_byte_106260 = GALGAS_sint ((int32_t) 0L) ;
          cEnumerator_immediatExpressionList enumerator_106301 (enumerator_105540.current_mValueList (HERE), kENUMERATION_UP) ;
          GALGAS_uint index_106275 ((uint32_t) 0) ;
          while (enumerator_106301.hasCurrentObject ()) {
            GALGAS_sint_36__34_ var_value_106401 ;
            callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_106301.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_106401, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3050)) ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsStrictInf, var_value_106401.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (enumerator_106301.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_106401.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsStrictSup, var_value_106401.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <C_FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_106301.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_106401.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)).add_operation (GALGAS_string (" (greater than 255"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GALGAS_bool (kIsEqual, index_106275.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3055)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    var_byte_106260 = var_value_106401.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056)) ;
                  }
                }
                if (kBoolFalse == test_8) {
                  var_data_105856.addAssign_operation (var_value_106401.left_shift_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)).operator_or (var_byte_106260.getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)) ;
                }
              }
            }
            enumerator_106301.gotoNextObject () ;
            index_106275.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3049)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data16 '").add_operation (enumerator_105540.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (enumerator_105540.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (enumerator_105540.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_105540.current_mDataName (HERE).readProperty_string ().add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)), enumerator_105540.current_mDataName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)), enumerator_105540.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)) ;
        }
        cEnumerator_immediatExpressionList enumerator_107067 (enumerator_105540.current_mValueList (HERE), kENUMERATION_UP) ;
        while (enumerator_107067.hasCurrentObject ()) {
          GALGAS_sint_36__34_ var_value_107162 ;
          callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_107067.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_107162, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3066)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsStrictInf, var_value_107162.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_107067.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_107162.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsStrictSup, var_value_107162.objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_107067.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_107162.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)).add_operation (GALGAS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)) ;
              }
            }
            if (kBoolFalse == test_11) {
              var_data_105856.addAssign_operation (var_value_107162.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3072))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3072)) ;
            }
          }
          enumerator_107067.gotoNextObject () ;
        }
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_105540.current_mDataName (HERE), var_data_105856, enumerator_105540.current_mIsByteList (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3076)) ;
      }
      enumerator_105540.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'build_ipic18_block_representation_list'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (const GALGAS_string constinArgument_inSourceFileName,
                                                                       const GALGAS_sint_36__34_ constinArgument_inROMSize,
                                                                       const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                       const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                                       const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForBootloaderImplementation,
                                                                       const GALGAS_luint constinArgument_inBootloaderReservedROMsize,
                                                                       const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation,
                                                                       const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                                       const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                       const GALGAS_declaredByteMap constinArgument_inDeclaredByteMap,
                                                                       const GALGAS_pic_31__38_RoutineDefinitionList constinArgument_inRoutineDefinitionList,
                                                                       const GALGAS_programKind constinArgument_inProgramKind,
                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                       const GALGAS_stringset constinArgument_inUsedRegisters,
                                                                       const GALGAS_dataList constinArgument_inDataList,
                                                                       const GALGAS_pic_31__38_InterruptDefinitionList constinArgument_inInterruptDefinitionList,
                                                                       const GALGAS_lstringlist constinArgument_inUnusedRegisterList,
                                                                       const GALGAS_ramBankTable constinArgument_inRamBank,
                                                                       const GALGAS_bool constinArgument_inHasHighInterrupt,
                                                                       const GALGAS_bool constinArgument_inHasLowInterrupt,
                                                                       const GALGAS_string constinArgument_inProcessorName,
                                                                       const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                                       const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                       const GALGAS_location constinArgument_inEndOfProgram,
                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap var_constantMap_108876 = constinArgument_inConstantMap ;
  GALGAS_stringset var_usedRegisters_108912 = constinArgument_inUsedRegisters ;
  GALGAS_routineMap var_routineMap_108999 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3113)) ;
  cEnumerator_routineDeclarationList enumerator_109098 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_109098.hasCurrentObject ()) {
    {
    var_routineMap_108999.setter_insertKey (enumerator_109098.current_mRoutineName (HERE), enumerator_109098.current_mIsNoReturn (HERE), enumerator_109098.current_mRequiredBank (HERE).readProperty_uint (), enumerator_109098.current_mReturnedBank (HERE).readProperty_uint (), enumerator_109098.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3115)) ;
    }
    enumerator_109098.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_109355 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_109355.hasCurrentObject ()) {
    {
    var_routineMap_108999.setter_insertKey (enumerator_109355.current_mRoutineName (HERE), enumerator_109355.current_mIsNoReturn (HERE), enumerator_109355.current_mRequiredBank (HERE).readProperty_uint (), enumerator_109355.current_mReturnedBank (HERE).readProperty_uint (), enumerator_109355.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3118)) ;
    }
    enumerator_109355.gotoNextObject () ;
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_109623 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_109623.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_109623.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3121)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_109623.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3121)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_109623.current_mRequiredBank (HERE).readProperty_location (), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3122)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_109623.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3124)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_109623.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3124)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_109623.current_mReturnedBank (HERE).readProperty_location (), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3125)) ;
      }
    }
    {
    var_routineMap_108999.setter_insertKey (enumerator_109623.current_mRoutineName (HERE), enumerator_109623.current_mIsNoReturn (HERE), enumerator_109623.current_mRequiredBank (HERE).readProperty_uint (), enumerator_109623.current_mReturnedBank (HERE).readProperty_uint (), enumerator_109623.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3127)) ;
    }
    enumerator_109623.gotoNextObject () ;
  }
  GALGAS_pic_31__38__5F_dataMap var_dataMap_111369 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_108876, ioArgument_ioListFileContents, var_dataMap_111369, var_constantMap_108876, var_usedRegisters_108912, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3150)) ;
  }
  {
  routine_print_5F_constant_5F_definition (var_constantMap_108876, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3160)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3165)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_routineMap_108999.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3166)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_bool var_isNoReturn_111790 ;
          GALGAS_uint var_requiredBank_111808 ;
          GALGAS_uint joker_111810 ; // Joker input parameter
          GALGAS_bool joker_111813 ; // Joker input parameter
          var_routineMap_108999.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3167))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3167)), var_isNoReturn_111790, var_requiredBank_111808, joker_111810, joker_111813, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3167)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_isNoReturn_111790.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3168)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\""), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsNotEqual, var_requiredBank_111808.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3172)), GALGAS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\""), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3172)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GALGAS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3175)) ;
      }
    }
  }
  GALGAS_ipic_31__38_BlockList var_generatedBlockList_112365 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3179)) ;
  GALGAS_uint var_entryPoint_112418 = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_112453 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_112453.hasCurrentObject ()) {
    var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_112418, enumerator_112453.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3185)), GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3186))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3186)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3187)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3182))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3182)) ;
    var_entryPoint_112418 = var_entryPoint_112418.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3190)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (kIsEqual, var_entryPoint_112418.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        var_entryPoint_112418 = GALGAS_uint ((uint32_t) 12U) ;
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsEqual, var_entryPoint_112418.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
        if (kBoolTrue == test_12) {
          var_entryPoint_112418 = GALGAS_uint ((uint32_t) 28U) ;
        }
      }
    }
    enumerator_112453.gotoNextObject () ;
  }
  var_entryPoint_112418 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_113072 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_113072.hasCurrentObject ()) {
    var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_112418, GALGAS_string ("_entry_user_").add_operation (var_entryPoint_112418.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3203)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_113072.current_mRoutineName (HERE).readProperty_location (), enumerator_113072.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3204))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3204)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3205)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3200))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3200)) ;
    var_entryPoint_112418 = var_entryPoint_112418.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3208)) ;
    enumerator_113072.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3215)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GALGAS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3217)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3212))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3212)) ;
    }
  }
  GALGAS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_114054 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_114054.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3223)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_lstring var_routineName_114257 ;
      {
      GALGAS_luint joker_114259 ; // Joker input parameter
      GALGAS_luint joker_114262 ; // Joker input parameter
      GALGAS_bool joker_114265 ; // Joker input parameter
      GALGAS_bool joker_114268 ; // Joker input parameter
      var_tempBootloaderRoutineDeclarationList_114054.setter_popFirst (var_routineName_114257, joker_114259, joker_114262, joker_114265, joker_114268, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3224)) ;
      }
      var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 4U), GALGAS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3227)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3228)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_114257.readProperty_location (), var_routineName_114257, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3229))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3229)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3230)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3225))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3225)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (kBoolTrue == test_15) {
      var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 8U), GALGAS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3238)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3239)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), GALGAS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3241)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3236))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3236)) ;
    }
  }
  var_entryPoint_112418 = GALGAS_uint ((uint32_t) 12U) ;
  if (var_tempBootloaderRoutineDeclarationList_114054.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)).isValid ()) {
    uint32_t variant_115152 = var_tempBootloaderRoutineDeclarationList_114054.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)).uintValue () ;
    bool loop_115152 = true ;
    while (loop_115152) {
      loop_115152 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_114054.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_112418.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).isValid () ;
      if (loop_115152) {
        loop_115152 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_114054.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_112418.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).boolValue () ;
      }
      if (loop_115152 && (0 == variant_115152)) {
        loop_115152 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)) ;
      }
      if (loop_115152) {
        variant_115152 -- ;
        GALGAS_lstring var_routineName_115367 ;
        {
        GALGAS_luint joker_115369 ; // Joker input parameter
        GALGAS_luint joker_115372 ; // Joker input parameter
        GALGAS_bool joker_115375 ; // Joker input parameter
        GALGAS_bool joker_115378 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_114054.setter_popFirst (var_routineName_115367, joker_115369, joker_115372, joker_115375, joker_115378, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3250)) ;
        }
        var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_112418, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_112418.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3254)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_115367.readProperty_location (), var_routineName_115367, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3255))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3255)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3256)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3251))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3251)) ;
        var_entryPoint_112418 = var_entryPoint_112418.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3259)) ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (kBoolTrue == test_16) {
      var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 24U), GALGAS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3265)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3266)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), GALGAS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3268)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)) ;
    }
  }
  var_entryPoint_112418 = GALGAS_uint ((uint32_t) 28U) ;
  cEnumerator_routineDeclarationList enumerator_116280 (var_tempBootloaderRoutineDeclarationList_114054, kENUMERATION_UP) ;
  while (enumerator_116280.hasCurrentObject ()) {
    var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_112418, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_112418.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3278)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_116280.current_mRoutineName (HERE).readProperty_location (), enumerator_116280.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3279))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3279)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)) ;
    var_entryPoint_112418 = var_entryPoint_112418.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3283)) ;
    enumerator_116280.gotoNextObject () ;
  }
  GALGAS_uint var_localLabelIndex_116830 = GALGAS_uint ((uint32_t) 0U) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (kBoolTrue == test_17) {
      cEnumerator_pic_31__38_InterruptDefinitionList enumerator_116939 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
      while (enumerator_116939.hasCurrentObject ()) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, enumerator_116939.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("low"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_uint var_currentBank_117042 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3291)) ;
            GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_117102 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)) ;
            GALGAS_lstring var_currentBlockLabel_117179 = GALGAS_lstring::constructor_new (GALGAS_string ("_low_interrupt"), enumerator_116939.current_mInterruptName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3293)) ;
            {
            routine_analyzeInstructionList (enumerator_116939.current_mInstructionList (HERE), var_generatedBlockList_112365, constinArgument_inAccessBankSplitOffset, var_routineMap_108999, constinArgument_inRegisterTable, var_dataMap_111369, var_constantMap_108876, constinArgument_inMacroMap, var_localLabelIndex_116830, var_generatedInstructionList_117102, var_currentBlockLabel_117179, ioArgument_ioListFileContents, var_currentBank_117042, enumerator_116939.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3308)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3309)), var_usedRegisters_108912, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3294)) ;
            }
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GALGAS_bool (kIsEqual, var_currentBlockLabel_117179.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_116939.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray20  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3313)) ;
              }
            }
            var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317)), var_currentBlockLabel_117179, var_generatedInstructionList_117102, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_116939.current_mInterruptName (HERE).readProperty_location (), enumerator_116939.current_mFastReturn (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3320)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3321)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3316))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3316)) ;
          }
        }
        enumerator_116939.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (kBoolTrue == test_21) {
      cEnumerator_pic_31__38_InterruptDefinitionList enumerator_118429 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
      while (enumerator_118429.hasCurrentObject ()) {
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = GALGAS_bool (kIsEqual, enumerator_118429.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("high"))).boolEnum () ;
          if (kBoolTrue == test_22) {
            GALGAS_uint var_currentBank_118533 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3331)) ;
            GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_118593 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3332)) ;
            GALGAS_lstring var_currentBlockLabel_118670 = GALGAS_lstring::constructor_new (GALGAS_string ("_high_interrupt"), enumerator_118429.current_mInterruptName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3333)) ;
            {
            routine_analyzeInstructionList (enumerator_118429.current_mInstructionList (HERE), var_generatedBlockList_112365, constinArgument_inAccessBankSplitOffset, var_routineMap_108999, constinArgument_inRegisterTable, var_dataMap_111369, var_constantMap_108876, constinArgument_inMacroMap, var_localLabelIndex_116830, var_generatedInstructionList_118593, var_currentBlockLabel_118670, ioArgument_ioListFileContents, var_currentBank_118533, enumerator_118429.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3348)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3349)), var_usedRegisters_108912, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3334)) ;
            }
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              test_23 = GALGAS_bool (kIsEqual, var_currentBlockLabel_118670.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <C_FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (enumerator_118429.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3353)) ;
              }
            }
            var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3357)), var_currentBlockLabel_118670, var_generatedInstructionList_118593, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_118429.current_mInterruptName (HERE).readProperty_location (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3360)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3356))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3356)) ;
          }
        }
        enumerator_118429.gotoNextObject () ;
      }
    }
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_119879 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_119879.hasCurrentObject ()) {
    GALGAS_uint var_currentBank_119937 = enumerator_119879.current_mRequiredBank (HERE).readProperty_uint () ;
    GALGAS_routineKind var_routineKind_119991 ;
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      test_25 = enumerator_119879.current_mIsNoReturn (HERE).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_routineKind_119991 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3372)) ;
      }
    }
    if (kBoolFalse == test_25) {
      var_routineKind_119991 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3374)) ;
    }
    GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_120164 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3376)) ;
    GALGAS_lstring var_currentBlockLabel_120246 = enumerator_119879.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList (enumerator_119879.current_mInstructionList (HERE), var_generatedBlockList_112365, constinArgument_inAccessBankSplitOffset, var_routineMap_108999, constinArgument_inRegisterTable, var_dataMap_111369, var_constantMap_108876, constinArgument_inMacroMap, var_localLabelIndex_116830, var_generatedInstructionList_120164, var_currentBlockLabel_120246, ioArgument_ioListFileContents, var_currentBank_119937, enumerator_119879.current_mPreservesBank (HERE), var_routineKind_119991, var_usedRegisters_108912, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)) ;
    }
    GALGAS_bool var_continuesInSequence_120698 = GALGAS_bool (kIsNotEqual, var_currentBlockLabel_120246.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      test_26 = var_continuesInSequence_120698.boolEnum () ;
      if (kBoolTrue == test_26) {
        var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3400)), var_currentBlockLabel_120246, var_generatedInstructionList_120164, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (enumerator_119879.current_mRoutineName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3404)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)) ;
      }
    }
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = enumerator_119879.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_119879.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_119937.objectCompare (enumerator_119879.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_119879.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_119879.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), fixItArray28  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)) ;
      }
    }
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = enumerator_119879.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_120698 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3412)).boolEnum () ;
      if (kBoolTrue == test_29) {
        TC_Array <C_FixItDescription> fixItArray30 ;
        inCompiler->emitSemanticError (enumerator_119879.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray30  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)) ;
      }
    }
    enumerator_119879.gotoNextObject () ;
  }
  GALGAS_registerExpression var_WREGregister_121592 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("WREG"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3420))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3420)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3421))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3421))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3421)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3422))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3419)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_121950 ;
  GALGAS_bitSliceTable joker_121956 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_WREGregister_121592.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_108876, GALGAS_bool (false), var_WREG_5F_IPICregisterDescription_121950, joker_121956, var_usedRegisters_108912, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3424)) ;
  GALGAS_registerExpression var_TOSLregister_122034 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSL"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3436))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3436)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3437))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3437))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3437)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3438))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3435)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_122391 ;
  GALGAS_bitSliceTable joker_122397 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSLregister_122034.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_108876, GALGAS_bool (true), var_TOSL_5F_IPICregisterDescription_122391, joker_122397, var_usedRegisters_108912, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3440)) ;
  GALGAS_registerExpression var_TOSHregister_122475 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3452))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3452)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3453))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3453))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3453)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3454))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3451)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_122831 ;
  GALGAS_bitSliceTable joker_122837 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSHregister_122475.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_108876, GALGAS_bool (true), var_TOSH_5F_IPICregisterDescription_122831, joker_122837, var_usedRegisters_108912, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3456)) ;
  GALGAS_registerExpression var_TOSUregister_122915 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSU"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3470))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3467)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_123270 ;
  GALGAS_bitSliceTable joker_123276 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSUregister_122915.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_108876, GALGAS_bool (true), var_TOSU_5F_IPICregisterDescription_123270, joker_123276, var_usedRegisters_108912, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)) ;
  GALGAS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_123352 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3484)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3485)), var_WREG_5F_IPICregisterDescription_121950, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3483)) ;
  GALGAS_ipic_31__38_Block var_goto_34_Block_123565 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3491)), GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3492)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_listWithValue (var_ADDWF_5F_WREG_123352, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3493)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3493)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3495)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3490)) ;
  var_generatedBlockList_112365.addAssign_operation (var_goto_34_Block_123565  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3498)) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_123962 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3500)) ;
  var_goto_32_InstructionList_123962.addAssign_operation (var_ADDWF_5F_WREG_123352, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501)) ;
  var_goto_32_InstructionList_123962.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3503)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3504)), var_TOSL_5F_IPICregisterDescription_122391, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3502)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3506)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3502)) ;
  var_goto_32_InstructionList_123962.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3508)), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3509)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3507)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3510)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3507)) ;
  var_goto_32_InstructionList_123962.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3512)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3513)), var_TOSH_5F_IPICregisterDescription_122831, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3511)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3515)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3511)) ;
  var_goto_32_InstructionList_123962.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3517)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3518)), var_TOSU_5F_IPICregisterDescription_123270, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3516)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3522)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3516)) ;
  GALGAS_ipic_31__38_Block var_goto_32_Block_124932 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3526)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3527)), var_goto_32_InstructionList_123962, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3529))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3529)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3530)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3525)) ;
  var_generatedBlockList_112365.addAssign_operation (var_goto_32_Block_124932  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3533)) ;
  var_entryPoint_112418 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_125325 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_125325.hasCurrentObject ()) {
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = enumerator_125325.current_mIsNoReturn (HERE).boolEnum () ;
      if (kBoolTrue == test_31) {
        var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_112418, enumerator_125325.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3541)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_125325.current_mRoutineName (HERE).readProperty_location (), enumerator_125325.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3542))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3542)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3543)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3538))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3538)) ;
      }
    }
    if (kBoolFalse == test_31) {
      GALGAS_ipic_31__38_SequentialInstructionList var_instructionList_125742 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3547)) ;
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = GALGAS_bool (kIsNotEqual, enumerator_125325.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548)))).boolEnum () ;
        if (kBoolTrue == test_32) {
          var_instructionList_125742.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), enumerator_125325.current_mReturnedBank (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)) ;
        }
      }
      var_generatedBlockList_112365.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_112418, enumerator_125325.current_mRoutineName (HERE), var_instructionList_125742, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3555))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3555)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3556)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3551))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3551)) ;
    }
    var_entryPoint_112418 = var_entryPoint_112418.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)) ;
    enumerator_125325.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_126350 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3563)) ;
  cEnumerator_lstringlist enumerator_126387 (constinArgument_inUnusedRegisterList, kENUMERATION_UP) ;
  while (enumerator_126387.hasCurrentObject ()) {
    enumGalgasBool test_33 = kBoolTrue ;
    if (kBoolTrue == test_33) {
      test_33 = constinArgument_inRegisterTable.getter_hasKey (enumerator_126387.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)).boolEnum () ;
      if (kBoolTrue == test_33) {
        TC_Array <C_FixItDescription> fixItArray34 ;
        inCompiler->emitSemanticError (enumerator_126387.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_126387.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)), fixItArray34  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)) ;
      }
    }
    if (kBoolFalse == test_33) {
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = var_unusedDeclarationUnicity_126350.getter_hasKey (enumerator_126387.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3567)).boolEnum () ;
        if (kBoolTrue == test_35) {
          TC_Array <C_FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticWarning (enumerator_126387.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_126387.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)), fixItArray36  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)) ;
        }
      }
      if (kBoolFalse == test_35) {
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_usedRegisters_108912.getter_hasKey (enumerator_126387.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3569)).boolEnum () ;
          if (kBoolTrue == test_37) {
            TC_Array <C_FixItDescription> fixItArray38 ;
            inCompiler->emitSemanticWarning (enumerator_126387.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_126387.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)), fixItArray38  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_126350.addAssign_operation (enumerator_126387.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572)) ;
    enumerator_126387.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_126894 (constinArgument_inDeclaredByteMap, kENUMERATION_UP) ;
  while (enumerator_126894.hasCurrentObject ()) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      test_39 = var_usedRegisters_108912.getter_hasKey (enumerator_126894.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_and (var_unusedDeclarationUnicity_126350.getter_hasKey (enumerator_126894.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticWarning (enumerator_126894.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_126894.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)), fixItArray40  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)) ;
      }
    }
    enumerator_126894.gotoNextObject () ;
  }
  {
  routine_displayBlockList (GALGAS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_112365, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)) ;
  }
  enumGalgasBool test_41 = kBoolTrue ;
  if (kBoolTrue == test_41) {
    test_41 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3582)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_41) {
      {
      routine_ipic_31__38_OptimizeBlocks (ioArgument_ioListFileContents, var_generatedBlockList_112365, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3583)) ;
      }
      {
      routine_displayBlockList (GALGAS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_112365, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3584)) ;
      }
    }
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3587)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_42) {
      {
      routine_ipic_31__38_OptimizeBlockOrdering (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_112365, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3588)) ;
      }
    }
  }
  enumGalgasBool test_43 = kBoolTrue ;
  if (kBoolTrue == test_43) {
    test_43 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3595)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_43) {
      {
      routine_ipic_31__38_RelativesResolution (ioArgument_ioListFileContents, var_generatedBlockList_112365, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3596)) ;
      }
    }
  }
  enumGalgasBool test_44 = kBoolTrue ;
  if (kBoolTrue == test_44) {
    test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)).boolEnum () ;
    if (kBoolTrue == test_44) {
      {
      routine_ipic_31__38_StackComputations (ioArgument_ioListFileContents, var_generatedBlockList_112365, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3603)) ;
      }
    }
  }
  GALGAS_blockDurationMap var_blockDurationMap_128422 = GALGAS_blockDurationMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3609)) ;
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    test_45 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3610)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_45) {
      {
      routine_ipic_31__38_DurationComputations (var_generatedBlockList_112365, var_blockDurationMap_128422, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3611)) ;
      }
    }
  }
  enumGalgasBool test_46 = kBoolTrue ;
  if (kBoolTrue == test_46) {
    test_46 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3614)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_46) {
      GALGAS_uint var_usedROMsize_128982 ;
      GALGAS_generatedCodeMap var_generatedCodeMap_129035 ;
      {
      routine_ipic_31__38_GenerateCode (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.readProperty_uint (), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3619)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_111369, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_112365, var_usedROMsize_128982, var_generatedCodeMap_129035, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615)) ;
      }
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3631)).boolEnum () ;
        if (kBoolTrue == test_47) {
          GALGAS_string var_verboseMessage_129188 = GALGAS_string ("Resource usage:\n") ;
          var_verboseMessage_129188.plusAssign_operation(GALGAS_string ("  ROM, used ").add_operation (var_usedROMsize_128982.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)) ;
          var_verboseMessage_129188.plusAssign_operation(GALGAS_string (" / ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)) ;
          var_verboseMessage_129188.plusAssign_operation(var_usedROMsize_128982.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).add_operation (GALGAS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)) ;
          cEnumerator_ramBankTable enumerator_129471 (constinArgument_inRamBank, kENUMERATION_UP) ;
          while (enumerator_129471.hasCurrentObject ()) {
            GALGAS_uint var_bankSize_129515 = enumerator_129471.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_129471.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3637)) ;
            GALGAS_uint var_usedSize_129580 = enumerator_129471.current_mFirstFreeAddress (HERE).substract_operation (enumerator_129471.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3638)) ;
            var_verboseMessage_129188.plusAssign_operation(GALGAS_string ("  Bank '").add_operation (enumerator_129471.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)) ;
            var_verboseMessage_129188.plusAssign_operation(var_usedSize_129580.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)) ;
            var_verboseMessage_129188.plusAssign_operation(var_bankSize_129515.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)) ;
            var_verboseMessage_129188.plusAssign_operation(var_usedSize_129580.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).divide_operation (var_bankSize_129515, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).add_operation (GALGAS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)) ;
            enumerator_129471.gotoNextObject () ;
          }
          inCompiler->printMessage (var_verboseMessage_129188  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3644)) ;
        }
      }
    }
  }
  enumGalgasBool test_48 = kBoolTrue ;
  if (kBoolTrue == test_48) {
    test_48 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3648)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_48) {
      {
      routine_ipic_31__38_PrintDurations (ioArgument_ioListFileContents, var_blockDurationMap_128422, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3649)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator optimizeTerminator'
//
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
//
//Overriding extension method '@ipic18ComputedGotoTerminator optimizeTerminator'
//
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
//
//Overriding extension method '@ipic18JumpTerminator optimizeTerminator'
//
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
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_targetBlockIndex_2058 ;
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = object ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_targetBlockIndex_2058, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 53)) ;
      GALGAS_ipic_31__38_Block var_targetBlock_2092 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_2058, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 54)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_targetBlock_2092.readProperty_mAddress ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 55)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_2092.readProperty_mInstructionList ().getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 55)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock_2092.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_bool var_optimize_2368 ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2092.readProperty_mTerminator ().ptr ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_ipic_31__38_JumpTerminator temp_6 ;
              if (var_targetBlock_2092.readProperty_mTerminator ().isValid ()) {
                if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2092.readProperty_mTerminator ().ptr ())) {
                  temp_6 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_2092.readProperty_mTerminator ().ptr () ;
                }else{
                  inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_2092.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 60)) ;
                }
              }
              GALGAS_ipic_31__38_JumpTerminator var_candidate_2480 = temp_6 ;
              const GALGAS_ipic_31__38_JumpTerminator temp_7 = object ;
              var_optimize_2368 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mLabel ().readProperty_string ().objectCompare (var_candidate_2480.readProperty_mLabel ().readProperty_string ())) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_optimize_2368 = GALGAS_bool (true) ;
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_optimize_2368.boolEnum () ;
            if (kBoolTrue == test_8) {
              outArgument_outOptimizedTerminator = var_targetBlock_2092.readProperty_mTerminator () ;
              ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_9 = object ;
              ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_9.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 70)) ;
              ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72)) ;
            }
          }
        }
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

