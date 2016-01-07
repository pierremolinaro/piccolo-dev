#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Getter '@uint x4String'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_x_34_String (const GALGAS_uint & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_uint temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, temp_0.objectCompare (GALGAS_uint ((uint32_t) 65535U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult = GALGAS_string ("****") ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_uint temp_2 = inObject ;
    result_outResult = temp_2.right_shift_operation (GALGAS_uint ((uint32_t) 12U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 31)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 31)) ;
    const GALGAS_uint temp_3 = inObject ;
    result_outResult.plusAssign_operation(temp_3.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)) ;
    const GALGAS_uint temp_4 = inObject ;
    result_outResult.plusAssign_operation(temp_4.right_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)) ;
    const GALGAS_uint temp_5 = inObject ;
    result_outResult.plusAssign_operation(temp_5.operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 34)).getter_xString (SOURCE_FILE ("intermediate_generic.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 34)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract category method '@immediatExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_immediatExpression_eval> gCategoryMethodTable_immediatExpression_eval ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_eval (const int32_t inClassIndex,
                               categoryMethodSignature_immediatExpression_eval inMethod) {
  gCategoryMethodTable_immediatExpression_eval.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_immediatExpression_eval (void) {
  gCategoryMethodTable_immediatExpression_eval.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatExpression_eval (NULL,
                                                    freeCategoryMethod_immediatExpression_eval) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_eval (const cPtr_immediatExpression * inObject,
                              const GALGAS_registerTable constin_inRegisterTable,
                              const GALGAS_constantMap constin_inConstantMap,
                              GALGAS_sint_36__34_ & out_outResult,
                              GALGAS_stringset & io_ioUsedRegisters,
                              C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResult.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_immediatExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_immediatExpression_eval f = NULL ;
    if (classIndex < gCategoryMethodTable_immediatExpression_eval.count ()) {
      f = gCategoryMethodTable_immediatExpression_eval (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_immediatExpression_eval.count ()) {
           f = gCategoryMethodTable_immediatExpression_eval (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_immediatExpression_eval.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, out_outResult, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract category method '@bitNumberExpression getBitNumber'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_bitNumberExpression_getBitNumber> gCategoryMethodTable_bitNumberExpression_getBitNumber ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getBitNumber (const int32_t inClassIndex,
                                       categoryMethodSignature_bitNumberExpression_getBitNumber inMethod) {
  gCategoryMethodTable_bitNumberExpression_getBitNumber.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_bitNumberExpression_getBitNumber (void) {
  gCategoryMethodTable_bitNumberExpression_getBitNumber.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberExpression_getBitNumber (NULL,
                                                             freeCategoryMethod_bitNumberExpression_getBitNumber) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                      const GALGAS_registerTable constin_inRegisterTable,
                                      const GALGAS_constantMap constin_inConstantMap,
                                      GALGAS_stringset & io_ioUsedRegisters,
                                      const GALGAS_bitSliceTable constin_inBitSliceTable,
                                      GALGAS_uint & out_outBitNumber,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outBitNumber.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_bitNumberExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_bitNumberExpression_getBitNumber f = NULL ;
    if (classIndex < gCategoryMethodTable_bitNumberExpression_getBitNumber.count ()) {
      f = gCategoryMethodTable_bitNumberExpression_getBitNumber (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_bitNumberExpression_getBitNumber.count ()) {
           f = gCategoryMethodTable_bitNumberExpression_getBitNumber (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_bitNumberExpression_getBitNumber.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, io_ioUsedRegisters, constin_inBitSliceTable, out_outBitNumber, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Getter '@baseline_instruction_FD_base_code mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      result_outResult = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      result_outResult = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      result_outResult = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      result_outResult = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      result_outResult = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      result_outResult = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      result_outResult = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      result_outResult = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      result_outResult = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      result_outResult = GALGAS_string ("RLF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      result_outResult = GALGAS_string ("RRF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      result_outResult = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      result_outResult = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      result_outResult = GALGAS_string ("XORWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Getter '@baseline_F_instruction_base_code mnemonic'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outResult = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outResult = GALGAS_string ("MOVWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@baseline_bit_oriented_op mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outResult = GALGAS_string ("BCF") ;
    }
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outResult = GALGAS_string ("BSF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Getter '@baseline_literal_instruction_opcode mnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outResult = GALGAS_string ("ANDLW") ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outResult = GALGAS_string ("IORLW") ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outResult = GALGAS_string ("MOVLW") ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      result_outResult = GALGAS_string ("RETLW") ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outResult = GALGAS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Getter '@baseline_IF_BitTest_opcode mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::kEnum_BTFSS:
    {
      result_outResult = GALGAS_string ("BTFSS") ;
    }
    break ;
  case GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::kEnum_BTFSC:
    {
      result_outResult = GALGAS_string ("BTFSC") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@baseline_WO_OPERAND_group mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_NOP:
    {
      result_outResult = GALGAS_string ("NOP") ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRW:
    {
      result_outResult = GALGAS_string ("CLRW") ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRWDT:
    {
      result_outResult = GALGAS_string ("CLRWDT") ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_OPTION_5F_:
    {
      result_outResult = GALGAS_string ("OPTION") ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_SLEEP:
    {
      result_outResult = GALGAS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@baseline_instruction addUsedRoutines'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_instruction_addUsedRoutines> gCategoryMethodTable_baseline_5F_instruction_addUsedRoutines ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addUsedRoutines (const int32_t inClassIndex,
                                          categoryMethodSignature_baseline_5F_instruction_addUsedRoutines inMethod) {
  gCategoryMethodTable_baseline_5F_instruction_addUsedRoutines.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_instruction_addUsedRoutines (void) {
  gCategoryMethodTable_baseline_5F_instruction_addUsedRoutines.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_addUsedRoutines (NULL,
                                                                    freeCategoryMethod_baseline_5F_instruction_addUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                         GALGAS_stringset & io_ioUsedRoutines,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_instruction_addUsedRoutines f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_instruction_addUsedRoutines.count ()) {
      f = gCategoryMethodTable_baseline_5F_instruction_addUsedRoutines (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_instruction_addUsedRoutines.count ()) {
           f = gCategoryMethodTable_baseline_5F_instruction_addUsedRoutines (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_instruction_addUsedRoutines.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUsedRoutines, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@baseline_instruction shouldTerminateWithMOVLW'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW> gCategoryMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_shouldTerminateWithMOVLW (const int32_t inClassIndex,
                                                   categoryMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW inMethod) {
  gCategoryMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                  const GALGAS_string constin_inErrorMessage,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.count ()) {
      f = gCategoryMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.count ()) {
           f = gCategoryMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inErrorMessage, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                             const GALGAS_string constinArgument_inErrorMessage,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction) ;
  inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, constinArgument_inErrorMessage  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 18)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_shouldTerminateWithMOVLW (void) {
  enterCategoryMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction.mSlotID,
                                                categoryMethod_baseline_5F_instruction_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_instruction_shouldTerminateWithMOVLW (void) {
  gCategoryMethodTable_baseline_5F_instruction_shouldTerminateWithMOVLW.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_shouldTerminateWithMOVLW (defineCategoryMethod_baseline_5F_instruction_shouldTerminateWithMOVLW,
                                                                             freeCategoryMethod_baseline_5F_instruction_shouldTerminateWithMOVLW) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@baseline_instruction shouldNotContinueInSequence'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence> gCategoryMethodTable_baseline_5F_instruction_shouldNotContinueInSequence ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_shouldNotContinueInSequence (const int32_t inClassIndex,
                                                      categoryMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence inMethod) {
  gCategoryMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * inObject,
                                                     const GALGAS_string constin_inErrorMessage,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.count ()) {
      f = gCategoryMethodTable_baseline_5F_instruction_shouldNotContinueInSequence (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.count ()) {
           f = gCategoryMethodTable_baseline_5F_instruction_shouldNotContinueInSequence (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inErrorMessage, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * inObject,
                                                                                const GALGAS_string constinArgument_inErrorMessage,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction) ;
  inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, constinArgument_inErrorMessage  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 65)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_shouldNotContinueInSequence (void) {
  enterCategoryMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction.mSlotID,
                                                   categoryMethod_baseline_5F_instruction_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_instruction_shouldNotContinueInSequence (void) {
  gCategoryMethodTable_baseline_5F_instruction_shouldNotContinueInSequence.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_shouldNotContinueInSequence (defineCategoryMethod_baseline_5F_instruction_shouldNotContinueInSequence,
                                                                                freeCategoryMethod_baseline_5F_instruction_shouldNotContinueInSequence) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression::GALGAS_baseline_5F_intermediate_5F_registerExpression (void) :
mAttribute_mAssemblyString (),
mAttribute_mRegisterAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression::~ GALGAS_baseline_5F_intermediate_5F_registerExpression (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression::GALGAS_baseline_5F_intermediate_5F_registerExpression (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mAttribute_mAssemblyString (inOperand0),
mAttribute_mRegisterAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_intermediate_5F_registerExpression (GALGAS_string::constructor_default (HERE),
                                                                GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_uint & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_baseline_5F_intermediate_5F_registerExpression (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_registerExpression::objectCompare (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAssemblyString.objectCompare (inOperand.mAttribute_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_intermediate_5F_registerExpression::isValid (void) const {
  return mAttribute_mAssemblyString.isValid () && mAttribute_mRegisterAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_registerExpression::drop (void) {
  mAttribute_mAssemblyString.drop () ;
  mAttribute_mRegisterAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_registerExpression::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @baseline_intermediate_registerExpression:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_baseline_5F_intermediate_5F_registerExpression::getter_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssemblyString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_registerExpression::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_intermediate_registerExpression type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ("baseline_intermediate_registerExpression",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_intermediate_5F_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression result ;
  const GALGAS_baseline_5F_intermediate_5F_registerExpression * p = (const GALGAS_baseline_5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract category method '@baseline_instruction build_baseline_intermediate_instructionList'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList> gCategoryMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (const int32_t inClassIndex,
                                                                               categoryMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList inMethod) {
  gCategoryMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  gCategoryMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList (NULL,
                                                                                                         freeCategoryMethod_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                              const GALGAS_uint constin_inCurrentPage,
                                                                              const GALGAS_baselineRoutineMap constin_inRoutineMap,
                                                                              const GALGAS_registerTable constin_inRegisterTable,
                                                                              const GALGAS_constantMap constin_inConstantMap,
                                                                              GALGAS_uint & io_ioLocalLabelIndex,
                                                                              GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                              GALGAS_string & io_ioListFileContents,
                                                                              GALGAS_bool & io_ioContinuesInSequence,
                                                                              const GALGAS_routineKind constin_inRoutineKind,
                                                                              const GALGAS_bool constin_inLastInstructionShouldReturn,
                                                                              GALGAS_stringset & io_ioUsedRegisters,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.count ()) {
      f = gCategoryMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.count ()) {
           f = gCategoryMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inCurrentPage, constin_inRoutineMap, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioContinuesInSequence, constin_inRoutineKind, constin_inLastInstructionShouldReturn, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category method '@baseline_conditionExpression build_intermediate_condition_instructions'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions> gCategoryMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_build_5F_intermediate_5F_condition_5F_instructions (const int32_t inClassIndex,
                                                                             categoryMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions inMethod) {
  gCategoryMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions (void) {
  gCategoryMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions (NULL,
                                                                                                               freeCategoryMethod_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_build_5F_intermediate_5F_condition_5F_instructions (const cPtr_baseline_5F_conditionExpression * inObject,
                                                                            const GALGAS_uint constin_inCurrentPage,
                                                                            const GALGAS_registerTable constin_inRegisterTable,
                                                                            const GALGAS_constantMap constin_inConstantMap,
                                                                            GALGAS_uint & io_ioLocalLabelIndex,
                                                                            const GALGAS_bool constin_inComplementaryBranch,
                                                                            const GALGAS_location constin_inInstructionLocation,
                                                                            const GALGAS_string constin_inTargetLabel,
                                                                            GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                            GALGAS_stringset & io_ioUsedRegisters,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_conditionExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.count ()) {
      f = gCategoryMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.count ()) {
           f = gCategoryMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inCurrentPage, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, constin_inComplementaryBranch, constin_inInstructionLocation, constin_inTargetLabel, io_ioGeneratedInstructionList, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@baseline_intermediate_instruction print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_instruction_print> gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_print ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_print (const int32_t inClassIndex,
                                categoryMethodSignature_baseline_5F_intermediate_5F_instruction_print inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_print.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_instruction_print (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_print.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_print (NULL,
                                                                          freeCategoryMethod_baseline_5F_intermediate_5F_instruction_print) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_print (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                               GALGAS_string & io_ioListFileContents,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_instruction_print f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_print.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_print (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_print.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_print (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_print.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioListFileContents, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category getter '@baseline_intermediate_instruction length'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_baseline_5F_intermediate_5F_instruction_length> gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_length ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_length (const int32_t inClassIndex,
                                 categoryGetterSignature_baseline_5F_intermediate_5F_instruction_length inGetter) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_length.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_baseline_5F_intermediate_5F_instruction_length (void) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_length.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_length (NULL,
                                                                           freeCategoryGetter_baseline_5F_intermediate_5F_instruction_length) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryGetter_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_baseline_5F_intermediate_5F_instruction_length f = NULL ;
    if (classIndex < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_length.count ()) {
      f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_length (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_length.count ()) {
           f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_length (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_length.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@baseline_intermediate_instruction setCurrentAddress'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress> gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_setCurrentAddress (const int32_t inClassIndex,
                                            categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                           GALGAS_uint & io_ioCurrentWordAdress,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioCurrentWordAdress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                      GALGAS_uint & ioArgument_ioCurrentWordAdress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_instruction * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_instruction) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction temp_0 = object ;
  ioArgument_ioCurrentWordAdress = ioArgument_ioCurrentWordAdress.add_operation (callCategoryGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress (void) {
  enterCategoryMethod_setCurrentAddress (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                         categoryMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_setCurrentAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress (defineCategoryMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress,
                                                                                      freeCategoryMethod_baseline_5F_intermediate_5F_instruction_setCurrentAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category getter '@baseline_intermediate_instruction isLABEL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isLABEL> gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_isLABEL (const int32_t inClassIndex,
                                  categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isLABEL inGetter) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isLABEL f = NULL ;
    if (classIndex < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.count ()) {
      f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.count ()) {
           f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (false) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_baseline_5F_intermediate_5F_instruction_isLABEL (void) {
  enterCategoryGetter_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                               extensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_baseline_5F_intermediate_5F_instruction_isLABEL (void) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isLABEL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_isLABEL (defineCategoryGetter_baseline_5F_intermediate_5F_instruction_isLABEL,
                                                                            freeCategoryGetter_baseline_5F_intermediate_5F_instruction_isLABEL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category getter '@baseline_intermediate_instruction isNULL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isNULL> gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isNULL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_isNULL (const int32_t inClassIndex,
                                 categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isNULL inGetter) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isNULL f = NULL ;
    if (classIndex < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.count ()) {
      f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isNULL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.count ()) {
           f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isNULL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (false) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_baseline_5F_intermediate_5F_instruction_isNULL (void) {
  enterCategoryGetter_isNULL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                              extensionGetter_baseline_5F_intermediate_5F_instruction_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_baseline_5F_intermediate_5F_instruction_isNULL (void) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isNULL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_isNULL (defineCategoryGetter_baseline_5F_intermediate_5F_instruction_isNULL,
                                                                           freeCategoryGetter_baseline_5F_intermediate_5F_instruction_isNULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category getter '@baseline_intermediate_instruction isSkippingInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction> gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_isSkippingInstruction (const int32_t inClassIndex,
                                                categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction inGetter) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction f = NULL ;
    if (classIndex < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
      f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
           f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (false) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  enterCategoryGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                             extensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (defineCategoryGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction,
                                                                                          freeCategoryGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category getter '@baseline_intermediate_instruction nextInstructionIsReachable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable> gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_nextInstructionIsReachable (const int32_t inClassIndex,
                                                     categoryGetterSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable inGetter) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable f = NULL ;
    if (classIndex < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
      f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
           f = gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (true) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  enterCategoryGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                                  extensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  gCategoryGetterTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (defineCategoryGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable,
                                                                                               freeCategoryGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@baseline_intermediate_instruction enterReferencedLabel'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel> gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterReferencedLabel (const int32_t inClassIndex,
                                               categoryMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_stringset & io_ioReferencedLabelSet,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioReferencedLabelSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         GALGAS_stringset & /* ioArgument_ioReferencedLabelSet */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (void) {
  enterCategoryMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                            categoryMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_enterReferencedLabel.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel (defineCategoryMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel,
                                                                                         freeCategoryMethod_baseline_5F_intermediate_5F_instruction_enterReferencedLabel) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@baseline_intermediate_instruction defineLabel'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel> gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_defineLabel (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                     GALGAS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                     const GALGAS_uint constin_inLineIndex,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineSymbolTable, constin_inLineIndex, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_instruction_defineLabel (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                GALGAS_baselineSymbolTableForOptimizations & /* ioArgument_ioRoutineSymbolTable */,
                                                                                const GALGAS_uint /* constinArgument_inLineIndex */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_instruction_defineLabel (void) {
  enterCategoryMethod_defineLabel (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                   categoryMethod_baseline_5F_intermediate_5F_instruction_defineLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_instruction_defineLabel (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_defineLabel.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_defineLabel (defineCategoryMethod_baseline_5F_intermediate_5F_instruction_defineLabel,
                                                                                freeCategoryMethod_baseline_5F_intermediate_5F_instruction_defineLabel) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc> gCategoryMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeTestDecInc (const int32_t inClassIndex,
                                             categoryMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeTestDecInc (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                            const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                            const GALGAS_uint constin_inLineIndex,
                                            GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                            GALGAS_string & io_ioListFileContents,
                                            GALGAS_bool & io_ioOptimizationsDone,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                                                                                     const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                                     GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_line ;
  constinArgument_inSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (object->mAttribute_mTargetLabel, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 469))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 469)), var_line, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 469)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 472)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 471)) ;
  }
  if (var_firstInstruction.isValid ()) {
    if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
      GALGAS_baseline_5F_intermediate_5F_GOTO cast_18775_goto ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_firstInstruction.ptr ()) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegisterDescription, cast_18775_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 483)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 483)), object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination, object->mAttribute_mBranchIfZero  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 480)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 479)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 491)) ;
      const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 493)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 495)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("baseline_optimizations.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 497)) ;
      const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 499)) ;
      }
      const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 504)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": branching to GOTO replaced by second GOTO label\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 506)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (void) {
  enterCategoryMethod_optimizeTestDecInc (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          categoryMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (defineCategoryMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc,
                                                                                                     freeCategoryMethod_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@baseline_assembly_instruction print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_assembly_5F_instruction_print> gCategoryMethodTable_baseline_5F_assembly_5F_instruction_print ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_print (const int32_t inClassIndex,
                                categoryMethodSignature_baseline_5F_assembly_5F_instruction_print inMethod) {
  gCategoryMethodTable_baseline_5F_assembly_5F_instruction_print.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_assembly_5F_instruction_print (void) {
  gCategoryMethodTable_baseline_5F_assembly_5F_instruction_print.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_print (NULL,
                                                                      freeCategoryMethod_baseline_5F_assembly_5F_instruction_print) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_print (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                               GALGAS_string & io_ioListFileContents,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_assembly_5F_instruction_print f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_assembly_5F_instruction_print.count ()) {
      f = gCategoryMethodTable_baseline_5F_assembly_5F_instruction_print (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_assembly_5F_instruction_print.count ()) {
           f = gCategoryMethodTable_baseline_5F_assembly_5F_instruction_print (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_assembly_5F_instruction_print.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioListFileContents, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category getter '@baseline_assembly_instruction length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_baseline_5F_assembly_5F_instruction_length> gCategoryGetterTable_baseline_5F_assembly_5F_instruction_length ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_length (const int32_t inClassIndex,
                                 categoryGetterSignature_baseline_5F_assembly_5F_instruction_length inGetter) {
  gCategoryGetterTable_baseline_5F_assembly_5F_instruction_length.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_baseline_5F_assembly_5F_instruction_length (void) {
  gCategoryGetterTable_baseline_5F_assembly_5F_instruction_length.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_baseline_5F_assembly_5F_instruction_length (NULL,
                                                                       freeCategoryGetter_baseline_5F_assembly_5F_instruction_length) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryGetter_length (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_baseline_5F_assembly_5F_instruction_length f = NULL ;
    if (classIndex < gCategoryGetterTable_baseline_5F_assembly_5F_instruction_length.count ()) {
      f = gCategoryGetterTable_baseline_5F_assembly_5F_instruction_length (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_baseline_5F_assembly_5F_instruction_length.count ()) {
           f = gCategoryGetterTable_baseline_5F_assembly_5F_instruction_length (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_baseline_5F_assembly_5F_instruction_length.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@baseline_intermediate_instruction generateAssemblyCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode> gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateAssemblyCode (const int32_t inClassIndex,
                                               categoryMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_instruction_generateAssemblyCode (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_instruction_generateAssemblyCode (NULL,
                                                                                         freeCategoryMethod_baseline_5F_intermediate_5F_instruction_generateAssemblyCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateAssemblyCode (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression constin_inSTATUSregister,
                                              const GALGAS_bitSliceTable constin_inStatusRegisterBitSliceTable,
                                              GALGAS_baseline_5F_assembly_5F_instructionList & io_ioAssemblyInstructionList,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_instruction_generateAssemblyCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSTATUSregister, constin_inStatusRegisterBitSliceTable, io_ioAssemblyInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@baseline_assembly_instruction enterLabelAtAddress'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress> gCategoryMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterLabelAtAddress (const int32_t inClassIndex,
                                              categoryMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress inMethod) {
  gCategoryMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                             GALGAS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                             GALGAS_uint & io_ioWordAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.count ()) {
      f = gCategoryMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.count ()) {
           f = gCategoryMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineSymbolTable, io_ioWordAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * /* inObject */,
                                                                                    GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                    GALGAS_uint & /* ioArgument_ioWordAddress */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (void) {
  enterCategoryMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction.mSlotID,
                                           categoryMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (void) {
  gCategoryMethodTable_baseline_5F_assembly_5F_instruction_enterLabelAtAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress (defineCategoryMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress,
                                                                                    freeCategoryMethod_baseline_5F_assembly_5F_instruction_enterLabelAtAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category method '@baseline_assembly_instruction generateBinaryCodeAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress> gCategoryMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateBinaryCodeAtAddress (const int32_t inClassIndex,
                                                      categoryMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress inMethod) {
  gCategoryMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress (void) {
  gCategoryMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress (NULL,
                                                                                            freeCategoryMethod_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateBinaryCodeAtAddress (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                     const GALGAS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                     GALGAS_string & io_ioListFileContents,
                                                     GALGAS_uint & io_ioWordAddress,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.count ()) {
      f = gCategoryMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.count ()) {
           f = gCategoryMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRoutineSymbolTable, io_ioListFileContents, io_ioWordAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Getter '@midrange_instruction_FD_base_code mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      result_outResult = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      result_outResult = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      result_outResult = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      result_outResult = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      result_outResult = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      result_outResult = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      result_outResult = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      result_outResult = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      result_outResult = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      result_outResult = GALGAS_string ("RLF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      result_outResult = GALGAS_string ("RRF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      result_outResult = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      result_outResult = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      result_outResult = GALGAS_string ("XORWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Getter '@midrange_F_instruction_base_code mnemonic'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outResult = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outResult = GALGAS_string ("MOVWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@midrange_bit_oriented_op mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outResult = GALGAS_string ("BCF") ;
    }
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outResult = GALGAS_string ("BSF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Getter '@midrange_literal_instruction_opcode mnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      result_outResult = GALGAS_string ("ADDLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outResult = GALGAS_string ("ANDLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outResult = GALGAS_string ("IORLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outResult = GALGAS_string ("MOVLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      result_outResult = GALGAS_string ("RETLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      result_outResult = GALGAS_string ("SUBLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outResult = GALGAS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression::GALGAS_midrange_5F_intermediate_5F_registerExpression (void) :
mAttribute_mAssemblyString (),
mAttribute_mRegisterAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression::~ GALGAS_midrange_5F_intermediate_5F_registerExpression (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression::GALGAS_midrange_5F_intermediate_5F_registerExpression (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mAttribute_mAssemblyString (inOperand0),
mAttribute_mRegisterAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_registerExpression (GALGAS_string::constructor_default (HERE),
                                                                GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_uint & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_midrange_5F_intermediate_5F_registerExpression (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_registerExpression::objectCompare (const GALGAS_midrange_5F_intermediate_5F_registerExpression & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAssemblyString.objectCompare (inOperand.mAttribute_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_intermediate_5F_registerExpression::isValid (void) const {
  return mAttribute_mAssemblyString.isValid () && mAttribute_mRegisterAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_intermediate_5F_registerExpression::drop (void) {
  mAttribute_mAssemblyString.drop () ;
  mAttribute_mRegisterAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_intermediate_5F_registerExpression::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @midrange_intermediate_registerExpression:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_midrange_5F_intermediate_5F_registerExpression::getter_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssemblyString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_registerExpression::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_intermediate_registerExpression type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ("midrange_intermediate_registerExpression",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  const GALGAS_midrange_5F_intermediate_5F_registerExpression * p = (const GALGAS_midrange_5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@midrange_instruction addUsedRoutines'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_instruction_addUsedRoutines> gCategoryMethodTable_midrange_5F_instruction_addUsedRoutines ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addUsedRoutines (const int32_t inClassIndex,
                                          categoryMethodSignature_midrange_5F_instruction_addUsedRoutines inMethod) {
  gCategoryMethodTable_midrange_5F_instruction_addUsedRoutines.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_instruction_addUsedRoutines (void) {
  gCategoryMethodTable_midrange_5F_instruction_addUsedRoutines.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_addUsedRoutines (NULL,
                                                                    freeCategoryMethod_midrange_5F_instruction_addUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addUsedRoutines (const cPtr_midrange_5F_instruction * inObject,
                                         GALGAS_stringset & io_ioUsedRoutines,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_instruction_addUsedRoutines f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_instruction_addUsedRoutines.count ()) {
      f = gCategoryMethodTable_midrange_5F_instruction_addUsedRoutines (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_instruction_addUsedRoutines.count ()) {
           f = gCategoryMethodTable_midrange_5F_instruction_addUsedRoutines (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_instruction_addUsedRoutines.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUsedRoutines, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category getter '@midrange_intermediate_instruction instructionLength'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_midrange_5F_intermediate_5F_instruction_instructionLength> gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_instructionLength ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_instructionLength (const int32_t inClassIndex,
                                            categoryGetterSignature_midrange_5F_intermediate_5F_instruction_instructionLength inGetter) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_instructionLength.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_midrange_5F_intermediate_5F_instruction_instructionLength (void) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_instructionLength.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_instructionLength (NULL,
                                                                                      freeCategoryGetter_midrange_5F_intermediate_5F_instruction_instructionLength) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryGetter_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_midrange_5F_intermediate_5F_instruction_instructionLength f = NULL ;
    if (classIndex < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_instructionLength.count ()) {
      f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_instructionLength (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_instructionLength.count ()) {
           f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_instructionLength (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_instructionLength.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@midrange_intermediate_instruction print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_print> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_print ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_print (const int32_t inClassIndex,
                                categoryMethodSignature_midrange_5F_intermediate_5F_instruction_print inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_print.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_print (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_print.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_print (NULL,
                                                                          freeCategoryMethod_midrange_5F_intermediate_5F_instruction_print) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_print (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                               GALGAS_string & io_ioListFileContents,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_print f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_print.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_print (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_print.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_print (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_print.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioListFileContents, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@midrange_intermediate_instruction setCurrentAddress'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_setCurrentAddress> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_setCurrentAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_setCurrentAddress (const int32_t inClassIndex,
                                            categoryMethodSignature_midrange_5F_intermediate_5F_instruction_setCurrentAddress inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_setCurrentAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_setCurrentAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                           GALGAS_uint & io_ioCurrentAddress,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_setCurrentAddress f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_setCurrentAddress.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_setCurrentAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_setCurrentAddress.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_setCurrentAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_setCurrentAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioCurrentAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_setCurrentAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                      GALGAS_uint & ioArgument_ioCurrentAddress,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction temp_0 = object ;
  ioArgument_ioCurrentAddress = ioArgument_ioCurrentAddress.add_operation (callCategoryGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_set_current_address.galgas", 6)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_set_current_address.galgas", 6)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_setCurrentAddress (void) {
  enterCategoryMethod_setCurrentAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                         categoryMethod_midrange_5F_intermediate_5F_instruction_setCurrentAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_setCurrentAddress (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_setCurrentAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_setCurrentAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_setCurrentAddress,
                                                                                      freeCategoryMethod_midrange_5F_intermediate_5F_instruction_setCurrentAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@midrange_instruction instructionUsesGOTOorCALL'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL> gCategoryMethodTable_midrange_5F_instruction_instructionUsesGOTOorCALL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_instructionUsesGOTOorCALL (const int32_t inClassIndex,
                                                    categoryMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL inMethod) {
  gCategoryMethodTable_midrange_5F_instruction_instructionUsesGOTOorCALL.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * inObject,
                                                   GALGAS_bool & io_ioUsesGOTOorCALL,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_instruction_instructionUsesGOTOorCALL.count ()) {
      f = gCategoryMethodTable_midrange_5F_instruction_instructionUsesGOTOorCALL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_instruction_instructionUsesGOTOorCALL.count ()) {
           f = gCategoryMethodTable_midrange_5F_instruction_instructionUsesGOTOorCALL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_instruction_instructionUsesGOTOorCALL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUsesGOTOorCALL, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_instruction_instructionUsesGOTOorCALL (const cPtr_midrange_5F_instruction * /* inObject */,
                                                                              GALGAS_bool & /* ioArgument_ioUsesGOTOorCALL */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_instruction_instructionUsesGOTOorCALL (void) {
  enterCategoryMethod_instructionUsesGOTOorCALL (kTypeDescriptor_GALGAS_midrange_5F_instruction.mSlotID,
                                                 categoryMethod_midrange_5F_instruction_instructionUsesGOTOorCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_instruction_instructionUsesGOTOorCALL (void) {
  gCategoryMethodTable_midrange_5F_instruction_instructionUsesGOTOorCALL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_instructionUsesGOTOorCALL (defineCategoryMethod_midrange_5F_instruction_instructionUsesGOTOorCALL,
                                                                              freeCategoryMethod_midrange_5F_instruction_instructionUsesGOTOorCALL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category method '@midrange_instruction build_midrange_ipic_instructionList'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList> gCategoryMethodTable_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList (const int32_t inClassIndex,
                                                                       categoryMethodSignature_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList inMethod) {
  gCategoryMethodTable_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList (void) {
  gCategoryMethodTable_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList (NULL,
                                                                                                 freeCategoryMethod_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_build_5F_midrange_5F_ipic_5F_instructionList (const cPtr_midrange_5F_instruction * inObject,
                                                                      const GALGAS_routineMap constin_inRoutineMap,
                                                                      const GALGAS_registerTable constin_inRegisterTable,
                                                                      const GALGAS_constantMap constin_inConstantMap,
                                                                      GALGAS_uint & io_ioLocalLabelIndex,
                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                      GALGAS_string & io_ioListFileContents,
                                                                      const GALGAS_uint constin_inTotalBankCount,
                                                                      GALGAS_uint & io_ioCurrentBank,
                                                                      const GALGAS_bool constin_inShouldPreserveBank,
                                                                      GALGAS_bool & io_ioContinuesInSequence,
                                                                      const GALGAS_routineKind constin_inRoutineKind,
                                                                      GALGAS_stringset & io_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList.count ()) {
      f = gCategoryMethodTable_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList.count ()) {
           f = gCategoryMethodTable_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_instruction_build_5F_midrange_5F_ipic_5F_instructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRoutineMap, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioListFileContents, constin_inTotalBankCount, io_ioCurrentBank, constin_inShouldPreserveBank, io_ioContinuesInSequence, constin_inRoutineKind, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@midrange_conditionExpression buildIPICinstructionForCondition'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_conditionExpression_buildIPICinstructionForCondition> gCategoryMethodTable_midrange_5F_conditionExpression_buildIPICinstructionForCondition ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildIPICinstructionForCondition (const int32_t inClassIndex,
                                                           categoryMethodSignature_midrange_5F_conditionExpression_buildIPICinstructionForCondition inMethod) {
  gCategoryMethodTable_midrange_5F_conditionExpression_buildIPICinstructionForCondition.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_conditionExpression_buildIPICinstructionForCondition (void) {
  gCategoryMethodTable_midrange_5F_conditionExpression_buildIPICinstructionForCondition.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_conditionExpression_buildIPICinstructionForCondition (NULL,
                                                                                             freeCategoryMethod_midrange_5F_conditionExpression_buildIPICinstructionForCondition) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildIPICinstructionForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                          const GALGAS_uint constin_inTotalBankCount,
                                                          const GALGAS_uint constin_inCurrentBank,
                                                          const GALGAS_registerTable constin_inRegisterTable,
                                                          const GALGAS_constantMap constin_inConstantMap,
                                                          GALGAS_uint & io_ioLocalLabelIndex,
                                                          const GALGAS_bool constin_inComplementaryBranch,
                                                          const GALGAS_location constin_inInstructionLocation,
                                                          const GALGAS_string constin_inTargetLabel,
                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                          GALGAS_string & io_ioListFileContents,
                                                          GALGAS_stringset & io_ioUsedRegisters,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_conditionExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_conditionExpression_buildIPICinstructionForCondition f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_conditionExpression_buildIPICinstructionForCondition.count ()) {
      f = gCategoryMethodTable_midrange_5F_conditionExpression_buildIPICinstructionForCondition (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_conditionExpression_buildIPICinstructionForCondition.count ()) {
           f = gCategoryMethodTable_midrange_5F_conditionExpression_buildIPICinstructionForCondition (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_conditionExpression_buildIPICinstructionForCondition.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, constin_inComplementaryBranch, constin_inInstructionLocation, constin_inTargetLabel, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract category method '@midrange_conditionExpression computeInstructionCountForCondition'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_conditionExpression_computeInstructionCountForCondition> gCategoryMethodTable_midrange_5F_conditionExpression_computeInstructionCountForCondition ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_computeInstructionCountForCondition (const int32_t inClassIndex,
                                                              categoryMethodSignature_midrange_5F_conditionExpression_computeInstructionCountForCondition inMethod) {
  gCategoryMethodTable_midrange_5F_conditionExpression_computeInstructionCountForCondition.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_conditionExpression_computeInstructionCountForCondition (void) {
  gCategoryMethodTable_midrange_5F_conditionExpression_computeInstructionCountForCondition.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_conditionExpression_computeInstructionCountForCondition (NULL,
                                                                                                freeCategoryMethod_midrange_5F_conditionExpression_computeInstructionCountForCondition) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_computeInstructionCountForCondition (const cPtr_midrange_5F_conditionExpression * inObject,
                                                             const GALGAS_bool constin_inComplementaryBranch,
                                                             GALGAS_uint & out_outInstructionCount,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstructionCount.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_conditionExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_conditionExpression_computeInstructionCountForCondition f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_conditionExpression_computeInstructionCountForCondition.count ()) {
      f = gCategoryMethodTable_midrange_5F_conditionExpression_computeInstructionCountForCondition (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_conditionExpression_computeInstructionCountForCondition.count ()) {
           f = gCategoryMethodTable_midrange_5F_conditionExpression_computeInstructionCountForCondition (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_conditionExpression_computeInstructionCountForCondition.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inComplementaryBranch, out_outInstructionCount, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category getter '@midrange_intermediate_instruction isLABELorORG'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG> gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isLABELorORG ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_isLABELorORG (const int32_t inClassIndex,
                                       categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG inGetter) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG f = NULL ;
    if (classIndex < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.count ()) {
      f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isLABELorORG (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.count ()) {
           f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isLABELorORG (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (false) ;
//---
  return result_outIsLABELorORG ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG (void) {
  enterCategoryGetter_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                    extensionGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG (void) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG (defineCategoryGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG,
                                                                                 freeCategoryGetter_midrange_5F_intermediate_5F_instruction_isLABELorORG) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category getter '@midrange_intermediate_instruction isNULL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isNULL> gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isNULL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_isNULL (const int32_t inClassIndex,
                                 categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isNULL inGetter) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isNULL f = NULL ;
    if (classIndex < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isNULL.count ()) {
      f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isNULL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isNULL.count ()) {
           f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isNULL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (false) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_midrange_5F_intermediate_5F_instruction_isNULL (void) {
  enterCategoryGetter_isNULL (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                              extensionGetter_midrange_5F_intermediate_5F_instruction_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_midrange_5F_intermediate_5F_instruction_isNULL (void) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isNULL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_isNULL (defineCategoryGetter_midrange_5F_intermediate_5F_instruction_isNULL,
                                                                           freeCategoryGetter_midrange_5F_intermediate_5F_instruction_isNULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@midrange_intermediate_instruction enterReferencedLabel'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterReferencedLabel ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterReferencedLabel (const int32_t inClassIndex,
                                               categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterReferencedLabel.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_stringset & io_ioReferencedLabelSet,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterReferencedLabel.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterReferencedLabel (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterReferencedLabel.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterReferencedLabel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterReferencedLabel.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioReferencedLabelSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_enterReferencedLabel (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         GALGAS_stringset & /* ioArgument_ioReferencedLabelSet */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_enterReferencedLabel (void) {
  enterCategoryMethod_enterReferencedLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_instruction_enterReferencedLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_enterReferencedLabel (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterReferencedLabel.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_enterReferencedLabel (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_enterReferencedLabel,
                                                                                         freeCategoryMethod_midrange_5F_intermediate_5F_instruction_enterReferencedLabel) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category getter '@midrange_intermediate_instruction isSkippingInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isSkippingInstruction> gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_isSkippingInstruction (const int32_t inClassIndex,
                                                categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isSkippingInstruction inGetter) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_midrange_5F_intermediate_5F_instruction_isSkippingInstruction f = NULL ;
    if (classIndex < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
      f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
           f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (false) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  enterCategoryGetter_isSkippingInstruction (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                             extensionGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (defineCategoryGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction,
                                                                                          freeCategoryGetter_midrange_5F_intermediate_5F_instruction_isSkippingInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category getter '@midrange_intermediate_instruction nextInstructionIsReachable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable> gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_nextInstructionIsReachable (const int32_t inClassIndex,
                                                     categoryGetterSignature_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable inGetter) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable f = NULL ;
    if (classIndex < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
      f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
           f = gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (true) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  enterCategoryGetter_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                                  extensionGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  gCategoryGetterTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (defineCategoryGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable,
                                                                                               freeCategoryGetter_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@midrange_intermediate_instruction defineLabel'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabel> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabel ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_defineLabel (const int32_t inClassIndex,
                                      categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabel inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabel.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_defineLabel (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                     GALGAS_symbolTableForOptimizations & io_ioRoutineSymbolTable,
                                     const GALGAS_uint constin_inLineIndex,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabel f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabel.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabel (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabel.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabel.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineSymbolTable, constin_inLineIndex, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_defineLabel (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                GALGAS_symbolTableForOptimizations & /* ioArgument_ioRoutineSymbolTable */,
                                                                                const GALGAS_uint /* constinArgument_inLineIndex */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_defineLabel (void) {
  enterCategoryMethod_defineLabel (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                   categoryMethod_midrange_5F_intermediate_5F_instruction_defineLabel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_defineLabel (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabel.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_defineLabel (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_defineLabel,
                                                                                freeCategoryMethod_midrange_5F_intermediate_5F_instruction_defineLabel) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeMOVLW (const int32_t inClassIndex,
                                        categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeMOVLW (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW (const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                                                                                      const GALGAS_uint constinArgument_inLineIndex,
                                                                                                      GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLiteralInstruction.objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("midrange_optimizations.galgas", 367)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction ;
    {
    routine_findMidRangeFirstInstructionFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 370)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 370)) ;
    }
    if (var_firstInstruction.isValid ()) {
      if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN) {
        {
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 375)), object->mAttribute_mLiteralValue  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 375)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 374)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 379)).add_operation (GALGAS_string (": MOVLW followed by RETURN replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 379)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW (void) {
  enterCategoryMethod_optimizeMOVLW (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation.mSlotID,
                                     categoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW,
                                                                                                      freeCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@midrange_intermediate_incDecRegisterInCondition optimizeTestDecInc'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc> gCategoryMethodTable_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeTestDecInc (const int32_t inClassIndex,
                                             categoryMethodSignature_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeTestDecInc (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                            const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                            const GALGAS_uint constin_inLineIndex,
                                            GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                            GALGAS_string & io_ioListFileContents,
                                            GALGAS_bool & io_ioOptimizationsDone,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                                                                                     const GALGAS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                                                     const GALGAS_uint constinArgument_inLineIndex,
                                                                                                     GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
  GALGAS_uint var_line ;
  GALGAS_bool joker_17257 ; // Joker input parameter
  constinArgument_inSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (object->mAttribute_mTargetLabel, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 395))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 395)), var_line, joker_17257, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 395)) ;
  GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction ;
  {
  routine_findMidRangeFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 398)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 398)) ;
  }
  if (var_firstInstruction.isValid ()) {
    if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
      GALGAS_midrange_5F_intermediate_5F_JUMP cast_17594_jump ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_firstInstruction.ptr ()) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegisterDescription, cast_17594_jump.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 407)).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 407)), object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination, object->mAttribute_mBranchIfZero  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 404)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 403)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 414)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 414)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 415)) ;
      const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 417)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 419)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_optimizations.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 421)) ;
      const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 423)) ;
      }
      const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 426)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 428)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": branching to JUMP replaced by second JUMP label\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 430)) ;
    }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO) {
      GALGAS_midrange_5F_intermediate_5F_GOTO cast_18531_goto ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_firstInstruction.ptr ()) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegisterDescription, cast_18531_goto.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 436)).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 436)), object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination, object->mAttribute_mBranchIfZero  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 433)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 432)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 443)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 443)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 444)) ;
      const enumGalgasBool test_3 = object->mAttribute_mIncrement.boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 446)) ;
      }else if (kBoolFalse == test_3) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 448)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(object->mAttribute_mRegisterDescription.getter_mAssemblyString (SOURCE_FILE ("midrange_optimizations.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 450)) ;
      const enumGalgasBool test_4 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 452)) ;
      }
      const enumGalgasBool test_5 = object->mAttribute_mBranchIfZero.boolEnum () ;
      if (kBoolTrue == test_5) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 455)) ;
      }else if (kBoolFalse == test_5) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 457)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": branching to GOTO replaced by second JUMP label\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 459)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (void) {
  enterCategoryMethod_optimizeTestDecInc (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition.mSlotID,
                                          categoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc (defineCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc,
                                                                                                     freeCategoryMethod_midrange_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@midrange_intermediate_instruction_BitTestSkip optimizeBitTestSkip'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeBitTestSkip (const int32_t inClassIndex,
                                              categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeBitTestSkip (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                             const GALGAS_uint constin_inLineIndex,
                                             GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_bool & io_ioOptimizationsDone,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip (const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                                                                                       const GALGAS_uint constinArgument_inLineIndex,
                                                                                                       GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                                       GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
  GALGAS_string var_jumpLabel = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_ok = GALGAS_bool (false) ;
  if (ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)).isValid ()) {
    if (ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
      GALGAS_midrange_5F_intermediate_5F_JUMP cast_19975_jump ((cPtr_midrange_5F_intermediate_5F_JUMP *) ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)).ptr ()) ;
      var_jumpLabel = cast_19975_jump.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 476)).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 476)) ;
      var_ok = GALGAS_bool (true) ;
    }
  }
  const enumGalgasBool test_0 = var_ok.boolEnum () ;
  if (kBoolTrue == test_0) {
    if (ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)).ptr ())) {
        GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_20242_instruction ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)).ptr ()) ;
        var_ok = GALGAS_bool (kIsEqual, callCategoryGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) cast_20242_instruction.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 484)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
      }else{
        var_ok = GALGAS_bool (false) ;
      }
    }
  }
  const enumGalgasBool test_1 = var_ok.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_midrange_5F_intermediate_5F_instruction var_thirdInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 491)) ;
    GALGAS_stringset var_reachedLabelSet ;
    {
    GALGAS_midrange_5F_intermediate_5F_instruction joker_20604 ; // Joker input parameter
    routine_findMidRangeFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 3U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 493)), ioArgument_ioGeneratedInstructionList, joker_20604, var_reachedLabelSet, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 493)) ;
    }
    var_ok = var_reachedLabelSet.getter_hasKey (var_jumpLabel COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 494)) ;
  }
  const enumGalgasBool test_2 = var_ok.boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSkipIfSet.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 502)), object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 500)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 499)) ;
    }
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 509)), constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 508)) ;
    }
    ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  lines ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)).add_operation (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)).getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" bit test skip, following by a JUMP skipping next instruction, is complemented\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 516)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip (void) {
  enterCategoryMethod_optimizeBitTestSkip (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip.mSlotID,
                                           categoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip,
                                                                                                       freeCategoryMethod_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_optimizeBitTestSkip) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@midrange_intermediate_instruction defineLabelAtAddress'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_defineLabelAtAddress (const int32_t inClassIndex,
                                               categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_midrange_5F_symbolTableForConvertingRelatives & io_ioRoutineSymbolTable,
                                              GALGAS_uint & io_ioAddress,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineSymbolTable, io_ioAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                         GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                         GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress (void) {
  enterCategoryMethod_defineLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                            categoryMethod_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress,
                                                                                         freeCategoryMethod_midrange_5F_intermediate_5F_instruction_defineLabelAtAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category method '@midrange_intermediate_instruction compute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_compute> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_compute ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_compute (const int32_t inClassIndex,
                                  categoryMethodSignature_midrange_5F_intermediate_5F_instruction_compute inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_compute.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_compute (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_compute.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_compute (NULL,
                                                                            freeCategoryMethod_midrange_5F_intermediate_5F_instruction_compute) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_compute (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                 const GALGAS_midrange_5F_symbolTableForConvertingRelatives constin_inRoutineSymbolTable,
                                 GALGAS_uint & io_ioAddress,
                                 GALGAS_bool & io_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                 GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                 const GALGAS_uint constin_inIndex,
                                 GALGAS_string & io_ioListFileContents,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_compute f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_compute.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_compute (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_compute.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_compute (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_compute.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRoutineSymbolTable, io_ioAddress, io_ioJUMP_5F_or_5F_JSR_5F_fixed, io_ioGeneratedInstructionList, constin_inIndex, io_ioListFileContents, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@midrange_intermediate_instruction buildAssemblyCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_buildAssemblyCode> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_buildAssemblyCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildAssemblyCode (const int32_t inClassIndex,
                                            categoryMethodSignature_midrange_5F_intermediate_5F_instruction_buildAssemblyCode inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_buildAssemblyCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_buildAssemblyCode (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_buildAssemblyCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_buildAssemblyCode (NULL,
                                                                                      freeCategoryMethod_midrange_5F_intermediate_5F_instruction_buildAssemblyCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildAssemblyCode (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                           GALGAS_string & io_ioString,
                                           GALGAS_uint & io_ioLocalLabelIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_buildAssemblyCode f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_buildAssemblyCode.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_buildAssemblyCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_buildAssemblyCode.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_buildAssemblyCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_buildAssemblyCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioString, io_ioLocalLabelIndex, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@midrange_intermediate_instruction enterLabelAtAddress'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterLabelAtAddress (const int32_t inClassIndex,
                                              categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                             GALGAS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                             GALGAS_uint & io_ioAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineSymbolTable, io_ioAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                        GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                        GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress (void) {
  enterCategoryMethod_enterLabelAtAddress (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                           categoryMethod_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress (defineCategoryMethod_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress,
                                                                                        freeCategoryMethod_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@midrange_intermediate_instruction generateBinaryCodeAtAddress'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress> gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateBinaryCodeAtAddress (const int32_t inClassIndex,
                                                      categoryMethodSignature_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress (NULL,
                                                                                                freeCategoryMethod_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateBinaryCodeAtAddress (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                     const GALGAS_registerTable constin_inRegisterTable,
                                                     const GALGAS_constantMap constin_inConstantMap,
                                                     const GALGAS_uint constin_inTotalBankCount,
                                                     const GALGAS_midrange_5F_symbolTable constin_inRoutineSymbolTable,
                                                     GALGAS_string & io_ioListFileContents,
                                                     GALGAS_uint & io_ioAddress,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_instruction_generateBinaryCodeAtAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, constin_inTotalBankCount, constin_inRoutineSymbolTable, io_ioListFileContents, io_ioAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Getter '@midrange_instruction_FD_base_code basecode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint extensionGetter_basecode (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 1792U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 1280U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 2304U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 768U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 2816U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 2560U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 3840U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 1024U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 2048U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 3328U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 3072U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 512U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 3584U) ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 1536U) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Getter '@midrange_F_instruction_base_code baseCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint extensionGetter_baseCode (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 384U) ;
    }
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 128U) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@midrange_bit_oriented_op baseCode'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint extensionGetter_baseCode (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 4096U) ;
    }
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 5120U) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Getter '@midrange_literal_instruction_opcode baseCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint extensionGetter_baseCode (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 15872U) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 14592U) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 14336U) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 12288U) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 13312U) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 15360U) ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outBaseCode = GALGAS_uint ((uint32_t) 14848U) ;
    }
    break ;
  }
//---
  return result_outBaseCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Getter '@pic18RegisterComparison mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_pic_31__38_RegisterComparison & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparison temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      result_outResult = GALGAS_string ("!=") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      result_outResult = GALGAS_string ("==") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      result_outResult = GALGAS_string (">=") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      result_outResult = GALGAS_string (">") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      result_outResult = GALGAS_string ("<=") ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      result_outResult = GALGAS_string ("<") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Getter '@conditional_branch condition'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_condition (const GALGAS_conditional_5F_branch & inObject,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_conditional_5F_branch temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      result_outResult = GALGAS_string ("Z") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      result_outResult = GALGAS_string ("NZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      result_outResult = GALGAS_string ("N") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      result_outResult = GALGAS_string ("NN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      result_outResult = GALGAS_string ("C") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      result_outResult = GALGAS_string ("NC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      result_outResult = GALGAS_string ("OV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      result_outResult = GALGAS_string ("NOV") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Getter '@pic18InstructionWithNoOperandKind assemblyCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_assemblyCode (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_InstructionWithNoOperandKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT:
    {
      result_outResult = GALGAS_string ("CLRWDT") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW:
    {
      result_outResult = GALGAS_string ("DAW") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP:
    {
      result_outResult = GALGAS_string ("NOP") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP:
    {
      result_outResult = GALGAS_string ("POP") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH:
    {
      result_outResult = GALGAS_string ("PUSH") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET:
    {
      result_outResult = GALGAS_string ("RESET") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP:
    {
      result_outResult = GALGAS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@FA_instruction_base_code mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_FA_5F_instruction_5F_base_5F_code & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_FA_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outResult = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      result_outResult = GALGAS_string ("CPFSEQ") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      result_outResult = GALGAS_string ("CPFSGT") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      result_outResult = GALGAS_string ("CPFSLT") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outResult = GALGAS_string ("MOVWF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      result_outResult = GALGAS_string ("MULWF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      result_outResult = GALGAS_string ("NEGF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      result_outResult = GALGAS_string ("SETF") ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      result_outResult = GALGAS_string ("TSTFSZ") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category Getter '@bit_oriented_op mnemonic'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_bit_5F_oriented_5F_op & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outResult = GALGAS_string ("BCF") ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outResult = GALGAS_string ("BSF") ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BTG:
    {
      result_outResult = GALGAS_string ("BTG") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Getter '@conditional_branch mnemonic'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_conditional_5F_branch & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_conditional_5F_branch temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      result_outResult = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      result_outResult = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      result_outResult = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      result_outResult = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      result_outResult = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      result_outResult = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      result_outResult = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      result_outResult = GALGAS_string ("BNOV") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Getter '@literal_instruction_opcode mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_literal_5F_instruction_5F_opcode & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      result_outResult = GALGAS_string ("ADDLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outResult = GALGAS_string ("ANDLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outResult = GALGAS_string ("IORLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outResult = GALGAS_string ("MOVLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MULLW:
    {
      result_outResult = GALGAS_string ("MULLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      result_outResult = GALGAS_string ("SUBLW") ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outResult = GALGAS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category Getter '@tableAccessOption mnemonic'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_tableAccessOption & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_tableAccessOption temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      result_outResult = GALGAS_string ("*") ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      result_outResult = GALGAS_string ("*+") ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      result_outResult = GALGAS_string ("*-") ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      result_outResult = GALGAS_string ("+*") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) :
mAttribute_mAssemblyString (),
mAttribute_mRegisterAddress (),
mAttribute_mNeedsBSR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                                      const GALGAS_bool & inOperand2) :
mAttribute_mAssemblyString (inOperand0),
mAttribute_mRegisterAddress (inOperand1),
mAttribute_mNeedsBSR (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_uint::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                                                      const GALGAS_bool & inOperand2 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAssemblyString.objectCompare (inOperand.mAttribute_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsBSR.objectCompare (inOperand.mAttribute_mNeedsBSR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::isValid (void) const {
  return mAttribute_mAssemblyString.isValid () && mAttribute_mRegisterAddress.isValid () && mAttribute_mNeedsBSR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::drop (void) {
  mAttribute_mAssemblyString.drop () ;
  mAttribute_mRegisterAddress.drop () ;
  mAttribute_mNeedsBSR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @ipic18_intermediate_registerExpression:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsBSR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::getter_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssemblyString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::getter_mNeedsBSR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsBSR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @ipic18_intermediate_registerExpression type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ("ipic18_intermediate_registerExpression",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category Getter '@ipic18_intermediate_registerExpression isEqualToRegister'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isEqualToRegister (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                               const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument_inRegister,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (kIsEqual, inObject.mAttribute_mAssemblyString.objectCompare (constinArgument_inRegister.mAttribute_mAssemblyString)) ;
  const enumGalgasBool test_0 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_bool (kIsEqual, inObject.mAttribute_mRegisterAddress.objectCompare (constinArgument_inRegister.mAttribute_mRegisterAddress)) ;
  }
  const enumGalgasBool test_1 = result_outResult.boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult = GALGAS_bool (kIsEqual, inObject.mAttribute_mNeedsBSR.objectCompare (constinArgument_inRegister.mAttribute_mNeedsBSR)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) :
mAttribute_mAssemblyString (),
mAttribute_mRegisterAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GALGAS_string & inOperand0,
                                                                                                                                                              const GALGAS_uint & inOperand1) :
mAttribute_mAssemblyString (inOperand0),
mAttribute_mRegisterAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (GALGAS_string::constructor_default (HERE),
                                                                                        GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                                              const GALGAS_uint & inOperand1 
                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAssemblyString.objectCompare (inOperand.mAttribute_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::isValid (void) const {
  return mAttribute_mAssemblyString.isValid () && mAttribute_mRegisterAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::drop (void) {
  mAttribute_mAssemblyString.drop () ;
  mAttribute_mRegisterAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::description (C_String & ioString,
                                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @ipic18_intermediate_registerExpressionWithoutBSRIndication:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::getter_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssemblyString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          @ipic18_intermediate_registerExpressionWithoutBSRIndication type                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ("ipic18_intermediate_registerExpressionWithoutBSRIndication",
                                                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpressionWithoutBSRIndication", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow> gCategoryMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_instructionRelativeBranchOverflow (const int32_t inClassIndex,
                                                            categoryMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow inMethod) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const GALGAS_uint constin_inAddress,
                                                           const GALGAS_string constin_inBlockLabel,
                                                           const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioOverflowMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                GALGAS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (void) {
  enterCategoryMethod_instructionRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                         categoryMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (void) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow,
                                                                                                freeCategoryMethod_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_terminatorRelativeBranchOverflow (const int32_t inClassIndex,
                                                           categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GALGAS_uint constin_inAddress,
                                                          const GALGAS_string constin_inBlockLabel,
                                                          const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                          const GALGAS_string constin_inNextBlockLabel,
                                                          GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioOverflowMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                 const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                 const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                 const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (void) {
  enterCategoryMethod_terminatorRelativeBranchOverflow (kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator.mSlotID,
                                                        categoryMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow (defineCategoryMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow,
                                                                                                 freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Category method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_performTerminatorRelativeBranchResolution (const int32_t inClassIndex,
                                                                    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                   const GALGAS_uint constin_inAddress,
                                                                   const GALGAS_string constin_inBlockLabel,
                                                                   const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                   const GALGAS_string constin_inNextBlockLabel,
                                                                   GALGAS_uint & io_ioConversionCount,
                                                                   GALGAS_string & io_ioListFileContents,
                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  out_outModifiedTerminator.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioConversionCount, io_ioListFileContents, out_outModifiedTerminator, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                          const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                          const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                          const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                          const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                          GALGAS_uint & /* ioArgument_ioConversionCount */,
                                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                          GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractBlockTerminator * object = inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractBlockTerminator) ;
  const GALGAS_ipic_31__38_AbstractBlockTerminator temp_0 = object ;
  outArgument_outModifiedTerminator = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (void) {
  enterCategoryMethod_performTerminatorRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator.mSlotID,
                                                                 categoryMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution (defineCategoryMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution,
                                                                                                          freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category method '@ipic18SequentialInstruction generateCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SequentialInstruction_generateCode> gCategoryMethodTable_ipic_31__38_SequentialInstruction_generateCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateCode (const int32_t inClassIndex,
                                       categoryMethodSignature_ipic_31__38_SequentialInstruction_generateCode inMethod) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_generateCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SequentialInstruction_generateCode (void) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_generateCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_generateCode (NULL,
                                                                           freeCategoryMethod_ipic_31__38_SequentialInstruction_generateCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateCode (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                      const GALGAS_uint constin_inAddress,
                                      const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                      const GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                      GALGAS_codeList & out_outCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCode.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SequentialInstruction_generateCode f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SequentialInstruction_generateCode.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SequentialInstruction_generateCode.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_generateCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SequentialInstruction_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inSymbolTable, constin_inDataMap, out_outCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@ipic18AbstractBlockTerminator generateTerminatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateTerminatorCode (const int32_t inClassIndex,
                                                 categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode (NULL,
                                                                                       freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateTerminatorCode (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                const GALGAS_uint constin_inAddress,
                                                const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                const GALGAS_string constin_inNextBlockLabel,
                                                GALGAS_codeList & out_outCode,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCode.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inSymbolTable, constin_inNextBlockLabel, out_outCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category getter '@ipic18AbstractBlockTerminator isEqualToTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator> gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_isEqualToTerminator (const int32_t inClassIndex,
                                              categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator inGetter) {
  gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator (void) {
  gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator (NULL,
                                                                                    freeCategoryGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_isEqualToTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & in_inTerminator,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator f = NULL ;
    if (classIndex < gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.count ()) {
      f = gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.count ()) {
           f = gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inTerminator, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category getter '@ipic18AbstractBlockTerminator terminatorDisplay'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_terminatorDisplay> gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_terminatorDisplay (const int32_t inClassIndex,
                                            categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_terminatorDisplay inGetter) {
  gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay (void) {
  gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay (NULL,
                                                                                  freeCategoryGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryGetter_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                    const GALGAS_string & in_inNextBlockLabel,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_terminatorDisplay f = NULL ;
    if (classIndex < gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.count ()) {
      f = gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.count ()) {
           f = gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorDisplay.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inNextBlockLabel, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category getter '@ipic18AbstractBlockTerminator terminatorSize'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_terminatorSize> gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_terminatorSize (const int32_t inClassIndex,
                                         categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_terminatorSize inGetter) {
  gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize (void) {
  gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize (NULL,
                                                                               freeCategoryGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryGetter_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                               const GALGAS_string & in_inNextBlockLabel,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_terminatorSize f = NULL ;
    if (classIndex < gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.count ()) {
      f = gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.count ()) {
           f = gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_terminatorSize.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inNextBlockLabel, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category getter '@ipic18SequentialInstruction instructionSize'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_ipic_31__38_SequentialInstruction_instructionSize> gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionSize ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_instructionSize (const int32_t inClassIndex,
                                          categoryGetterSignature_ipic_31__38_SequentialInstruction_instructionSize inGetter) {
  gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionSize.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_ipic_31__38_SequentialInstruction_instructionSize f = NULL ;
    if (classIndex < gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionSize.count ()) {
      f = gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionSize (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionSize.count ()) {
           f = gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionSize (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionSize.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_ipic_31__38_SequentialInstruction_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint ((uint32_t) 2U) ;
//---
  return result_outSize ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_ipic_31__38_SequentialInstruction_instructionSize (void) {
  enterCategoryGetter_instructionSize (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                       extensionGetter_ipic_31__38_SequentialInstruction_instructionSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_ipic_31__38_SequentialInstruction_instructionSize (void) {
  gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionSize.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_SequentialInstruction_instructionSize (defineCategoryGetter_ipic_31__38_SequentialInstruction_instructionSize,
                                                                              freeCategoryGetter_ipic_31__38_SequentialInstruction_instructionSize) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Category method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution> gCategoryMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_performInstructionRelativeBranchResolution (const int32_t inClassIndex,
                                                                     categoryMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution inMethod) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    const GALGAS_uint constin_inAddress,
                                                                    const GALGAS_string constin_inBlockLabel,
                                                                    const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    GALGAS_uint & io_ioConversionCount,
                                                                    GALGAS_string & io_ioListFileContents,
                                                                    GALGAS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  out_outModifiedInstruction.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioConversionCount, io_ioListFileContents, out_outModifiedInstruction, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                         const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                         const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                                         const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                         GALGAS_uint & /* ioArgument_ioConversionCount */,
                                                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_SequentialInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_SequentialInstruction) ;
  const GALGAS_ipic_31__38_SequentialInstruction temp_0 = object ;
  outArgument_outModifiedInstruction = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (void) {
  enterCategoryMethod_performInstructionRelativeBranchResolution (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                                  categoryMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (void) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution (defineCategoryMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution,
                                                                                                         freeCategoryMethod_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category getter '@ipic18SequentialInstruction instructionDisplay'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_ipic_31__38_SequentialInstruction_instructionDisplay> gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_instructionDisplay (const int32_t inClassIndex,
                                             categoryGetterSignature_ipic_31__38_SequentialInstruction_instructionDisplay inGetter) {
  gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_ipic_31__38_SequentialInstruction_instructionDisplay (void) {
  gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_SequentialInstruction_instructionDisplay (NULL,
                                                                                 freeCategoryGetter_ipic_31__38_SequentialInstruction_instructionDisplay) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist callCategoryGetter_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_stringlist result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_ipic_31__38_SequentialInstruction_instructionDisplay f = NULL ;
    if (classIndex < gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.count ()) {
      f = gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.count ()) {
           f = gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_ipic_31__38_SequentialInstruction_instructionDisplay.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Getter '@pic18InstructionWithNoOperandKind mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mnemonic (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_InstructionWithNoOperandKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT:
    {
      result_outResult = GALGAS_string ("CLRWDT") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW:
    {
      result_outResult = GALGAS_string ("DAW") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP:
    {
      result_outResult = GALGAS_string ("NOP") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP:
    {
      result_outResult = GALGAS_string ("POP") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH:
    {
      result_outResult = GALGAS_string ("PUSH") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET:
    {
      result_outResult = GALGAS_string ("RESET") ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP:
    {
      result_outResult = GALGAS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@pic18PiccoloInstruction addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines> gCategoryMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addUsedRoutines (const int32_t inClassIndex,
                                          categoryMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines inMethod) {
  gCategoryMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_pic_31__38_PiccoloInstruction_addUsedRoutines (void) {
  gCategoryMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_PiccoloInstruction_addUsedRoutines (NULL,
                                                                          freeCategoryMethod_pic_31__38_PiccoloInstruction_addUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                         const GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                         GALGAS_stringset & io_ioUsedRoutines,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines f = NULL ;
    if (classIndex < gCategoryMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.count ()) {
      f = gCategoryMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.count ()) {
           f = gCategoryMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_pic_31__38_PiccoloInstruction_addUsedRoutines.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inMacroMap, io_ioUsedRoutines, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@pic18PiccoloInstruction performInlining'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_pic_31__38_PiccoloInstruction_performInlining> gCategoryMethodTable_pic_31__38_PiccoloInstruction_performInlining ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_performInlining (const int32_t inClassIndex,
                                          categoryMethodSignature_pic_31__38_PiccoloInstruction_performInlining inMethod) {
  gCategoryMethodTable_pic_31__38_PiccoloInstruction_performInlining.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                         const GALGAS_stringset constin_inInlinedRoutineSet,
                                         const GALGAS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                         const GALGAS_stringset constin_inCurrentlyInlinedRoutineSet,
                                         GALGAS_pic_31__38_InstructionList & io_ioInstructionList,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_pic_31__38_PiccoloInstruction_performInlining f = NULL ;
    if (classIndex < gCategoryMethodTable_pic_31__38_PiccoloInstruction_performInlining.count ()) {
      f = gCategoryMethodTable_pic_31__38_PiccoloInstruction_performInlining (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_pic_31__38_PiccoloInstruction_performInlining.count ()) {
           f = gCategoryMethodTable_pic_31__38_PiccoloInstruction_performInlining (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_pic_31__38_PiccoloInstruction_performInlining.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inInlinedRoutineSet, constin_inDeclaredRoutineMap, constin_inCurrentlyInlinedRoutineSet, io_ioInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_PiccoloInstruction_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                          const GALGAS_stringset /* constinArgument_inInlinedRoutineSet */,
                                                                          const GALGAS_declaredRoutineMap /* constinArgument_inDeclaredRoutineMap */,
                                                                          const GALGAS_stringset /* constinArgument_inCurrentlyInlinedRoutineSet */,
                                                                          GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_PiccoloInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_PiccoloInstruction) ;
  const GALGAS_pic_31__38_PiccoloInstruction temp_0 = object ;
  ioArgument_ioInstructionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 22)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_PiccoloInstruction_performInlining (void) {
  enterCategoryMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction.mSlotID,
                                       categoryMethod_pic_31__38_PiccoloInstruction_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_pic_31__38_PiccoloInstruction_performInlining (void) {
  gCategoryMethodTable_pic_31__38_PiccoloInstruction_performInlining.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_PiccoloInstruction_performInlining (defineCategoryMethod_pic_31__38_PiccoloInstruction_performInlining,
                                                                          freeCategoryMethod_pic_31__38_PiccoloInstruction_performInlining) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction> gCategoryMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeSimpleInstruction (const int32_t inClassIndex,
                                                   categoryMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction inMethod) {
  gCategoryMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction (void) {
  gCategoryMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction (NULL,
                                                                                         freeCategoryMethod_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                  const GALGAS_uint constin_inAccessBankSplitOffset,
                                                  const GALGAS_routineMap constin_inRoutineMap,
                                                  const GALGAS_registerTable constin_inRegisterTable,
                                                  const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                                  const GALGAS_constantMap constin_inConstantMap,
                                                  GALGAS_uint & io_ioCurrentBank,
                                                  const GALGAS_bool constin_inShouldPreserveBSR,
                                                  GALGAS_stringset & io_ioUsedRegisters,
                                                  GALGAS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstruction.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction f = NULL ;
    if (classIndex < gCategoryMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.count ()) {
      f = gCategoryMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.count ()) {
           f = gCategoryMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, io_ioCurrentBank, constin_inShouldPreserveBSR, io_ioUsedRegisters, out_outInstruction, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@pic18PiccoloInstruction analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_pic_31__38_PiccoloInstruction_analyze> gCategoryMethodTable_pic_31__38_PiccoloInstruction_analyze ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_pic_31__38_PiccoloInstruction_analyze inMethod) {
  gCategoryMethodTable_pic_31__38_PiccoloInstruction_analyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_pic_31__38_PiccoloInstruction_analyze (void) {
  gCategoryMethodTable_pic_31__38_PiccoloInstruction_analyze.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_PiccoloInstruction_analyze (NULL,
                                                                  freeCategoryMethod_pic_31__38_PiccoloInstruction_analyze) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                 const GALGAS_uint constin_inAccessBankSplitOffset,
                                 GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                 const GALGAS_routineMap constin_inRoutineMap,
                                 const GALGAS_registerTable constin_inRegisterTable,
                                 const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                 const GALGAS_constantMap constin_inConstantMap,
                                 const GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                 GALGAS_uint & io_ioLocalLabelIndex,
                                 GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                 GALGAS_lstring & io_ioBlockLabel,
                                 GALGAS_string & io_ioListFileContents,
                                 GALGAS_uint & io_ioCurrentBank,
                                 const GALGAS_bool constin_inShouldPreserveBSR,
                                 const GALGAS_routineKind constin_inRoutineKind,
                                 GALGAS_stringset & io_ioUsedRegisters,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_pic_31__38_PiccoloInstruction_analyze f = NULL ;
    if (classIndex < gCategoryMethodTable_pic_31__38_PiccoloInstruction_analyze.count ()) {
      f = gCategoryMethodTable_pic_31__38_PiccoloInstruction_analyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_pic_31__38_PiccoloInstruction_analyze.count ()) {
           f = gCategoryMethodTable_pic_31__38_PiccoloInstruction_analyze (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_pic_31__38_PiccoloInstruction_analyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, io_ioGeneratedBlockList, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, constin_inMacroMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioBlockLabel, io_ioListFileContents, io_ioCurrentBank, constin_inShouldPreserveBSR, constin_inRoutineKind, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@pic18AbstractCaseItem analyzeCaseItem'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem> gCategoryMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeCaseItem (const int32_t inClassIndex,
                                          categoryMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem inMethod) {
  gCategoryMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_pic_31__38_AbstractCaseItem_analyzeCaseItem (void) {
  gCategoryMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_AbstractCaseItem_analyzeCaseItem (NULL,
                                                                        freeCategoryMethod_pic_31__38_AbstractCaseItem_analyzeCaseItem) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                         const GALGAS_registerTable constin_inRegisterTable,
                                         const GALGAS_constantMap constin_inConstantMap,
                                         const GALGAS_lstring constin_inConditionTrueLabel,
                                         GALGAS_stringset & io_ioUsedRegisters,
                                         GALGAS_caseConstantMap & io_ioCaseConstantMap,
                                         GALGAS_uint & io_ioLocalLabelIndex,
                                         GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                         GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                         GALGAS_lstring & io_ioBlockLabel,
                                         GALGAS_sint_36__34_ & io_ioLastComparisonValue,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_AbstractCaseItem) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem f = NULL ;
    if (classIndex < gCategoryMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.count ()) {
      f = gCategoryMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.count ()) {
           f = gCategoryMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_pic_31__38_AbstractCaseItem_analyzeCaseItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, constin_inConditionTrueLabel, io_ioUsedRegisters, io_ioCaseConstantMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioGeneratedBlockList, io_ioBlockLabel, io_ioLastComparisonValue, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks> gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addVisitedBlocks (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks inMethod) {
  gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractBlockTerminationForBlockInstruction_addVisitedBlocks (void) {
  gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractBlockTerminationForBlockInstruction_addVisitedBlocks (NULL,
                                                                                         freeCategoryMethod_abstractBlockTerminationForBlockInstruction_addVisitedBlocks) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                          GALGAS_stringset & io_ioVisitedBlockSet,
                                          const GALGAS_blockInstructionBlockMap constin_inBlockMap,
                                          const GALGAS_string constin_inCurrentBlockName,
                                          const GALGAS_uint constin_inInitialBlockSetting,
                                          GALGAS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                          GALGAS_bool & io_ioContinuesInSequence,
                                          GALGAS_bool & io_ioContinueAccessibilityExploration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBlockTerminationForBlockInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.count ()) {
      f = gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.count ()) {
           f = gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_addVisitedBlocks.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioVisitedBlockSet, constin_inBlockMap, constin_inCurrentBlockName, constin_inInitialBlockSetting, io_ioBlockInitialBankSelectionMap, io_ioContinuesInSequence, io_ioContinueAccessibilityExploration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category method '@abstractBlockTerminationForBlockInstruction generateBlock'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock> gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_generateBlock (const int32_t inClassIndex,
                                        categoryMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock inMethod) {
  gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractBlockTerminationForBlockInstruction_generateBlock (void) {
  gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractBlockTerminationForBlockInstruction_generateBlock (NULL,
                                                                                      freeCategoryMethod_abstractBlockTerminationForBlockInstruction_generateBlock) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                       const GALGAS_uint constin_inAccessBankSplitOffset,
                                       const GALGAS_uint constin_inCurrentBank,
                                       const GALGAS_registerTable constin_inRegisterTable,
                                       const GALGAS_constantMap constin_inConstantMap,
                                       GALGAS_uint & io_ioLocalLabelIndex,
                                       GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                       GALGAS_stringset & io_ioUsedRegisters,
                                       const GALGAS_string constin_inLabelForBlock,
                                       GALGAS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outTerminator.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBlockTerminationForBlockInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.count ()) {
      f = gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.count ()) {
           f = gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractBlockTerminationForBlockInstruction_generateBlock.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, io_ioUsedRegisters, constin_inLabelForBlock, out_outTerminator, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category method '@pic18ConditionExpression analyzeCondition'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_pic_31__38_ConditionExpression_analyzeCondition> gCategoryMethodTable_pic_31__38_ConditionExpression_analyzeCondition ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeCondition (const int32_t inClassIndex,
                                           categoryMethodSignature_pic_31__38_ConditionExpression_analyzeCondition inMethod) {
  gCategoryMethodTable_pic_31__38_ConditionExpression_analyzeCondition.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_pic_31__38_ConditionExpression_analyzeCondition (void) {
  gCategoryMethodTable_pic_31__38_ConditionExpression_analyzeCondition.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_ConditionExpression_analyzeCondition (NULL,
                                                                            freeCategoryMethod_pic_31__38_ConditionExpression_analyzeCondition) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                          const GALGAS_uint constin_inAccessBankSplitOffset,
                                          const GALGAS_uint constin_inCurrentBank,
                                          const GALGAS_registerTable constin_inRegisterTable,
                                          const GALGAS_constantMap constin_inConstantMap,
                                          GALGAS_uint & io_ioLocalLabelIndex,
                                          GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          const GALGAS_lstring constin_inConditionTrueLabel,
                                          const GALGAS_lstring constin_inConditionFalseLabel,
                                          GALGAS_stringset & io_ioUsedRegisters,
                                          GALGAS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCurrentBlockTerminator.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_ConditionExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_pic_31__38_ConditionExpression_analyzeCondition f = NULL ;
    if (classIndex < gCategoryMethodTable_pic_31__38_ConditionExpression_analyzeCondition.count ()) {
      f = gCategoryMethodTable_pic_31__38_ConditionExpression_analyzeCondition (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_pic_31__38_ConditionExpression_analyzeCondition.count ()) {
           f = gCategoryMethodTable_pic_31__38_ConditionExpression_analyzeCondition (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_pic_31__38_ConditionExpression_analyzeCondition.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, constin_inConditionTrueLabel, constin_inConditionFalseLabel, io_ioUsedRegisters, out_outCurrentBlockTerminator, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract category method '@ipic18AbstractBlockTerminator optimizeTerminator'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeTerminator (const int32_t inClassIndex,
                                             categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_optimizeTerminator (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_optimizeTerminator (NULL,
                                                                                   freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_optimizeTerminator) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                            const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                            const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                            const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                            const GALGAS_string constin_inBlockLabel,
                                            GALGAS_bool & io_ioOptimizationDone,
                                            GALGAS_string & io_ioListFileContents,
                                            GALGAS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outOptimizedTerminator.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_optimizeTerminator.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTerminator, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@ipic18AbstractConditionTerminator getOptimizedTerminators'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators> gCategoryMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getOptimizedTerminators (const int32_t inClassIndex,
                                                  categoryMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getOptimizedTerminators (const cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                 const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                 const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                 const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                 const GALGAS_string constin_inBlockLabel,
                                                 GALGAS_bool & io_ioOptimizationDone,
                                                 GALGAS_string & io_ioListFileContents,
                                                 GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                 GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                 GALGAS_bool & out_outIdenticalTerminators,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  out_outOptimizedTrueTerminator.drop () ;
  out_outOptimizedFalseTerminator.drop () ;
  out_outIdenticalTerminators.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTrueTerminator, out_outOptimizedFalseTerminator, out_outIdenticalTerminators, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (const cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                                                            const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                            const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                                            GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                            GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedTrueTerminator,
                                                                                            GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedFalseTerminator,
                                                                                            GALGAS_bool & outArgument_outIdenticalTerminators,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedTrueTerminator ;
  callCategoryMethod_optimizeTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedTrueTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 164)) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator temp_0 ;
  if (var_optimizedTrueTerminator.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedTrueTerminator.ptr ())) {
      temp_0 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 173)) ;
    }
  }
  outArgument_outOptimizedTrueTerminator = temp_0 ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedFalseTerminator ;
  callCategoryMethod_optimizeTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedFalseTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 175)) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator temp_1 ;
  if (var_optimizedFalseTerminator.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedFalseTerminator.ptr ())) {
      temp_1 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedFalseTerminator.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 184)) ;
    }
  }
  outArgument_outOptimizedFalseTerminator = temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 186)).boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outIdenticalTerminators = GALGAS_bool (true) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 188)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_ipic_31__38_RetlwTerminator temp_4 ;
      if (outArgument_outOptimizedTrueTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
          temp_4 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 189)) ;
        }
      }
      GALGAS_ipic_31__38_RetlwTerminator var_t = temp_4 ;
      GALGAS_ipic_31__38_RetlwTerminator temp_5 ;
      if (outArgument_outOptimizedFalseTerminator.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
          temp_5 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 190)) ;
        }
      }
      GALGAS_ipic_31__38_RetlwTerminator var_f = temp_5 ;
      outArgument_outIdenticalTerminators = GALGAS_bool (kIsEqual, var_t.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 191)).objectCompare (var_f.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 191)))) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_6 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_ipic_31__38_JumpTerminator temp_7 ;
        if (outArgument_outOptimizedTrueTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
            temp_7 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 193)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_t = temp_7 ;
        GALGAS_ipic_31__38_JumpTerminator temp_8 ;
        if (outArgument_outOptimizedFalseTerminator.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
            temp_8 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 194)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_f = temp_8 ;
        outArgument_outIdenticalTerminators = GALGAS_bool (kIsEqual, var_t.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 195)).objectCompare (var_f.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 195)))) ;
      }else if (kBoolFalse == test_6) {
        outArgument_outIdenticalTerminators = GALGAS_bool (false) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (void) {
  enterCategoryMethod_getOptimizedTerminators (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (void) {
  gCategoryMethodTable_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators (defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators,
                                                                                            freeCategoryMethod_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterTerminatorReferencedLabels (const int32_t inClassIndex,
                                                          categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels (NULL,
                                                                                                freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                         const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                         GALGAS_stringset & io_ioReferencedBlockSet,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@ipic18SequentialInstruction enterInstructionReferencedLabels'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels> gCategoryMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInstructionReferencedLabels (const int32_t inClassIndex,
                                                           categoryMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels inMethod) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                          const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                          GALGAS_stringset & io_ioReferencedBlockSet,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                               const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                               const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                               GALGAS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (void) {
  enterCategoryMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                        categoryMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (void) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels (defineCategoryMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels,
                                                                                               freeCategoryMethod_ipic_31__38_SequentialInstruction_enterInstructionReferencedLabels) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@ipic18SequentialInstruction optimizeInstruction'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction> gCategoryMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeInstruction (const int32_t inClassIndex,
                                              categoryMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction inMethod) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                             const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                             const GALGAS_lstring constin_inBlockLabel,
                                             GALGAS_bool & out_outOptimizationDone,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                             GALGAS_bool & out_outNOPsubstitution,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outOptimizationDone.drop () ;
  out_outOptimizedInstruction.drop () ;
  out_outNOPsubstitution.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SequentialInstruction_optimizeInstruction f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, out_outOptimizationDone, io_ioListFileContents, out_outOptimizedInstruction, out_outNOPsubstitution, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_SequentialInstruction_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                  const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                  const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                  const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                  const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                  GALGAS_bool & outArgument_outOptimizationDone,
                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                  GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_SequentialInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_SequentialInstruction) ;
  const GALGAS_ipic_31__38_SequentialInstruction temp_0 = object ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_SequentialInstruction_optimizeInstruction (void) {
  enterCategoryMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                           categoryMethod_ipic_31__38_SequentialInstruction_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SequentialInstruction_optimizeInstruction (void) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_optimizeInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_optimizeInstruction (defineCategoryMethod_ipic_31__38_SequentialInstruction_optimizeInstruction,
                                                                                  freeCategoryMethod_ipic_31__38_SequentialInstruction_optimizeInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInstructionReferencedLabels (const GALGAS_ipic_31__38_SequentialInstructionList inObject,
                                                      const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                      const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                      GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_SequentialInstructionList temp_0 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_35360 (temp_0, kEnumeration_up) ;
  while (enumerator_35360.hasCurrentObject ()) {
    callCategoryMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_35360.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 938)) ;
    enumerator_35360.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optimizeFlagStruct::GALGAS_optimizeFlagStruct (void) :
mAttribute_mRemoveEmptyRoutine (),
mAttribute_mJSRtoRETLWreplacedByMOVLW (),
mAttribute_mJSRfollowedByRETreplacedByJUMP (),
mAttribute_mMOVLWfollowedByRETreplacedByRETLW (),
mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction (),
mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (),
mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optimizeFlagStruct::~ GALGAS_optimizeFlagStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optimizeFlagStruct::GALGAS_optimizeFlagStruct (const GALGAS_bool & inOperand0,
                                                      const GALGAS_bool & inOperand1,
                                                      const GALGAS_bool & inOperand2,
                                                      const GALGAS_bool & inOperand3,
                                                      const GALGAS_bool & inOperand4,
                                                      const GALGAS_bool & inOperand5,
                                                      const GALGAS_bool & inOperand6) :
mAttribute_mRemoveEmptyRoutine (inOperand0),
mAttribute_mJSRtoRETLWreplacedByMOVLW (inOperand1),
mAttribute_mJSRfollowedByRETreplacedByJUMP (inOperand2),
mAttribute_mMOVLWfollowedByRETreplacedByRETLW (inOperand3),
mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction (inOperand4),
mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (inOperand5),
mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optimizeFlagStruct GALGAS_optimizeFlagStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_optimizeFlagStruct (GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE),
                                    GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optimizeFlagStruct GALGAS_optimizeFlagStruct::constructor_new (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_bool & inOperand1,
                                                                      const GALGAS_bool & inOperand2,
                                                                      const GALGAS_bool & inOperand3,
                                                                      const GALGAS_bool & inOperand4,
                                                                      const GALGAS_bool & inOperand5,
                                                                      const GALGAS_bool & inOperand6 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optimizeFlagStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_optimizeFlagStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_optimizeFlagStruct::objectCompare (const GALGAS_optimizeFlagStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRemoveEmptyRoutine.objectCompare (inOperand.mAttribute_mRemoveEmptyRoutine) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mJSRtoRETLWreplacedByMOVLW.objectCompare (inOperand.mAttribute_mJSRtoRETLWreplacedByMOVLW) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mJSRfollowedByRETreplacedByJUMP.objectCompare (inOperand.mAttribute_mJSRfollowedByRETreplacedByJUMP) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMOVLWfollowedByRETreplacedByRETLW.objectCompare (inOperand.mAttribute_mMOVLWfollowedByRETreplacedByRETLW) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction.objectCompare (inOperand.mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.objectCompare (inOperand.mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.objectCompare (inOperand.mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_optimizeFlagStruct::isValid (void) const {
  return mAttribute_mRemoveEmptyRoutine.isValid () && mAttribute_mJSRtoRETLWreplacedByMOVLW.isValid () && mAttribute_mJSRfollowedByRETreplacedByJUMP.isValid () && mAttribute_mMOVLWfollowedByRETreplacedByRETLW.isValid () && mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction.isValid () && mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.isValid () && mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optimizeFlagStruct::drop (void) {
  mAttribute_mRemoveEmptyRoutine.drop () ;
  mAttribute_mJSRtoRETLWreplacedByMOVLW.drop () ;
  mAttribute_mJSRfollowedByRETreplacedByJUMP.drop () ;
  mAttribute_mMOVLWfollowedByRETreplacedByRETLW.drop () ;
  mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction.drop () ;
  mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.drop () ;
  mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optimizeFlagStruct::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @optimizeFlagStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRemoveEmptyRoutine.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mJSRtoRETLWreplacedByMOVLW.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mJSRfollowedByRETreplacedByJUMP.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMOVLWfollowedByRETreplacedByRETLW.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mRemoveEmptyRoutine (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRemoveEmptyRoutine ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRtoRETLWreplacedByMOVLW (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mJSRtoRETLWreplacedByMOVLW ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRfollowedByRETreplacedByJUMP (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mJSRfollowedByRETreplacedByJUMP ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mMOVLWfollowedByRETreplacedByRETLW (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMOVLWfollowedByRETreplacedByRETLW ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRtoOneInstructionRoutineReplacedByInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mJSRtoOneInstructionRoutineReplacedByInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optimizeFlagStruct::getter_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @optimizeFlagStruct type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optimizeFlagStruct ("optimizeFlagStruct",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optimizeFlagStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optimizeFlagStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optimizeFlagStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optimizeFlagStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optimizeFlagStruct GALGAS_optimizeFlagStruct::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optimizeFlagStruct result ;
  const GALGAS_optimizeFlagStruct * p = (const GALGAS_optimizeFlagStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optimizeFlagStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optimizeFlagStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Getter '@bool flagValue'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_flagValue (const GALGAS_bool & inObject,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_bool temp_0 = inObject ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("enabled") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("disabled") ;
  }
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@ipic18SequentialInstruction buildInstructionInvocationGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph> gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildInstructionInvocationGraph (const int32_t inClassIndex,
                                                          categoryMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph inMethod) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                         const GALGAS_lstring constin_inBlockLabel,
                                                         GALGAS_string & io_ioGraphVizString,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inBlockLabel, io_ioGraphVizString, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                              const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                              GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (void) {
  enterCategoryMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                       categoryMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (void) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph (defineCategoryMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph,
                                                                                              freeCategoryMethod_ipic_31__38_SequentialInstruction_buildInstructionInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildTerminatorInvocationGraph (const int32_t inClassIndex,
                                                         categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph (NULL,
                                                                                               freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                        const GALGAS_lstring constin_inBlockLabel,
                                                        GALGAS_string & io_ioGraphVizString,
                                                        const GALGAS_bool constin_inDottedArrow,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inBlockLabel, io_ioGraphVizString, constin_inDottedArrow, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract category getter '@ipic18AbstractBlockTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction> gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_needToInsertJumpInstruction (const int32_t inClassIndex,
                                                      categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction inGetter) {
  gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction (void) {
  gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction (NULL,
                                                                                            freeCategoryGetter_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryGetter_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                            const GALGAS_string & in_inNextBlockLabel,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction f = NULL ;
    if (classIndex < gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.count ()) {
      f = gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.count ()) {
           f = gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_ipic_31__38_AbstractBlockTerminator_needToInsertJumpInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inNextBlockLabel, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@ipic18AbstractBlockTerminator buildTerminatorOrderedGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildTerminatorOrderedGraph (const int32_t inClassIndex,
                                                      categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                     const GALGAS_lstring constin_inBlockLabel,
                                                     GALGAS_blockInvocationGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inBlockLabel, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                            const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                            GALGAS_blockInvocationGraph & /* ioArgument_ioGraph */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator.mSlotID,
                                                   categoryMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph,
                                                                                            freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_buildTerminatorOrderedGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Getter '@uint x4string'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_x_34_string (const GALGAS_uint & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GALGAS_uint ((uint32_t) 4096U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 13)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 13)) ;
  const GALGAS_uint temp_1 = inObject ;
  result_outResult.plusAssign_operation(temp_1.divide_operation (GALGAS_uint ((uint32_t) 256U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 14)) ;
  const GALGAS_uint temp_2 = inObject ;
  result_outResult.plusAssign_operation(temp_2.divide_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 15)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 15)) ;
  const GALGAS_uint temp_3 = inObject ;
  result_outResult.plusAssign_operation(temp_3.operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 16)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Getter '@uint x6string'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_x_36_string (const GALGAS_uint & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_uint temp_0 = inObject ;
  result_outResult = temp_0.divide_operation (GALGAS_uint ((uint32_t) 65536U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 22)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 22)) ;
  const GALGAS_uint temp_1 = inObject ;
  result_outResult.plusAssign_operation(temp_1.divide_operation (GALGAS_uint ((uint32_t) 4096U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 23)) ;
  const GALGAS_uint temp_2 = inObject ;
  result_outResult.plusAssign_operation(temp_2.divide_operation (GALGAS_uint ((uint32_t) 256U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 24)) ;
  const GALGAS_uint temp_3 = inObject ;
  result_outResult.plusAssign_operation(temp_3.divide_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 25)) ;
  const GALGAS_uint temp_4 = inObject ;
  result_outResult.plusAssign_operation(temp_4.operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)).getter_xString (SOURCE_FILE ("ipic18_code_generation.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 26)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract category method '@ipic18AbstractBlockTerminator exploreAccessibleBlocksForStackComputations'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_exploreAccessibleBlocksForStackComputations (const int32_t inClassIndex,
                                                                      categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations (NULL,
                                                                                                            freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_exploreAccessibleBlocksForStackComputations (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                     GALGAS_stringset & io_ioBlockToExploreSet,
                                                                     GALGAS_stringset & io_ioExploredBlockSet,
                                                                     GALGAS_uint & out_outStackNeeds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outStackNeeds.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocksForStackComputations.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioBlockToExploreSet, io_ioExploredBlockSet, out_outStackNeeds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Category method '@ipic18SequentialInstruction buildCalledRoutineSetForStackComputations'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations> gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildCalledRoutineSetForStackComputations (const int32_t inClassIndex,
                                                                    categoryMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations inMethod) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                   GALGAS_stringset & io_ioRoutineCalledSet,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRoutineCalledSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                                                        GALGAS_stringset & /* ioArgument_ioRoutineCalledSet */,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (void) {
  enterCategoryMethod_buildCalledRoutineSetForStackComputations (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                                                 categoryMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (void) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations (defineCategoryMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations,
                                                                                                        freeCategoryMethod_ipic_31__38_SequentialInstruction_buildCalledRoutineSetForStackComputations) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category method '@ipic18AbstractBlockTerminator terminatorMinMaxDuration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration> gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_terminatorMinMaxDuration (const int32_t inClassIndex,
                                                   categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration inMethod) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration (void) {
  gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration (NULL,
                                                                                         freeCategoryMethod_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_terminatorMinMaxDuration (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                  const GALGAS_blockDurationMap constin_inExploredBlockMap,
                                                  const GALGAS_string constin_inNextLabel,
                                                  GALGAS_uint & out_outMin,
                                                  GALGAS_uint & out_outMax,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outMin.drop () ;
  out_outMax.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.count ()) {
      f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.count ()) {
           f = gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_AbstractBlockTerminator_terminatorMinMaxDuration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inExploredBlockMap, constin_inNextLabel, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@ipic18SingleInstructionTerminator duration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SingleInstructionTerminator_duration> gCategoryMethodTable_ipic_31__38_SingleInstructionTerminator_duration ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_duration (const int32_t inClassIndex,
                                   categoryMethodSignature_ipic_31__38_SingleInstructionTerminator_duration inMethod) {
  gCategoryMethodTable_ipic_31__38_SingleInstructionTerminator_duration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SingleInstructionTerminator_duration (void) {
  gCategoryMethodTable_ipic_31__38_SingleInstructionTerminator_duration.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SingleInstructionTerminator_duration (NULL,
                                                                             freeCategoryMethod_ipic_31__38_SingleInstructionTerminator_duration) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_duration (const cPtr_ipic_31__38_SingleInstructionTerminator * inObject,
                                  const GALGAS_blockDurationMap constin_inExploredBlockMap,
                                  const GALGAS_string constin_inNextLabel,
                                  GALGAS_uint & out_outMin,
                                  GALGAS_uint & out_outMax,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outMin.drop () ;
  out_outMax.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SingleInstructionTerminator) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SingleInstructionTerminator_duration f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SingleInstructionTerminator_duration.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SingleInstructionTerminator_duration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SingleInstructionTerminator_duration.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SingleInstructionTerminator_duration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SingleInstructionTerminator_duration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inExploredBlockMap, constin_inNextLabel, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@ipic18SequentialInstruction minMaxDuration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_ipic_31__38_SequentialInstruction_minMaxDuration> gCategoryMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_minMaxDuration (const int32_t inClassIndex,
                                         categoryMethodSignature_ipic_31__38_SequentialInstruction_minMaxDuration inMethod) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                        GALGAS_blockDurationMap in_inExploredBlockMap,
                                        GALGAS_uint & out_outMin,
                                        GALGAS_uint & out_outMax,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  out_outMin.drop () ;
  out_outMax.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_ipic_31__38_SequentialInstruction_minMaxDuration f = NULL ;
    if (classIndex < gCategoryMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.count ()) {
      f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.count ()) {
           f = gCategoryMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, in_inExploredBlockMap, out_outMin, out_outMax, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_SequentialInstruction_minMaxDuration (const cPtr_ipic_31__38_SequentialInstruction * /* inObject */,
                                                                             GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                             GALGAS_uint & outArgument_outMin,
                                                                             GALGAS_uint & outArgument_outMax,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint ((uint32_t) 1U) ;
  outArgument_outMax = GALGAS_uint ((uint32_t) 1U) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_SequentialInstruction_minMaxDuration (void) {
  enterCategoryMethod_minMaxDuration (kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction.mSlotID,
                                      categoryMethod_ipic_31__38_SequentialInstruction_minMaxDuration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_ipic_31__38_SequentialInstruction_minMaxDuration (void) {
  gCategoryMethodTable_ipic_31__38_SequentialInstruction_minMaxDuration.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SequentialInstruction_minMaxDuration (defineCategoryMethod_ipic_31__38_SequentialInstruction_minMaxDuration,
                                                                             freeCategoryMethod_ipic_31__38_SequentialInstruction_minMaxDuration) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@declarationInRam handleDeclaration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_declarationInRam_handleDeclaration> gCategoryMethodTable_declarationInRam_handleDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_handleDeclaration (const int32_t inClassIndex,
                                            categoryMethodSignature_declarationInRam_handleDeclaration inMethod) {
  gCategoryMethodTable_declarationInRam_handleDeclaration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_declarationInRam_handleDeclaration (void) {
  gCategoryMethodTable_declarationInRam_handleDeclaration.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_declarationInRam_handleDeclaration (NULL,
                                                               freeCategoryMethod_declarationInRam_handleDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_handleDeclaration (const cPtr_declarationInRam * inObject,
                                           GALGAS_ramBankTable & io_ioRamBank,
                                           GALGAS_registerTable & io_ioRegisterTable,
                                           const GALGAS_lstring constin_inCurrentRamBank,
                                           GALGAS_declaredByteMap & io_ioDeclaredByteMap,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_declarationInRam) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_declarationInRam_handleDeclaration f = NULL ;
    if (classIndex < gCategoryMethodTable_declarationInRam_handleDeclaration.count ()) {
      f = gCategoryMethodTable_declarationInRam_handleDeclaration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_declarationInRam_handleDeclaration.count ()) {
           f = gCategoryMethodTable_declarationInRam_handleDeclaration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_declarationInRam_handleDeclaration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRamBank, io_ioRegisterTable, constin_inCurrentRamBank, io_ioDeclaredByteMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList_2D_element::GALGAS_declarationInRamList_2D_element (void) :
mAttribute_mDeclarationInRAM () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList_2D_element::~ GALGAS_declarationInRamList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList_2D_element::GALGAS_declarationInRamList_2D_element (const GALGAS_declarationInRam & inOperand0) :
mAttribute_mDeclarationInRAM (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList_2D_element GALGAS_declarationInRamList_2D_element::constructor_new (const GALGAS_declarationInRam & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationInRamList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationInRamList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_declarationInRamList_2D_element::objectCompare (const GALGAS_declarationInRamList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationInRAM.objectCompare (inOperand.mAttribute_mDeclarationInRAM) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_declarationInRamList_2D_element::isValid (void) const {
  return mAttribute_mDeclarationInRAM.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList_2D_element::drop (void) {
  mAttribute_mDeclarationInRAM.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declarationInRamList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @declarationInRamList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclarationInRAM.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRam GALGAS_declarationInRamList_2D_element::getter_mDeclarationInRAM (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationInRAM ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @declarationInRamList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationInRamList_2D_element ("declarationInRamList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declarationInRamList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRamList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declarationInRamList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationInRamList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList_2D_element GALGAS_declarationInRamList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_declarationInRamList_2D_element result ;
  const GALGAS_declarationInRamList_2D_element * p = (const GALGAS_declarationInRamList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationInRamList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRamList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList_2D_element::GALGAS_configDefinitionList_2D_element (void) :
mAttribute_mDefinitionLocation (),
mAttribute_mSettingList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList_2D_element::~ GALGAS_configDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList_2D_element::GALGAS_configDefinitionList_2D_element (const GALGAS_location & inOperand0,
                                                                                const GALGAS_configSettingList & inOperand1) :
mAttribute_mDefinitionLocation (inOperand0),
mAttribute_mSettingList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList_2D_element GALGAS_configDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configDefinitionList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                                 GALGAS_configSettingList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList_2D_element GALGAS_configDefinitionList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                                const GALGAS_configSettingList & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_configDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configDefinitionList_2D_element::objectCompare (const GALGAS_configDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDefinitionLocation.objectCompare (inOperand.mAttribute_mDefinitionLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSettingList.objectCompare (inOperand.mAttribute_mSettingList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_configDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mDefinitionLocation.isValid () && mAttribute_mSettingList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList_2D_element::drop (void) {
  mAttribute_mDefinitionLocation.drop () ;
  mAttribute_mSettingList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configDefinitionList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @configDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDefinitionLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSettingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_configDefinitionList_2D_element::getter_mDefinitionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinitionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList GALGAS_configDefinitionList_2D_element::getter_mSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSettingList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @configDefinitionList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configDefinitionList_2D_element ("configDefinitionList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList_2D_element GALGAS_configDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_configDefinitionList_2D_element result ;
  const GALGAS_configDefinitionList_2D_element * p = (const GALGAS_configDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList_2D_element::GALGAS_immediatExpressionList_2D_element (void) :
mAttribute_mExpression (),
mAttribute_mErrorLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList_2D_element::~ GALGAS_immediatExpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList_2D_element::GALGAS_immediatExpressionList_2D_element (const GALGAS_immediatExpression & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mAttribute_mExpression (inOperand0),
mAttribute_mErrorLocation (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList_2D_element GALGAS_immediatExpressionList_2D_element::constructor_new (const GALGAS_immediatExpression & inOperand0,
                                                                                                    const GALGAS_location & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_immediatExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_immediatExpressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_immediatExpressionList_2D_element::objectCompare (const GALGAS_immediatExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorLocation.objectCompare (inOperand.mAttribute_mErrorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_immediatExpressionList_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () && mAttribute_mErrorLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
  mAttribute_mErrorLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatExpressionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @immediatExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatExpressionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_immediatExpressionList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @immediatExpressionList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatExpressionList_2D_element ("immediatExpressionList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList_2D_element GALGAS_immediatExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatExpressionList_2D_element result ;
  const GALGAS_immediatExpressionList_2D_element * p = (const GALGAS_immediatExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList_2D_element::GALGAS_baseline_5F_instructionList_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList_2D_element::~ GALGAS_baseline_5F_instructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList_2D_element::GALGAS_baseline_5F_instructionList_2D_element (const GALGAS_baseline_5F_instruction & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList_2D_element GALGAS_baseline_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_instruction & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_instructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_instructionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @baseline_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction GALGAS_baseline_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_instructionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instructionList_2D_element ("baseline_instructionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList_2D_element GALGAS_baseline_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList_2D_element::GALGAS_baseline_5F_partList_2D_element (void) :
mAttribute_mCondition (),
mAttribute_mInstructionList (),
mAttribute_mEndOfPartLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList_2D_element::~ GALGAS_baseline_5F_partList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList_2D_element::GALGAS_baseline_5F_partList_2D_element (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                                const GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                const GALGAS_location & inOperand2) :
mAttribute_mCondition (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mEndOfPartLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList_2D_element GALGAS_baseline_5F_partList_2D_element::constructor_new (const GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                                                const GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                                const GALGAS_location & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_baseline_5F_partList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_partList_2D_element::objectCompare (const GALGAS_baseline_5F_partList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mCondition.objectCompare (inOperand.mAttribute_mCondition) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfPartLocation.objectCompare (inOperand.mAttribute_mEndOfPartLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_partList_2D_element::isValid (void) const {
  return mAttribute_mCondition.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfPartLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList_2D_element::drop (void) {
  mAttribute_mCondition.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfPartLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_partList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @baseline_partList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mCondition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_conditionExpression GALGAS_baseline_5F_partList_2D_element::getter_mCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_partList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_partList_2D_element::getter_mEndOfPartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfPartLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_partList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_partList_2D_element ("baseline_partList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_partList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_partList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_partList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_partList_2D_element GALGAS_baseline_5F_partList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_partList_2D_element result ;
  const GALGAS_baseline_5F_partList_2D_element * p = (const GALGAS_baseline_5F_partList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_partList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::~ GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @baseline_intermediate_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instruction GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @baseline_intermediate_instructionList-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element ("baseline_intermediate_instructionList-element",
                                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::~ GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::constructor_new (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::objectCompare (const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @baseline_assembly_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instruction GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_assembly_instructionList-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2D_element ("baseline_assembly_instructionList-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_assembly_5F_instructionList_2D_element GALGAS_baseline_5F_assembly_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instructionList_2D_element result ;
  const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element * p = (const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList_2D_element::GALGAS_midrange_5F_instructionList_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList_2D_element::~ GALGAS_midrange_5F_instructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList_2D_element::GALGAS_midrange_5F_instructionList_2D_element (const GALGAS_midrange_5F_instruction & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList_2D_element GALGAS_midrange_5F_instructionList_2D_element::constructor_new (const GALGAS_midrange_5F_instruction & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_instructionList_2D_element::objectCompare (const GALGAS_midrange_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_instructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_instructionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @midrange_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_instructionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instructionList_2D_element ("midrange_instructionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList_2D_element GALGAS_midrange_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList_2D_element result ;
  const GALGAS_midrange_5F_instructionList_2D_element * p = (const GALGAS_midrange_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList_2D_element::GALGAS_midrange_5F_partList_2D_element (void) :
mAttribute_mCondition (),
mAttribute_mInstructionList (),
mAttribute_mEndOfPartLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList_2D_element::~ GALGAS_midrange_5F_partList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList_2D_element::GALGAS_midrange_5F_partList_2D_element (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                const GALGAS_location & inOperand2) :
mAttribute_mCondition (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mEndOfPartLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList_2D_element GALGAS_midrange_5F_partList_2D_element::constructor_new (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                                const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                                const GALGAS_location & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_midrange_5F_partList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_partList_2D_element::objectCompare (const GALGAS_midrange_5F_partList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mCondition.objectCompare (inOperand.mAttribute_mCondition) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfPartLocation.objectCompare (inOperand.mAttribute_mEndOfPartLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_partList_2D_element::isValid (void) const {
  return mAttribute_mCondition.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfPartLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList_2D_element::drop (void) {
  mAttribute_mCondition.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfPartLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_partList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @midrange_partList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mCondition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_partList_2D_element::getter_mCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_partList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_partList_2D_element::getter_mEndOfPartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfPartLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_partList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_partList_2D_element ("midrange_partList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_partList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_partList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_partList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_partList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_partList_2D_element GALGAS_midrange_5F_partList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList_2D_element result ;
  const GALGAS_midrange_5F_partList_2D_element * p = (const GALGAS_midrange_5F_partList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_partList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_partList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::~ GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::constructor_new (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @midrange_intermediate_instructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instruction GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_intermediate_instructionList-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element ("midrange_intermediate_instructionList-element",
                                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element result ;
  const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element * p = (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList_2D_element::GALGAS_pic_31__38_InstructionList_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList_2D_element::~ GALGAS_pic_31__38_InstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList_2D_element::GALGAS_pic_31__38_InstructionList_2D_element (const GALGAS_pic_31__38_PiccoloInstruction & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList_2D_element GALGAS_pic_31__38_InstructionList_2D_element::constructor_new (const GALGAS_pic_31__38_PiccoloInstruction & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_pic_31__38_InstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_InstructionList_2D_element::objectCompare (const GALGAS_pic_31__38_InstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_InstructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_InstructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_InstructionList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @pic18InstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloInstruction GALGAS_pic_31__38_InstructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18InstructionList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ("pic18InstructionList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_InstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_InstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList_2D_element GALGAS_pic_31__38_InstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList_2D_element result ;
  const GALGAS_pic_31__38_InstructionList_2D_element * p = (const GALGAS_pic_31__38_InstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_InstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_CaseExpressionList_2D_element::GALGAS_pic_31__38_CaseExpressionList_2D_element (void) :
mAttribute_mCaseItem () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_CaseExpressionList_2D_element::~ GALGAS_pic_31__38_CaseExpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_CaseExpressionList_2D_element::GALGAS_pic_31__38_CaseExpressionList_2D_element (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0) :
mAttribute_mCaseItem (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_CaseExpressionList_2D_element GALGAS_pic_31__38_CaseExpressionList_2D_element::constructor_new (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_pic_31__38_CaseExpressionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_CaseExpressionList_2D_element::objectCompare (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mCaseItem.objectCompare (inOperand.mAttribute_mCaseItem) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_CaseExpressionList_2D_element::isValid (void) const {
  return mAttribute_mCaseItem.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_CaseExpressionList_2D_element::drop (void) {
  mAttribute_mCaseItem.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_CaseExpressionList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @pic18CaseExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mCaseItem.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AbstractCaseItem GALGAS_pic_31__38_CaseExpressionList_2D_element::getter_mCaseItem (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCaseItem ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18CaseExpressionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ("pic18CaseExpressionList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_CaseExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_CaseExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_CaseExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_CaseExpressionList_2D_element GALGAS_pic_31__38_CaseExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList_2D_element result ;
  const GALGAS_pic_31__38_CaseExpressionList_2D_element * p = (const GALGAS_pic_31__38_CaseExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_CaseExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18CaseExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) :
mAttribute_mStartOfCase (),
mAttribute_mCaseExpressionList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::~ GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (const GALGAS_location & inOperand0,
                                                                                                                const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand2) :
mAttribute_mStartOfCase (inOperand0),
mAttribute_mCaseExpressionList (inOperand1),
mAttribute_mInstructionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_pic_31__38_CaseExpressionList::constructor_emptyList (HERE),
                                                                 GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                                                                const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand2 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::objectCompare (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStartOfCase.objectCompare (inOperand.mAttribute_mStartOfCase) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCaseExpressionList.objectCompare (inOperand.mAttribute_mCaseExpressionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::isValid (void) const {
  return mAttribute_mStartOfCase.isValid () && mAttribute_mCaseExpressionList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::drop (void) {
  mAttribute_mStartOfCase.drop () ;
  mAttribute_mCaseExpressionList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @pic18SwitchInstructionCaseList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStartOfCase.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCaseExpressionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::getter_mStartOfCase (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartOfCase ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::getter_mCaseExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCaseExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic18SwitchInstructionCaseList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ("pic18SwitchInstructionCaseList-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element result ;
  const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element * p = (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SwitchInstructionCaseList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList_2D_element::GALGAS_pic_31__38_DoWhilePartList_2D_element (void) :
mAttribute_mCondition (),
mAttribute_mInstructionList (),
mAttribute_mEndOfPartLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList_2D_element::~ GALGAS_pic_31__38_DoWhilePartList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList_2D_element::GALGAS_pic_31__38_DoWhilePartList_2D_element (const GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                            const GALGAS_location & inOperand2) :
mAttribute_mCondition (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mEndOfPartLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList_2D_element GALGAS_pic_31__38_DoWhilePartList_2D_element::constructor_new (const GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                            const GALGAS_location & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_DoWhilePartList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_DoWhilePartList_2D_element::objectCompare (const GALGAS_pic_31__38_DoWhilePartList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mCondition.objectCompare (inOperand.mAttribute_mCondition) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfPartLocation.objectCompare (inOperand.mAttribute_mEndOfPartLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_DoWhilePartList_2D_element::isValid (void) const {
  return mAttribute_mCondition.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfPartLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_DoWhilePartList_2D_element::drop (void) {
  mAttribute_mCondition.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfPartLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_DoWhilePartList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @pic18DoWhilePartList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mCondition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_DoWhilePartList_2D_element::getter_mCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_DoWhilePartList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_DoWhilePartList_2D_element::getter_mEndOfPartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfPartLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18DoWhilePartList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ("pic18DoWhilePartList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_DoWhilePartList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_DoWhilePartList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_DoWhilePartList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList_2D_element GALGAS_pic_31__38_DoWhilePartList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_DoWhilePartList_2D_element result ;
  const GALGAS_pic_31__38_DoWhilePartList_2D_element * p = (const GALGAS_pic_31__38_DoWhilePartList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_DoWhilePartList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18DoWhilePartList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkpicList_2D_element::GALGAS_checkpicList_2D_element (void) :
mAttribute_mErrorLocation (),
mAttribute_mValueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkpicList_2D_element::~ GALGAS_checkpicList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkpicList_2D_element::GALGAS_checkpicList_2D_element (const GALGAS_location & inOperand0,
                                                                const GALGAS_lstringlist & inOperand1) :
mAttribute_mErrorLocation (inOperand0),
mAttribute_mValueList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkpicList_2D_element GALGAS_checkpicList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkpicList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkpicList_2D_element GALGAS_checkpicList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_checkpicList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_checkpicList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_checkpicList_2D_element::objectCompare (const GALGAS_checkpicList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mErrorLocation.objectCompare (inOperand.mAttribute_mErrorLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValueList.objectCompare (inOperand.mAttribute_mValueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_checkpicList_2D_element::isValid (void) const {
  return mAttribute_mErrorLocation.isValid () && mAttribute_mValueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkpicList_2D_element::drop (void) {
  mAttribute_mErrorLocation.drop () ;
  mAttribute_mValueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_checkpicList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @checkpicList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_checkpicList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_checkpicList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @checkpicList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkpicList_2D_element ("checkpicList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_checkpicList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkpicList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_checkpicList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkpicList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkpicList_2D_element GALGAS_checkpicList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_checkpicList_2D_element result ;
  const GALGAS_checkpicList_2D_element * p = (const GALGAS_checkpicList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkpicList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkpicList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) :
mAttribute_mInstruction (),
mAttribute_mMin (),
mAttribute_mMax () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::~ GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstructionList_2D_element::GALGAS_ipic_31__38_SequentialInstructionList_2D_element (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                  const GALGAS_uint & inOperand2) :
mAttribute_mInstruction (inOperand0),
mAttribute_mMin (inOperand1),
mAttribute_mMax (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstructionList_2D_element GALGAS_ipic_31__38_SequentialInstructionList_2D_element::constructor_new (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1,
                                                                                                                                  const GALGAS_uint & inOperand2 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ipic_31__38_SequentialInstructionList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ipic_31__38_SequentialInstructionList_2D_element::objectCompare (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMin.objectCompare (inOperand.mAttribute_mMin) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMax.objectCompare (inOperand.mAttribute_mMax) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ipic_31__38_SequentialInstructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () && mAttribute_mMin.isValid () && mAttribute_mMax.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38_SequentialInstructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
  mAttribute_mMin.drop () ;
  mAttribute_mMax.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38_SequentialInstructionList_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @ipic18SequentialInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMin.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMax.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38_SequentialInstructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38_SequentialInstructionList_2D_element::getter_mMin (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMin ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38_SequentialInstructionList_2D_element::getter_mMax (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMax ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @ipic18SequentialInstructionList-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ("ipic18SequentialInstructionList-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SequentialInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38_SequentialInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SequentialInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstructionList_2D_element GALGAS_ipic_31__38_SequentialInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList_2D_element result ;
  const GALGAS_ipic_31__38_SequentialInstructionList_2D_element * p = (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_SequentialInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap_2D_element::GALGAS_branchOverflowMap_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap_2D_element::~ GALGAS_branchOverflowMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap_2D_element::GALGAS_branchOverflowMap_2D_element (const GALGAS_string & inOperand0,
                                                                          const GALGAS_stringlist & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap_2D_element GALGAS_branchOverflowMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_branchOverflowMap_2D_element (GALGAS_string::constructor_default (HERE),
                                              GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap_2D_element GALGAS_branchOverflowMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_stringlist & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchOverflowMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_branchOverflowMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_branchOverflowMap_2D_element::objectCompare (const GALGAS_branchOverflowMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_branchOverflowMap_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchOverflowMap_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchOverflowMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @branchOverflowMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchOverflowMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_branchOverflowMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @branchOverflowMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ("branchOverflowMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_branchOverflowMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_branchOverflowMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchOverflowMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap_2D_element GALGAS_branchOverflowMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_branchOverflowMap_2D_element result ;
  const GALGAS_branchOverflowMap_2D_element * p = (const GALGAS_branchOverflowMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchOverflowMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList_2D_element::GALGAS_codeList_2D_element (void) :
mAttribute_mAssemblyCode (),
mAttribute_mBinaryCode () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList_2D_element::~ GALGAS_codeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList_2D_element::GALGAS_codeList_2D_element (const GALGAS_string & inOperand0,
                                                        const GALGAS_uintlist & inOperand1) :
mAttribute_mAssemblyCode (inOperand0),
mAttribute_mBinaryCode (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList_2D_element GALGAS_codeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_codeList_2D_element (GALGAS_string::constructor_default (HERE),
                                     GALGAS_uintlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList_2D_element GALGAS_codeList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                        const GALGAS_uintlist & inOperand1 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_codeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_codeList_2D_element::objectCompare (const GALGAS_codeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAssemblyCode.objectCompare (inOperand.mAttribute_mAssemblyCode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBinaryCode.objectCompare (inOperand.mAttribute_mBinaryCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_codeList_2D_element::isValid (void) const {
  return mAttribute_mAssemblyCode.isValid () && mAttribute_mBinaryCode.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_codeList_2D_element::drop (void) {
  mAttribute_mAssemblyCode.drop () ;
  mAttribute_mBinaryCode.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_codeList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @codeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAssemblyCode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBinaryCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_codeList_2D_element::getter_mAssemblyCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssemblyCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_codeList_2D_element::getter_mBinaryCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBinaryCode ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @codeList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_codeList_2D_element ("codeList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_codeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_codeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_codeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_codeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList_2D_element GALGAS_codeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_codeList_2D_element result ;
  const GALGAS_codeList_2D_element * p = (const GALGAS_codeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_codeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("codeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_clusterList_2D_element::GALGAS_clusterList_2D_element (void) :
mAttribute_mBlockList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_clusterList_2D_element::~ GALGAS_clusterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_clusterList_2D_element::GALGAS_clusterList_2D_element (const GALGAS_ipic_31__38_BlockList & inOperand0) :
mAttribute_mBlockList (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_clusterList_2D_element GALGAS_clusterList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_clusterList_2D_element (GALGAS_ipic_31__38_BlockList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_clusterList_2D_element GALGAS_clusterList_2D_element::constructor_new (const GALGAS_ipic_31__38_BlockList & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_clusterList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_clusterList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_clusterList_2D_element::objectCompare (const GALGAS_clusterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBlockList.objectCompare (inOperand.mAttribute_mBlockList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_clusterList_2D_element::isValid (void) const {
  return mAttribute_mBlockList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_clusterList_2D_element::drop (void) {
  mAttribute_mBlockList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_clusterList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @clusterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBlockList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList GALGAS_clusterList_2D_element::getter_mBlockList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @clusterList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_clusterList_2D_element ("clusterList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_clusterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_clusterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_clusterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_clusterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_clusterList_2D_element GALGAS_clusterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_clusterList_2D_element result ;
  const GALGAS_clusterList_2D_element * p = (const GALGAS_clusterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_clusterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("clusterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_model::GALGAS_baseline_5F_model (void) :
mAttribute_mProgramName (),
mAttribute_mDeviceName (),
mAttribute_mConfigDefinitionList (),
mAttribute_mRamDefinitionList (),
mAttribute_mUnusedRegisterList (),
mAttribute_mConstantDefinitionList (),
mAttribute_mRoutineDefinitionList (),
mAttribute_mUnusedRoutineList (),
mAttribute_mEndOfProgram () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_model::~ GALGAS_baseline_5F_model (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_model::GALGAS_baseline_5F_model (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_configDefinitionList & inOperand2,
                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                    const GALGAS_lstringlist & inOperand4,
                                                    const GALGAS_constantDefinitionList & inOperand5,
                                                    const GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                    const GALGAS_lstringlist & inOperand7,
                                                    const GALGAS_location & inOperand8) :
mAttribute_mProgramName (inOperand0),
mAttribute_mDeviceName (inOperand1),
mAttribute_mConfigDefinitionList (inOperand2),
mAttribute_mRamDefinitionList (inOperand3),
mAttribute_mUnusedRegisterList (inOperand4),
mAttribute_mConstantDefinitionList (inOperand5),
mAttribute_mRoutineDefinitionList (inOperand6),
mAttribute_mUnusedRoutineList (inOperand7),
mAttribute_mEndOfProgram (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_model (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_configDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_ramDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_constantDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_baseline_5F_routineDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::constructor_new (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_configDefinitionList & inOperand2,
                                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                                    const GALGAS_lstringlist & inOperand4,
                                                                    const GALGAS_constantDefinitionList & inOperand5,
                                                                    const GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                                    const GALGAS_lstringlist & inOperand7,
                                                                    const GALGAS_location & inOperand8 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_model result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_baseline_5F_model (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_model::objectCompare (const GALGAS_baseline_5F_model & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProgramName.objectCompare (inOperand.mAttribute_mProgramName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeviceName.objectCompare (inOperand.mAttribute_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConfigDefinitionList.objectCompare (inOperand.mAttribute_mConfigDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRamDefinitionList.objectCompare (inOperand.mAttribute_mRamDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnusedRegisterList.objectCompare (inOperand.mAttribute_mUnusedRegisterList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantDefinitionList.objectCompare (inOperand.mAttribute_mConstantDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineDefinitionList.objectCompare (inOperand.mAttribute_mRoutineDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnusedRoutineList.objectCompare (inOperand.mAttribute_mUnusedRoutineList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProgram.objectCompare (inOperand.mAttribute_mEndOfProgram) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_model::isValid (void) const {
  return mAttribute_mProgramName.isValid () && mAttribute_mDeviceName.isValid () && mAttribute_mConfigDefinitionList.isValid () && mAttribute_mRamDefinitionList.isValid () && mAttribute_mUnusedRegisterList.isValid () && mAttribute_mConstantDefinitionList.isValid () && mAttribute_mRoutineDefinitionList.isValid () && mAttribute_mUnusedRoutineList.isValid () && mAttribute_mEndOfProgram.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_model::drop (void) {
  mAttribute_mProgramName.drop () ;
  mAttribute_mDeviceName.drop () ;
  mAttribute_mConfigDefinitionList.drop () ;
  mAttribute_mRamDefinitionList.drop () ;
  mAttribute_mUnusedRegisterList.drop () ;
  mAttribute_mConstantDefinitionList.drop () ;
  mAttribute_mRoutineDefinitionList.drop () ;
  mAttribute_mUnusedRoutineList.drop () ;
  mAttribute_mEndOfProgram.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_model::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @baseline_model:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProgramName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeviceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_model::getter_mProgramName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProgramName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_model::getter_mDeviceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeviceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_baseline_5F_model::getter_mConfigDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConfigDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_baseline_5F_model::getter_mRamDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRamDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_baseline_5F_model::getter_mUnusedRegisterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedRegisterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_baseline_5F_model::getter_mConstantDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList GALGAS_baseline_5F_model::getter_mRoutineDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_baseline_5F_model::getter_mUnusedRoutineList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedRoutineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_model::getter_mEndOfProgram (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProgram ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @baseline_model type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_model ("baseline_model",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_model ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_model (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_model GALGAS_baseline_5F_model::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_model result ;
  const GALGAS_baseline_5F_model * p = (const GALGAS_baseline_5F_model *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_model *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_model", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@baseline_intermediate_GOTO optimizeGOTO'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO> gCategoryMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeGOTO (const int32_t inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeGOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_GOTO_optimizeGOTO f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                                                          const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                          const GALGAS_uint constinArgument_inLineIndex,
                                                                          GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                          GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_GOTO * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_GOTO) ;
  GALGAS_stringset var_reachedLabelSet ;
  {
  GALGAS_baseline_5F_intermediate_5F_instruction joker_10117 ; // Joker input parameter
  routine_findBaselineFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 261)), ioArgument_ioGeneratedInstructionList, joker_10117, var_reachedLabelSet, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 261)) ;
  }
  const enumGalgasBool test_0 = var_reachedLabelSet.getter_hasKey (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 262)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 262)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 263)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 263)) ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 264)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 264)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_line ;
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_line, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 267)) ;
    GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction ;
    {
    routine_findBaselineFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 270)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 270)) ;
    }
    if (var_firstInstruction.isValid ()) {
      if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_10879_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction.ptr ()) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, cast_10879_literalOp.getter_mInstruction (SOURCE_FILE ("baseline_optimizations.galgas", 274)).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 274)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_10879_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 275)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 280)).add_operation (GALGAS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 280)) ;
        }
      }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
        GALGAS_baseline_5F_intermediate_5F_GOTO cast_11285_goto ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_firstInstruction.ptr ()) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetLabel.objectCompare (cast_11285_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 283)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, cast_11285_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 287))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 285)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 284)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (GALGAS_string (": GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (cast_11285_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 291)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (GALGAS_string (" replaced by GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (cast_11285_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 291)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 291)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (void) {
  enterCategoryMethod_optimizeGOTO (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO.mSlotID,
                                    categoryMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_GOTO_optimizeGOTO.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO (defineCategoryMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO,
                                                                          freeCategoryMethod_baseline_5F_intermediate_5F_GOTO_optimizeGOTO) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@baseline_intermediate_JUMP optimizeJUMP'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP> gCategoryMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeJUMP (const int32_t inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeJUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_JUMP_optimizeJUMP f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                                                          const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                          const GALGAS_uint constinArgument_inLineIndex,
                                                                          GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                          GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JUMP * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JUMP) ;
  GALGAS_uint var_line ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_line, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 307)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 310)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 309)) ;
  }
  if (var_firstInstruction.isValid ()) {
    if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_12602_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction.ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, cast_12602_literalOp.getter_mInstruction (SOURCE_FILE ("baseline_optimizations.galgas", 317)).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 317)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_12602_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 318)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 323)).add_operation (GALGAS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 323)) ;
      }
    }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO) {
      GALGAS_baseline_5F_intermediate_5F_GOTO cast_12990_goto ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_firstInstruction.ptr ()) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetLabel.objectCompare (cast_12990_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 326)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, cast_12990_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 330)), object->mAttribute_mCurrentPage, object->mAttribute_mTargetPage  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 328)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 327)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (GALGAS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)).add_operation (cast_12990_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 337)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 337)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 337)).add_operation (cast_12990_goto.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 338)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 338)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 336)) ;
      }
    }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP) {
      GALGAS_baseline_5F_intermediate_5F_JUMP cast_13560_jump ((cPtr_baseline_5F_intermediate_5F_JUMP *) var_firstInstruction.ptr ()) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetLabel.objectCompare (cast_13560_jump.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 341)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, cast_13560_jump.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 345)), object->mAttribute_mCurrentPage, cast_13560_jump.getter_mTargetPage (SOURCE_FILE ("baseline_optimizations.galgas", 347))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 342)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (GALGAS_string (" branching to JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)).add_operation (cast_13560_jump.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 352)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 352)).add_operation (GALGAS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 352)).add_operation (cast_13560_jump.getter_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 353)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 353)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 351)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (void) {
  enterCategoryMethod_optimizeJUMP (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP.mSlotID,
                                    categoryMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_JUMP_optimizeJUMP.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP (defineCategoryMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP,
                                                                          freeCategoryMethod_baseline_5F_intermediate_5F_JUMP_optimizeJUMP) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@baseline_intermediate_CALL optimizeCALL'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL> gCategoryMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeCALL (const int32_t inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeCALL (const cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_CALL) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL (const cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                                                          const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                          const GALGAS_uint constinArgument_inLineIndex,
                                                                          GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                          GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_CALL * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_CALL) ;
  GALGAS_uint var_line ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_line, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 368)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 371)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 370)) ;
  }
  if (var_firstInstruction.isValid ()) {
    if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_14911_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction.ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, cast_14911_literalOp.getter_mInstruction (SOURCE_FILE ("baseline_optimizations.galgas", 378)).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 378)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 382)), cast_14911_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 383))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 380)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 379)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (GALGAS_string (": CALL "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)).add_operation (cast_14911_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 388)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 388)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 388)).add_operation (cast_14911_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 389)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 389)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 387)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL (void) {
  enterCategoryMethod_optimizeCALL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL.mSlotID,
                                    categoryMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_CALL_optimizeCALL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL (defineCategoryMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL,
                                                                          freeCategoryMethod_baseline_5F_intermediate_5F_CALL_optimizeCALL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@baseline_intermediate_JSR optimizeJSR'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR> gCategoryMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeJSR (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeJSR (const cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                     const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                     const GALGAS_uint constin_inLineIndex,
                                     GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                     GALGAS_string & io_ioListFileContents,
                                     GALGAS_bool & io_ioOptimizationsDone,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_JSR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_JSR_optimizeJSR f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR (const cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                                                        const GALGAS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                        const GALGAS_uint constinArgument_inLineIndex,
                                                                        GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                        GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_intermediate_5F_JSR * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_intermediate_5F_JSR) ;
  GALGAS_uint var_line ;
  constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_line, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 404)) ;
  GALGAS_baseline_5F_intermediate_5F_instruction var_firstInstruction ;
  {
  routine_findBaselineFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 407)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 406)) ;
  }
  if (var_firstInstruction.isValid ()) {
    if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation) {
      GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation cast_16311_literalOp ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction.ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, cast_16311_literalOp.getter_mInstruction (SOURCE_FILE ("baseline_optimizations.galgas", 414)).objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 414)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 418)), cast_16311_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 419))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 416)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 415)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (GALGAS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)).add_operation (cast_16311_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 424)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 424)).add_operation (GALGAS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 424)).add_operation (cast_16311_literalOp.getter_mLiteralValue (SOURCE_FILE ("baseline_optimizations.galgas", 425)).getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 425)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 423)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR (void) {
  enterCategoryMethod_optimizeJSR (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR.mSlotID,
                                   categoryMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_JSR_optimizeJSR.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR (defineCategoryMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR,
                                                                        freeCategoryMethod_baseline_5F_intermediate_5F_JSR_optimizeJSR) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE> gCategoryMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeBEGIN_5F_ROUTINE (const int32_t inClassIndex,
                                                   categoryMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE inMethod) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeBEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                  const GALGAS_uint constin_inLineIndex,
                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                  GALGAS_string & io_ioListFileContents,
                                                  GALGAS_bool & io_ioOptimizationsDone,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.count ()) {
      f = gCategoryMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.count ()) {
           f = gCategoryMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * /* inObject */,
                                                                                                            const GALGAS_uint constinArgument_inLineIndex,
                                                                                                            GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_instruction var_nextInstruction = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 441)) ;
  GALGAS_bool var_reachable = GALGAS_bool (false) ;
  if (var_nextInstruction.isValid ()) {
    if (var_nextInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL) {
      var_reachable = GALGAS_bool (true) ;
    }
  }
  const enumGalgasBool test_0 = var_reachable.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 450)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("baseline_optimizations.galgas", 452)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 451)) ;
    }
    ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 456)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 456)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (void) {
  enterCategoryMethod_optimizeBEGIN_5F_ROUTINE (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE.mSlotID,
                                                categoryMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (void) {
  gCategoryMethodTable_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE (defineCategoryMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE,
                                                                                                            freeCategoryMethod_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_optimizeBEGIN_5F_ROUTINE) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_model::GALGAS_midrange_5F_model (void) :
mAttribute_mProgramName (),
mAttribute_mDeviceName (),
mAttribute_mConfigDefinitionList (),
mAttribute_mRamDefinitionList (),
mAttribute_mUnusedRegisterList (),
mAttribute_mInterruptDefinitionList (),
mAttribute_mConstantDefinitionList (),
mAttribute_mRoutineDefinitionList (),
mAttribute_mUnusedRoutineList (),
mAttribute_mNeedsComputedGoto_32_ (),
mAttribute_mNeedsComputedGoto_34_ (),
mAttribute_mEndOfProgram () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_model::~ GALGAS_midrange_5F_model (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_model::GALGAS_midrange_5F_model (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_configDefinitionList & inOperand2,
                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                    const GALGAS_lstringlist & inOperand4,
                                                    const GALGAS_midrange_5F_interruptDefinitionList & inOperand5,
                                                    const GALGAS_constantDefinitionList & inOperand6,
                                                    const GALGAS_midrange_5F_routineDefinitionList & inOperand7,
                                                    const GALGAS_lstringlist & inOperand8,
                                                    const GALGAS_bool & inOperand9,
                                                    const GALGAS_bool & inOperand10,
                                                    const GALGAS_location & inOperand11) :
mAttribute_mProgramName (inOperand0),
mAttribute_mDeviceName (inOperand1),
mAttribute_mConfigDefinitionList (inOperand2),
mAttribute_mRamDefinitionList (inOperand3),
mAttribute_mUnusedRegisterList (inOperand4),
mAttribute_mInterruptDefinitionList (inOperand5),
mAttribute_mConstantDefinitionList (inOperand6),
mAttribute_mRoutineDefinitionList (inOperand7),
mAttribute_mUnusedRoutineList (inOperand8),
mAttribute_mNeedsComputedGoto_32_ (inOperand9),
mAttribute_mNeedsComputedGoto_34_ (inOperand10),
mAttribute_mEndOfProgram (inOperand11) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_model (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_configDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_ramDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_midrange_5F_interruptDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_constantDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_midrange_5F_routineDefinitionList::constructor_emptyList (HERE),
                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                   GALGAS_bool::constructor_default (HERE),
                                   GALGAS_bool::constructor_default (HERE),
                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::constructor_new (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_configDefinitionList & inOperand2,
                                                                    const GALGAS_ramDefinitionList & inOperand3,
                                                                    const GALGAS_lstringlist & inOperand4,
                                                                    const GALGAS_midrange_5F_interruptDefinitionList & inOperand5,
                                                                    const GALGAS_constantDefinitionList & inOperand6,
                                                                    const GALGAS_midrange_5F_routineDefinitionList & inOperand7,
                                                                    const GALGAS_lstringlist & inOperand8,
                                                                    const GALGAS_bool & inOperand9,
                                                                    const GALGAS_bool & inOperand10,
                                                                    const GALGAS_location & inOperand11 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_model result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_midrange_5F_model (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_model::objectCompare (const GALGAS_midrange_5F_model & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProgramName.objectCompare (inOperand.mAttribute_mProgramName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeviceName.objectCompare (inOperand.mAttribute_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConfigDefinitionList.objectCompare (inOperand.mAttribute_mConfigDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRamDefinitionList.objectCompare (inOperand.mAttribute_mRamDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnusedRegisterList.objectCompare (inOperand.mAttribute_mUnusedRegisterList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInterruptDefinitionList.objectCompare (inOperand.mAttribute_mInterruptDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantDefinitionList.objectCompare (inOperand.mAttribute_mConstantDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineDefinitionList.objectCompare (inOperand.mAttribute_mRoutineDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnusedRoutineList.objectCompare (inOperand.mAttribute_mUnusedRoutineList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsComputedGoto_32_.objectCompare (inOperand.mAttribute_mNeedsComputedGoto_32_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsComputedGoto_34_.objectCompare (inOperand.mAttribute_mNeedsComputedGoto_34_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProgram.objectCompare (inOperand.mAttribute_mEndOfProgram) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_model::isValid (void) const {
  return mAttribute_mProgramName.isValid () && mAttribute_mDeviceName.isValid () && mAttribute_mConfigDefinitionList.isValid () && mAttribute_mRamDefinitionList.isValid () && mAttribute_mUnusedRegisterList.isValid () && mAttribute_mInterruptDefinitionList.isValid () && mAttribute_mConstantDefinitionList.isValid () && mAttribute_mRoutineDefinitionList.isValid () && mAttribute_mUnusedRoutineList.isValid () && mAttribute_mNeedsComputedGoto_32_.isValid () && mAttribute_mNeedsComputedGoto_34_.isValid () && mAttribute_mEndOfProgram.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_model::drop (void) {
  mAttribute_mProgramName.drop () ;
  mAttribute_mDeviceName.drop () ;
  mAttribute_mConfigDefinitionList.drop () ;
  mAttribute_mRamDefinitionList.drop () ;
  mAttribute_mUnusedRegisterList.drop () ;
  mAttribute_mInterruptDefinitionList.drop () ;
  mAttribute_mConstantDefinitionList.drop () ;
  mAttribute_mRoutineDefinitionList.drop () ;
  mAttribute_mUnusedRoutineList.drop () ;
  mAttribute_mNeedsComputedGoto_32_.drop () ;
  mAttribute_mNeedsComputedGoto_34_.drop () ;
  mAttribute_mEndOfProgram.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_model::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @midrange_model:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProgramName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeviceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInterruptDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsComputedGoto_32_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsComputedGoto_34_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_model::getter_mProgramName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProgramName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_model::getter_mDeviceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeviceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_midrange_5F_model::getter_mConfigDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConfigDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_midrange_5F_model::getter_mRamDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRamDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_midrange_5F_model::getter_mUnusedRegisterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedRegisterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_model::getter_mInterruptDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_midrange_5F_model::getter_mConstantDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_model::getter_mRoutineDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_midrange_5F_model::getter_mUnusedRoutineList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedRoutineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_model::getter_mNeedsComputedGoto_32_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsComputedGoto_32_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_model::getter_mNeedsComputedGoto_34_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsComputedGoto_34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_model::getter_mEndOfProgram (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProgram ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @midrange_model type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_model ("midrange_model",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_model ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_model (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_model GALGAS_midrange_5F_model::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_model result ;
  const GALGAS_midrange_5F_model * p = (const GALGAS_midrange_5F_model *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_model *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_model", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@midrange_intermediate_JUMP optimizeJUMP'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP> gCategoryMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeJUMP (const int32_t inClassIndex,
                                       categoryMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeJUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                      const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_JUMP_optimizeJUMP f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                                                          const GALGAS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                          const GALGAS_uint constinArgument_inLineIndex,
                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                          GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_JUMP * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_JUMP) ;
  GALGAS_stringset var_reachedLabelSet ;
  {
  GALGAS_midrange_5F_intermediate_5F_instruction joker_9354 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 229)), ioArgument_ioGeneratedInstructionList, joker_9354, var_reachedLabelSet, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 229)) ;
  }
  const enumGalgasBool test_0 = var_reachedLabelSet.getter_hasKey (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 231)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 231)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 232)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 232)) ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)).add_operation (GALGAS_string (": JUMP branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_line ;
    GALGAS_bool joker_9810 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_line, joker_9810, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 236)) ;
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction ;
    {
    routine_findMidRangeFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 239)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 239)) ;
    }
    if (var_firstInstruction.isValid ()) {
      if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN) {
        {
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 244)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 243)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 248)).add_operation (GALGAS_string (": JUMP branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 248)) ;
      }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation cast_10533_literalOp ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction.ptr ()) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, cast_10533_literalOp.getter_mLiteralInstruction (SOURCE_FILE ("midrange_optimizations.galgas", 250)).objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 250)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_10533_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 251)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 256)).add_operation (GALGAS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 256)) ;
        }
      }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
        GALGAS_midrange_5F_intermediate_5F_JUMP cast_10946_jump ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_firstInstruction.ptr ()) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetLabel.objectCompare (cast_10946_jump.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 259)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, cast_10946_jump.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 261)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 261)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 261))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 261)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 260)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 265)).add_operation (GALGAS_string (": JUMP branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 265)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (void) {
  enterCategoryMethod_optimizeJUMP (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP.mSlotID,
                                    categoryMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_JUMP_optimizeJUMP.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP (defineCategoryMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP,
                                                                          freeCategoryMethod_midrange_5F_intermediate_5F_JUMP_optimizeJUMP) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@midrange_intermediate_GOTO optimizeGOTO'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO> gCategoryMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeGOTO (const int32_t inClassIndex,
                                       categoryMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO inMethod) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeGOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                      const GALGAS_symbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_intermediate_5F_GOTO_optimizeGOTO f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.count ()) {
      f = gCategoryMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.count ()) {
           f = gCategoryMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                                                          const GALGAS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                          const GALGAS_uint constinArgument_inLineIndex,
                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                          GALGAS_bool & ioArgument_ioOptimizationsDone,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_intermediate_5F_GOTO * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_intermediate_5F_GOTO) ;
  GALGAS_stringset var_reachedLabelSet ;
  {
  GALGAS_midrange_5F_intermediate_5F_instruction joker_12022 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 283)), ioArgument_ioGeneratedInstructionList, joker_12022, var_reachedLabelSet, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 283)) ;
  }
  const enumGalgasBool test_0 = var_reachedLabelSet.getter_hasKey (object->mAttribute_mTargetLabel.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 285)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 285)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 286)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 286)) ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 287)).add_operation (GALGAS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 287)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_line ;
    GALGAS_bool joker_12478 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (object->mAttribute_mTargetLabel, var_line, joker_12478, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 290)) ;
    GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction ;
    {
    routine_findMidRangeFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 293)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 293)) ;
    }
    if (var_firstInstruction.isValid ()) {
      if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN) {
        {
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::constructor_new (object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 299)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 298)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 303)).add_operation (GALGAS_string (": GOTO branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 303)) ;
      }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation cast_13229_literalOp ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_firstInstruction.ptr ()) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, cast_13229_literalOp.getter_mLiteralInstruction (SOURCE_FILE ("midrange_optimizations.galgas", 305)).objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 305)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (cast_13229_literalOp, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 306)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 311)).add_operation (GALGAS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 311)) ;
        }
      }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
        GALGAS_midrange_5F_intermediate_5F_JUMP cast_13642_jump ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_firstInstruction.ptr ()) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetLabel.objectCompare (cast_13642_jump.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 314)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, cast_13642_jump.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 316)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 316)), GALGAS_midrange_5F_call_5F_goto_5F_bit::constructor_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 316))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 316)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 315)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 320)).add_operation (GALGAS_string (": GOTO branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 320)) ;
        }
      }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO) {
        GALGAS_midrange_5F_intermediate_5F_GOTO cast_14149_goto ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_firstInstruction.ptr ()) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetLabel.objectCompare (cast_14149_goto.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 323)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, cast_14149_goto.getter_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 325))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 325)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 324)) ;
          }
          ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 329)).add_operation (GALGAS_string (": GOTO branching to GOTO replaced by GOTO\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 329)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (void) {
  enterCategoryMethod_optimizeGOTO (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO.mSlotID,
                                    categoryMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (void) {
  gCategoryMethodTable_midrange_5F_intermediate_5F_GOTO_optimizeGOTO.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO (defineCategoryMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO,
                                                                          freeCategoryMethod_midrange_5F_intermediate_5F_GOTO_optimizeGOTO) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AST::GALGAS_pic_31__38_AST (void) :
mAttribute_mProgramName (),
mAttribute_mProgramKind (),
mAttribute_mDeviceNameOrBootLoaderReference (),
mAttribute_mConfigDefinitionList (),
mAttribute_mRamDefinitionList (),
mAttribute_mUnusedRegisterList (),
mAttribute_mCheckpicList (),
mAttribute_mDataList (),
mAttribute_mInterruptDefinitionList (),
mAttribute_mConstantDefinitionList (),
mAttribute_mRoutineDefinitionList (),
mAttribute_mMacroDefinitionList (),
mAttribute_mUnusedRoutineList (),
mAttribute_mInlinedRoutineList (),
mAttribute_mNeedsComputedGoto_32_ (),
mAttribute_mNeedsComputedGoto_34_ (),
mAttribute_mEndOfProgram () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AST::~ GALGAS_pic_31__38_AST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AST::GALGAS_pic_31__38_AST (const GALGAS_lstring & inOperand0,
                                              const GALGAS_programKind & inOperand1,
                                              const GALGAS_lstring & inOperand2,
                                              const GALGAS_configDefinitionList & inOperand3,
                                              const GALGAS_ramDefinitionList & inOperand4,
                                              const GALGAS_lstringlist & inOperand5,
                                              const GALGAS_checkpicList & inOperand6,
                                              const GALGAS_dataList & inOperand7,
                                              const GALGAS_pic_31__38_InterruptDefinitionList & inOperand8,
                                              const GALGAS_constantDefinitionList & inOperand9,
                                              const GALGAS_pic_31__38_RoutineDefinitionList & inOperand10,
                                              const GALGAS_pic_31__38_MacroDefinitionList & inOperand11,
                                              const GALGAS_lstringlist & inOperand12,
                                              const GALGAS_lstringlist & inOperand13,
                                              const GALGAS_bool & inOperand14,
                                              const GALGAS_bool & inOperand15,
                                              const GALGAS_location & inOperand16) :
mAttribute_mProgramName (inOperand0),
mAttribute_mProgramKind (inOperand1),
mAttribute_mDeviceNameOrBootLoaderReference (inOperand2),
mAttribute_mConfigDefinitionList (inOperand3),
mAttribute_mRamDefinitionList (inOperand4),
mAttribute_mUnusedRegisterList (inOperand5),
mAttribute_mCheckpicList (inOperand6),
mAttribute_mDataList (inOperand7),
mAttribute_mInterruptDefinitionList (inOperand8),
mAttribute_mConstantDefinitionList (inOperand9),
mAttribute_mRoutineDefinitionList (inOperand10),
mAttribute_mMacroDefinitionList (inOperand11),
mAttribute_mUnusedRoutineList (inOperand12),
mAttribute_mInlinedRoutineList (inOperand13),
mAttribute_mNeedsComputedGoto_32_ (inOperand14),
mAttribute_mNeedsComputedGoto_34_ (inOperand15),
mAttribute_mEndOfProgram (inOperand16) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AST GALGAS_pic_31__38_AST::constructor_new (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_programKind & inOperand1,
                                                              const GALGAS_lstring & inOperand2,
                                                              const GALGAS_configDefinitionList & inOperand3,
                                                              const GALGAS_ramDefinitionList & inOperand4,
                                                              const GALGAS_lstringlist & inOperand5,
                                                              const GALGAS_checkpicList & inOperand6,
                                                              const GALGAS_dataList & inOperand7,
                                                              const GALGAS_pic_31__38_InterruptDefinitionList & inOperand8,
                                                              const GALGAS_constantDefinitionList & inOperand9,
                                                              const GALGAS_pic_31__38_RoutineDefinitionList & inOperand10,
                                                              const GALGAS_pic_31__38_MacroDefinitionList & inOperand11,
                                                              const GALGAS_lstringlist & inOperand12,
                                                              const GALGAS_lstringlist & inOperand13,
                                                              const GALGAS_bool & inOperand14,
                                                              const GALGAS_bool & inOperand15,
                                                              const GALGAS_location & inOperand16 
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_AST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid ()) {
    result = GALGAS_pic_31__38_AST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_AST::objectCompare (const GALGAS_pic_31__38_AST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mProgramName.objectCompare (inOperand.mAttribute_mProgramName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProgramKind.objectCompare (inOperand.mAttribute_mProgramKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeviceNameOrBootLoaderReference.objectCompare (inOperand.mAttribute_mDeviceNameOrBootLoaderReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConfigDefinitionList.objectCompare (inOperand.mAttribute_mConfigDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRamDefinitionList.objectCompare (inOperand.mAttribute_mRamDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnusedRegisterList.objectCompare (inOperand.mAttribute_mUnusedRegisterList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCheckpicList.objectCompare (inOperand.mAttribute_mCheckpicList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDataList.objectCompare (inOperand.mAttribute_mDataList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInterruptDefinitionList.objectCompare (inOperand.mAttribute_mInterruptDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantDefinitionList.objectCompare (inOperand.mAttribute_mConstantDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineDefinitionList.objectCompare (inOperand.mAttribute_mRoutineDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMacroDefinitionList.objectCompare (inOperand.mAttribute_mMacroDefinitionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnusedRoutineList.objectCompare (inOperand.mAttribute_mUnusedRoutineList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInlinedRoutineList.objectCompare (inOperand.mAttribute_mInlinedRoutineList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsComputedGoto_32_.objectCompare (inOperand.mAttribute_mNeedsComputedGoto_32_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsComputedGoto_34_.objectCompare (inOperand.mAttribute_mNeedsComputedGoto_34_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProgram.objectCompare (inOperand.mAttribute_mEndOfProgram) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_AST::isValid (void) const {
  return mAttribute_mProgramName.isValid () && mAttribute_mProgramKind.isValid () && mAttribute_mDeviceNameOrBootLoaderReference.isValid () && mAttribute_mConfigDefinitionList.isValid () && mAttribute_mRamDefinitionList.isValid () && mAttribute_mUnusedRegisterList.isValid () && mAttribute_mCheckpicList.isValid () && mAttribute_mDataList.isValid () && mAttribute_mInterruptDefinitionList.isValid () && mAttribute_mConstantDefinitionList.isValid () && mAttribute_mRoutineDefinitionList.isValid () && mAttribute_mMacroDefinitionList.isValid () && mAttribute_mUnusedRoutineList.isValid () && mAttribute_mInlinedRoutineList.isValid () && mAttribute_mNeedsComputedGoto_32_.isValid () && mAttribute_mNeedsComputedGoto_34_.isValid () && mAttribute_mEndOfProgram.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_AST::drop (void) {
  mAttribute_mProgramName.drop () ;
  mAttribute_mProgramKind.drop () ;
  mAttribute_mDeviceNameOrBootLoaderReference.drop () ;
  mAttribute_mConfigDefinitionList.drop () ;
  mAttribute_mRamDefinitionList.drop () ;
  mAttribute_mUnusedRegisterList.drop () ;
  mAttribute_mCheckpicList.drop () ;
  mAttribute_mDataList.drop () ;
  mAttribute_mInterruptDefinitionList.drop () ;
  mAttribute_mConstantDefinitionList.drop () ;
  mAttribute_mRoutineDefinitionList.drop () ;
  mAttribute_mMacroDefinitionList.drop () ;
  mAttribute_mUnusedRoutineList.drop () ;
  mAttribute_mInlinedRoutineList.drop () ;
  mAttribute_mNeedsComputedGoto_32_.drop () ;
  mAttribute_mNeedsComputedGoto_34_.drop () ;
  mAttribute_mEndOfProgram.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_AST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<struct @pic18AST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mProgramName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProgramKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeviceNameOrBootLoaderReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCheckpicList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDataList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInterruptDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMacroDefinitionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInlinedRoutineList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsComputedGoto_32_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsComputedGoto_34_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_AST::getter_mProgramName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProgramName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programKind GALGAS_pic_31__38_AST::getter_mProgramKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProgramKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_AST::getter_mDeviceNameOrBootLoaderReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeviceNameOrBootLoaderReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configDefinitionList GALGAS_pic_31__38_AST::getter_mConfigDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConfigDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList GALGAS_pic_31__38_AST::getter_mRamDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRamDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_AST::getter_mUnusedRegisterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedRegisterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkpicList GALGAS_pic_31__38_AST::getter_mCheckpicList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCheckpicList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList GALGAS_pic_31__38_AST::getter_mDataList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList GALGAS_pic_31__38_AST::getter_mInterruptDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList GALGAS_pic_31__38_AST::getter_mConstantDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList GALGAS_pic_31__38_AST::getter_mRoutineDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList GALGAS_pic_31__38_AST::getter_mMacroDefinitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMacroDefinitionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_AST::getter_mUnusedRoutineList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedRoutineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_AST::getter_mInlinedRoutineList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInlinedRoutineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_AST::getter_mNeedsComputedGoto_32_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsComputedGoto_32_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_AST::getter_mNeedsComputedGoto_34_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsComputedGoto_34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_AST::getter_mEndOfProgram (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProgram ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @pic18AST type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_AST ("pic18AST",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_AST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_AST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_AST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_AST GALGAS_pic_31__38_AST::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_AST result ;
  const GALGAS_pic_31__38_AST * p = (const GALGAS_pic_31__38_AST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_AST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block::GALGAS_ipic_31__38_Block (void) :
mAttribute_mAddress (),
mAttribute_mLabel (),
mAttribute_mInstructionList (),
mAttribute_mTerminator (),
mAttribute_mTerminatorMin (),
mAttribute_mTerminatorMax () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block::~ GALGAS_ipic_31__38_Block (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block::GALGAS_ipic_31__38_Block (const GALGAS_uint & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_ipic_31__38_SequentialInstructionList & inOperand2,
                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                                    const GALGAS_uint & inOperand4,
                                                    const GALGAS_uint & inOperand5) :
mAttribute_mAddress (inOperand0),
mAttribute_mLabel (inOperand1),
mAttribute_mInstructionList (inOperand2),
mAttribute_mTerminator (inOperand3),
mAttribute_mTerminatorMin (inOperand4),
mAttribute_mTerminatorMax (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_Block::constructor_new (const GALGAS_uint & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_ipic_31__38_SequentialInstructionList & inOperand2,
                                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                                                    const GALGAS_uint & inOperand4,
                                                                    const GALGAS_uint & inOperand5 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_Block result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_ipic_31__38_Block (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ipic_31__38_Block::objectCompare (const GALGAS_ipic_31__38_Block & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAddress.objectCompare (inOperand.mAttribute_mAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabel.objectCompare (inOperand.mAttribute_mLabel) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminator.objectCompare (inOperand.mAttribute_mTerminator) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminatorMin.objectCompare (inOperand.mAttribute_mTerminatorMin) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminatorMax.objectCompare (inOperand.mAttribute_mTerminatorMax) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ipic_31__38_Block::isValid (void) const {
  return mAttribute_mAddress.isValid () && mAttribute_mLabel.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mTerminator.isValid () && mAttribute_mTerminatorMin.isValid () && mAttribute_mTerminatorMax.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38_Block::drop (void) {
  mAttribute_mAddress.drop () ;
  mAttribute_mLabel.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mTerminator.drop () ;
  mAttribute_mTerminatorMin.drop () ;
  mAttribute_mTerminatorMax.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38_Block::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @ipic18Block:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabel.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminator.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminatorMin.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminatorMax.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38_Block::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ipic_31__38_Block::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_Block::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_AbstractBlockTerminator GALGAS_ipic_31__38_Block::getter_mTerminator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38_Block::getter_mTerminatorMin (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminatorMin ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38_Block::getter_mTerminatorMax (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminatorMax ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @ipic18Block type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_Block ("ipic18Block",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38_Block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_Block ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38_Block::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_Block (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_Block::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_Block result ;
  const GALGAS_ipic_31__38_Block * p = (const GALGAS_ipic_31__38_Block *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_Block *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18Block", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Category method '@ipic18Block display'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_display (const GALGAS_ipic_31__38_Block inObject,
                             const GALGAS_string constinArgument_inNextBlockLabel,
                             GALGAS_string & ioArgument_ioListFileContents,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("LABEL ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_display_block_list.galgas", 12)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 12)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 12)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inObject.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_display_block_list.galgas", 13)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", ORG ").add_operation (inObject.mAttribute_mAddress.getter_hexString (SOURCE_FILE ("ipic18_display_block_list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 14)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 16)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_492 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_492.hasCurrentObject ()) {
    GALGAS_stringlist var_d = callCategoryGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_492.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 19)) ;
    cEnumerator_stringlist enumerator_570 (var_d, kEnumeration_up) ;
    while (enumerator_570.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_570.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)) ;
      enumerator_570.gotoNextObject () ;
    }
    enumerator_492.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssign_operation(callCategoryGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 27)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@ipic18Block enterReferencedLabels'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterReferencedLabels (const GALGAS_ipic_31__38_Block inObject,
                                           const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                           const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                           GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_enterInstructionReferencedLabels (inObject.mAttribute_mInstructionList, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 952)) ;
  callCategoryMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 957)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Category method '@ipic18Block optimize'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_optimize (const GALGAS_ipic_31__38_Block inObject,
                              const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                              const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                              const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                              GALGAS_bool & ioArgument_ioOptimizationDone,
                              GALGAS_string & ioArgument_ioListFileContents,
                              GALGAS_ipic_31__38_Block & outArgument_outOptimizedBlock,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizedBlock.drop () ; // Release 'out' argument
  GALGAS_bool var_optimized ;
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList ;
  {
  routine_instructionListOptimization (constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, inObject.mAttribute_mInstructionList, inObject.mAttribute_mLabel, var_optimized, ioArgument_ioListFileContents, var_optimizedInstructionList, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 974)) ;
  }
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedTerminator = inObject.mAttribute_mTerminator ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_optimizedInstructionList.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 986)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (inObject.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 986)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_SequentialInstruction var_lastInstruction ;
    GALGAS_uint joker_36903_2 ; // Joker input parameter
    GALGAS_uint joker_36903_1 ; // Joker input parameter
    var_optimizedInstructionList.method_last (var_lastInstruction, joker_36903_2, joker_36903_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 987)) ;
    if (var_lastInstruction.isValid ()) {
      if (var_lastInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation cast_36996_op ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) var_lastInstruction.ptr ()) ;
        const enumGalgasBool test_1 = constinArgument_inOptimizeFlagStruct.mAttribute_mMOVLWfollowedByRETreplacedByRETLW.operator_and (GALGAS_bool (kIsEqual, cast_36996_op.getter_mLiteralInstruction (SOURCE_FILE ("ipic18_optimize_block.galgas", 990)).objectCompare (GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 990)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 990)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GALGAS_ipic_31__38_SequentialInstruction joker_37181_3 ; // Joker input parameter
          GALGAS_uint joker_37181_2 ; // Joker input parameter
          GALGAS_uint joker_37181_1 ; // Joker input parameter
          var_optimizedInstructionList.setter_popLast (joker_37181_3, joker_37181_2, joker_37181_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 991)) ;
          }
          var_optimizedTerminator = GALGAS_ipic_31__38_RetlwTerminator::constructor_new (cast_36996_op.getter_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 992)), cast_36996_op.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 992))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 992)) ;
          var_optimized = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [M] ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 994)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 994)).add_operation (GALGAS_string (": MOVLW k ; RETURN --> RETLW k\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 994)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 994)) ;
        }
      }else if (var_lastInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR) {
        GALGAS_ipic_31__38__5F_intermediate_5F_JSR cast_37503_jsr ((cPtr_ipic_31__38__5F_intermediate_5F_JSR *) var_lastInstruction.ptr ()) ;
        const enumGalgasBool test_2 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRfollowedByRETreplacedByJUMP.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_ipic_31__38_SequentialInstruction joker_37618_3 ; // Joker input parameter
          GALGAS_uint joker_37618_2 ; // Joker input parameter
          GALGAS_uint joker_37618_1 ; // Joker input parameter
          var_optimizedInstructionList.setter_popLast (joker_37618_3, joker_37618_2, joker_37618_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)) ;
          }
          var_optimizedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (cast_37503_jsr.getter_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 1000)), cast_37503_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 1000)), cast_37503_jsr.getter_mKind (SOURCE_FILE ("ipic18_optimize_block.galgas", 1000))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1000)) ;
          var_optimized = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [J] ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (cast_37503_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (GALGAS_string (" ; RETURN --> JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (cast_37503_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)) ;
        }
      }
    }
  }
  const enumGalgasBool test_3 = var_optimized.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 1021)).boolEnum () ;
  if (kBoolTrue == test_3) {
    callCategoryMethod_optimizeTerminator ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, inObject.mAttribute_mLabel.mAttribute_string, var_optimized, ioArgument_ioListFileContents, var_optimizedTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1022)) ;
  }
  const enumGalgasBool test_4 = var_optimized.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    outArgument_outOptimizedBlock = GALGAS_ipic_31__38_Block::constructor_new (inObject.mAttribute_mAddress, inObject.mAttribute_mLabel, var_optimizedInstructionList, var_optimizedTerminator, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1040)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1035)) ;
  }else if (kBoolFalse == test_4) {
    const GALGAS_ipic_31__38_Block temp_5 = inObject ;
    outArgument_outOptimizedBlock = temp_5 ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@ipic18Block performRelativesResolution'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_performRelativesResolution (const GALGAS_ipic_31__38_Block inObject,
                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                const GALGAS_uint constinArgument_inBlockStartAddress,
                                                GALGAS_uint & ioArgument_ioConversionCount,
                                                GALGAS_string & ioArgument_ioListFileContents,
                                                GALGAS_ipic_31__38_Block & outArgument_outModifiedBlock,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifiedBlock.drop () ; // Release 'out' argument
  GALGAS_ipic_31__38_SequentialInstructionList var_modifiedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 14)) ;
  GALGAS_uint var_address = constinArgument_inBlockStartAddress ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_503 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_503.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction var_modifiedInstruction ;
    callCategoryMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_503.current_mInstruction (HERE).ptr (), var_address, inObject.mAttribute_mLabel.mAttribute_string, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedInstruction, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 17)) ;
    var_modifiedInstructionList.addAssign_operation (var_modifiedInstruction, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)) ;
    var_address = var_address.add_operation (callCategoryGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_503.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)) ;
    enumerator_503.gotoNextObject () ;
  }
  GALGAS_ipic_31__38_AbstractBlockTerminator var_modifiedTerminator ;
  callCategoryMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), var_address, inObject.mAttribute_mLabel.mAttribute_string, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 29)) ;
  outArgument_outModifiedBlock = GALGAS_ipic_31__38_Block::constructor_new (inObject.mAttribute_mAddress, inObject.mAttribute_mLabel, var_modifiedInstructionList, var_modifiedTerminator, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 44)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 39)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category Getter '@ipic18Block blockSize'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint extensionGetter_blockSize (const GALGAS_ipic_31__38_Block & inObject,
                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outResult ; // Returned variable
  result_outResult = callCategoryGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 92)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_2739 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_2739.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callCategoryGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_2739.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)) ;
    enumerator_2739.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




