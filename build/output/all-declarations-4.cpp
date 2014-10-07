#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_assembly_instruction.h"
#include "class-baseline_conditionExpression.h"
#include "class-baseline_instruction.h"
#include "class-baseline_intermediate_GOTO.h"
#include "class-baseline_intermediate_incDecRegisterInCondition.h"
#include "class-baseline_intermediate_instruction.h"
#include "class-bitNumberExpression.h"
#include "class-immediatExpression.h"
#include "class-midrange_conditionExpression.h"
#include "class-midrange_instruction.h"
#include "class-midrange_intermediate_GOTO.h"
#include "class-midrange_intermediate_JUMP.h"
#include "class-midrange_intermediate_NULL.h"
#include "class-midrange_intermediate_actualInstruction.h"
#include "class-midrange_intermediate_incDecRegisterInCondition.h"
#include "class-midrange_intermediate_instruction.h"
#include "class-midrange_intermediate_instruction_BitTestSkip.h"
#include "class-midrange_intermediate_instruction_RETURN.h"
#include "class-midrange_intermediate_instruction_literalOperation.h"
#include "class-pic18Instruction_FA.h"
#include "class-pic18Instruction_FBA.h"
#include "class-pic18Instruction_FDA.h"
#include "class-pic18Instruction_JSR.h"
#include "class-pic18Instruction_JUMP.h"
#include "class-pic18Instruction_JUMPCC.h"
#include "class-pic18Instruction_LDATAPTR.h"
#include "class-pic18Instruction_LFSR.h"
#include "class-pic18Instruction_LTBLPTR.h"
#include "class-pic18Instruction_MNOP.h"
#include "class-pic18Instruction_MOVFF.h"
#include "class-pic18Instruction_TBLRD.h"
#include "class-pic18Instruction_TBLWT.h"
#include "class-pic18Instruction_banksel.h"
#include "class-pic18Instruction_banksel_register.h"
#include "class-pic18Instruction_block.h"
#include "class-pic18Instruction_checkbank.h"
#include "class-pic18Instruction_checknobank.h"
#include "class-pic18Instruction_computed_bra.h"
#include "class-pic18Instruction_computed_goto.h"
#include "class-pic18Instruction_computed_rcall.h"
#include "class-pic18Instruction_computed_retlw.h"
#include "class-pic18Instruction_do_while.h"
#include "class-pic18Instruction_fnop.h"
#include "class-pic18Instruction_literalOperation.h"
#include "class-pic18Instruction_nobanksel.h"
#include "class-pic18Instruction_repetitionStatique.h"
#include "class-pic18Instruction_savebank.h"
#include "class-pic18Instruction_structured_if.h"
#include "class-pic18Instruction_switch.h"
#include "class-pic18Instruction_withNoOperand.h"
#include "class-pic18PiccoloSimpleInstruction.h"
#include "class-registerExpression.h"
#include "enum-FA_instruction_base_code.h"
#include "enum-baseline_F_instruction_base_code.h"
#include "enum-baseline_IF_BitTest_opcode.h"
#include "enum-baseline_WO_OPERAND_group.h"
#include "enum-baseline_bit_oriented_op.h"
#include "enum-baseline_instruction_FD_base_code.h"
#include "enum-baseline_literal_instruction_opcode.h"
#include "enum-conditional_branch.h"
#include "enum-midrange_F_instruction_base_code.h"
#include "enum-midrange_bit_oriented_op.h"
#include "enum-midrange_instruction_FD_base_code.h"
#include "enum-midrange_literal_instruction_opcode.h"
#include "enum-pic18InstructionWithNoOperandKind.h"
#include "enum-pic18RegisterComparison.h"
#include "enum-processorType.h"
#include "enum-routineKind.h"
#include "filewrapper-embeddedDevices.h"
#include "getter-FA_instruction_base_code-mnemonic.h"
#include "getter-baseline_F_instruction_base_code-mnemonic.h"
#include "getter-baseline_IF_BitTest_opcode-mnemonic.h"
#include "getter-baseline_WO_OPERAND_group-mnemonic.h"
#include "getter-baseline_assembly_instruction-length.h"
#include "getter-baseline_bit_oriented_op-mnemonic.h"
#include "getter-baseline_instruction_FD_base_code-mnemonic.h"
#include "getter-baseline_intermediate_instruction-isLABEL.h"
#include "getter-baseline_intermediate_instruction-isNULL.h"
#include "getter-baseline_intermediate_instruction-isSkippingInstruction.h"
#include "getter-baseline_intermediate_instruction-length.h"
#include "getter-baseline_intermediate_instruction-nextInstructionIsReachable.h"
#include "getter-baseline_literal_instruction_opcode-mnemonic.h"
#include "getter-conditional_branch-condition.h"
#include "getter-midrange_F_instruction_base_code-baseCode.h"
#include "getter-midrange_F_instruction_base_code-mnemonic.h"
#include "getter-midrange_bit_oriented_op-baseCode.h"
#include "getter-midrange_bit_oriented_op-mnemonic.h"
#include "getter-midrange_instruction_FD_base_code-basecode.h"
#include "getter-midrange_instruction_FD_base_code-mnemonic.h"
#include "getter-midrange_intermediate_instruction-instructionLength.h"
#include "getter-midrange_intermediate_instruction-isLABELorORG.h"
#include "getter-midrange_intermediate_instruction-isNULL.h"
#include "getter-midrange_intermediate_instruction-isSkippingInstruction.h"
#include "getter-midrange_intermediate_instruction-nextInstructionIsReachable.h"
#include "getter-midrange_literal_instruction_opcode-baseCode.h"
#include "getter-midrange_literal_instruction_opcode-mnemonic.h"
#include "getter-pic18InstructionWithNoOperandKind-assemblyCode.h"
#include "getter-pic18RegisterComparison-mnemonic.h"
#include "getter-uint-x4String.h"
#include "grammar-pic18_grammar.h"
#include "list-baseline_assembly_instructionList.h"
#include "list-baseline_intermediate_instructionList.h"
#include "list-illegalMaskList.h"
#include "list-midrange_intermediate_instructionList.h"
#include "map-baselineRoutineMap.h"
#include "map-baselineSymbolTableForOptimizations.h"
#include "map-baseline_symbolTable.h"
#include "map-bitSliceTable.h"
#include "map-configRegisterMap.h"
#include "map-configRegisterMaskMap.h"
#include "map-constantMap.h"
#include "map-fieldSettingMap.h"
#include "map-midrange_symbolTable.h"
#include "map-midrange_symbolTableForConvertingRelatives.h"
#include "map-ramBankTable.h"
#include "map-registerTable.h"
#include "map-routineMap.h"
#include "map-symbolTableForOptimizations.h"
#include "method-baseline_assembly_instruction-enterLabelAtAddress.h"
#include "method-baseline_assembly_instruction-generateBinaryCodeAtAddress.h"
#include "method-baseline_assembly_instruction-print.h"
#include "method-baseline_conditionExpression-build_intermediate_condition_instructions.h"
#include "method-baseline_instruction-addUsedRoutines.h"
#include "method-baseline_instruction-build_baseline_intermediate_instructionList.h"
#include "method-baseline_instruction-shouldNotContinueInSequence.h"
#include "method-baseline_instruction-shouldTerminateWithMOVLW.h"
#include "method-baseline_intermediate_incDecRegisterInCondition-optimizeTestDecInc.h"
#include "method-baseline_intermediate_instruction-defineLabel.h"
#include "method-baseline_intermediate_instruction-enterReferencedLabel.h"
#include "method-baseline_intermediate_instruction-generateAssemblyCode.h"
#include "method-baseline_intermediate_instruction-print.h"
#include "method-baseline_intermediate_instruction-setCurrentAddress.h"
#include "method-bitNumberExpression-display.h"
#include "method-bitNumberExpression-getBitNumber.h"
#include "method-immediatExpression-eval.h"
#include "method-midrange_conditionExpression-buildIPICinstructionForCondition.h"
#include "method-midrange_conditionExpression-computeInstructionCountForCondition.h"
#include "method-midrange_instruction-addUsedRoutines.h"
#include "method-midrange_instruction-build_midrange_ipic_instructionList.h"
#include "method-midrange_instruction-instructionUsesGOTOorCALL.h"
#include "method-midrange_intermediate_incDecRegisterInCondition-optimizeTestDecInc.h"
#include "method-midrange_intermediate_instruction-buildAssemblyCode.h"
#include "method-midrange_intermediate_instruction-compute.h"
#include "method-midrange_intermediate_instruction-defineLabel.h"
#include "method-midrange_intermediate_instruction-defineLabelAtAddress.h"
#include "method-midrange_intermediate_instruction-enterLabelAtAddress.h"
#include "method-midrange_intermediate_instruction-enterReferencedLabel.h"
#include "method-midrange_intermediate_instruction-generateBinaryCodeAtAddress.h"
#include "method-midrange_intermediate_instruction-print.h"
#include "method-midrange_intermediate_instruction-setCurrentAddress.h"
#include "method-midrange_intermediate_instruction_BitTestSkip-optimizeBitTestSkip.h"
#include "method-midrange_intermediate_instruction_literalOperation-optimizeMOVLW.h"
#include "option-piccolo_options_not_in_cocoa.h"
#include "proc-findBaselineFirstInstructionFromAddress.h"
#include "proc-findMidRangeFirstInstructionFromAddress.h"
#include "proc-findMidRangeFirstInstructionOrLabelFromAddress.h"
#include "proc-parseDeviceDefinition.h"
#include "struct-baseline_intermediate_registerExpression.h"
#include "struct-midrange_intermediate_registerExpression.h"
#include "struct-piccoloDeviceModel.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JUMP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JUMP * p = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMP::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMP::GALGAS_pic_31__38_Instruction_5F_JUMP (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMP::GALGAS_pic_31__38_Instruction_5F_JUMP (const cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                              const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMP (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMP * p = (const cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_JUMP::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind GALGAS_pic_31__38_Instruction_5F_JUMP::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_jumpInstructionKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMP * p = (const cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind cPtr_pic_31__38_Instruction_5F_JUMP::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_JUMP class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_JUMP::cPtr_pic_31__38_Instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_lstring & in_mTargetLabel,
                                                                          const GALGAS_jumpInstructionKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

void cPtr_pic_31__38_Instruction_5F_JUMP::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JUMP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMP (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_JUMP type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ("pic18Instruction_JUMP",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMP GALGAS_pic_31__38_Instruction_5F_JUMP::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMP result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP * p = (const GALGAS_pic_31__38_Instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JUMPCC::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConditionalBranch.objectCompare (p->mAttribute_mConditionalBranch) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsBcc.objectCompare (p->mAttribute_mIsBcc) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JUMPCC::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMPCC::GALGAS_pic_31__38_Instruction_5F_JUMPCC (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMPCC::GALGAS_pic_31__38_Instruction_5F_JUMPCC (const cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                  const GALGAS_conditional_5F_branch & inAttribute_mConditionalBranch,
                                                                                                  const GALGAS_bool & inAttribute_mIsBcc
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mConditionalBranch.isValid () && inAttribute_mIsBcc.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMPCC (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mConditionalBranch, inAttribute_mIsBcc COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JUMPCC::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_JUMPCC::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditional_5F_branch GALGAS_pic_31__38_Instruction_5F_JUMPCC::reader_mConditionalBranch (UNUSED_LOCATION_ARGS) const {
  GALGAS_conditional_5F_branch result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    result = p->mAttribute_mConditionalBranch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditional_5F_branch cPtr_pic_31__38_Instruction_5F_JUMPCC::reader_mConditionalBranch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConditionalBranch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_JUMPCC::reader_mIsBcc (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    result = p->mAttribute_mIsBcc ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_JUMPCC::reader_mIsBcc (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsBcc ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_JUMPCC class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_JUMPCC::cPtr_pic_31__38_Instruction_5F_JUMPCC (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mTargetLabel,
                                                                              const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                                              const GALGAS_bool & in_mIsBcc
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mConditionalBranch (in_mConditionalBranch),
mAttribute_mIsBcc (in_mIsBcc) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMPCC::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

void cPtr_pic_31__38_Instruction_5F_JUMPCC::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JUMPCC:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConditionalBranch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsBcc.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMPCC::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMPCC (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mConditionalBranch, mAttribute_mIsBcc COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_JUMPCC type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ("pic18Instruction_JUMPCC",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JUMPCC::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JUMPCC::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JUMPCC (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JUMPCC GALGAS_pic_31__38_Instruction_5F_JUMPCC::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JUMPCC result ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC * p = (const GALGAS_pic_31__38_Instruction_5F_JUMPCC *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JUMPCC *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMPCC", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LDATAPTR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LDATAPTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATAPTR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDataName.objectCompare (p->mAttribute_mDataName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDataIndex.objectCompare (p->mAttribute_mDataIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LDATAPTR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATAPTR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR::GALGAS_pic_31__38_Instruction_5F_LDATAPTR (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR GALGAS_pic_31__38_Instruction_5F_LDATAPTR::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_LDATAPTR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_luint::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR::GALGAS_pic_31__38_Instruction_5F_LDATAPTR (const cPtr_pic_31__38_Instruction_5F_LDATAPTR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR GALGAS_pic_31__38_Instruction_5F_LDATAPTR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_lstring & inAttribute_mDataName,
                                                                                                      const GALGAS_luint & inAttribute_mDataIndex
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATAPTR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mDataName.isValid () && inAttribute_mDataIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LDATAPTR (inAttribute_mInstructionLocation, inAttribute_mDataName, inAttribute_mDataIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_LDATAPTR::reader_mDataName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LDATAPTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATAPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
    result = p->mAttribute_mDataName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_LDATAPTR::reader_mDataName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_LDATAPTR::reader_mDataIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LDATAPTR * p = (const cPtr_pic_31__38_Instruction_5F_LDATAPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATAPTR) ;
    result = p->mAttribute_mDataIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_LDATAPTR::reader_mDataIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_LDATAPTR class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_LDATAPTR::cPtr_pic_31__38_Instruction_5F_LDATAPTR (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_lstring & in_mDataName,
                                                                                  const GALGAS_luint & in_mDataIndex
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mDataName (in_mDataName),
mAttribute_mDataIndex (in_mDataIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LDATAPTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR ;
}

void cPtr_pic_31__38_Instruction_5F_LDATAPTR::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_LDATAPTR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDataName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDataIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_LDATAPTR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LDATAPTR (mAttribute_mInstructionLocation, mAttribute_mDataName, mAttribute_mDataIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_LDATAPTR type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR ("pic18Instruction_LDATAPTR",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LDATAPTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LDATAPTR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LDATAPTR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LDATAPTR GALGAS_pic_31__38_Instruction_5F_LDATAPTR::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LDATAPTR result ;
  const GALGAS_pic_31__38_Instruction_5F_LDATAPTR * p = (const GALGAS_pic_31__38_Instruction_5F_LDATAPTR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LDATAPTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATAPTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LTBLPTR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (const cPtr_pic_31__38_Instruction_5F_LTBLPTR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LTBLPTR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LTBLPTR::GALGAS_pic_31__38_Instruction_5F_LTBLPTR (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LTBLPTR::GALGAS_pic_31__38_Instruction_5F_LTBLPTR (const cPtr_pic_31__38_Instruction_5F_LTBLPTR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LTBLPTR GALGAS_pic_31__38_Instruction_5F_LTBLPTR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR (inAttribute_mInstructionLocation, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_LTBLPTR::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (const cPtr_pic_31__38_Instruction_5F_LTBLPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_LTBLPTR::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_LTBLPTR class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_LTBLPTR::cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LTBLPTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;
}

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_LTBLPTR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_LTBLPTR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LTBLPTR (mAttribute_mInstructionLocation, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_LTBLPTR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ("pic18Instruction_LTBLPTR",
                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LTBLPTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LTBLPTR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LTBLPTR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LTBLPTR GALGAS_pic_31__38_Instruction_5F_LTBLPTR::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LTBLPTR result ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR * p = (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LTBLPTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LTBLPTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_MNOP * p = (const cPtr_pic_31__38_Instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOccurrenceFactor.objectCompare (p->mAttribute_mOccurrenceFactor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_MNOP::objectCompare (const GALGAS_pic_31__38_Instruction_5F_MNOP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP::GALGAS_pic_31__38_Instruction_5F_MNOP (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP GALGAS_pic_31__38_Instruction_5F_MNOP::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_MNOP::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_luint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP::GALGAS_pic_31__38_Instruction_5F_MNOP (const cPtr_pic_31__38_Instruction_5F_MNOP * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MNOP) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP GALGAS_pic_31__38_Instruction_5F_MNOP::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MNOP * p = (const cPtr_pic_31__38_Instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MNOP) ;
    result = p->mAttribute_mOccurrenceFactor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_MNOP::reader_mOccurrenceFactor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOccurrenceFactor ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_MNOP class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_MNOP::cPtr_pic_31__38_Instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_luint & in_mOccurrenceFactor
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;
}

void cPtr_pic_31__38_Instruction_5F_MNOP::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_MNOP:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MNOP (mAttribute_mInstructionLocation, mAttribute_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_MNOP type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ("pic18Instruction_MNOP",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MNOP GALGAS_pic_31__38_Instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MNOP result ;
  const GALGAS_pic_31__38_Instruction_5F_MNOP * p = (const GALGAS_pic_31__38_Instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_banksel::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel * p = (const cPtr_pic_31__38_Instruction_5F_banksel *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBankIndex.objectCompare (p->mAttribute_mBankIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWarningOnUselessBanksel.objectCompare (p->mAttribute_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel::GALGAS_pic_31__38_Instruction_5F_banksel (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_banksel::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_luint::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel::GALGAS_pic_31__38_Instruction_5F_banksel (const cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_luint & inAttribute_mBankIndex,
                                                                                                    const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel (inAttribute_mInstructionLocation, inAttribute_mBankIndex, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_banksel::reader_mBankIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel * p = (const cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    result = p->mAttribute_mBankIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_banksel::reader_mBankIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel::reader_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel * p = (const cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    result = p->mAttribute_mWarningOnUselessBanksel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_banksel::reader_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarningOnUselessBanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_banksel class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_banksel::cPtr_pic_31__38_Instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_luint & in_mBankIndex,
                                                                                const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBankIndex (in_mBankIndex),
mAttribute_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;
}

void cPtr_pic_31__38_Instruction_5F_banksel::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_banksel:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBankIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel (mAttribute_mInstructionLocation, mAttribute_mBankIndex, mAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_banksel type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ("pic18Instruction_banksel",
                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel GALGAS_pic_31__38_Instruction_5F_banksel::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel * p = (const GALGAS_pic_31__38_Instruction_5F_banksel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWarningOnUselessBanksel.objectCompare (p->mAttribute_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                GALGAS_registerExpression::constructor_default (HERE),
                                                                                GALGAS_bool::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                            const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (inAttribute_mInstructionLocation, inAttribute_mRegisterExpression, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_banksel_5F_register::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::reader_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    result = p->mAttribute_mWarningOnUselessBanksel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_banksel_5F_register::reader_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarningOnUselessBanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18Instruction_banksel_register class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                        const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_banksel_register:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (mAttribute_mInstructionLocation, mAttribute_mRegisterExpression, mAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18Instruction_banksel_register type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ("pic18Instruction_banksel_register",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register * p = (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_block::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStartBlockName.objectCompare (p->mAttribute_mStartBlockName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBlockList.objectCompare (p->mAttribute_mBlockList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfInstruction.objectCompare (p->mAttribute_mEndOfInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_block::objectCompare (const GALGAS_pic_31__38_Instruction_5F_block & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block::GALGAS_pic_31__38_Instruction_5F_block (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_block::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (HERE),
                                                                  GALGAS_location::constructor_nowhere (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block::GALGAS_pic_31__38_Instruction_5F_block (const cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_block) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mStartBlockName,
                                                                                                const GALGAS_pic_31__38_BlockInstructionBlockList & inAttribute_mBlockList,
                                                                                                const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mStartBlockName.isValid () && inAttribute_mBlockList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_block (inAttribute_mInstructionLocation, inAttribute_mStartBlockName, inAttribute_mBlockList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_block::reader_mStartBlockName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    result = p->mAttribute_mStartBlockName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_block::reader_mStartBlockName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartBlockName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList GALGAS_pic_31__38_Instruction_5F_block::reader_mBlockList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BlockInstructionBlockList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    result = p->mAttribute_mBlockList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList cPtr_pic_31__38_Instruction_5F_block::reader_mBlockList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_block::reader_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_block * p = (const cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    result = p->mAttribute_mEndOfInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_block::reader_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_block class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_block::cPtr_pic_31__38_Instruction_5F_block (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mStartBlockName,
                                                                            const GALGAS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                                            const GALGAS_location & in_mEndOfInstruction
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mStartBlockName (in_mStartBlockName),
mAttribute_mBlockList (in_mBlockList),
mAttribute_mEndOfInstruction (in_mEndOfInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_block::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

void cPtr_pic_31__38_Instruction_5F_block::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_block:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStartBlockName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBlockList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_block::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_block (mAttribute_mInstructionLocation, mAttribute_mStartBlockName, mAttribute_mBlockList, mAttribute_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_block type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ("pic18Instruction_block",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_block::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_block (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_block GALGAS_pic_31__38_Instruction_5F_block::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_block result ;
  const GALGAS_pic_31__38_Instruction_5F_block * p = (const GALGAS_pic_31__38_Instruction_5F_block *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_block *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_block", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_checkbank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_checkbank * p = (const cPtr_pic_31__38_Instruction_5F_checkbank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checkbank) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBankIndex.objectCompare (p->mAttribute_mBankIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_checkbank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_checkbank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank::GALGAS_pic_31__38_Instruction_5F_checkbank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_uint::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank::GALGAS_pic_31__38_Instruction_5F_checkbank (const cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_checkbank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_uint & inAttribute_mBankIndex
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checkbank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_checkbank (inAttribute_mInstructionLocation, inAttribute_mBankIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_pic_31__38_Instruction_5F_checkbank::reader_mBankIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_checkbank * p = (const cPtr_pic_31__38_Instruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checkbank) ;
    result = p->mAttribute_mBankIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_pic_31__38_Instruction_5F_checkbank::reader_mBankIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_checkbank class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_checkbank::cPtr_pic_31__38_Instruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_uint & in_mBankIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBankIndex (in_mBankIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_checkbank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;
}

void cPtr_pic_31__38_Instruction_5F_checkbank::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_checkbank:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBankIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_checkbank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_checkbank (mAttribute_mInstructionLocation, mAttribute_mBankIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18Instruction_checkbank type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ("pic18Instruction_checkbank",
                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_checkbank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_checkbank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_checkbank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checkbank GALGAS_pic_31__38_Instruction_5F_checkbank::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checkbank result ;
  const GALGAS_pic_31__38_Instruction_5F_checkbank * p = (const GALGAS_pic_31__38_Instruction_5F_checkbank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_checkbank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checkbank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_checknobank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_checknobank * p = (const cPtr_pic_31__38_Instruction_5F_checknobank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checknobank) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_checknobank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_checknobank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank::GALGAS_pic_31__38_Instruction_5F_checknobank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_checknobank::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank::GALGAS_pic_31__38_Instruction_5F_checknobank (const cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_checknobank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checknobank result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_checknobank (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @pic18Instruction_checknobank class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_checknobank::cPtr_pic_31__38_Instruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_checknobank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;
}

void cPtr_pic_31__38_Instruction_5F_checknobank::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_checknobank:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_checknobank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_checknobank (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18Instruction_checknobank type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ("pic18Instruction_checknobank",
                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_checknobank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_checknobank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_checknobank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_checknobank GALGAS_pic_31__38_Instruction_5F_checknobank::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_checknobank result ;
  const GALGAS_pic_31__38_Instruction_5F_checknobank * p = (const GALGAS_pic_31__38_Instruction_5F_checknobank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_checknobank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checknobank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_bra::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabels.objectCompare (p->mAttribute_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUsesRelativeCall.objectCompare (p->mAttribute_mUsesRelativeCall) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                                                                    const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                                    const GALGAS_bool & inAttribute_mUsesRelativeCall
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRelativeCall.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra (inAttribute_mInstructionLocation, inAttribute_mSizeExpression, inAttribute_mTargetLabels, inAttribute_mUsesRelativeCall COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_computed_5F_bra::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    result = p->mAttribute_mTargetLabels ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_pic_31__38_Instruction_5F_computed_5F_bra::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    result = p->mAttribute_mUsesRelativeCall ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_computed_5F_bra::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesRelativeCall ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_computed_bra class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_computed_5F_bra::cPtr_pic_31__38_Instruction_5F_computed_5F_bra (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                const GALGAS_bool & in_mUsesRelativeCall
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mTargetLabels (in_mTargetLabels),
mAttribute_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_computed_bra:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra (mAttribute_mInstructionLocation, mAttribute_mSizeExpression, mAttribute_mTargetLabels, mAttribute_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18Instruction_computed_bra type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ("pic18Instruction_computed_bra",
                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_bra GALGAS_pic_31__38_Instruction_5F_computed_5F_bra::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_bra", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_goto::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabels.objectCompare (p->mAttribute_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUsesRelativeCall.objectCompare (p->mAttribute_mUsesRelativeCall) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                                                                      const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                                      const GALGAS_bool & inAttribute_mUsesRelativeCall
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRelativeCall.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto (inAttribute_mInstructionLocation, inAttribute_mSizeExpression, inAttribute_mTargetLabels, inAttribute_mUsesRelativeCall COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_computed_5F_goto::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    result = p->mAttribute_mTargetLabels ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_pic_31__38_Instruction_5F_computed_5F_goto::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    result = p->mAttribute_mUsesRelativeCall ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_computed_5F_goto::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesRelativeCall ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_computed_goto class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_computed_5F_goto::cPtr_pic_31__38_Instruction_5F_computed_5F_goto (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                  const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                  const GALGAS_bool & in_mUsesRelativeCall
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mTargetLabels (in_mTargetLabels),
mAttribute_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_computed_goto:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto (mAttribute_mInstructionLocation, mAttribute_mSizeExpression, mAttribute_mTargetLabels, mAttribute_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_computed_goto type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ("pic18Instruction_computed_goto",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_goto GALGAS_pic_31__38_Instruction_5F_computed_5F_goto::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_goto", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabels.objectCompare (p->mAttribute_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUsesRelativeCall.objectCompare (p->mAttribute_mUsesRelativeCall) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                                                                        const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                                        const GALGAS_bool & inAttribute_mUsesRelativeCall
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRelativeCall.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (inAttribute_mInstructionLocation, inAttribute_mSizeExpression, inAttribute_mTargetLabels, inAttribute_mUsesRelativeCall COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    result = p->mAttribute_mTargetLabels ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mTargetLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabels ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    result = p->mAttribute_mUsesRelativeCall ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesRelativeCall ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @pic18Instruction_computed_rcall class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                    const GALGAS_lstringlist & in_mTargetLabels,
                                                                                                    const GALGAS_bool & in_mUsesRelativeCall
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mTargetLabels (in_mTargetLabels),
mAttribute_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_computed_rcall:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (mAttribute_mInstructionLocation, mAttribute_mSizeExpression, mAttribute_mTargetLabels, mAttribute_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_computed_rcall type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ("pic18Instruction_computed_rcall",
                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_rcall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediateExpressionList.objectCompare (p->mAttribute_mImmediateExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUsesRelativeCall.objectCompare (p->mAttribute_mUsesRelativeCall) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                        const GALGAS_immediatExpression & inAttribute_mSizeExpression,
                                                                                                                        const GALGAS_immediatExpressionList & inAttribute_mImmediateExpressionList,
                                                                                                                        const GALGAS_bool & inAttribute_mUsesRelativeCall
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mImmediateExpressionList.isValid () && inAttribute_mUsesRelativeCall.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (inAttribute_mInstructionLocation, inAttribute_mSizeExpression, inAttribute_mImmediateExpressionList, inAttribute_mUsesRelativeCall COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mImmediateExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    result = p->mAttribute_mImmediateExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mImmediateExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediateExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    result = p->mAttribute_mUsesRelativeCall ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::reader_mUsesRelativeCall (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUsesRelativeCall ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @pic18Instruction_computed_retlw class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_immediatExpression & in_mSizeExpression,
                                                                                                    const GALGAS_immediatExpressionList & in_mImmediateExpressionList,
                                                                                                    const GALGAS_bool & in_mUsesRelativeCall
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mImmediateExpressionList (in_mImmediateExpressionList),
mAttribute_mUsesRelativeCall (in_mUsesRelativeCall) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_computed_retlw:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediateExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (mAttribute_mInstructionLocation, mAttribute_mSizeExpression, mAttribute_mImmediateExpressionList, mAttribute_mUsesRelativeCall COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_computed_retlw type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ("pic18Instruction_computed_retlw",
                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_retlw", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_do_5F_while::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatedInstructionList.objectCompare (p->mAttribute_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfRepeatedInstructionList.objectCompare (p->mAttribute_mEndOfRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhilePartList.objectCompare (p->mAttribute_mWhilePartList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_do_5F_while::objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_do_5F_while::GALGAS_pic_31__38_Instruction_5F_do_5F_while (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                                        GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_do_5F_while::GALGAS_pic_31__38_Instruction_5F_do_5F_while (const cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inAttribute_mRepeatedInstructionList,
                                                                                                            const GALGAS_location & inAttribute_mEndOfRepeatedInstructionList,
                                                                                                            const GALGAS_pic_31__38_DoWhilePartList & inAttribute_mWhilePartList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mEndOfRepeatedInstructionList.isValid () && inAttribute_mWhilePartList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_do_5F_while (inAttribute_mInstructionLocation, inAttribute_mRepeatedInstructionList, inAttribute_mEndOfRepeatedInstructionList, inAttribute_mWhilePartList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_do_5F_while::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    result = p->mAttribute_mRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_do_5F_while::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_do_5F_while::reader_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    result = p->mAttribute_mEndOfRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_do_5F_while::reader_mEndOfRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList GALGAS_pic_31__38_Instruction_5F_do_5F_while::reader_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_DoWhilePartList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    result = p->mAttribute_mWhilePartList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_DoWhilePartList cPtr_pic_31__38_Instruction_5F_do_5F_while::reader_mWhilePartList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhilePartList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_do_while class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_do_5F_while::cPtr_pic_31__38_Instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                                                        const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                        const GALGAS_pic_31__38_DoWhilePartList & in_mWhilePartList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRepeatedInstructionList (in_mRepeatedInstructionList),
mAttribute_mEndOfRepeatedInstructionList (in_mEndOfRepeatedInstructionList),
mAttribute_mWhilePartList (in_mWhilePartList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

void cPtr_pic_31__38_Instruction_5F_do_5F_while::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_do_while:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_do_5F_while (mAttribute_mInstructionLocation, mAttribute_mRepeatedInstructionList, mAttribute_mEndOfRepeatedInstructionList, mAttribute_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_do_while type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ("pic18Instruction_do_while",
                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_do_5F_while GALGAS_pic_31__38_Instruction_5F_do_5F_while::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_do_5F_while result ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while * p = (const GALGAS_pic_31__38_Instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_nobanksel::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_nobanksel * p = (const cPtr_pic_31__38_Instruction_5F_nobanksel *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_nobanksel::objectCompare (const GALGAS_pic_31__38_Instruction_5F_nobanksel & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel::GALGAS_pic_31__38_Instruction_5F_nobanksel (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_nobanksel::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel::GALGAS_pic_31__38_Instruction_5F_nobanksel (const cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_nobanksel result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_nobanksel (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_nobanksel class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_nobanksel::cPtr_pic_31__38_Instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_nobanksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;
}

void cPtr_pic_31__38_Instruction_5F_nobanksel::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_nobanksel:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_nobanksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_nobanksel (mAttribute_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18Instruction_nobanksel type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ("pic18Instruction_nobanksel",
                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_nobanksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_nobanksel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_nobanksel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_nobanksel GALGAS_pic_31__38_Instruction_5F_nobanksel::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_nobanksel result ;
  const GALGAS_pic_31__38_Instruction_5F_nobanksel * p = (const GALGAS_pic_31__38_Instruction_5F_nobanksel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_nobanksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_nobanksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_repetitionStatique::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatExpression.objectCompare (p->mAttribute_mRepeatExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfInstruction.objectCompare (p->mAttribute_mEndOfInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_repetitionStatique::objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_repetitionStatique::GALGAS_pic_31__38_Instruction_5F_repetitionStatique (const cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                          const GALGAS_immediatExpression & inAttribute_mRepeatExpression,
                                                                                                                          const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                                          const GALGAS_location & inAttribute_mEndOfInstruction
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (inAttribute_mInstructionLocation, inAttribute_mRepeatExpression, inAttribute_mInstructionList, inAttribute_mEndOfInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_repetitionStatique::reader_mRepeatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    result = p->mAttribute_mRepeatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_repetitionStatique::reader_mRepeatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_repetitionStatique::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_repetitionStatique::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_repetitionStatique::reader_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    result = p->mAttribute_mEndOfInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_repetitionStatique::reader_mEndOfInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @pic18Instruction_repetitionStatique class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_repetitionStatique::cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GALGAS_location & in_mInstructionLocation,
                                                                                                      const GALGAS_immediatExpression & in_mRepeatExpression,
                                                                                                      const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                      const GALGAS_location & in_mEndOfInstruction
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRepeatExpression (in_mRepeatExpression),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mEndOfInstruction (in_mEndOfInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_repetitionStatique::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_repetitionStatique:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRepeatExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_repetitionStatique::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (mAttribute_mInstructionLocation, mAttribute_mRepeatExpression, mAttribute_mInstructionList, mAttribute_mEndOfInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic18Instruction_repetitionStatique type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ("pic18Instruction_repetitionStatique",
                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_repetitionStatique::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_repetitionStatique::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_repetitionStatique (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_repetitionStatique GALGAS_pic_31__38_Instruction_5F_repetitionStatique::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_repetitionStatique result ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique * p = (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_repetitionStatique *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_repetitionStatique", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegister.objectCompare (p->mAttribute_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfSaveBankInstruction.objectCompare (p->mAttribute_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_savebank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                     GALGAS_registerExpression::constructor_default (HERE),
                                                                     GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_registerExpression & inAttribute_mRegister,
                                                                                                      const GALGAS_pic_31__38_InstructionList & inAttribute_mInstructionList,
                                                                                                      const GALGAS_location & inAttribute_mEndOfSaveBankInstruction
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegister.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfSaveBankInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_savebank (inAttribute_mInstructionLocation, inAttribute_mRegister, inAttribute_mInstructionList, inAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_savebank::reader_mRegister (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mAttribute_mRegister ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_savebank::reader_mRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_savebank::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_savebank::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_savebank::reader_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    result = p->mAttribute_mEndOfSaveBankInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_savebank::reader_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSaveBankInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @pic18Instruction_savebank class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_registerExpression & in_mRegister,
                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegister (in_mRegister),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mEndOfSaveBankInstruction (in_mEndOfSaveBankInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

void cPtr_pic_31__38_Instruction_5F_savebank::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_savebank:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegister.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_savebank (mAttribute_mInstructionLocation, mAttribute_mRegister, mAttribute_mInstructionList, mAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18Instruction_savebank type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ("pic18Instruction_savebank",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_savebank GALGAS_pic_31__38_Instruction_5F_savebank::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_savebank result ;
  const GALGAS_pic_31__38_Instruction_5F_savebank * p = (const GALGAS_pic_31__38_Instruction_5F_savebank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_savebank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_savebank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_structured_5F_if::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIfCondition.objectCompare (p->mAttribute_mIfCondition) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenInstructionList.objectCompare (p->mAttribute_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfElsePartLocation.objectCompare (p->mAttribute_mEndOfElsePartLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_structured_5F_if::objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_structured_5F_if::GALGAS_pic_31__38_Instruction_5F_structured_5F_if (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_structured_5F_if::GALGAS_pic_31__38_Instruction_5F_structured_5F_if (const cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_structured_5F_if GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_pic_31__38_ConditionExpression & inAttribute_mIfCondition,
                                                                                                                      const GALGAS_pic_31__38_InstructionList & inAttribute_mThenInstructionList,
                                                                                                                      const GALGAS_pic_31__38_InstructionList & inAttribute_mElseInstructionList,
                                                                                                                      const GALGAS_location & inAttribute_mEndOfElsePartLocation
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mIfCondition.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElsePartLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if (inAttribute_mInstructionLocation, inAttribute_mIfCondition, inAttribute_mThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression GALGAS_pic_31__38_Instruction_5F_structured_5F_if::reader_mIfCondition (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_ConditionExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mIfCondition ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_ConditionExpression cPtr_pic_31__38_Instruction_5F_structured_5F_if::reader_mIfCondition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIfCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_structured_5F_if::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_structured_5F_if::reader_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_structured_5F_if::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_structured_5F_if::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_structured_5F_if::reader_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    result = p->mAttribute_mEndOfElsePartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_structured_5F_if::reader_mEndOfElsePartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElsePartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_structured_if class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_structured_5F_if::cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mIfCondition (in_mIfCondition),
mAttribute_mThenInstructionList (in_mThenInstructionList),
mAttribute_mElseInstructionList (in_mElseInstructionList),
mAttribute_mEndOfElsePartLocation (in_mEndOfElsePartLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_structured_if:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIfCondition.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfElsePartLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_structured_5F_if (mAttribute_mInstructionLocation, mAttribute_mIfCondition, mAttribute_mThenInstructionList, mAttribute_mElseInstructionList, mAttribute_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_structured_if type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ("pic18Instruction_structured_if",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_structured_5F_if GALGAS_pic_31__38_Instruction_5F_structured_5F_if::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_structured_5F_if result ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if * p = (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_switch::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCaseList.objectCompare (p->mAttribute_mCaseList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseBranchStartLocation.objectCompare (p->mAttribute_mElseBranchStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_switch::objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch::GALGAS_pic_31__38_Instruction_5F_switch (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_switch::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_pic_31__38_SwitchInstructionCaseList::constructor_emptyList (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE),
                                                                   GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch::GALGAS_pic_31__38_Instruction_5F_switch (const cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_switch) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_pic_31__38_SwitchInstructionCaseList & inAttribute_mCaseList,
                                                                                                  const GALGAS_location & inAttribute_mElseBranchStartLocation,
                                                                                                  const GALGAS_pic_31__38_InstructionList & inAttribute_mElseInstructionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_switch result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCaseList.isValid () && inAttribute_mElseBranchStartLocation.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_switch (inAttribute_mInstructionLocation, inAttribute_mCaseList, inAttribute_mElseBranchStartLocation, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_Instruction_5F_switch::reader_mCaseList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mAttribute_mCaseList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_SwitchInstructionCaseList cPtr_pic_31__38_Instruction_5F_switch::reader_mCaseList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCaseList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_Instruction_5F_switch::reader_mElseBranchStartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mAttribute_mElseBranchStartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_pic_31__38_Instruction_5F_switch::reader_mElseBranchStartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseBranchStartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_switch::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList cPtr_pic_31__38_Instruction_5F_switch::reader_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @pic18Instruction_switch class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_switch::cPtr_pic_31__38_Instruction_5F_switch (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                                              const GALGAS_location & in_mElseBranchStartLocation,
                                                                              const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mCaseList (in_mCaseList),
mAttribute_mElseBranchStartLocation (in_mElseBranchStartLocation),
mAttribute_mElseInstructionList (in_mElseInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_switch::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

void cPtr_pic_31__38_Instruction_5F_switch::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_switch:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCaseList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseBranchStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_switch::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_switch (mAttribute_mInstructionLocation, mAttribute_mCaseList, mAttribute_mElseBranchStartLocation, mAttribute_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_switch type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ("pic18Instruction_switch",
                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_switch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_switch::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_switch (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_switch result ;
  const GALGAS_pic_31__38_Instruction_5F_switch * p = (const GALGAS_pic_31__38_Instruction_5F_switch *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_switch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_switch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_pic_31__38_PiccoloSimpleInstruction::objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloSimpleInstruction::GALGAS_pic_31__38_PiccoloSimpleInstruction (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloSimpleInstruction::GALGAS_pic_31__38_PiccoloSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18PiccoloSimpleInstruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_PiccoloSimpleInstruction::cPtr_pic_31__38_PiccoloSimpleInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18PiccoloSimpleInstruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ("pic18PiccoloSimpleInstruction",
                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_PiccoloSimpleInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_PiccoloSimpleInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_PiccoloSimpleInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_PiccoloSimpleInstruction GALGAS_pic_31__38_PiccoloSimpleInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_PiccoloSimpleInstruction result ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction * p = (const GALGAS_pic_31__38_PiccoloSimpleInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_PiccoloSimpleInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloSimpleInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFAinstruction.objectCompare (p->mAttribute_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA::GALGAS_pic_31__38_Instruction_5F_FA (const cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_FA_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                          const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FA (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_FA_5F_instruction_5F_base_5F_code GALGAS_pic_31__38_Instruction_5F_FA::reader_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_FA_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    result = p->mAttribute_mFAinstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_FA_5F_instruction_5F_base_5F_code cPtr_pic_31__38_Instruction_5F_FA::reader_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFAinstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FA class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_FA::cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mFAinstruction (in_mFAinstruction),
mAttribute_mRegisterExpression (in_mRegisterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

void cPtr_pic_31__38_Instruction_5F_FA::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FA:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FA (mAttribute_mInstructionLocation, mAttribute_mFAinstruction, mAttribute_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @pic18Instruction_FA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ("pic18Instruction_FA",
                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FA GALGAS_pic_31__38_Instruction_5F_FA::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FA result ;
  const GALGAS_pic_31__38_Instruction_5F_FA * p = (const GALGAS_pic_31__38_Instruction_5F_FA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FBA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitOrientedOp.objectCompare (p->mAttribute_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FBA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA::GALGAS_pic_31__38_Instruction_5F_FBA (const cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FBA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FBA (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bit_5F_oriented_5F_op GALGAS_pic_31__38_Instruction_5F_FBA::reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mAttribute_mBitOrientedOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bit_5F_oriented_5F_op cPtr_pic_31__38_Instruction_5F_FBA::reader_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitOrientedOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FBA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FBA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_pic_31__38_Instruction_5F_FBA::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_pic_31__38_Instruction_5F_FBA::reader_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FBA class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_FBA::cPtr_pic_31__38_Instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBitOrientedOp (in_mBitOrientedOp),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FBA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

void cPtr_pic_31__38_Instruction_5F_FBA::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FBA:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FBA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FBA (mAttribute_mInstructionLocation, mAttribute_mBitOrientedOp, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_FBA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ("pic18Instruction_FBA",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FBA GALGAS_pic_31__38_Instruction_5F_FBA::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FBA result ;
  const GALGAS_pic_31__38_Instruction_5F_FBA * p = (const GALGAS_pic_31__38_Instruction_5F_FBA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FBA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FBA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_FDA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction_5F_FDA_5F_base_5F_code.objectCompare (p->mAttribute_mInstruction_5F_FDA_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_FDA::objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA::GALGAS_pic_31__38_Instruction_5F_FDA (const cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FDA) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inAttribute_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FDA (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FDA_5F_base_5F_code, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_pic_31__38_Instruction_5F_FDA::reader_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mAttribute_mInstruction_5F_FDA_5F_base_5F_code ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST cPtr_pic_31__38_Instruction_5F_FDA::reader_mInstruction_5F_FDA_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction_5F_FDA_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_FDA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_FDA::reader_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_FDA::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_pic_31__38_Instruction_5F_FDA::reader_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_FDA class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_FDA::cPtr_pic_31__38_Instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction_5F_FDA_5F_base_5F_code (in_mInstruction_5F_FDA_5F_base_5F_code),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

void cPtr_pic_31__38_Instruction_5F_FDA::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_FDA:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FDA (mAttribute_mInstructionLocation, mAttribute_mInstruction_5F_FDA_5F_base_5F_code, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_FDA type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ("pic18Instruction_FDA",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_FDA GALGAS_pic_31__38_Instruction_5F_FDA::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_FDA result ;
  const GALGAS_pic_31__38_Instruction_5F_FDA * p = (const GALGAS_pic_31__38_Instruction_5F_FDA *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_JSR * p = (const cPtr_pic_31__38_Instruction_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabel.objectCompare (p->mAttribute_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_JSR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JSR::GALGAS_pic_31__38_Instruction_5F_JSR (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JSR::GALGAS_pic_31__38_Instruction_5F_JSR (const cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                            const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_Instruction_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JSR * p = (const cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_pic_31__38_Instruction_5F_JSR::reader_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind GALGAS_pic_31__38_Instruction_5F_JSR::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_jumpInstructionKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_JSR * p = (const cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind cPtr_pic_31__38_Instruction_5F_JSR::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @pic18Instruction_JSR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_JSR::cPtr_pic_31__38_Instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mTargetLabel,
                                                                        const GALGAS_jumpInstructionKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

void cPtr_pic_31__38_Instruction_5F_JSR::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_JSR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JSR (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_JSR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ("pic18Instruction_JSR",
                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_JSR GALGAS_pic_31__38_Instruction_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_JSR result ;
  const GALGAS_pic_31__38_Instruction_5F_JSR * p = (const GALGAS_pic_31__38_Instruction_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_LFSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_LFSR * p = (const cPtr_pic_31__38_Instruction_5F_LFSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFSRindex.objectCompare (p->mAttribute_mFSRindex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_LFSR::objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LFSR::GALGAS_pic_31__38_Instruction_5F_LFSR (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LFSR::GALGAS_pic_31__38_Instruction_5F_LFSR (const cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LFSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LFSR GALGAS_pic_31__38_Instruction_5F_LFSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_luint & inAttribute_mFSRindex,
                                                                                              const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LFSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFSRindex.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_LFSR (inAttribute_mInstructionLocation, inAttribute_mFSRindex, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_Instruction_5F_LFSR::reader_mFSRindex (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LFSR * p = (const cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    result = p->mAttribute_mFSRindex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_pic_31__38_Instruction_5F_LFSR::reader_mFSRindex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFSRindex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_LFSR::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_LFSR * p = (const cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_LFSR::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_LFSR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_LFSR::cPtr_pic_31__38_Instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_luint & in_mFSRindex,
                                                                          const GALGAS_immediatExpression & in_mImmediatExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mFSRindex (in_mFSRindex),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_LFSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

void cPtr_pic_31__38_Instruction_5F_LFSR::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_LFSR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFSRindex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_LFSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LFSR (mAttribute_mInstructionLocation, mAttribute_mFSRindex, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_LFSR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ("pic18Instruction_LFSR",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_LFSR GALGAS_pic_31__38_Instruction_5F_LFSR::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_LFSR result ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR * p = (const GALGAS_pic_31__38_Instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_MOVFF::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceRegisterName.objectCompare (p->mAttribute_mSourceRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDestinationRegisterName.objectCompare (p->mAttribute_mDestinationRegisterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_MOVFF::objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::constructor_default (LOCATION_ARGS) {
  return GALGAS_pic_31__38_Instruction_5F_MOVFF::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_registerExpression::constructor_default (HERE),
                                                                  GALGAS_registerExpression::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF::GALGAS_pic_31__38_Instruction_5F_MOVFF (const cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_registerExpression & inAttribute_mSourceRegisterName,
                                                                                                const GALGAS_registerExpression & inAttribute_mDestinationRegisterName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSourceRegisterName.isValid () && inAttribute_mDestinationRegisterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_MOVFF (inAttribute_mInstructionLocation, inAttribute_mSourceRegisterName, inAttribute_mDestinationRegisterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::reader_mSourceRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    result = p->mAttribute_mSourceRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_MOVFF::reader_mSourceRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_MOVFF::reader_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    result = p->mAttribute_mDestinationRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_pic_31__38_Instruction_5F_MOVFF::reader_mDestinationRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_MOVFF class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_MOVFF::cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_registerExpression & in_mSourceRegisterName,
                                                                            const GALGAS_registerExpression & in_mDestinationRegisterName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mSourceRegisterName (in_mSourceRegisterName),
mAttribute_mDestinationRegisterName (in_mDestinationRegisterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

void cPtr_pic_31__38_Instruction_5F_MOVFF::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_MOVFF:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDestinationRegisterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_MOVFF::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MOVFF (mAttribute_mInstructionLocation, mAttribute_mSourceRegisterName, mAttribute_mDestinationRegisterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_MOVFF type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ("pic18Instruction_MOVFF",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_MOVFF GALGAS_pic_31__38_Instruction_5F_MOVFF::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_MOVFF result ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF * p = (const GALGAS_pic_31__38_Instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_MOVFF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MOVFF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_TBLRD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_TBLRD * p = (const cPtr_pic_31__38_Instruction_5F_TBLRD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOption.objectCompare (p->mAttribute_mOption) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_TBLRD::objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLRD::GALGAS_pic_31__38_Instruction_5F_TBLRD (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLRD::GALGAS_pic_31__38_Instruction_5F_TBLRD (const cPtr_pic_31__38_Instruction_5F_TBLRD * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLRD GALGAS_pic_31__38_Instruction_5F_TBLRD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLRD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_TBLRD (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableAccessOption GALGAS_pic_31__38_Instruction_5F_TBLRD::reader_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableAccessOption result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_TBLRD * p = (const cPtr_pic_31__38_Instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
    result = p->mAttribute_mOption ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableAccessOption cPtr_pic_31__38_Instruction_5F_TBLRD::reader_mOption (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOption ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_TBLRD class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_TBLRD::cPtr_pic_31__38_Instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_tableAccessOption & in_mOption
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOption (in_mOption) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_TBLRD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;
}

void cPtr_pic_31__38_Instruction_5F_TBLRD::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_TBLRD:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOption.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_TBLRD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_TBLRD (mAttribute_mInstructionLocation, mAttribute_mOption COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_TBLRD type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ("pic18Instruction_TBLRD",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_TBLRD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_TBLRD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_TBLRD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLRD GALGAS_pic_31__38_Instruction_5F_TBLRD::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLRD result ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD * p = (const GALGAS_pic_31__38_Instruction_5F_TBLRD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_TBLRD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLRD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_TBLWT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_TBLWT * p = (const cPtr_pic_31__38_Instruction_5F_TBLWT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOption.objectCompare (p->mAttribute_mOption) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_TBLWT::objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLWT & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLWT::GALGAS_pic_31__38_Instruction_5F_TBLWT (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLWT::GALGAS_pic_31__38_Instruction_5F_TBLWT (const cPtr_pic_31__38_Instruction_5F_TBLWT * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLWT GALGAS_pic_31__38_Instruction_5F_TBLWT::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLWT result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_TBLWT (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableAccessOption GALGAS_pic_31__38_Instruction_5F_TBLWT::reader_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableAccessOption result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_TBLWT * p = (const cPtr_pic_31__38_Instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
    result = p->mAttribute_mOption ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableAccessOption cPtr_pic_31__38_Instruction_5F_TBLWT::reader_mOption (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOption ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_TBLWT class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_TBLWT::cPtr_pic_31__38_Instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_tableAccessOption & in_mOption
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mOption (in_mOption) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_TBLWT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;
}

void cPtr_pic_31__38_Instruction_5F_TBLWT::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_TBLWT:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOption.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_TBLWT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_TBLWT (mAttribute_mInstructionLocation, mAttribute_mOption COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18Instruction_TBLWT type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ("pic18Instruction_TBLWT",
                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_TBLWT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_TBLWT::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_TBLWT (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_TBLWT GALGAS_pic_31__38_Instruction_5F_TBLWT::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_TBLWT result ;
  const GALGAS_pic_31__38_Instruction_5F_TBLWT * p = (const GALGAS_pic_31__38_Instruction_5F_TBLWT *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_TBLWT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLWT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_fnop::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_fnop * p = (const cPtr_pic_31__38_Instruction_5F_fnop *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_fnop) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_fnop::objectCompare (const GALGAS_pic_31__38_Instruction_5F_fnop & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_fnop::GALGAS_pic_31__38_Instruction_5F_fnop (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_fnop::GALGAS_pic_31__38_Instruction_5F_fnop (const cPtr_pic_31__38_Instruction_5F_fnop * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_fnop) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_fnop GALGAS_pic_31__38_Instruction_5F_fnop::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_fnop result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_fnop (inAttribute_mInstructionLocation, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_fnop::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_fnop * p = (const cPtr_pic_31__38_Instruction_5F_fnop *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_fnop) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_fnop::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pic18Instruction_fnop class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_fnop::cPtr_pic_31__38_Instruction_5F_fnop (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_immediatExpression & in_mImmediatExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_fnop::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;
}

void cPtr_pic_31__38_Instruction_5F_fnop::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_fnop:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_fnop::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_fnop (mAttribute_mInstructionLocation, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18Instruction_fnop type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ("pic18Instruction_fnop",
                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_fnop::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_fnop::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_fnop (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_fnop GALGAS_pic_31__38_Instruction_5F_fnop::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_fnop result ;
  const GALGAS_pic_31__38_Instruction_5F_fnop * p = (const GALGAS_pic_31__38_Instruction_5F_fnop *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_fnop *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_fnop", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInstruction.objectCompare (p->mAttribute_mLiteralInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImmediatExpression.objectCompare (p->mAttribute_mImmediatExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_literalOperation::objectCompare (const GALGAS_pic_31__38_Instruction_5F_literalOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_literalOperation::GALGAS_pic_31__38_Instruction_5F_literalOperation (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_literalOperation::GALGAS_pic_31__38_Instruction_5F_literalOperation (const cPtr_pic_31__38_Instruction_5F_literalOperation * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_literalOperation GALGAS_pic_31__38_Instruction_5F_literalOperation::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                      const GALGAS_immediatExpression & inAttribute_mImmediatExpression
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mImmediatExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mImmediatExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_instruction_5F_opcode GALGAS_pic_31__38_Instruction_5F_literalOperation::reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_literal_5F_instruction_5F_opcode result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    result = p->mAttribute_mLiteralInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_instruction_5F_opcode cPtr_pic_31__38_Instruction_5F_literalOperation::reader_mLiteralInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_pic_31__38_Instruction_5F_literalOperation::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    result = p->mAttribute_mImmediatExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_pic_31__38_Instruction_5F_literalOperation::reader_mImmediatExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImmediatExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18Instruction_literalOperation class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_literalOperation::cPtr_pic_31__38_Instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                  const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mLiteralInstruction (in_mLiteralInstruction),
mAttribute_mImmediatExpression (in_mImmediatExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;
}

void cPtr_pic_31__38_Instruction_5F_literalOperation::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_literalOperation:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_literalOperation (mAttribute_mInstructionLocation, mAttribute_mLiteralInstruction, mAttribute_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18Instruction_literalOperation type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ("pic18Instruction_literalOperation",
                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_literalOperation GALGAS_pic_31__38_Instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_literalOperation result ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation * p = (const GALGAS_pic_31__38_Instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_Instruction_5F_withNoOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (const cPtr_pic_31__38_Instruction_5F_withNoOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_withNoOperand::objectCompare (const GALGAS_pic_31__38_Instruction_5F_withNoOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_withNoOperand::GALGAS_pic_31__38_Instruction_5F_withNoOperand (void) :
GALGAS_pic_31__38_PiccoloSimpleInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_withNoOperand::GALGAS_pic_31__38_Instruction_5F_withNoOperand (const cPtr_pic_31__38_Instruction_5F_withNoOperand * inSourcePtr) :
GALGAS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_withNoOperand GALGAS_pic_31__38_Instruction_5F_withNoOperand::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_pic_31__38_InstructionWithNoOperandKind & inAttribute_mKind
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_withNoOperand (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_pic_31__38_Instruction_5F_withNoOperand::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_InstructionWithNoOperandKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (const cPtr_pic_31__38_Instruction_5F_withNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionWithNoOperandKind cPtr_pic_31__38_Instruction_5F_withNoOperand::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @pic18Instruction_withNoOperand class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_Instruction_5F_withNoOperand::cPtr_pic_31__38_Instruction_5F_withNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_withNoOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;
}

void cPtr_pic_31__38_Instruction_5F_withNoOperand::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_withNoOperand:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_Instruction_5F_withNoOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_withNoOperand (mAttribute_mInstructionLocation, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18Instruction_withNoOperand type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ("pic18Instruction_withNoOperand",
                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_withNoOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_withNoOperand::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_withNoOperand (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_Instruction_5F_withNoOperand GALGAS_pic_31__38_Instruction_5F_withNoOperand::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_withNoOperand result ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand * p = (const GALGAS_pic_31__38_Instruction_5F_withNoOperand *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_withNoOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_withNoOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                         *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerExpression * p = (const cPtr_registerExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (p->mAttribute_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOffset.objectCompare (p->mAttribute_mOffset) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerExpression::objectCompare (const GALGAS_registerExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression::GALGAS_registerExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_registerExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_luint::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression::GALGAS_registerExpression (const cPtr_registerExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_registerExpression::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                                      const GALGAS_luint & inAttribute_mOffset
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerExpression result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mOffset.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerExpression (inAttribute_mRegisterName, inAttribute_mOffset COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerExpression::reader_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerExpression * p = (const cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerExpression::reader_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_registerExpression::reader_mOffset (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerExpression * p = (const cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    result = p->mAttribute_mOffset ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_registerExpression::reader_mOffset (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOffset ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @registerExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerExpression::cPtr_registerExpression (const GALGAS_lstring & in_mRegisterName,
                                                  const GALGAS_luint & in_mOffset
                                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mRegisterName (in_mRegisterName),
mAttribute_mOffset (in_mOffset) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

void cPtr_registerExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@registerExpression:" ;
  mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOffset.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerExpression (mAttribute_mRegisterName, mAttribute_mOffset COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @registerExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerExpression ("registerExpression",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerExpression result ;
  const GALGAS_registerExpression * p = (const GALGAS_registerExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "piccolo",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .piccolo extension",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const char * kVersionString = "version " PROJECT_VERSION_STRING " [debug]" ;
#else
  static const char * kVersionString = "version " PROJECT_VERSION_STRING ;
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    const enumGalgasBool test_0 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.reader_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 6)).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 7)).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 8)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_allDevices = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 11)) ;
      GALGAS_stringlist var_pic_31__38__5F_devices = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 12)) ;
      GALGAS_stringlist var_midrange_5F_devices = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 13)) ;
      GALGAS_stringlist var_baseline_5F_devices = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 14)) ;
      cEnumerator_stringlist enumerator_694 (var_allDevices, kEnumeration_up) ;
      while (enumerator_694.hasCurrentObject ()) {
        GALGAS_string var_name = enumerator_694.current_mValue (HERE).reader_lastPathComponent (SOURCE_FILE ("piccolo_program.galgas", 17)).reader_stringByDeletingPathExtension (SOURCE_FILE ("piccolo_program.galgas", 17)) ;
        GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
        {
        routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_name, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)) ;
        }
        if (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("piccolo_program.galgas", 19)).isValid ()) {
          switch (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("piccolo_program.galgas", 19)).enumValue ()) {
          case GALGAS_processorType::kNotBuilt:
            break ;
          case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_: case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_: {
            var_pic_31__38__5F_devices.addAssign_operation (var_name  COMMA_SOURCE_FILE ("piccolo_program.galgas", 21)) ;
            } break ;
          case GALGAS_processorType::kEnum_midrange: {
            var_midrange_5F_devices.addAssign_operation (var_name  COMMA_SOURCE_FILE ("piccolo_program.galgas", 23)) ;
            } break ;
          case GALGAS_processorType::kEnum_baseline: {
            var_baseline_5F_devices.addAssign_operation (var_name  COMMA_SOURCE_FILE ("piccolo_program.galgas", 31)) ;
            } break ;
          }
        }
        enumerator_694.gotoNextObject () ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.reader_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 35)).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->printMessage (var_baseline_5F_devices.reader_length (SOURCE_FILE ("piccolo_program.galgas", 36)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string (" baseline devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string::constructor_stringWithVersionString (SOURCE_FILE ("piccolo_program.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)) ;
        GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_stringlist enumerator_1824 (var_baseline_5F_devices, kEnumeration_up) ;
        while (enumerator_1824.hasCurrentObject ()) {
          inCompiler->printMessage (enumerator_1824.current_mValue (HERE).reader_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 39))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 39)) ;
          var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 40)) ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_idx = GALGAS_uint ((uint32_t) 0U) ;
            inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 43)) ;
          }
          enumerator_1824.gotoNextObject () ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 47)) ;
        }
      }
      const enumGalgasBool test_4 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.reader_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 51)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->printMessage (var_midrange_5F_devices.reader_length (SOURCE_FILE ("piccolo_program.galgas", 52)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string (" mid-range devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string::constructor_stringWithVersionString (SOURCE_FILE ("piccolo_program.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)) ;
        GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_stringlist enumerator_2417 (var_midrange_5F_devices, kEnumeration_up) ;
        while (enumerator_2417.hasCurrentObject ()) {
          inCompiler->printMessage (enumerator_2417.current_mValue (HERE).reader_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 55))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 55)) ;
          var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 56)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_idx = GALGAS_uint ((uint32_t) 0U) ;
            inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 59)) ;
          }
          enumerator_2417.gotoNextObject () ;
        }
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_6) {
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 63)) ;
        }
      }
      const enumGalgasBool test_7 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.reader_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.reader_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->printMessage (var_pic_31__38__5F_devices.reader_length (SOURCE_FILE ("piccolo_program.galgas", 68)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string (" pic18 devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string::constructor_stringWithVersionString (SOURCE_FILE ("piccolo_program.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)) ;
        GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_stringlist enumerator_2993 (var_pic_31__38__5F_devices, kEnumeration_up) ;
        while (enumerator_2993.hasCurrentObject ()) {
          inCompiler->printMessage (enumerator_2993.current_mValue (HERE).reader_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 71))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 71)) ;
          var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 72)) ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            var_idx = GALGAS_uint ((uint32_t) 0U) ;
            inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 75)) ;
          }
          enumerator_2993.gotoNextObject () ;
        }
        const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_idx.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 79)) ;
        }
      }
    }
    const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.reader_value ()).reader_length (SOURCE_FILE ("piccolo_program.galgas", 85)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string var_dir = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.reader_value ()) ;
      const enumGalgasBool test_11 = var_dir.reader_directoryExists (SOURCE_FILE ("piccolo_program.galgas", 87)).operator_not (SOURCE_FILE ("piccolo_program.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_11) {
        var_dir.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 88)) ;
      }
      GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
      GALGAS_stringlist var_allDevices = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 91)) ;
      cEnumerator_stringlist enumerator_3704 (var_allDevices, kEnumeration_up) ;
      while (enumerator_3704.hasCurrentObject ()) {
        GALGAS_string var_definitionString = var_fw.reader_textFileContentsAtPath (enumerator_3704.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 93)) ;
        var_definitionString.method_writeToFile (var_dir.add_operation (enumerator_3704.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)) ;
        enumerator_3704.gotoNextObject () ;
      }
      inCompiler->printMessage (var_allDevices.reader_length (SOURCE_FILE ("piccolo_program.galgas", 96)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GALGAS_string (" devices copied in '"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (var_dir, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GALGAS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)) ;
    }
    GALGAS_string var_deviceForMemoryDescription = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription.reader_value ()) ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_deviceForMemoryDescription.reader_length (SOURCE_FILE ("piccolo_program.galgas", 100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_string var_devicePath = GALGAS_string ("/").add_operation (var_deviceForMemoryDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)) ;
      const enumGalgasBool test_13 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_fileExistsAtPath (var_devicePath, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 102)).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
        {
        routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForMemoryDescription, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 104))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 104)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 104)) ;
        }
        GALGAS_uint var_totalRam = GALGAS_uint ((uint32_t) 0U) ;
        cEnumerator_ramBankTable enumerator_4540 (var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("piccolo_program.galgas", 106)), kEnumeration_up) ;
        while (enumerator_4540.hasCurrentObject ()) {
          var_totalRam = var_totalRam.add_operation (enumerator_4540.current_mLastAddressPlusOne (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)).substract_operation (enumerator_4540.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)) ;
          enumerator_4540.gotoNextObject () ;
        }
        inCompiler->printMessage (var_deviceForMemoryDescription.add_operation (GALGAS_string (" device:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)) ;
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("piccolo_program.galgas", 110)).reader_count (SOURCE_FILE ("piccolo_program.galgas", 110)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).add_operation (GALGAS_string (" RAM banks (total "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).add_operation (var_totalRam.reader_string (SOURCE_FILE ("piccolo_program.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).add_operation (GALGAS_string (" bytes):\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)) ;
        cEnumerator_ramBankTable enumerator_4864 (var_piccoloDeviceModel.reader_mRamBankTable (SOURCE_FILE ("piccolo_program.galgas", 111)), kEnumeration_up) ;
        while (enumerator_4864.hasCurrentObject ()) {
          inCompiler->printMessage (GALGAS_string ("    bank \"").add_operation (enumerator_4864.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (GALGAS_string ("\" from "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (enumerator_4864.current_mFirstFreeAddress (HERE).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (enumerator_4864.current_mLastAddressPlusOne (HERE).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).add_operation (enumerator_4864.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_4864.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 114)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 114)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 114))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)) ;
          cEnumerator_uintlist enumerator_5115 (enumerator_4864.current_mMirrorOffsetList (HERE), kEnumeration_up) ;
          const bool bool_14 = true ;
          if (enumerator_5115.hasCurrentObject () && bool_14) {
            inCompiler->printMessage (GALGAS_string (", mirror at ")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 116)) ;
            while (enumerator_5115.hasCurrentObject () && bool_14) {
              inCompiler->printMessage (enumerator_4864.current_mFirstFreeAddress (HERE).add_operation (enumerator_5115.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 117)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 117))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 117)) ;
              enumerator_5115.gotoNextObject () ;
              if (enumerator_5115.hasCurrentObject () && bool_14) {
                inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 118)) ;
              }
            }
          }
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 120)) ;
          enumerator_4864.gotoNextObject () ;
        }
        if (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("piccolo_program.galgas", 122)).isValid ()) {
          switch (var_piccoloDeviceModel.reader_mProcessorType (SOURCE_FILE ("piccolo_program.galgas", 122)).enumValue ()) {
          case GALGAS_processorType::kNotBuilt:
            break ;
          case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_: case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_: {
            inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("piccolo_program.galgas", 124)).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 124)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 124)).add_operation (GALGAS_string (" bytes\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 124))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 124)) ;
            } break ;
          case GALGAS_processorType::kEnum_midrange: {
            GALGAS_uint var_pageCount = var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("piccolo_program.galgas", 126)).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 126)).add_operation (GALGAS_uint ((uint32_t) 2047U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 126)).divide_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 126)) ;
            GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_pageCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_15) {
              var_s = GALGAS_string ("s") ;
            }
            inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("piccolo_program.galgas", 131)).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 131)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (GALGAS_string (" instructions ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (var_pageCount.reader_string (SOURCE_FILE ("piccolo_program.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (GALGAS_string (" page"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 132)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 132)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 132))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)) ;
            } break ;
          case GALGAS_processorType::kEnum_baseline: {
            inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel.reader_mRomSize (SOURCE_FILE ("piccolo_program.galgas", 134)).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 134)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 134)).add_operation (GALGAS_string (" instructions\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 134))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 134)) ;
            } break ;
          }
        }
        const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, var_piccoloDeviceModel.reader_mEepromSize (SOURCE_FILE ("piccolo_program.galgas", 136)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_16) {
          inCompiler->printMessage (GALGAS_string ("  No EEPROM\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 137)) ;
        }else if (kBoolFalse == test_16) {
          inCompiler->printMessage (GALGAS_string ("  EEPROM size: ").add_operation (var_piccoloDeviceModel.reader_mEepromSize (SOURCE_FILE ("piccolo_program.galgas", 139)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)).add_operation (GALGAS_string (" bytes (at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)).add_operation (var_piccoloDeviceModel.reader_mEepromAddress (SOURCE_FILE ("piccolo_program.galgas", 140)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 140))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)) ;
        }
      }else if (kBoolFalse == test_13) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 143)), GALGAS_string ("The ").add_operation (var_deviceForMemoryDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 143)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 143))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 143)) ;
      }
    }
    GALGAS_string var_deviceForRegistersDescription = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription.reader_value ()) ;
    const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_deviceForRegistersDescription.reader_length (SOURCE_FILE ("piccolo_program.galgas", 148)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_string var_devicePath = GALGAS_string ("/").add_operation (var_deviceForRegistersDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)) ;
      const enumGalgasBool test_18 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_fileExistsAtPath (var_devicePath, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
        {
        routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForRegistersDescription, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 152))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 152)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 152)) ;
        }
        inCompiler->printMessage (var_deviceForRegistersDescription.add_operation (GALGAS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)).add_operation (var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("piccolo_program.galgas", 153)).reader_count (SOURCE_FILE ("piccolo_program.galgas", 153)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)).add_operation (GALGAS_string (" special registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)) ;
        cEnumerator_registerTable enumerator_7064 (var_piccoloDeviceModel.reader_mRegisterTable (SOURCE_FILE ("piccolo_program.galgas", 154)), kEnumeration_up) ;
        while (enumerator_7064.hasCurrentObject ()) {
          GALGAS_string var_s = GALGAS_string ("  '").add_operation (enumerator_7064.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 155)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 155)) ;
          cEnumerator_uintlist enumerator_7150 (enumerator_7064.current_mRegisterAddressList (HERE), kEnumeration_up) ;
          while (enumerator_7150.hasCurrentObject ()) {
            var_s.dotAssign_operation (enumerator_7150.current_mValue (HERE).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 157))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 157)) ;
            if (enumerator_7150.hasNextObject ()) {
              var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 158)) ;
            }
            enumerator_7150.gotoNextObject () ;
          }
          var_s.dotAssign_operation (enumerator_7064.current_mBitDefinitionString (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 160))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 160)) ;
          inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("piccolo_program.galgas", 161)) ;
          enumerator_7064.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_18) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 164)), GALGAS_string ("The ").add_operation (var_deviceForRegistersDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 164)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 164))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 164)) ;
      }
    }
    GALGAS_string var_deviceForConfigDescription = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription.reader_value ()) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_deviceForConfigDescription.reader_length (SOURCE_FILE ("piccolo_program.galgas", 169)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_devicePath = GALGAS_string ("/").add_operation (var_deviceForConfigDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)) ;
      const enumGalgasBool test_20 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).reader_fileExistsAtPath (var_devicePath, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).boolEnum () ;
      if (kBoolTrue == test_20) {
        GALGAS_piccoloDeviceModel var_piccoloDeviceModel ;
        {
        routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForConfigDescription, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 173))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)), var_piccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)) ;
        }
        inCompiler->printMessage (var_deviceForConfigDescription.add_operation (GALGAS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 174)).add_operation (var_piccoloDeviceModel.reader_mConfigRegisterMap (SOURCE_FILE ("piccolo_program.galgas", 174)).reader_count (SOURCE_FILE ("piccolo_program.galgas", 174)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 174)).add_operation (GALGAS_string (" configuration registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 174))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 174)) ;
        cEnumerator_configRegisterMap enumerator_8170 (var_piccoloDeviceModel.reader_mConfigRegisterMap (SOURCE_FILE ("piccolo_program.galgas", 175)), kEnumeration_up) ;
        while (enumerator_8170.hasCurrentObject ()) {
          GALGAS_string var_s = GALGAS_string ("REGISTER '").add_operation (enumerator_8170.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (enumerator_8170.current_mRegisterAddress (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 176)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GALGAS_string (", width "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (enumerator_8170.current_mRegisterWidth (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 176)).reader_string (SOURCE_FILE ("piccolo_program.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)) ;
          cEnumerator_illegalMaskList enumerator_8350 (enumerator_8170.current_mIllegalMaskList (HERE), kEnumeration_up) ;
          while (enumerator_8350.hasCurrentObject ()) {
            var_s.dotAssign_operation (GALGAS_string ("  illegal value ").add_operation (enumerator_8350.current_mIllegalValue (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 178)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string (" mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8350.current_mIllegalMask (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 178)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8350.current_mDescription (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)) ;
            enumerator_8350.gotoNextObject () ;
          }
          cEnumerator_configRegisterMaskMap enumerator_8573 (enumerator_8170.current_mConfigRegisterMaskMap (HERE), kEnumeration_up) ;
          while (enumerator_8573.hasCurrentObject ()) {
            var_s.dotAssign_operation (GALGAS_string ("  setting '").add_operation (enumerator_8573.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (GALGAS_string ("': mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (enumerator_8573.current_mMaskValue (HERE).reader_uint (SOURCE_FILE ("piccolo_program.galgas", 181)).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (enumerator_8573.current_mDescription (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 181))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)) ;
            cEnumerator_fieldSettingMap enumerator_8775 (enumerator_8573.current_mFieldSettingMap (HERE), kEnumeration_up) ;
            while (enumerator_8775.hasCurrentObject ()) {
              var_s.dotAssign_operation (GALGAS_string ("    value ").add_operation (enumerator_8775.current_mValue (HERE).reader_hexString (SOURCE_FILE ("piccolo_program.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)).add_operation (enumerator_8775.current_lkey (HERE).reader_string (SOURCE_FILE ("piccolo_program.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 183))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)) ;
              enumerator_8775.gotoNextObject () ;
            }
            enumerator_8573.gotoNextObject () ;
          }
          inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)) ;
          enumerator_8170.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_20) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 189)), GALGAS_string ("The ").add_operation (var_deviceForConfigDescription, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 189)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 189))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 189)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("piccolo_program.galgas", 200)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         kVersionString,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  bool verboseOptionOn = true ;
  int16_t returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      verboseOptionOn = gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        setCurrentCompiledFilePath (sourceFilesArray (i COMMA_HERE)) ;
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int16_t r = 0 ;
        if (fileExtension == "piccolo") {
          if (executionModeIsIndexing ()) {
            cGrammar_pic_31__38__5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
          }else{
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
        closeTrace () ;
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonLexique COMMA_HERE) ;
    //--- Display error and warnings count
      if (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Abstract category method '@bitNumberExpression display'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_bitNumberExpression_display> gCategoryMethodTable_bitNumberExpression_display ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_display (const int32_t inClassIndex,
                                  categoryMethodSignature_bitNumberExpression_display inMethod) {
  gCategoryMethodTable_bitNumberExpression_display.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_bitNumberExpression_display (void) {
  gCategoryMethodTable_bitNumberExpression_display.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberExpression_display (NULL,
                                                        freeCategoryMethod_bitNumberExpression_display) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_display (const cPtr_bitNumberExpression * inObject,
                                 GALGAS_string & io_ioString,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_bitNumberExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_bitNumberExpression_display f = NULL ;
    if (classIndex < gCategoryMethodTable_bitNumberExpression_display.count ()) {
      f = gCategoryMethodTable_bitNumberExpression_display (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_bitNumberExpression_display.count ()) {
           f = gCategoryMethodTable_bitNumberExpression_display (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_bitNumberExpression_display.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioString, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Category Reader '@uint x4String'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_x_34_String (const GALGAS_uint & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_uint temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, temp_0.objectCompare (GALGAS_uint ((uint32_t) 65535U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult = GALGAS_string ("****") ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_uint temp_2 = inObject ;
    result_outResult = temp_2.right_shift_operation (GALGAS_uint ((uint32_t) 12U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 31)).reader_xString (SOURCE_FILE ("intermediate_generic.galgas", 31)) ;
    const GALGAS_uint temp_3 = inObject ;
    result_outResult.dotAssign_operation (temp_3.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)).reader_xString (SOURCE_FILE ("intermediate_generic.galgas", 32))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 32)) ;
    const GALGAS_uint temp_4 = inObject ;
    result_outResult.dotAssign_operation (temp_4.right_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)).operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)).reader_xString (SOURCE_FILE ("intermediate_generic.galgas", 33))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 33)) ;
    const GALGAS_uint temp_5 = inObject ;
    result_outResult.dotAssign_operation (temp_5.operator_and (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 34)).reader_xString (SOURCE_FILE ("intermediate_generic.galgas", 34))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 34)) ;
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
      f (inObject, constin_inBitSliceTable, out_outBitNumber, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@baseline_instruction_FD_base_code mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF: {
      result_outResult = GALGAS_string ("ADDWF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF: {
      result_outResult = GALGAS_string ("ANDWF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF: {
      result_outResult = GALGAS_string ("COMF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF: {
      result_outResult = GALGAS_string ("DECF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ: {
      result_outResult = GALGAS_string ("DECFSZ") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF: {
      result_outResult = GALGAS_string ("INCF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ: {
      result_outResult = GALGAS_string ("INCFSZ") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF: {
      result_outResult = GALGAS_string ("IORWF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF: {
      result_outResult = GALGAS_string ("MOVF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF: {
      result_outResult = GALGAS_string ("RLF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF: {
      result_outResult = GALGAS_string ("RRF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF: {
      result_outResult = GALGAS_string ("SUBWF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF: {
      result_outResult = GALGAS_string ("SWAPF") ;
      } break ;
    case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF: {
      result_outResult = GALGAS_string ("XORWF") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@baseline_F_instruction_base_code mnemonic'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF: {
      result_outResult = GALGAS_string ("CLRF") ;
      } break ;
    case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF: {
      result_outResult = GALGAS_string ("MOVWF") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@baseline_bit_oriented_op mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kNotBuilt:
      break ;
    case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BCF: {
      result_outResult = GALGAS_string ("BCF") ;
      } break ;
    case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BSF: {
      result_outResult = GALGAS_string ("BSF") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@baseline_literal_instruction_opcode mnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
      break ;
    case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW: {
      result_outResult = GALGAS_string ("ANDLW") ;
      } break ;
    case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW: {
      result_outResult = GALGAS_string ("IORLW") ;
      } break ;
    case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW: {
      result_outResult = GALGAS_string ("MOVLW") ;
      } break ;
    case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW: {
      result_outResult = GALGAS_string ("RETLW") ;
      } break ;
    case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW: {
      result_outResult = GALGAS_string ("XORLW") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Reader '@baseline_IF_BitTest_opcode mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::kNotBuilt:
      break ;
    case GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::kEnum_BTFSS: {
      result_outResult = GALGAS_string ("BTFSS") ;
      } break ;
    case GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode::kEnum_BTFSC: {
      result_outResult = GALGAS_string ("BTFSC") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@baseline_WO_OPERAND_group mnemonic'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kNotBuilt:
      break ;
    case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_NOP: {
      result_outResult = GALGAS_string ("NOP") ;
      } break ;
    case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRW: {
      result_outResult = GALGAS_string ("CLRW") ;
      } break ;
    case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRWDT: {
      result_outResult = GALGAS_string ("CLRWDT") ;
      } break ;
    case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_OPTION_5F_: {
      result_outResult = GALGAS_string ("OPTION") ;
      } break ;
    case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_SLEEP: {
      result_outResult = GALGAS_string ("SLEEP") ;
      } break ;
    }
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

GALGAS_string GALGAS_baseline_5F_intermediate_5F_registerExpression::reader_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssemblyString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_intermediate_5F_registerExpression::reader_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
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
      f (inObject, constin_inCurrentPage, constin_inRegisterTable, io_ioLocalLabelIndex, constin_inComplementaryBranch, constin_inInstructionLocation, constin_inTargetLabel, io_ioGeneratedInstructionList, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
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
//                        Abstract category reader '@baseline_intermediate_instruction length'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length> gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_length (const int32_t inClassIndex,
                                 categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length inReader) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_baseline_5F_intermediate_5F_instruction_length (void) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_instruction_length (NULL,
                                                                           freeCategoryReader_baseline_5F_intermediate_5F_instruction_length) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryReader_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length f = NULL ;
    if (classIndex < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.count ()) {
      f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.count ()) {
           f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_length.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
  ioArgument_ioCurrentWordAdress = ioArgument_ioCurrentWordAdress.add_operation (callCategoryReader_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)) ;
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
//                            Category reader '@baseline_intermediate_instruction isLABEL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL> gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isLABEL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isLABEL (const int32_t inClassIndex,
                                  categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL inReader) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isLABEL.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL f = NULL ;
    if (classIndex < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isLABEL.count ()) {
      f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isLABEL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isLABEL.count ()) {
           f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isLABEL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isLABEL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_bool categoryReader_baseline_5F_intermediate_5F_instruction_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (false) ;
//---
  return result_outIsLABEL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_instruction_isLABEL (void) {
  enterCategoryReader_isLABEL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                               categoryReader_baseline_5F_intermediate_5F_instruction_isLABEL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_baseline_5F_intermediate_5F_instruction_isLABEL (void) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isLABEL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_instruction_isLABEL (defineCategoryReader_baseline_5F_intermediate_5F_instruction_isLABEL,
                                                                            freeCategoryReader_baseline_5F_intermediate_5F_instruction_isLABEL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category reader '@baseline_intermediate_instruction isNULL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isNULL> gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isNULL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isNULL (const int32_t inClassIndex,
                                 categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isNULL inReader) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isNULL f = NULL ;
    if (classIndex < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isNULL.count ()) {
      f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isNULL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isNULL.count ()) {
           f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isNULL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_bool categoryReader_baseline_5F_intermediate_5F_instruction_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (false) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_instruction_isNULL (void) {
  enterCategoryReader_isNULL (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                              categoryReader_baseline_5F_intermediate_5F_instruction_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_baseline_5F_intermediate_5F_instruction_isNULL (void) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isNULL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_instruction_isNULL (defineCategoryReader_baseline_5F_intermediate_5F_instruction_isNULL,
                                                                           freeCategoryReader_baseline_5F_intermediate_5F_instruction_isNULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category reader '@baseline_intermediate_instruction isSkippingInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction> gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isSkippingInstruction (const int32_t inClassIndex,
                                                categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction inReader) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isSkippingInstruction f = NULL ;
    if (classIndex < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
      f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
           f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_bool categoryReader_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (false) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  enterCategoryReader_isSkippingInstruction (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                             categoryReader_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_isSkippingInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_instruction_isSkippingInstruction (defineCategoryReader_baseline_5F_intermediate_5F_instruction_isSkippingInstruction,
                                                                                          freeCategoryReader_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category reader '@baseline_intermediate_instruction nextInstructionIsReachable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable> gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_nextInstructionIsReachable (const int32_t inClassIndex,
                                                     categoryReaderSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable inReader) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable f = NULL ;
    if (classIndex < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
      f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
           f = gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_bool categoryReader_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (true) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  enterCategoryReader_nextInstructionIsReachable (kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction.mSlotID,
                                                  categoryReader_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  gCategoryReaderTable_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable (defineCategoryReader_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable,
                                                                                               freeCategoryReader_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;

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
      ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegisterDescription, cast_18775_goto.reader_mTargetLabel (SOURCE_FILE ("baseline_optimizations.galgas", 483)).reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 483)), object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination, object->mAttribute_mBranchIfZero  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 480)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 479)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.reader_string (SOURCE_FILE ("baseline_optimizations.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 490)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("GOTO ")  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 491)) ;
      const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("INCF ")  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 493)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("DECF ")  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 495)) ;
      }
      ioArgument_ioListFileContents.dotAssign_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("baseline_optimizations.galgas", 497))  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 497)) ;
      const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 499)) ;
      }
      const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" Z")  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" NZ")  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 504)) ;
      }
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (": branching to GOTO replaced by second GOTO label\n")  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 506)) ;
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
//                          Abstract category reader '@baseline_assembly_instruction length'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_baseline_5F_assembly_5F_instruction_length> gCategoryReaderTable_baseline_5F_assembly_5F_instruction_length ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_length (const int32_t inClassIndex,
                                 categoryReaderSignature_baseline_5F_assembly_5F_instruction_length inReader) {
  gCategoryReaderTable_baseline_5F_assembly_5F_instruction_length.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_baseline_5F_assembly_5F_instruction_length (void) {
  gCategoryReaderTable_baseline_5F_assembly_5F_instruction_length.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_baseline_5F_assembly_5F_instruction_length (NULL,
                                                                       freeCategoryReader_baseline_5F_assembly_5F_instruction_length) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryReader_length (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_baseline_5F_assembly_5F_instruction_length f = NULL ;
    if (classIndex < gCategoryReaderTable_baseline_5F_assembly_5F_instruction_length.count ()) {
      f = gCategoryReaderTable_baseline_5F_assembly_5F_instruction_length (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_baseline_5F_assembly_5F_instruction_length.count ()) {
           f = gCategoryReaderTable_baseline_5F_assembly_5F_instruction_length (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_baseline_5F_assembly_5F_instruction_length.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                            Category Reader '@midrange_instruction_FD_base_code mnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF: {
      result_outResult = GALGAS_string ("ADDWF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF: {
      result_outResult = GALGAS_string ("ANDWF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF: {
      result_outResult = GALGAS_string ("COMF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF: {
      result_outResult = GALGAS_string ("DECF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ: {
      result_outResult = GALGAS_string ("DECFSZ") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF: {
      result_outResult = GALGAS_string ("INCF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ: {
      result_outResult = GALGAS_string ("INCFSZ") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF: {
      result_outResult = GALGAS_string ("IORWF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF: {
      result_outResult = GALGAS_string ("MOVF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF: {
      result_outResult = GALGAS_string ("RLF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF: {
      result_outResult = GALGAS_string ("RRF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF: {
      result_outResult = GALGAS_string ("SUBWF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF: {
      result_outResult = GALGAS_string ("SWAPF") ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF: {
      result_outResult = GALGAS_string ("XORWF") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@midrange_F_instruction_base_code mnemonic'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF: {
      result_outResult = GALGAS_string ("CLRF") ;
      } break ;
    case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF: {
      result_outResult = GALGAS_string ("MOVWF") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@midrange_bit_oriented_op mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BCF: {
      result_outResult = GALGAS_string ("BCF") ;
      } break ;
    case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BSF: {
      result_outResult = GALGAS_string ("BSF") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@midrange_literal_instruction_opcode mnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ADDLW: {
      result_outResult = GALGAS_string ("ADDLW") ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW: {
      result_outResult = GALGAS_string ("ANDLW") ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW: {
      result_outResult = GALGAS_string ("IORLW") ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW: {
      result_outResult = GALGAS_string ("MOVLW") ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW: {
      result_outResult = GALGAS_string ("RETLW") ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_SUBLW: {
      result_outResult = GALGAS_string ("SUBLW") ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW: {
      result_outResult = GALGAS_string ("XORLW") ;
      } break ;
    }
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

GALGAS_string GALGAS_midrange_5F_intermediate_5F_registerExpression::reader_mAssemblyString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssemblyString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_intermediate_5F_registerExpression::reader_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
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
//                   Abstract category reader '@midrange_intermediate_instruction instructionLength'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_midrange_5F_intermediate_5F_instruction_instructionLength> gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_instructionLength ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionLength (const int32_t inClassIndex,
                                            categoryReaderSignature_midrange_5F_intermediate_5F_instruction_instructionLength inReader) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_instructionLength.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_midrange_5F_intermediate_5F_instruction_instructionLength (void) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_instructionLength.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_instructionLength (NULL,
                                                                                      freeCategoryReader_midrange_5F_intermediate_5F_instruction_instructionLength) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryReader_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_midrange_5F_intermediate_5F_instruction_instructionLength f = NULL ;
    if (classIndex < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_instructionLength.count ()) {
      f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_instructionLength (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_instructionLength.count ()) {
           f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_instructionLength (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_instructionLength.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
  ioArgument_ioCurrentAddress = ioArgument_ioCurrentAddress.add_operation (callCategoryReader_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_set_current_address.galgas", 6)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_set_current_address.galgas", 6)) ;
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
      f (inObject, constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, io_ioLocalLabelIndex, constin_inComplementaryBranch, constin_inInstructionLocation, constin_inTargetLabel, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
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
//                          Category reader '@midrange_intermediate_instruction isLABELorORG'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG> gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isLABELorORG ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isLABELorORG (const int32_t inClassIndex,
                                       categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG inReader) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG f = NULL ;
    if (classIndex < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.count ()) {
      f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isLABELorORG (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.count ()) {
           f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isLABELorORG (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_instruction_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (false) ;
//---
  return result_outIsLABELorORG ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_instruction_isLABELorORG (void) {
  enterCategoryReader_isLABELorORG (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                    categoryReader_midrange_5F_intermediate_5F_instruction_isLABELorORG) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_midrange_5F_intermediate_5F_instruction_isLABELorORG (void) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isLABELorORG.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_isLABELorORG (defineCategoryReader_midrange_5F_intermediate_5F_instruction_isLABELorORG,
                                                                                 freeCategoryReader_midrange_5F_intermediate_5F_instruction_isLABELorORG) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category reader '@midrange_intermediate_instruction isNULL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isNULL> gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isNULL ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isNULL (const int32_t inClassIndex,
                                 categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isNULL inReader) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isNULL f = NULL ;
    if (classIndex < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isNULL.count ()) {
      f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isNULL (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isNULL.count ()) {
           f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isNULL (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isNULL.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_instruction_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (false) ;
//---
  return result_outIsNULL ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_instruction_isNULL (void) {
  enterCategoryReader_isNULL (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                              categoryReader_midrange_5F_intermediate_5F_instruction_isNULL) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_midrange_5F_intermediate_5F_instruction_isNULL (void) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isNULL.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_isNULL (defineCategoryReader_midrange_5F_intermediate_5F_instruction_isNULL,
                                                                           freeCategoryReader_midrange_5F_intermediate_5F_instruction_isNULL) ;

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
//                     Category reader '@midrange_intermediate_instruction isSkippingInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isSkippingInstruction> gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isSkippingInstruction (const int32_t inClassIndex,
                                                categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isSkippingInstruction inReader) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isSkippingInstruction f = NULL ;
    if (classIndex < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
      f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.count ()) {
           f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (false) ;
//---
  return result_outIsSkipping ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  enterCategoryReader_isSkippingInstruction (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                             categoryReader_midrange_5F_intermediate_5F_instruction_isSkippingInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (void) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_isSkippingInstruction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_isSkippingInstruction (defineCategoryReader_midrange_5F_intermediate_5F_instruction_isSkippingInstruction,
                                                                                          freeCategoryReader_midrange_5F_intermediate_5F_instruction_isSkippingInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category reader '@midrange_intermediate_instruction nextInstructionIsReachable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable> gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_nextInstructionIsReachable (const int32_t inClassIndex,
                                                     categoryReaderSignature_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable inReader) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callCategoryReader_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable f = NULL ;
    if (classIndex < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
      f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.count ()) {
           f = gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_bool categoryReader_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * /* inObject */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (true) ;
//---
  return result_outIsReachable ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  enterCategoryReader_nextInstructionIsReachable (kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction.mSlotID,
                                                  categoryReader_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (void) {
  gCategoryReaderTable_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable (defineCategoryReader_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable,
                                                                                               freeCategoryReader_midrange_5F_intermediate_5F_instruction_nextInstructionIsReachable) ;

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
        ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 375)), object->mAttribute_mLiteralValue  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 375)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 374)) ;
        }
        ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 379)).add_operation (GALGAS_string (": MOVLW followed by RETURN replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 379))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 379)) ;
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
  GALGAS_bool joker_17257_0 ; // Joker input parameter
  constinArgument_inSymbolTable.method_searchKey (GALGAS_lstring::constructor_new (object->mAttribute_mTargetLabel, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 395))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 395)), var_line, joker_17257_0, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 395)) ;
  GALGAS_midrange_5F_intermediate_5F_instruction var_firstInstruction ;
  {
  routine_findMidRangeFirstInstructionFromAddress (var_line.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 398)), ioArgument_ioGeneratedInstructionList, var_firstInstruction, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 398)) ;
  }
  if (var_firstInstruction.isValid ()) {
    if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
      GALGAS_midrange_5F_intermediate_5F_JUMP cast_17594_jump ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_firstInstruction.ptr ()) ;
      {
      ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegisterDescription, cast_17594_jump.reader_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 407)).reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 407)), object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination, object->mAttribute_mBranchIfZero  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 404)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 403)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 414)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 414))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 414)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("JUMP ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 415)) ;
      const enumGalgasBool test_0 = object->mAttribute_mIncrement.boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("INCF ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 417)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("DECF ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 419)) ;
      }
      ioArgument_ioListFileContents.dotAssign_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_optimizations.galgas", 421))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 421)) ;
      const enumGalgasBool test_1 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (", W ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 423)) ;
      }
      const enumGalgasBool test_2 = object->mAttribute_mBranchIfZero.boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("Z")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 426)) ;
      }else if (kBoolFalse == test_2) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("NZ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 428)) ;
      }
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (": branching to JUMP replaced by second JUMP label\n")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 430)) ;
    }else if (var_firstInstruction.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO) {
      GALGAS_midrange_5F_intermediate_5F_GOTO cast_18531_goto ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_firstInstruction.ptr ()) ;
      {
      ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mRegisterDescription, cast_18531_goto.reader_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 436)).reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 436)), object->mAttribute_mIncrement, object->mAttribute_m_5F_W_5F_isDestination, object->mAttribute_mBranchIfZero  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 433)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 432)) ;
      }
      ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  line ").add_operation (constinArgument_inLineIndex.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 443)).add_operation (GALGAS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 443))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 443)) ;
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("JUMP ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 444)) ;
      const enumGalgasBool test_3 = object->mAttribute_mIncrement.boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("INCF ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 446)) ;
      }else if (kBoolFalse == test_3) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("DECF ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 448)) ;
      }
      ioArgument_ioListFileContents.dotAssign_operation (object->mAttribute_mRegisterDescription.reader_mAssemblyString (SOURCE_FILE ("midrange_optimizations.galgas", 450))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 450)) ;
      const enumGalgasBool test_4 = object->mAttribute_m_5F_W_5F_isDestination.boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (", W")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 452)) ;
      }
      const enumGalgasBool test_5 = object->mAttribute_mBranchIfZero.boolEnum () ;
      if (kBoolTrue == test_5) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" Z")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 455)) ;
      }else if (kBoolFalse == test_5) {
        ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" NZ")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 457)) ;
      }
      ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (": branching to GOTO replaced by second JUMP label\n")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 459)) ;
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
  if (ioArgument_ioGeneratedInstructionList.reader_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)).isValid ()) {
    if (ioArgument_ioGeneratedInstructionList.reader_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP) {
      GALGAS_midrange_5F_intermediate_5F_JUMP cast_19975_jump ((cPtr_midrange_5F_intermediate_5F_JUMP *) ioArgument_ioGeneratedInstructionList.reader_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 474)).ptr ()) ;
      var_jumpLabel = cast_19975_jump.reader_mTargetLabel (SOURCE_FILE ("midrange_optimizations.galgas", 476)).reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 476)) ;
      var_ok = GALGAS_bool (true) ;
    }
  }
  const enumGalgasBool test_0 = var_ok.boolEnum () ;
  if (kBoolTrue == test_0) {
    if (ioArgument_ioGeneratedInstructionList.reader_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (ioArgument_ioGeneratedInstructionList.reader_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)).ptr ())) {
        GALGAS_midrange_5F_intermediate_5F_actualInstruction cast_20242_instruction ((cPtr_midrange_5F_intermediate_5F_actualInstruction *) ioArgument_ioGeneratedInstructionList.reader_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 482)).ptr ()) ;
        var_ok = GALGAS_bool (kIsEqual, callCategoryReader_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) cast_20242_instruction.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 484)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
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
    GALGAS_midrange_5F_intermediate_5F_instruction joker_20604_0 ; // Joker input parameter
    routine_findMidRangeFirstInstructionOrLabelFromAddress (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 3U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 493)), ioArgument_ioGeneratedInstructionList, joker_20604_0, var_reachedLabelSet, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 493)) ;
    }
    var_ok = var_reachedLabelSet.reader_hasKey (var_jumpLabel COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 494)) ;
  }
  const enumGalgasBool test_2 = var_ok.boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSkipIfSet.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 502)), object->mAttribute_mRegisterDescription, object->mAttribute_mBitNumber  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 500)), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 499)) ;
    }
    {
    ioArgument_ioGeneratedInstructionList.modifier_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::constructor_new (SOURCE_FILE ("midrange_optimizations.galgas", 509)), constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 508)) ;
    }
    ioArgument_ioOptimizationsDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string ("  lines ").add_operation (constinArgument_inLineIndex.reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)).add_operation (constinArgument_inLineIndex.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)).reader_string (SOURCE_FILE ("midrange_optimizations.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515))  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 515)) ;
    ioArgument_ioListFileContents.dotAssign_operation (GALGAS_string (" bit test skip, following by a JUMP skipping next instruction, is complemented\n")  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 516)) ;
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
      f (inObject, constin_inRegisterTable, constin_inTotalBankCount, constin_inRoutineSymbolTable, io_ioListFileContents, io_ioAddress, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@midrange_instruction_FD_base_code basecode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint categoryReader_basecode (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 1792U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 1280U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 2304U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 768U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 2816U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 2560U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 3840U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 1024U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 2048U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 3328U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 3072U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 512U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 3584U) ;
      } break ;
    case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 1536U) ;
      } break ;
    }
  }
//---
  return result_outBaseCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@midrange_F_instruction_base_code baseCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint categoryReader_baseCode (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 384U) ;
      } break ;
    case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 128U) ;
      } break ;
    }
  }
//---
  return result_outBaseCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@midrange_bit_oriented_op baseCode'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint categoryReader_baseCode (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BCF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 4096U) ;
      } break ;
    case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BSF: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 5120U) ;
      } break ;
    }
  }
//---
  return result_outBaseCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@midrange_literal_instruction_opcode baseCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint categoryReader_baseCode (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                     C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outBaseCode ; // Returned variable
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
      break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ADDLW: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 15872U) ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 14592U) ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 14336U) ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 12288U) ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 13312U) ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_SUBLW: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 15360U) ;
      } break ;
    case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW: {
      result_outBaseCode = GALGAS_uint ((uint32_t) 14848U) ;
      } break ;
    }
  }
//---
  return result_outBaseCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Reader '@pic18RegisterComparison mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_pic_31__38_RegisterComparison & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparison temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
      break ;
    case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual: {
      result_outResult = GALGAS_string ("!=") ;
      } break ;
    case GALGAS_pic_31__38_RegisterComparison::kEnum_equal: {
      result_outResult = GALGAS_string ("==") ;
      } break ;
    case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual: {
      result_outResult = GALGAS_string (">=") ;
      } break ;
    case GALGAS_pic_31__38_RegisterComparison::kEnum_greater: {
      result_outResult = GALGAS_string (">") ;
      } break ;
    case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual: {
      result_outResult = GALGAS_string ("<=") ;
      } break ;
    case GALGAS_pic_31__38_RegisterComparison::kEnum_lower: {
      result_outResult = GALGAS_string ("<") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category Reader '@conditional_branch condition'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_condition (const GALGAS_conditional_5F_branch & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_conditional_5F_branch temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_conditional_5F_branch::kNotBuilt:
      break ;
    case GALGAS_conditional_5F_branch::kEnum_bz: {
      result_outResult = GALGAS_string ("Z") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bnz: {
      result_outResult = GALGAS_string ("NZ") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bn: {
      result_outResult = GALGAS_string ("N") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bnn: {
      result_outResult = GALGAS_string ("NN") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bc: {
      result_outResult = GALGAS_string ("C") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bnc: {
      result_outResult = GALGAS_string ("NC") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bov: {
      result_outResult = GALGAS_string ("OV") ;
      } break ;
    case GALGAS_conditional_5F_branch::kEnum_bnov: {
      result_outResult = GALGAS_string ("NOV") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Reader '@pic18InstructionWithNoOperandKind assemblyCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_assemblyCode (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_InstructionWithNoOperandKind temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
      break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT: {
      result_outResult = GALGAS_string ("CLRWDT") ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW: {
      result_outResult = GALGAS_string ("DAW") ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP: {
      result_outResult = GALGAS_string ("NOP") ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP: {
      result_outResult = GALGAS_string ("POP") ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH: {
      result_outResult = GALGAS_string ("PUSH") ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET: {
      result_outResult = GALGAS_string ("RESET") ;
      } break ;
    case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP: {
      result_outResult = GALGAS_string ("SLEEP") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@FA_instruction_base_code mnemonic'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_FA_5F_instruction_5F_base_5F_code & inObject,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_FA_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  if (temp_0.isValid ()) {
    switch (temp_0.enumValue ()) {
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
      break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF: {
      result_outResult = GALGAS_string ("CLRF") ;
      } break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ: {
      result_outResult = GALGAS_string ("CPFSEQ") ;
      } break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT: {
      result_outResult = GALGAS_string ("CPFSGT") ;
      } break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT: {
      result_outResult = GALGAS_string ("CPFSLT") ;
      } break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF: {
      result_outResult = GALGAS_string ("MOVWF") ;
      } break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF: {
      result_outResult = GALGAS_string ("MULWF") ;
      } break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF: {
      result_outResult = GALGAS_string ("NEGF") ;
      } break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF: {
      result_outResult = GALGAS_string ("SETF") ;
      } break ;
    case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ: {
      result_outResult = GALGAS_string ("TSTFSZ") ;
      } break ;
    }
  }
//---
  return result_outResult ;
}




