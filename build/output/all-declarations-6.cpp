#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-baseline_instruction.h"
#include "class-baseline_instruction_CALL.h"
#include "class-baseline_instruction_F.h"
#include "class-baseline_instruction_FB.h"
#include "class-baseline_instruction_FD.h"
#include "class-baseline_instruction_FOREVER.h"
#include "class-baseline_instruction_GOTO.h"
#include "class-baseline_instruction_IF_BitTest.h"
#include "class-baseline_instruction_IF_IncDec.h"
#include "class-baseline_instruction_IF_SEMI_COLON.h"
#include "class-baseline_instruction_JSR.h"
#include "class-baseline_instruction_JUMP.h"
#include "class-baseline_instruction_MNOP.h"
#include "class-baseline_instruction_STATIC_REPEAT.h"
#include "class-baseline_instruction_TRIS.h"
#include "class-baseline_instruction_WO_OPERAND.h"
#include "class-baseline_instruction_do_while.h"
#include "class-baseline_instruction_literalOperation.h"
#include "class-baseline_instruction_structured_if.h"
#include "class-baseline_intermediate_CALL.h"
#include "class-baseline_intermediate_GOTO.h"
#include "class-baseline_intermediate_JSR.h"
#include "class-baseline_intermediate_JUMP.h"
#include "class-baseline_intermediate_TRIS.h"
#include "class-baseline_intermediate_WO_OPERAND.h"
#include "class-baseline_intermediate_instruction_BitTestSkip.h"
#include "class-baseline_intermediate_instruction_F.h"
#include "class-baseline_intermediate_instruction_FB.h"
#include "class-baseline_intermediate_instruction_FD.h"
#include "class-baseline_intermediate_instruction_MNOP.h"
#include "class-baseline_intermediate_instruction_literalOperation.h"
#include "class-bitNumberExpression.h"
#include "class-bitNumberLabelValue.h"
#include "class-bitNumberLiteralValue.h"
#include "class-immediatAdd.h"
#include "class-immediatAnd.h"
#include "class-immediatComplement.h"
#include "class-immediatDiv.h"
#include "class-immediatEqualTest.h"
#include "class-immediatExpression.h"
#include "class-immediatGreaterOrEqualTest.h"
#include "class-immediatGreaterTest.h"
#include "class-immediatInteger.h"
#include "class-immediatLeftShift.h"
#include "class-immediatLowerOrEqualTest.h"
#include "class-immediatLowerTest.h"
#include "class-immediatMod.h"
#include "class-immediatMul.h"
#include "class-immediatNegate.h"
#include "class-immediatNotEqualTest.h"
#include "class-immediatOr.h"
#include "class-immediatRegister.h"
#include "class-immediatRightShift.h"
#include "class-immediatSlice.h"
#include "class-immediatSub.h"
#include "class-immediatXor.h"
#include "class-midrange_instruction_IF_BitTest.h"
#include "class-registerExpression.h"
#include "enum-baseline_F_instruction_base_code.h"
#include "enum-baseline_WO_OPERAND_group.h"
#include "enum-baseline_bit_oriented_op.h"
#include "enum-baseline_instruction_FD_base_code.h"
#include "enum-baseline_literal_instruction_opcode.h"
#include "enum-routineKind.h"
#include "func-acceptableTRISoperand.h"
#include "getter-registerExpression-getRegisterAddress.h"
#include "list-baseline_instructionList.h"
#include "list-baseline_intermediate_instructionList.h"
#include "list-baseline_partList.h"
#include "list-immediatSliceExpressionList.h"
#include "map-baselineRoutineMap.h"
#include "map-bitSliceTable.h"
#include "map-constantMap.h"
#include "map-registerTable.h"
#include "method-baseline_instruction-addUsedRoutines.h"
#include "method-baseline_instruction-build_baseline_intermediate_instructionList.h"
#include "method-baseline_instruction-shouldNotContinueInSequence.h"
#include "method-baseline_instruction-shouldTerminateWithMOVLW.h"
#include "method-baseline_instruction_IF_BitTest-getBaseCode.h"
#include "method-baseline_instruction_IF_BitTest-getMnemonic.h"
#include "method-bitNumberExpression-display.h"
#include "method-bitNumberExpression-getBitNumber.h"
#include "method-immediatExpression-eval.h"
#include "method-midrange_instruction_IF_BitTest-getBaseCode.h"
#include "method-midrange_instruction_IF_BitTest-getMnemonic.h"
#include "method-registerExpression-analyzeRegisterExpression.h"
#include "method-registerExpression-analyzeRegisterExpressionWithoutCheckingBank.h"
#include "method-registerExpression-resolveBaselineAccess.h"
#include "method-registerExpression-resolveMidrangeAccess.h"
#include "proc-addBaselineUsedRoutinesFromInstructionList.h"
#include "struct-baseline_intermediate_registerExpression.h"
#include "struct-blockInitialBankSelectionMap-element.h"
#include "struct-blockInstructionBlockMap-element.h"
#include "struct-blockMapForStackComputation-element.h"
#include "struct-bootloaderReservedRAMmap-element.h"
#include "struct-caseConstantMap-element.h"
#include "struct-configRegisterMap-element.h"
#include "struct-configRegisterMaskMap-element.h"
#include "struct-dataList-element.h"
#include "struct-dataMap-element.h"
#include "struct-declaredByteMap-element.h"
#include "struct-declaredRoutineMap-element.h"
#include "struct-fieldSettingMap-element.h"
#include "struct-illegalMaskList-element.h"
#include "struct-ipic18BlockList-element.h"
#include "struct-ipic18_intermediate_registerExpression.h"
#include "struct-ipic18_intermediate_registerExpressionWithoutBSRIndication.h"
#include "struct-midrange_declaredRoutineMap-element.h"
#include "struct-midrange_intermediate_registerExpression.h"
#include "struct-midrange_symbolTable-element.h"
#include "struct-neededConversionForClusterOrder-element.h"
#include "struct-pic18BlockInstructionBlockList-element.h"
#include "struct-pic18InterruptDefinitionList-element.h"
#include "struct-pic18RoutineDefinitionList-element.h"
#include "struct-pic18_dataAddressMap-element.h"
#include "struct-pic18_dataMap-element.h"
#include "struct-ramBankTable-element.h"
#include "struct-registerTable-element.h"
#include "struct-routineCallMap-element.h"
#include "struct-routineDeclarationList-element.h"
#include "struct-routineStackRequirementMap-element.h"
#include "struct-symbolTableForBlockOptimization-element.h"
#include "struct-symbolTableForClusterOrdering-element.h"
#include "struct-symbolTableForRelativesResolution-element.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element::GALGAS_midrange_5F_symbolTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element::~ GALGAS_midrange_5F_symbolTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element::GALGAS_midrange_5F_symbolTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_symbolTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_midrange_5F_symbolTable_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_symbolTable_2D_element::objectCompare (const GALGAS_midrange_5F_symbolTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineAddress.objectCompare (inOperand.mAttribute_mRoutineAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_symbolTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_symbolTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_symbolTable_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @midrange_symbolTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_symbolTable_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_symbolTable_2D_element::reader_mRoutineAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrange_symbolTable-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ("midrange_symbolTable-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_symbolTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable_2D_element result ;
  const GALGAS_midrange_5F_symbolTable_2D_element * p = (const GALGAS_midrange_5F_symbolTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_symbolTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element::GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element::~ GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element::GALGAS_midrange_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_declaredRoutineMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_declaredRoutineMap_2D_element::objectCompare (const GALGAS_midrange_5F_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_declaredRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @midrange_declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_declaredRoutineMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_declaredRoutineMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ("midrange_declaredRoutineMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap_2D_element result ;
  const GALGAS_midrange_5F_declaredRoutineMap_2D_element * p = (const GALGAS_midrange_5F_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element::GALGAS_bootloaderReservedRAMmap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mReservedSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element::~ GALGAS_bootloaderReservedRAMmap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element::GALGAS_bootloaderReservedRAMmap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_luint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mReservedSize (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootloaderReservedRAMmap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_luint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_luint & inOperand1 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bootloaderReservedRAMmap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bootloaderReservedRAMmap_2D_element::objectCompare (const GALGAS_bootloaderReservedRAMmap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReservedSize.objectCompare (inOperand.mAttribute_mReservedSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootloaderReservedRAMmap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mReservedSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootloaderReservedRAMmap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mReservedSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootloaderReservedRAMmap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @bootloaderReservedRAMmap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReservedSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bootloaderReservedRAMmap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_bootloaderReservedRAMmap_2D_element::reader_mReservedSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReservedSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @bootloaderReservedRAMmap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ("bootloaderReservedRAMmap-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootloaderReservedRAMmap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootloaderReservedRAMmap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootloaderReservedRAMmap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap_2D_element result ;
  const GALGAS_bootloaderReservedRAMmap_2D_element * p = (const GALGAS_bootloaderReservedRAMmap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootloaderReservedRAMmap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) :
mAttribute_mBlockName (),
mAttribute_mInstructionList (),
mAttribute_mBlockTerminaisonForBlockInstruction (),
mAttribute_mEndOfBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::~ GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                                const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                                const GALGAS_location & inOperand3) :
mAttribute_mBlockName (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mBlockTerminaisonForBlockInstruction (inOperand2),
mAttribute_mEndOfBlock (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                                                const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                                                const GALGAS_location & inOperand3 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::objectCompare (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBlockName.objectCompare (inOperand.mAttribute_mBlockName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBlockTerminaisonForBlockInstruction.objectCompare (inOperand.mAttribute_mBlockTerminaisonForBlockInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfBlock.objectCompare (inOperand.mAttribute_mEndOfBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::isValid (void) const {
  return mAttribute_mBlockName.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mBlockTerminaisonForBlockInstruction.isValid () && mAttribute_mEndOfBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::drop (void) {
  mAttribute_mBlockName.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mBlockTerminaisonForBlockInstruction.drop () ;
  mAttribute_mEndOfBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @pic18BlockInstructionBlockList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBlockName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::reader_mBlockName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::reader_mBlockTerminaisonForBlockInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockTerminaisonForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::reader_mEndOfBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic18BlockInstructionBlockList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ("pic18BlockInstructionBlockList-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList_2D_element result ;
  const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element * p = (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BlockInstructionBlockList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) :
mAttribute_mInterruptName (),
mAttribute_mFastReturn (),
mAttribute_mInstructionList (),
mAttribute_mEndOfInterruptLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::~ GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::GALGAS_pic_31__38_InterruptDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                                            const GALGAS_location & inOperand3) :
mAttribute_mInterruptName (inOperand0),
mAttribute_mFastReturn (inOperand1),
mAttribute_mInstructionList (inOperand2),
mAttribute_mEndOfInterruptLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_InterruptDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                                                            const GALGAS_location & inOperand3 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_pic_31__38_InterruptDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_InterruptDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInterruptName.objectCompare (inOperand.mAttribute_mInterruptName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFastReturn.objectCompare (inOperand.mAttribute_mFastReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInterruptLocation.objectCompare (inOperand.mAttribute_mEndOfInterruptLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_InterruptDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mInterruptName.isValid () && mAttribute_mFastReturn.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInterruptLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::drop (void) {
  mAttribute_mInterruptName.drop () ;
  mAttribute_mFastReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInterruptLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @pic18InterruptDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInterruptName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFastReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_InterruptDefinitionList_2D_element::reader_mInterruptName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_InterruptDefinitionList_2D_element::reader_mFastReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFastReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InterruptDefinitionList_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_InterruptDefinitionList_2D_element::reader_mEndOfInterruptLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInterruptLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic18InterruptDefinitionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ("pic18InterruptDefinitionList-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_InterruptDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_InterruptDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InterruptDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_InterruptDefinitionList_2D_element * p = (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_InterruptDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InterruptDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank (),
mAttribute_mIsNoReturn (),
mAttribute_mInstructionList (),
mAttribute_mEndOfRoutineLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::~ GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::GALGAS_pic_31__38_RoutineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_luint & inOperand1,
                                                                                                        const GALGAS_luint & inOperand2,
                                                                                                        const GALGAS_bool & inOperand3,
                                                                                                        const GALGAS_bool & inOperand4,
                                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                                        const GALGAS_location & inOperand6) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mRequiredBank (inOperand1),
mAttribute_mReturnedBank (inOperand2),
mAttribute_mPreservesBank (inOperand3),
mAttribute_mIsNoReturn (inOperand4),
mAttribute_mInstructionList (inOperand5),
mAttribute_mEndOfRoutineLocation (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_RoutineDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_luint::constructor_default (HERE),
                                                             GALGAS_luint::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                             GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_luint & inOperand1,
                                                                                                                        const GALGAS_luint & inOperand2,
                                                                                                                        const GALGAS_bool & inOperand3,
                                                                                                                        const GALGAS_bool & inOperand4,
                                                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                                                        const GALGAS_location & inOperand6 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_pic_31__38_RoutineDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_RoutineDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredBank.objectCompare (inOperand.mAttribute_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedBank.objectCompare (inOperand.mAttribute_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesBank.objectCompare (inOperand.mAttribute_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfRoutineLocation.objectCompare (inOperand.mAttribute_mEndOfRoutineLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfRoutineLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfRoutineLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @pic18RoutineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_RoutineDefinitionList_2D_element::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList_2D_element::reader_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList_2D_element::reader_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::reader_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::reader_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_RoutineDefinitionList_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_RoutineDefinitionList_2D_element::reader_mEndOfRoutineLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRoutineLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic18RoutineDefinitionList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ("pic18RoutineDefinitionList-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_RoutineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_RoutineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RoutineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_RoutineDefinitionList_2D_element * p = (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_RoutineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RoutineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element::GALGAS_routineDeclarationList_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank (),
mAttribute_mIsNoReturn () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element::~ GALGAS_routineDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element::GALGAS_routineDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_luint & inOperand1,
                                                                                    const GALGAS_luint & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mRequiredBank (inOperand1),
mAttribute_mReturnedBank (inOperand2),
mAttribute_mPreservesBank (inOperand3),
mAttribute_mIsNoReturn (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_luint::constructor_default (HERE),
                                                   GALGAS_luint::constructor_default (HERE),
                                                   GALGAS_bool::constructor_default (HERE),
                                                   GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_luint & inOperand1,
                                                                                                    const GALGAS_luint & inOperand2,
                                                                                                    const GALGAS_bool & inOperand3,
                                                                                                    const GALGAS_bool & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_routineDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineDeclarationList_2D_element::objectCompare (const GALGAS_routineDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredBank.objectCompare (inOperand.mAttribute_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedBank.objectCompare (inOperand.mAttribute_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesBank.objectCompare (inOperand.mAttribute_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () && mAttribute_mIsNoReturn.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineDeclarationList_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
  mAttribute_mIsNoReturn.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineDeclarationList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @routineDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineDeclarationList_2D_element::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_routineDeclarationList_2D_element::reader_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_routineDeclarationList_2D_element::reader_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDeclarationList_2D_element::reader_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDeclarationList_2D_element::reader_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @routineDeclarationList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ("routineDeclarationList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineDeclarationList_2D_element result ;
  const GALGAS_routineDeclarationList_2D_element * p = (const GALGAS_routineDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (void) :
mAttribute_mDataName (),
mAttribute_mValueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element::~ GALGAS_dataList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_immediatExpressionList & inOperand1) :
mAttribute_mDataName (inOperand0),
mAttribute_mValueList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_dataList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_immediatExpressionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_immediatExpressionList & inOperand1 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_dataList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_dataList_2D_element::objectCompare (const GALGAS_dataList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDataName.objectCompare (inOperand.mAttribute_mDataName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValueList.objectCompare (inOperand.mAttribute_mValueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_dataList_2D_element::isValid (void) const {
  return mAttribute_mDataName.isValid () && mAttribute_mValueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataList_2D_element::drop (void) {
  mAttribute_mDataName.drop () ;
  mAttribute_mValueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @dataList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDataName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_dataList_2D_element::reader_mDataName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_dataList_2D_element::reader_mValueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @dataList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataList_2D_element ("dataList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dataList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dataList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  const GALGAS_dataList_2D_element * p = (const GALGAS_dataList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element::GALGAS_dataMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDataSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element::~ GALGAS_dataMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element::GALGAS_dataMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mDataSize (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element GALGAS_dataMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_dataMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element GALGAS_dataMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_dataMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_dataMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_dataMap_2D_element::objectCompare (const GALGAS_dataMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDataSize.objectCompare (inOperand.mAttribute_mDataSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_dataMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDataSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDataSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @dataMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDataSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_dataMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_dataMap_2D_element::reader_mDataSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @dataMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataMap_2D_element ("dataMap-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dataMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dataMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataMap_2D_element GALGAS_dataMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dataMap_2D_element result ;
  const GALGAS_dataMap_2D_element * p = (const GALGAS_dataMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element::~ GALGAS_pic_31__38__5F_dataMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uintlist & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mData (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38__5F_dataMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_uintlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_uintlist & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_pic_31__38__5F_dataMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38__5F_dataMap_2D_element::objectCompare (const GALGAS_pic_31__38__5F_dataMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mData.objectCompare (inOperand.mAttribute_mData) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38__5F_dataMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mData.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mData.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @pic18_dataMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mData.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38__5F_dataMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_pic_31__38__5F_dataMap_2D_element::reader_mData (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mData ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18_dataMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ("pic18_dataMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  const GALGAS_pic_31__38__5F_dataMap_2D_element * p = (const GALGAS_pic_31__38__5F_dataMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38__5F_dataMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element::GALGAS_ipic_31__38_BlockList_2D_element (void) :
mAttribute_mBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element::~ GALGAS_ipic_31__38_BlockList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element::GALGAS_ipic_31__38_BlockList_2D_element (const GALGAS_ipic_31__38_Block & inOperand0) :
mAttribute_mBlock (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element GALGAS_ipic_31__38_BlockList_2D_element::constructor_new (const GALGAS_ipic_31__38_Block & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ipic_31__38_BlockList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ipic_31__38_BlockList_2D_element::objectCompare (const GALGAS_ipic_31__38_BlockList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBlock.objectCompare (inOperand.mAttribute_mBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ipic_31__38_BlockList_2D_element::isValid (void) const {
  return mAttribute_mBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38_BlockList_2D_element::drop (void) {
  mAttribute_mBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ipic_31__38_BlockList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @ipic18BlockList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_BlockList_2D_element::reader_mBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @ipic18BlockList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ("ipic18BlockList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38_BlockList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38_BlockList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_BlockList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_BlockList_2D_element GALGAS_ipic_31__38_BlockList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList_2D_element result ;
  const GALGAS_ipic_31__38_BlockList_2D_element * p = (const GALGAS_ipic_31__38_BlockList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_BlockList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element::GALGAS_symbolTableForBlockOptimization_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDefinitionBlockIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element::~ GALGAS_symbolTableForBlockOptimization_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element::GALGAS_symbolTableForBlockOptimization_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mDefinitionBlockIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForBlockOptimization_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_uint & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_symbolTableForBlockOptimization_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_symbolTableForBlockOptimization_2D_element::objectCompare (const GALGAS_symbolTableForBlockOptimization_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefinitionBlockIndex.objectCompare (inOperand.mAttribute_mDefinitionBlockIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_symbolTableForBlockOptimization_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDefinitionBlockIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForBlockOptimization_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDefinitionBlockIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForBlockOptimization_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForBlockOptimization-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefinitionBlockIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_symbolTableForBlockOptimization_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForBlockOptimization_2D_element::reader_mDefinitionBlockIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinitionBlockIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @symbolTableForBlockOptimization-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ("symbolTableForBlockOptimization-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForBlockOptimization_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForBlockOptimization_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForBlockOptimization_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization_2D_element result ;
  const GALGAS_symbolTableForBlockOptimization_2D_element * p = (const GALGAS_symbolTableForBlockOptimization_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForBlockOptimization_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element::GALGAS_symbolTableForClusterOrdering_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCluster () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element::~ GALGAS_symbolTableForClusterOrdering_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element::GALGAS_symbolTableForClusterOrdering_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mCluster (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForClusterOrdering_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_uint & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_symbolTableForClusterOrdering_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_symbolTableForClusterOrdering_2D_element::objectCompare (const GALGAS_symbolTableForClusterOrdering_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCluster.objectCompare (inOperand.mAttribute_mCluster) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_symbolTableForClusterOrdering_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCluster.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForClusterOrdering_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCluster.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForClusterOrdering_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForClusterOrdering-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCluster.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_symbolTableForClusterOrdering_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForClusterOrdering_2D_element::reader_mCluster (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCluster ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @symbolTableForClusterOrdering-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ("symbolTableForClusterOrdering-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForClusterOrdering_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForClusterOrdering_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForClusterOrdering_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering_2D_element result ;
  const GALGAS_symbolTableForClusterOrdering_2D_element * p = (const GALGAS_symbolTableForClusterOrdering_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForClusterOrdering_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element::GALGAS_symbolTableForRelativesResolution_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLabelAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element::~ GALGAS_symbolTableForRelativesResolution_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element::GALGAS_symbolTableForRelativesResolution_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLabelAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForRelativesResolution_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_uint & inOperand1 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_symbolTableForRelativesResolution_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_symbolTableForRelativesResolution_2D_element::objectCompare (const GALGAS_symbolTableForRelativesResolution_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelAddress.objectCompare (inOperand.mAttribute_mLabelAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_symbolTableForRelativesResolution_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForRelativesResolution_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLabelAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForRelativesResolution_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForRelativesResolution-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_symbolTableForRelativesResolution_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForRelativesResolution_2D_element::reader_mLabelAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @symbolTableForRelativesResolution-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ("symbolTableForRelativesResolution-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForRelativesResolution_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForRelativesResolution_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForRelativesResolution_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution_2D_element result ;
  const GALGAS_symbolTableForRelativesResolution_2D_element * p = (const GALGAS_symbolTableForRelativesResolution_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForRelativesResolution_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDataAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::~ GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::GALGAS_pic_31__38__5F_dataAddressMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mDataAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38__5F_dataAddressMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_uint & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_pic_31__38__5F_dataAddressMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38__5F_dataAddressMap_2D_element::objectCompare (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDataAddress.objectCompare (inOperand.mAttribute_mDataAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38__5F_dataAddressMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDataAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDataAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @pic18_dataAddressMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDataAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38__5F_dataAddressMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_pic_31__38__5F_dataAddressMap_2D_element::reader_mDataAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18_dataAddressMap-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ("pic18_dataAddressMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataAddressMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataAddressMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataAddressMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap_2D_element result ;
  const GALGAS_pic_31__38__5F_dataAddressMap_2D_element * p = (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38__5F_dataAddressMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element::GALGAS_declaredRoutineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank (),
mAttribute_mIsNoReturn (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element::~ GALGAS_declaredRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element::GALGAS_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_luint & inOperand1,
                                                                            const GALGAS_luint & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_bool & inOperand4,
                                                                            const GALGAS_pic_31__38_InstructionList & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mRequiredBank (inOperand1),
mAttribute_mReturnedBank (inOperand2),
mAttribute_mPreservesBank (inOperand3),
mAttribute_mIsNoReturn (inOperand4),
mAttribute_mInstructionList (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_luint & inOperand1,
                                                                                            const GALGAS_luint & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_bool & inOperand4,
                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand5 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_declaredRoutineMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_declaredRoutineMap_2D_element::objectCompare (const GALGAS_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredBank.objectCompare (inOperand.mAttribute_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnedBank.objectCompare (inOperand.mAttribute_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreservesBank.objectCompare (inOperand.mAttribute_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_declaredRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_declaredRoutineMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_declaredRoutineMap_2D_element::reader_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_declaredRoutineMap_2D_element::reader_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_declaredRoutineMap_2D_element::reader_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_declaredRoutineMap_2D_element::reader_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_declaredRoutineMap_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @declaredRoutineMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ("declaredRoutineMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap_2D_element result ;
  const GALGAS_declaredRoutineMap_2D_element * p = (const GALGAS_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element::GALGAS_caseConstantMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element::~ GALGAS_caseConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element::GALGAS_caseConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_caseConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_caseConstantMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_caseConstantMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_caseConstantMap_2D_element::objectCompare (const GALGAS_caseConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_caseConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_caseConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_caseConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @caseConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_caseConstantMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @caseConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_caseConstantMap_2D_element ("caseConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_caseConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_caseConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_caseConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_caseConstantMap_2D_element result ;
  const GALGAS_caseConstantMap_2D_element * p = (const GALGAS_caseConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_caseConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element::GALGAS_blockInstructionBlockMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInstructionList (),
mAttribute_mBlockTerminaisonForBlockInstruction (),
mAttribute_mEndOfBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element::~ GALGAS_blockInstructionBlockMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element::GALGAS_blockInstructionBlockMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                        const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                        const GALGAS_location & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mBlockTerminaisonForBlockInstruction (inOperand2),
mAttribute_mEndOfBlock (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element GALGAS_blockInstructionBlockMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                        const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                        const GALGAS_location & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_blockInstructionBlockMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_blockInstructionBlockMap_2D_element::objectCompare (const GALGAS_blockInstructionBlockMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBlockTerminaisonForBlockInstruction.objectCompare (inOperand.mAttribute_mBlockTerminaisonForBlockInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfBlock.objectCompare (inOperand.mAttribute_mEndOfBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_blockInstructionBlockMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mBlockTerminaisonForBlockInstruction.isValid () && mAttribute_mEndOfBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockInstructionBlockMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mBlockTerminaisonForBlockInstruction.drop () ;
  mAttribute_mEndOfBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockInstructionBlockMap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @blockInstructionBlockMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_blockInstructionBlockMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_blockInstructionBlockMap_2D_element::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_blockInstructionBlockMap_2D_element::reader_mBlockTerminaisonForBlockInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockTerminaisonForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_blockInstructionBlockMap_2D_element::reader_mEndOfBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @blockInstructionBlockMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ("blockInstructionBlockMap-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_blockInstructionBlockMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_blockInstructionBlockMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInstructionBlockMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInstructionBlockMap_2D_element GALGAS_blockInstructionBlockMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap_2D_element result ;
  const GALGAS_blockInstructionBlockMap_2D_element * p = (const GALGAS_blockInstructionBlockMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockInstructionBlockMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element::GALGAS_blockInitialBankSelectionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInitialBankSelection (),
mAttribute_mSourceBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element::~ GALGAS_blockInitialBankSelectionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element::GALGAS_blockInitialBankSelectionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_uint & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mInitialBankSelection (inOperand1),
mAttribute_mSourceBlock (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_blockInitialBankSelectionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_uint & inOperand1,
                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_blockInitialBankSelectionMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_blockInitialBankSelectionMap_2D_element::objectCompare (const GALGAS_blockInitialBankSelectionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialBankSelection.objectCompare (inOperand.mAttribute_mInitialBankSelection) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceBlock.objectCompare (inOperand.mAttribute_mSourceBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_blockInitialBankSelectionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInitialBankSelection.isValid () && mAttribute_mSourceBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockInitialBankSelectionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInitialBankSelection.drop () ;
  mAttribute_mSourceBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockInitialBankSelectionMap_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @blockInitialBankSelectionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialBankSelection.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_blockInitialBankSelectionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_blockInitialBankSelectionMap_2D_element::reader_mInitialBankSelection (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialBankSelection ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_blockInitialBankSelectionMap_2D_element::reader_mSourceBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @blockInitialBankSelectionMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ("blockInitialBankSelectionMap-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_blockInitialBankSelectionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_blockInitialBankSelectionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInitialBankSelectionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap_2D_element result ;
  const GALGAS_blockInitialBankSelectionMap_2D_element * p = (const GALGAS_blockInitialBankSelectionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockInitialBankSelectionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element::GALGAS_neededConversionForClusterOrder_2D_element (void) :
mAttribute_lkey (),
mAttribute_mConversions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element::~ GALGAS_neededConversionForClusterOrder_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element::GALGAS_neededConversionForClusterOrder_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mConversions (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_neededConversionForClusterOrder_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_uint & inOperand1 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_neededConversionForClusterOrder_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_neededConversionForClusterOrder_2D_element::objectCompare (const GALGAS_neededConversionForClusterOrder_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConversions.objectCompare (inOperand.mAttribute_mConversions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_neededConversionForClusterOrder_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mConversions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_neededConversionForClusterOrder_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mConversions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_neededConversionForClusterOrder_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @neededConversionForClusterOrder-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConversions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_neededConversionForClusterOrder_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_neededConversionForClusterOrder_2D_element::reader_mConversions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConversions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @neededConversionForClusterOrder-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ("neededConversionForClusterOrder-element",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_neededConversionForClusterOrder_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_neededConversionForClusterOrder_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_neededConversionForClusterOrder_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder_2D_element result ;
  const GALGAS_neededConversionForClusterOrder_2D_element * p = (const GALGAS_neededConversionForClusterOrder_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_neededConversionForClusterOrder_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element::GALGAS_blockMapForStackComputation_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBlock () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element::~ GALGAS_blockMapForStackComputation_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element::GALGAS_blockMapForStackComputation_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_ipic_31__38_Block & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mBlock (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element GALGAS_blockMapForStackComputation_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_ipic_31__38_Block & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_blockMapForStackComputation_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_blockMapForStackComputation_2D_element::objectCompare (const GALGAS_blockMapForStackComputation_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBlock.objectCompare (inOperand.mAttribute_mBlock) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_blockMapForStackComputation_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBlock.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockMapForStackComputation_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBlock.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockMapForStackComputation_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @blockMapForStackComputation-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_blockMapForStackComputation_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block GALGAS_blockMapForStackComputation_2D_element::reader_mBlock (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlock ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @blockMapForStackComputation-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ("blockMapForStackComputation-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_blockMapForStackComputation_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_blockMapForStackComputation_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockMapForStackComputation_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockMapForStackComputation_2D_element GALGAS_blockMapForStackComputation_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation_2D_element result ;
  const GALGAS_blockMapForStackComputation_2D_element * p = (const GALGAS_blockMapForStackComputation_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockMapForStackComputation_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCalledRoutineSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element::~ GALGAS_routineCallMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_stringset & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mCalledRoutineSet (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineCallMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_routineCallMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineCallMap_2D_element::objectCompare (const GALGAS_routineCallMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCalledRoutineSet.objectCompare (inOperand.mAttribute_mCalledRoutineSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineCallMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCalledRoutineSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineCallMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCalledRoutineSet.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineCallMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @routineCallMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCalledRoutineSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineCallMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_routineCallMap_2D_element::reader_mCalledRoutineSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCalledRoutineSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @routineCallMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineCallMap_2D_element ("routineCallMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineCallMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineCallMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineCallMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  const GALGAS_routineCallMap_2D_element * p = (const GALGAS_routineCallMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineCallMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element::GALGAS_routineStackRequirementMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mLevels () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element::~ GALGAS_routineStackRequirementMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element::GALGAS_routineStackRequirementMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mLevels (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineStackRequirementMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_uint & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_routineStackRequirementMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineStackRequirementMap_2D_element::objectCompare (const GALGAS_routineStackRequirementMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLevels.objectCompare (inOperand.mAttribute_mLevels) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineStackRequirementMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLevels.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineStackRequirementMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mLevels.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineStackRequirementMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @routineStackRequirementMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLevels.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineStackRequirementMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineStackRequirementMap_2D_element::reader_mLevels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLevels ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineStackRequirementMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ("routineStackRequirementMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineStackRequirementMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineStackRequirementMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineStackRequirementMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap_2D_element result ;
  const GALGAS_routineStackRequirementMap_2D_element * p = (const GALGAS_routineStackRequirementMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineStackRequirementMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element::GALGAS_declaredByteMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element::~ GALGAS_declaredByteMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element::GALGAS_declaredByteMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_declaredByteMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredByteMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declaredByteMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_declaredByteMap_2D_element::objectCompare (const GALGAS_declaredByteMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_declaredByteMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredByteMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_declaredByteMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @declaredByteMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_declaredByteMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @declaredByteMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredByteMap_2D_element ("declaredByteMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_declaredByteMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_declaredByteMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredByteMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declaredByteMap_2D_element result ;
  const GALGAS_declaredByteMap_2D_element * p = (const GALGAS_declaredByteMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declaredByteMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element::GALGAS_registerTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterAddressList (),
mAttribute_mSize (),
mAttribute_mBitSliceTable (),
mAttribute_mBitDefinitionString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element::~ GALGAS_registerTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element::GALGAS_registerTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uintlist & inOperand1,
                                                                  const GALGAS_uint & inOperand2,
                                                                  const GALGAS_bitSliceTable & inOperand3,
                                                                  const GALGAS_string & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterAddressList (inOperand1),
mAttribute_mSize (inOperand2),
mAttribute_mBitSliceTable (inOperand3),
mAttribute_mBitDefinitionString (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_uintlist::constructor_emptyList (HERE),
                                          GALGAS_uint::constructor_default (HERE),
                                          GALGAS_bitSliceTable::constructor_emptyMap (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uintlist & inOperand1,
                                                                                  const GALGAS_uint & inOperand2,
                                                                                  const GALGAS_bitSliceTable & inOperand3,
                                                                                  const GALGAS_string & inOperand4 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_registerTable_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerTable_2D_element::objectCompare (const GALGAS_registerTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddressList.objectCompare (inOperand.mAttribute_mRegisterAddressList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSize.objectCompare (inOperand.mAttribute_mSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitSliceTable.objectCompare (inOperand.mAttribute_mBitSliceTable) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitDefinitionString.objectCompare (inOperand.mAttribute_mBitDefinitionString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterAddressList.isValid () && mAttribute_mSize.isValid () && mAttribute_mBitSliceTable.isValid () && mAttribute_mBitDefinitionString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterAddressList.drop () ;
  mAttribute_mSize.drop () ;
  mAttribute_mBitSliceTable.drop () ;
  mAttribute_mBitDefinitionString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerTable_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @registerTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddressList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitSliceTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitDefinitionString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerTable_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_registerTable_2D_element::reader_mRegisterAddressList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddressList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_registerTable_2D_element::reader_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable GALGAS_registerTable_2D_element::reader_mBitSliceTable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitSliceTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_registerTable_2D_element::reader_mBitDefinitionString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitDefinitionString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @registerTable-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerTable_2D_element ("registerTable-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerTable_2D_element result ;
  const GALGAS_registerTable_2D_element * p = (const GALGAS_registerTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element::GALGAS_ramBankTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mFirstAddress (),
mAttribute_mFirstFreeAddress (),
mAttribute_mLastAddressPlusOne (),
mAttribute_mMirrorOffsetList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element::~ GALGAS_ramBankTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element::GALGAS_ramBankTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_uint & inOperand1,
                                                                const GALGAS_uint & inOperand2,
                                                                const GALGAS_uint & inOperand3,
                                                                const GALGAS_uintlist & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mFirstAddress (inOperand1),
mAttribute_mFirstFreeAddress (inOperand2),
mAttribute_mLastAddressPlusOne (inOperand3),
mAttribute_mMirrorOffsetList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ramBankTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uintlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_uint & inOperand1,
                                                                                const GALGAS_uint & inOperand2,
                                                                                const GALGAS_uint & inOperand3,
                                                                                const GALGAS_uintlist & inOperand4 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramBankTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_ramBankTable_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ramBankTable_2D_element::objectCompare (const GALGAS_ramBankTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFirstAddress.objectCompare (inOperand.mAttribute_mFirstAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFirstFreeAddress.objectCompare (inOperand.mAttribute_mFirstFreeAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLastAddressPlusOne.objectCompare (inOperand.mAttribute_mLastAddressPlusOne) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMirrorOffsetList.objectCompare (inOperand.mAttribute_mMirrorOffsetList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ramBankTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFirstAddress.isValid () && mAttribute_mFirstFreeAddress.isValid () && mAttribute_mLastAddressPlusOne.isValid () && mAttribute_mMirrorOffsetList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramBankTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mFirstAddress.drop () ;
  mAttribute_mFirstFreeAddress.drop () ;
  mAttribute_mLastAddressPlusOne.drop () ;
  mAttribute_mMirrorOffsetList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramBankTable_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @ramBankTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFirstAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFirstFreeAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLastAddressPlusOne.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMirrorOffsetList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ramBankTable_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::reader_mFirstAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::reader_mFirstFreeAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstFreeAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::reader_mLastAddressPlusOne (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLastAddressPlusOne ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_ramBankTable_2D_element::reader_mMirrorOffsetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMirrorOffsetList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @ramBankTable-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramBankTable_2D_element ("ramBankTable-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ramBankTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ramBankTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramBankTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ramBankTable_2D_element result ;
  const GALGAS_ramBankTable_2D_element * p = (const GALGAS_ramBankTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ramBankTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element::GALGAS_illegalMaskList_2D_element (void) :
mAttribute_mIllegalValue (),
mAttribute_mIllegalMask (),
mAttribute_mDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element::~ GALGAS_illegalMaskList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element::GALGAS_illegalMaskList_2D_element (const GALGAS_luint & inOperand0,
                                                                      const GALGAS_luint & inOperand1,
                                                                      const GALGAS_lstring & inOperand2) :
mAttribute_mIllegalValue (inOperand0),
mAttribute_mIllegalMask (inOperand1),
mAttribute_mDescription (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_illegalMaskList_2D_element (GALGAS_luint::constructor_default (HERE),
                                            GALGAS_luint::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::constructor_new (const GALGAS_luint & inOperand0,
                                                                                      const GALGAS_luint & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_illegalMaskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_illegalMaskList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_illegalMaskList_2D_element::objectCompare (const GALGAS_illegalMaskList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIllegalValue.objectCompare (inOperand.mAttribute_mIllegalValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIllegalMask.objectCompare (inOperand.mAttribute_mIllegalMask) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDescription.objectCompare (inOperand.mAttribute_mDescription) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_illegalMaskList_2D_element::isValid (void) const {
  return mAttribute_mIllegalValue.isValid () && mAttribute_mIllegalMask.isValid () && mAttribute_mDescription.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_illegalMaskList_2D_element::drop (void) {
  mAttribute_mIllegalValue.drop () ;
  mAttribute_mIllegalMask.drop () ;
  mAttribute_mDescription.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_illegalMaskList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @illegalMaskList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIllegalValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIllegalMask.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDescription.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_illegalMaskList_2D_element::reader_mIllegalValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIllegalValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_illegalMaskList_2D_element::reader_mIllegalMask (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIllegalMask ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_illegalMaskList_2D_element::reader_mDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDescription ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @illegalMaskList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_illegalMaskList_2D_element ("illegalMaskList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_illegalMaskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_illegalMaskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_illegalMaskList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_illegalMaskList_2D_element result ;
  const GALGAS_illegalMaskList_2D_element * p = (const GALGAS_illegalMaskList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_illegalMaskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("illegalMaskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element::GALGAS_fieldSettingMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValue (),
mAttribute_mMask () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element::~ GALGAS_fieldSettingMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element::GALGAS_fieldSettingMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1,
                                                                      const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mValue (inOperand1),
mAttribute_mMask (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_fieldSettingMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fieldSettingMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_fieldSettingMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_fieldSettingMap_2D_element::objectCompare (const GALGAS_fieldSettingMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMask.objectCompare (inOperand.mAttribute_mMask) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_fieldSettingMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () && mAttribute_mMask.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValue.drop () ;
  mAttribute_mMask.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fieldSettingMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @fieldSettingMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMask.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_fieldSettingMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_fieldSettingMap_2D_element::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_fieldSettingMap_2D_element::reader_mMask (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @fieldSettingMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ("fieldSettingMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_fieldSettingMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_fieldSettingMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fieldSettingMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap_2D_element result ;
  const GALGAS_fieldSettingMap_2D_element * p = (const GALGAS_fieldSettingMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fieldSettingMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element::GALGAS_configRegisterMaskMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mMaskValue (),
mAttribute_mDescription (),
mAttribute_mFieldSettingMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element::~ GALGAS_configRegisterMaskMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element::GALGAS_configRegisterMaskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_luint & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_fieldSettingMap & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mMaskValue (inOperand1),
mAttribute_mDescription (inOperand2),
mAttribute_mFieldSettingMap (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configRegisterMaskMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_luint::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_fieldSettingMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_luint & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_fieldSettingMap & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_configRegisterMaskMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configRegisterMaskMap_2D_element::objectCompare (const GALGAS_configRegisterMaskMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMaskValue.objectCompare (inOperand.mAttribute_mMaskValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDescription.objectCompare (inOperand.mAttribute_mDescription) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldSettingMap.objectCompare (inOperand.mAttribute_mFieldSettingMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_configRegisterMaskMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mMaskValue.isValid () && mAttribute_mDescription.isValid () && mAttribute_mFieldSettingMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configRegisterMaskMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mMaskValue.drop () ;
  mAttribute_mDescription.drop () ;
  mAttribute_mFieldSettingMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configRegisterMaskMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @configRegisterMaskMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMaskValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDescription.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configRegisterMaskMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMaskMap_2D_element::reader_mMaskValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaskValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configRegisterMaskMap_2D_element::reader_mDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_configRegisterMaskMap_2D_element::reader_mFieldSettingMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldSettingMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @configRegisterMaskMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ("configRegisterMaskMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configRegisterMaskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configRegisterMaskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMaskMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap_2D_element result ;
  const GALGAS_configRegisterMaskMap_2D_element * p = (const GALGAS_configRegisterMaskMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configRegisterMaskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element::GALGAS_configRegisterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterAddress (),
mAttribute_mRegisterWidth (),
mAttribute_mConfigRegisterMaskMap (),
mAttribute_mIllegalMaskList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element::~ GALGAS_configRegisterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element::GALGAS_configRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_luint & inOperand1,
                                                                          const GALGAS_luint & inOperand2,
                                                                          const GALGAS_configRegisterMaskMap & inOperand3,
                                                                          const GALGAS_illegalMaskList & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterAddress (inOperand1),
mAttribute_mRegisterWidth (inOperand2),
mAttribute_mConfigRegisterMaskMap (inOperand3),
mAttribute_mIllegalMaskList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configRegisterMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_luint::constructor_default (HERE),
                                              GALGAS_luint::constructor_default (HERE),
                                              GALGAS_configRegisterMaskMap::constructor_emptyMap (HERE),
                                              GALGAS_illegalMaskList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_luint & inOperand1,
                                                                                          const GALGAS_luint & inOperand2,
                                                                                          const GALGAS_configRegisterMaskMap & inOperand3,
                                                                                          const GALGAS_illegalMaskList & inOperand4 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_configRegisterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configRegisterMap_2D_element::objectCompare (const GALGAS_configRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterWidth.objectCompare (inOperand.mAttribute_mRegisterWidth) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConfigRegisterMaskMap.objectCompare (inOperand.mAttribute_mConfigRegisterMaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIllegalMaskList.objectCompare (inOperand.mAttribute_mIllegalMaskList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_configRegisterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterAddress.isValid () && mAttribute_mRegisterWidth.isValid () && mAttribute_mConfigRegisterMaskMap.isValid () && mAttribute_mIllegalMaskList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configRegisterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterAddress.drop () ;
  mAttribute_mRegisterWidth.drop () ;
  mAttribute_mConfigRegisterMaskMap.drop () ;
  mAttribute_mIllegalMaskList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configRegisterMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @configRegisterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterWidth.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConfigRegisterMaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIllegalMaskList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configRegisterMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMap_2D_element::reader_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMap_2D_element::reader_mRegisterWidth (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterWidth ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap GALGAS_configRegisterMap_2D_element::reader_mConfigRegisterMaskMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConfigRegisterMaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList GALGAS_configRegisterMap_2D_element::reader_mIllegalMaskList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIllegalMaskList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @configRegisterMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMap_2D_element ("configRegisterMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMap_2D_element result ;
  const GALGAS_configRegisterMap_2D_element * p = (const GALGAS_configRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@baseline_instruction_IF_BitTest getBaseCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode> gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getBaseCode (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) {
  gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getBaseCode (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_uint & out_outBaseCode,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
      f = gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
           f = gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outBaseCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                 GALGAS_uint & outArgument_outBaseCode,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 7168U) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 6144U) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  enterCategoryMethod_getBaseCode (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                   categoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode,
                                                                                 freeCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@baseline_instruction_IF_BitTest getMnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic> gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getMnemonic (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) {
  gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getMnemonic (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_string & out_outMnemonic,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic f = NULL ;
    if (classIndex < gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
      f = gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
           f = gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outMnemonic, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                 GALGAS_string & outArgument_outMnemonic,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
  }else if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  enterCategoryMethod_getMnemonic (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                   categoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  gCategoryMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic,
                                                                                 freeCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@registerExpression resolveBaselineAccess'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_registerExpression_resolveBaselineAccess> gCategoryMethodTable_registerExpression_resolveBaselineAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_resolveBaselineAccess (const int32_t inClassIndex,
                                                categoryMethodSignature_registerExpression_resolveBaselineAccess inMethod) {
  gCategoryMethodTable_registerExpression_resolveBaselineAccess.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_resolveBaselineAccess (const cPtr_registerExpression * inObject,
                                               const GALGAS_registerTable constin_inRegisterTable,
                                               GALGAS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                               GALGAS_bitSliceTable & out_outBitSliceTable,
                                               GALGAS_stringset & io_ioUsedRegisters,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outIntermediateRegisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_registerExpression_resolveBaselineAccess f = NULL ;
    if (classIndex < gCategoryMethodTable_registerExpression_resolveBaselineAccess.count ()) {
      f = gCategoryMethodTable_registerExpression_resolveBaselineAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_registerExpression_resolveBaselineAccess.count ()) {
           f = gCategoryMethodTable_registerExpression_resolveBaselineAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_registerExpression_resolveBaselineAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, out_outIntermediateRegisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerExpression_resolveBaselineAccess (const cPtr_registerExpression * inObject,
                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     GALGAS_baseline_5F_intermediate_5F_registerExpression & outArgument_outIntermediateRegisterDescription,
                                                                     GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 19)) ;
  GALGAS_string var_assemblyString = object->mAttribute_mRegisterName.reader_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 21)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("baseline_semantic_analysis.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString.dotAssign_operation (GALGAS_string (" + ").add_operation (object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("baseline_semantic_analysis.galgas", 23)).reader_hexString (SOURCE_FILE ("baseline_semantic_analysis.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 23))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 23)) ;
  }
  GALGAS_uintlist var_registerAddressList ;
  GALGAS_uint var_size ;
  GALGAS_string joker_947_0 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList, var_size, outArgument_outBitSliceTable, joker_947_0, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)) ;
  GALGAS_uint var_registerAddress = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_registerAddressList.reader_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 35)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_1120 (var_registerAddressList, kEnumeration_up) ;
    bool bool_2 = var_found.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 37)).isValidAndTrue () ;
    if (enumerator_1120.hasCurrentObject () && bool_2) {
      while (enumerator_1120.hasCurrentObject () && bool_2) {
        var_registerAddress = enumerator_1120.current_mValue (HERE) ;
        var_found = GALGAS_bool (kIsInfOrEqual, enumerator_1120.current_mValue (HERE).objectCompare (GALGAS_uint ((uint32_t) 31U))) ;
        enumerator_1120.gotoNextObject () ;
        if (enumerator_1120.hasCurrentObject ()) {
          bool_2 = var_found.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 37)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_3 = var_found.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 41)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mRegisterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the register cannot be accessed directly; use indirect addressing throught FSR register")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)) ;
    }
  }
  outArgument_outIntermediateRegisterDescription = GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString, var_registerAddress.add_operation (object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("baseline_semantic_analysis.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 48))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 46)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerExpression_resolveBaselineAccess (void) {
  enterCategoryMethod_resolveBaselineAccess (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                             categoryMethod_registerExpression_resolveBaselineAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_registerExpression_resolveBaselineAccess (void) {
  gCategoryMethodTable_registerExpression_resolveBaselineAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_resolveBaselineAccess (defineCategoryMethod_registerExpression_resolveBaselineAccess,
                                                                     freeCategoryMethod_registerExpression_resolveBaselineAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@midrange_instruction_IF_BitTest getBaseCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode> gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getBaseCode (const int32_t inClassIndex,
                                      categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) {
  gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getBaseCode (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_uint & out_outBaseCode,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
      f = gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
           f = gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outBaseCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                 GALGAS_uint & outArgument_outBaseCode,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 7168U) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint ((uint32_t) 6144U) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  enterCategoryMethod_getBaseCode (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                   categoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (defineCategoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode,
                                                                                 freeCategoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@midrange_instruction_IF_BitTest getMnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic> gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getMnemonic (const int32_t inClassIndex,
                                      categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) {
  gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getMnemonic (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_string & out_outMnemonic,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic f = NULL ;
    if (classIndex < gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
      f = gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
           f = gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outMnemonic, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                 GALGAS_string & outArgument_outMnemonic,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = inObject ;
  macroValidSharedObject (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  const enumGalgasBool test_0 = object->mAttribute_mSkipIfSet.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
  }else if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  enterCategoryMethod_getMnemonic (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                   categoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  gCategoryMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (defineCategoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic,
                                                                                 freeCategoryMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@registerExpression resolveMidrangeAccess'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_registerExpression_resolveMidrangeAccess> gCategoryMethodTable_registerExpression_resolveMidrangeAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_resolveMidrangeAccess (const int32_t inClassIndex,
                                                categoryMethodSignature_registerExpression_resolveMidrangeAccess inMethod) {
  gCategoryMethodTable_registerExpression_resolveMidrangeAccess.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_resolveMidrangeAccess (const cPtr_registerExpression * inObject,
                                               const GALGAS_uint constin_inTotalBankCount,
                                               const GALGAS_uint constin_inCurrentBank,
                                               const GALGAS_registerTable constin_inRegisterTable,
                                               GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                               GALGAS_bitSliceTable & out_outBitSliceTable,
                                               GALGAS_stringset & io_ioUsedRegisters,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_registerExpression_resolveMidrangeAccess f = NULL ;
    if (classIndex < gCategoryMethodTable_registerExpression_resolveMidrangeAccess.count ()) {
      f = gCategoryMethodTable_registerExpression_resolveMidrangeAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_registerExpression_resolveMidrangeAccess.count ()) {
           f = gCategoryMethodTable_registerExpression_resolveMidrangeAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_registerExpression_resolveMidrangeAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerExpression_resolveMidrangeAccess (const cPtr_registerExpression * inObject,
                                                                     const GALGAS_uint constinArgument_inTotalBankCount,
                                                                     const GALGAS_uint constinArgument_inCurrentBank,
                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     GALGAS_midrange_5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                     GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 19)) ;
  GALGAS_string var_assemblyString = object->mAttribute_mRegisterName.mAttribute_string ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("midrange_intermediate_classes.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString.dotAssign_operation (GALGAS_string (" + ").add_operation (object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("midrange_intermediate_classes.galgas", 23)).reader_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 23))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 23)) ;
  }
  GALGAS_uintlist var_registerAddressList ;
  GALGAS_uint var_size ;
  GALGAS_string joker_875_0 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList, var_size, outArgument_outBitSliceTable, joker_875_0, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("midrange_intermediate_classes.galgas", 34)).objectCompare (var_size)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mOffset.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("maximum index value is ").add_operation (var_size.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 35)).reader_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 35))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 35)) ;
  }
  GALGAS_uintlist var_acceptableBanks = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("midrange_intermediate_classes.galgas", 38)) ;
  cEnumerator_uintlist enumerator_1095 (var_registerAddressList, kEnumeration_up) ;
  while (enumerator_1095.hasCurrentObject ()) {
    var_acceptableBanks.addAssign_operation (enumerator_1095.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)) ;
    enumerator_1095.gotoNextObject () ;
  }
  GALGAS_uint var_registerAddress = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 44)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_uint var_bank = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_bool var_ok = GALGAS_bool (true) ;
    if (constinArgument_inTotalBankCount.isValid ()) {
      uint32_t variant_1325 = constinArgument_inTotalBankCount.uintValue () ;
      bool loop_1325 = true ;
      while (loop_1325) {
        loop_1325 = GALGAS_bool (kIsStrictInf, var_bank.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 48)).isValid () ;
        if (loop_1325) {
          loop_1325 = GALGAS_bool (kIsStrictInf, var_bank.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 48)).boolValue () ;
        }
        if (loop_1325 && (0 == variant_1325)) {
          loop_1325 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 48)) ;
        }
        if (loop_1325) {
          variant_1325 -- ;
          var_ok = GALGAS_bool (false) ;
          cEnumerator_uintlist enumerator_1438 (var_registerAddressList, kEnumeration_up) ;
          bool bool_4 = var_ok.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 50)).isValidAndTrue () ;
          if (enumerator_1438.hasCurrentObject () && bool_4) {
            while (enumerator_1438.hasCurrentObject () && bool_4) {
              var_ok = GALGAS_bool (kIsSupOrEqual, enumerator_1438.current_mValue (HERE).objectCompare (var_bank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_1438.current_mValue (HERE).objectCompare (var_bank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)).add_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)) ;
              var_registerAddress = enumerator_1438.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 52)) ;
              enumerator_1438.gotoNextObject () ;
              if (enumerator_1438.hasCurrentObject ()) {
                bool_4 = var_ok.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 50)).isValidAndTrue () ;
              }
            }
          }
          var_bank.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)) ;
        }
      }
    }
    const enumGalgasBool test_5 = var_ok.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_acceptableBankMessage = GALGAS_string::makeEmptyString () ;
      cEnumerator_uintlist enumerator_1693 (var_registerAddressList, kEnumeration_up) ;
      while (enumerator_1693.hasCurrentObject ()) {
        var_acceptableBankMessage.dotAssign_operation (enumerator_1693.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)).reader_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 59))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)) ;
        if (enumerator_1693.hasNextObject ()) {
          var_acceptableBankMessage.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 60)) ;
        }
        enumerator_1693.gotoNextObject () ;
      }
      GALGAS_location location_6 (object->mAttribute_mRegisterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("as no bank is currently known, the '").add_operation (object->mAttribute_mRegisterName.reader_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)).add_operation (GALGAS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)).add_operation (var_acceptableBankMessage, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)).add_operation (GALGAS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)) ;
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_2080 (var_registerAddressList, kEnumeration_up) ;
    bool bool_7 = var_found.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 66)).isValidAndTrue () ;
    if (enumerator_2080.hasCurrentObject () && bool_7) {
      while (enumerator_2080.hasCurrentObject () && bool_7) {
        var_found = GALGAS_bool (kIsSupOrEqual, enumerator_2080.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_2080.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_uint ((uint32_t) 128U), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)) ;
        var_registerAddress = enumerator_2080.current_mValue (HERE).operator_and (GALGAS_uint ((uint32_t) 127U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 68)) ;
        enumerator_2080.gotoNextObject () ;
        if (enumerator_2080.hasCurrentObject ()) {
          bool_7 = var_found.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 66)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_8 = var_found.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_acceptableBankMessage = GALGAS_string::makeEmptyString () ;
      cEnumerator_uintlist enumerator_2334 (var_registerAddressList, kEnumeration_up) ;
      while (enumerator_2334.hasCurrentObject ()) {
        var_acceptableBankMessage.dotAssign_operation (enumerator_2334.current_mValue (HERE).right_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)).reader_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 73))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)) ;
        if (enumerator_2334.hasNextObject ()) {
          var_acceptableBankMessage.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 74)) ;
        }
        enumerator_2334.gotoNextObject () ;
      }
      GALGAS_location location_9 (object->mAttribute_mRegisterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_9, GALGAS_string ("the '").add_operation (object->mAttribute_mRegisterName.reader_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)).add_operation (GALGAS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)).add_operation (constinArgument_inCurrentBank.reader_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)).add_operation (GALGAS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)).add_operation (var_acceptableBankMessage, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)) ;
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString, var_registerAddress.add_operation (object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("midrange_intermediate_classes.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 82))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 80)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerExpression_resolveMidrangeAccess (void) {
  enterCategoryMethod_resolveMidrangeAccess (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                             categoryMethod_registerExpression_resolveMidrangeAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_registerExpression_resolveMidrangeAccess (void) {
  gCategoryMethodTable_registerExpression_resolveMidrangeAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_resolveMidrangeAccess (defineCategoryMethod_registerExpression_resolveMidrangeAccess,
                                                                     freeCategoryMethod_registerExpression_resolveMidrangeAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@registerExpression analyzeRegisterExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_registerExpression_analyzeRegisterExpression> gCategoryMethodTable_registerExpression_analyzeRegisterExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeRegisterExpression (const int32_t inClassIndex,
                                                    categoryMethodSignature_registerExpression_analyzeRegisterExpression inMethod) {
  gCategoryMethodTable_registerExpression_analyzeRegisterExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeRegisterExpression (const cPtr_registerExpression * inObject,
                                                   const GALGAS_uint constin_inAccessBankSplitOffset,
                                                   const GALGAS_uint constin_inCurrentBank,
                                                   const GALGAS_registerTable constin_inRegisterTable,
                                                   GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                   GALGAS_bitSliceTable & out_outBitSliceTable,
                                                   GALGAS_stringset & io_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_registerExpression_analyzeRegisterExpression f = NULL ;
    if (classIndex < gCategoryMethodTable_registerExpression_analyzeRegisterExpression.count ()) {
      f = gCategoryMethodTable_registerExpression_analyzeRegisterExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_registerExpression_analyzeRegisterExpression.count ()) {
           f = gCategoryMethodTable_registerExpression_analyzeRegisterExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_registerExpression_analyzeRegisterExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerExpression_analyzeRegisterExpression (const cPtr_registerExpression * inObject,
                                                                         const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GALGAS_uint constinArgument_inCurrentBank,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                         GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 16)) ;
  GALGAS_string var_assemblyString = object->mAttribute_mRegisterName.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 18)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 19)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString.dotAssign_operation (GALGAS_string (" + ").add_operation (object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 20)).reader_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 20))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 20)) ;
  }
  GALGAS_uintlist var_registerAddressList ;
  GALGAS_uint var_size ;
  GALGAS_uint var_registerAddress = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string joker_860_0 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList, var_size, outArgument_outBitSliceTable, joker_860_0, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 26)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 28)).objectCompare (var_size)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mOffset.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 29))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 29)) ;
  }
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_1050 (var_registerAddressList, kEnumeration_up) ;
  bool bool_3 = var_found.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 33)).isValidAndTrue () ;
  if (enumerator_1050.hasCurrentObject () && bool_3) {
    while (enumerator_1050.hasCurrentObject () && bool_3) {
      var_found = GALGAS_bool (kIsStrictInf, enumerator_1050.current_mValue (HERE).objectCompare (constinArgument_inAccessBankSplitOffset)).operator_or (GALGAS_bool (kIsSupOrEqual, enumerator_1050.current_mValue (HERE).objectCompare (GALGAS_uint ((uint32_t) 3840U).add_operation (constinArgument_inAccessBankSplitOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 34)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 34)) ;
      var_registerAddress = enumerator_1050.current_mValue (HERE) ;
      enumerator_1050.gotoNextObject () ;
      if (enumerator_1050.hasCurrentObject ()) {
        bool_3 = var_found.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 33)).isValidAndTrue () ;
      }
    }
  }
  GALGAS_bool var_needsBSRaccess = GALGAS_bool (false) ;
  const enumGalgasBool test_4 = var_found.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 38)).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_needsBSRaccess = GALGAS_bool (true) ;
    var_registerAddressList.method_first (var_registerAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 40)) ;
    GALGAS_uint var_neededBank = var_registerAddress.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_neededBank.objectCompare (constinArgument_inCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_errorMessage = GALGAS_string ("Accessing the '").add_operation (object->mAttribute_mRegisterName.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)).add_operation (GALGAS_string ("' needs the bank selection set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)).add_operation (var_neededBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 44)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        var_errorMessage.dotAssign_operation (GALGAS_string (", but current bank selection cannot be known")  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)) ;
      }else if (kBoolFalse == test_6) {
        var_errorMessage.dotAssign_operation (GALGAS_string (", but current bank selection is set to ").add_operation (constinArgument_inCurrentBank.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 47))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 47)) ;
      }
      GALGAS_location location_7 (object->mAttribute_mRegisterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, var_errorMessage  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 49)) ;
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString, var_registerAddress.add_operation (object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)), var_needsBSRaccess  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerExpression_analyzeRegisterExpression (void) {
  enterCategoryMethod_analyzeRegisterExpression (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                                 categoryMethod_registerExpression_analyzeRegisterExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_registerExpression_analyzeRegisterExpression (void) {
  gCategoryMethodTable_registerExpression_analyzeRegisterExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_analyzeRegisterExpression (defineCategoryMethod_registerExpression_analyzeRegisterExpression,
                                                                         freeCategoryMethod_registerExpression_analyzeRegisterExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank> gCategoryMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank (const int32_t inClassIndex,
                                                                       categoryMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank inMethod) {
  gCategoryMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank (const cPtr_registerExpression * inObject,
                                                                      const GALGAS_registerTable constin_inRegisterTable,
                                                                      GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                      GALGAS_stringset & io_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank f = NULL ;
    if (classIndex < gCategoryMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.count ()) {
      f = gCategoryMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.count ()) {
           f = gCategoryMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, out_outIPICregisterDescription, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (const cPtr_registerExpression * inObject,
                                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                            GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument_outIPICregisterDescription,
                                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 65)) ;
  GALGAS_string var_assemblyString = object->mAttribute_mRegisterName.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString.dotAssign_operation (GALGAS_string (" + ").add_operation (object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 69)).reader_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 69))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 69)) ;
  }
  GALGAS_uintlist var_registerAddressList ;
  GALGAS_uint var_size ;
  GALGAS_bitSliceTable joker_2608_0 ; // Joker input parameter
  GALGAS_string joker_2611_0 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList, var_size, joker_2608_0, joker_2611_0, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 72)) ;
  GALGAS_uint var_registerAddress ;
  var_registerAddressList.method_first (var_registerAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 73)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 75)).objectCompare (var_size)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mOffset.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 76))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 76)) ;
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::constructor_new (var_assemblyString, var_registerAddress.add_operation (object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 81))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 79)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (void) {
  enterCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                                                    categoryMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (void) {
  gCategoryMethodTable_registerExpression_analyzeRegisterExpressionWithoutCheckingBank.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank (defineCategoryMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank,
                                                                                            freeCategoryMethod_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category reader '@registerExpression getRegisterAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_registerExpression_getRegisterAddress> gCategoryReaderTable_registerExpression_getRegisterAddress ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_getRegisterAddress (const int32_t inClassIndex,
                                             categoryReaderSignature_registerExpression_getRegisterAddress inReader) {
  gCategoryReaderTable_registerExpression_getRegisterAddress.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callCategoryReader_getRegisterAddress (const cPtr_registerExpression * inObject,
                                                   const GALGAS_registerTable & in_inRegisterTable,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_registerExpression_getRegisterAddress f = NULL ;
    if (classIndex < gCategoryReaderTable_registerExpression_getRegisterAddress.count ()) {
      f = gCategoryReaderTable_registerExpression_getRegisterAddress (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_registerExpression_getRegisterAddress.count ()) {
           f = gCategoryReaderTable_registerExpression_getRegisterAddress (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_registerExpression_getRegisterAddress.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inRegisterTable, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint categoryReader_registerExpression_getRegisterAddress (const cPtr_registerExpression * inObject,
                                                                         const GALGAS_registerTable & constinArgument_inRegisterTable,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outRegisterAddress ; // Returned variable
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_uintlist var_registerAddressList ;
  GALGAS_uint var_size ;
  GALGAS_bitSliceTable joker_3256_0 ; // Joker input parameter
  GALGAS_string joker_3259_0 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList, var_size, joker_3256_0, joker_3259_0, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 89)) ;
  var_registerAddressList.method_first (result_outRegisterAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 90)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mOffset.reader_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 92)).objectCompare (var_size)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOffset.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size.reader_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 93))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 93)) ;
  }
//---
  return result_outRegisterAddress ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_registerExpression_getRegisterAddress (void) {
  enterCategoryReader_getRegisterAddress (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                          categoryReader_registerExpression_getRegisterAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_registerExpression_getRegisterAddress (void) {
  gCategoryReaderTable_registerExpression_getRegisterAddress.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerExpression_getRegisterAddress (defineCategoryReader_registerExpression_getRegisterAddress,
                                                                  freeCategoryReader_registerExpression_getRegisterAddress) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@bitNumberLiteralValue display'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bitNumberLiteralValue_display (const cPtr_bitNumberExpression * inObject,
                                                          GALGAS_string & ioArgument_ioString,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLiteralValue * object = (const cPtr_bitNumberLiteralValue *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLiteralValue) ;
  ioArgument_ioString.dotAssign_operation (object->mAttribute_mBitNumberLiteralValue.reader_uint (SOURCE_FILE ("generic_metamodel.galgas", 256)).reader_string (SOURCE_FILE ("generic_metamodel.galgas", 256))  COMMA_SOURCE_FILE ("generic_metamodel.galgas", 256)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bitNumberLiteralValue_display (void) {
  enterCategoryMethod_display (kTypeDescriptor_GALGAS_bitNumberLiteralValue.mSlotID,
                               categoryMethod_bitNumberLiteralValue_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLiteralValue_display (defineCategoryMethod_bitNumberLiteralValue_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@bitNumberLabelValue display'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bitNumberLabelValue_display (const cPtr_bitNumberExpression * inObject,
                                                        GALGAS_string & ioArgument_ioString,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLabelValue * object = (const cPtr_bitNumberLabelValue *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLabelValue) ;
  ioArgument_ioString.dotAssign_operation (object->mAttribute_mBitNumberLabelValue.reader_string (SOURCE_FILE ("generic_metamodel.galgas", 269)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("generic_metamodel.galgas", 269)).add_operation (object->mAttribute_mBitNumberIndexValue.reader_uint (SOURCE_FILE ("generic_metamodel.galgas", 269)).reader_string (SOURCE_FILE ("generic_metamodel.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("generic_metamodel.galgas", 269)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("generic_metamodel.galgas", 269))  COMMA_SOURCE_FILE ("generic_metamodel.galgas", 269)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bitNumberLabelValue_display (void) {
  enterCategoryMethod_display (kTypeDescriptor_GALGAS_bitNumberLabelValue.mSlotID,
                               categoryMethod_bitNumberLabelValue_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLabelValue_display (defineCategoryMethod_bitNumberLabelValue_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding category method '@immediatInteger eval'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatInteger_eval (const cPtr_immediatExpression * inObject,
                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                 GALGAS_sint_36__34_ & outArgument_outResult,
                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatInteger * object = (const cPtr_immediatInteger *) inObject ;
  macroValidSharedObject (object, cPtr_immediatInteger) ;
  outArgument_outResult = object->mAttribute_mValue.reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 96)).reader_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 96)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatInteger_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatInteger.mSlotID,
                            categoryMethod_immediatInteger_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatInteger_eval (defineCategoryMethod_immediatInteger_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding category method '@immediatRegister eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatRegister_eval (const cPtr_immediatExpression * inObject,
                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                  const GALGAS_constantMap constinArgument_inConstantMap,
                                                  GALGAS_sint_36__34_ & outArgument_outResult,
                                                  GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatRegister * object = (const cPtr_immediatRegister *) inObject ;
  macroValidSharedObject (object, cPtr_immediatRegister) ;
  const enumGalgasBool test_0 = constinArgument_inRegisterTable.reader_hasKey (object->mAttribute_mRegister.reader_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 106)).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 106)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 106)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegister.reader_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 107)).mAttribute_string  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 107)) ;
    GALGAS_uintlist var_registerAddressList ;
    GALGAS_uint var_size ;
    GALGAS_bitSliceTable joker_4012_0 ; // Joker input parameter
    GALGAS_string joker_4015_0 ; // Joker input parameter
    constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegister.reader_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 108)), var_registerAddressList, var_size, joker_4012_0, joker_4015_0, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 108)) ;
    GALGAS_uint var_registerAddress ;
    var_registerAddressList.method_first (var_registerAddress, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 109)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mRegister.reader_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 110)).reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 110)).objectCompare (var_size)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mRegister.reader_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 111)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("index (").add_operation (object->mAttribute_mRegister.reader_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 111)).reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 111)).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)).add_operation (GALGAS_string (") should be lower than size ("), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)).add_operation (var_size.reader_string (SOURCE_FILE ("intermediate_generic.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)) ;
    }
    outArgument_outResult = var_registerAddress.add_operation (object->mAttribute_mRegister.reader_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 113)).reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 113)).reader_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 113)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = constinArgument_inConstantMap.reader_hasKey (object->mAttribute_mRegister.reader_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 114)).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 114)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 114)).boolEnum () ;
    if (kBoolTrue == test_3) {
      constinArgument_inConstantMap.method_searchKey (object->mAttribute_mRegister.reader_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 115)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 115)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mRegister.reader_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 116)).reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 116)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mRegister.reader_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 117)).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("index notation (").add_operation (object->mAttribute_mRegister.reader_mOffset (SOURCE_FILE ("intermediate_generic.galgas", 117)).reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 117)).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).add_operation (GALGAS_string (") cannot be used with a constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)) ;
      }
    }else if (kBoolFalse == test_3) {
      GALGAS_location location_6 (object->mAttribute_mRegister.reader_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 120)).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("'").add_operation (object->mAttribute_mRegister.reader_mRegisterName (SOURCE_FILE ("intermediate_generic.galgas", 120)).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 120)).add_operation (GALGAS_string ("' should be declared as ram register or as constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 120))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 120)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatRegister_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatRegister.mSlotID,
                            categoryMethod_immediatRegister_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatRegister_eval (defineCategoryMethod_immediatRegister_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@immediatAdd eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatAdd_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatAdd * object = (const cPtr_immediatAdd *) inObject ;
  macroValidSharedObject (object, cPtr_immediatAdd) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 131)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 132)) ;
  outArgument_outResult = var_leftResult.add_operation (var_rightResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 133)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatAdd_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatAdd.mSlotID,
                            categoryMethod_immediatAdd_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatAdd_eval (defineCategoryMethod_immediatAdd_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@immediatSub eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatSub_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatSub * object = (const cPtr_immediatSub *) inObject ;
  macroValidSharedObject (object, cPtr_immediatSub) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 143)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 144)) ;
  outArgument_outResult = var_leftResult.substract_operation (var_rightResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 145)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatSub_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatSub.mSlotID,
                            categoryMethod_immediatSub_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatSub_eval (defineCategoryMethod_immediatSub_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@immediatMul eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatMul_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatMul * object = (const cPtr_immediatMul *) inObject ;
  macroValidSharedObject (object, cPtr_immediatMul) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 155)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 156)) ;
  outArgument_outResult = var_leftResult.multiply_operation (var_rightResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 157)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatMul_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatMul.mSlotID,
                            categoryMethod_immediatMul_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatMul_eval (defineCategoryMethod_immediatMul_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@immediatDiv eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatDiv_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatDiv * object = (const cPtr_immediatDiv *) inObject ;
  macroValidSharedObject (object, cPtr_immediatDiv) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 167)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 168)) ;
  outArgument_outResult = var_leftResult.divide_operation (var_rightResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 169)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatDiv_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatDiv.mSlotID,
                            categoryMethod_immediatDiv_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatDiv_eval (defineCategoryMethod_immediatDiv_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@immediatMod eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatMod_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatMod * object = (const cPtr_immediatMod *) inObject ;
  macroValidSharedObject (object, cPtr_immediatMod) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 179)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 180)) ;
  outArgument_outResult = var_leftResult.modulo_operation (var_rightResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 181)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatMod_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatMod.mSlotID,
                            categoryMethod_immediatMod_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatMod_eval (defineCategoryMethod_immediatMod_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@immediatAnd eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatAnd_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatAnd * object = (const cPtr_immediatAnd *) inObject ;
  macroValidSharedObject (object, cPtr_immediatAnd) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 191)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 192)) ;
  outArgument_outResult = var_leftResult.operator_and (var_rightResult COMMA_SOURCE_FILE ("intermediate_generic.galgas", 193)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatAnd_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatAnd.mSlotID,
                            categoryMethod_immediatAnd_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatAnd_eval (defineCategoryMethod_immediatAnd_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding category method '@immediatOr eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatOr_eval (const cPtr_immediatExpression * inObject,
                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                            GALGAS_sint_36__34_ & outArgument_outResult,
                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatOr * object = (const cPtr_immediatOr *) inObject ;
  macroValidSharedObject (object, cPtr_immediatOr) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 203)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 204)) ;
  outArgument_outResult = var_leftResult.operator_or (var_rightResult COMMA_SOURCE_FILE ("intermediate_generic.galgas", 205)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatOr_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatOr.mSlotID,
                            categoryMethod_immediatOr_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatOr_eval (defineCategoryMethod_immediatOr_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding category method '@immediatXor eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatXor_eval (const cPtr_immediatExpression * inObject,
                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatXor * object = (const cPtr_immediatXor *) inObject ;
  macroValidSharedObject (object, cPtr_immediatXor) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 215)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 216)) ;
  outArgument_outResult = var_leftResult.operator_xor (var_rightResult COMMA_SOURCE_FILE ("intermediate_generic.galgas", 217)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatXor_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatXor.mSlotID,
                            categoryMethod_immediatXor_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatXor_eval (defineCategoryMethod_immediatXor_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding category method '@immediatLeftShift eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatLeftShift_eval (const cPtr_immediatExpression * inObject,
                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                   GALGAS_sint_36__34_ & outArgument_outResult,
                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLeftShift * object = (const cPtr_immediatLeftShift *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLeftShift) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 227)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 228)) ;
  outArgument_outResult = var_leftResult.left_shift_operation (var_rightResult.reader_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 229)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 229)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatLeftShift_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatLeftShift.mSlotID,
                            categoryMethod_immediatLeftShift_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLeftShift_eval (defineCategoryMethod_immediatLeftShift_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding category method '@immediatRightShift eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatRightShift_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatRightShift * object = (const cPtr_immediatRightShift *) inObject ;
  macroValidSharedObject (object, cPtr_immediatRightShift) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 239)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 240)) ;
  outArgument_outResult = var_leftResult.right_shift_operation (var_rightResult.reader_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 241)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 241)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatRightShift_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatRightShift.mSlotID,
                            categoryMethod_immediatRightShift_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatRightShift_eval (defineCategoryMethod_immediatRightShift_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding category method '@immediatEqualTest eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                   GALGAS_sint_36__34_ & outArgument_outResult,
                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatEqualTest * object = (const cPtr_immediatEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 251)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 252)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftResult.objectCompare (var_rightResult)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatEqualTest_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatEqualTest.mSlotID,
                            categoryMethod_immediatEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatEqualTest_eval (defineCategoryMethod_immediatEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@immediatNotEqualTest eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatNotEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                      GALGAS_sint_36__34_ & outArgument_outResult,
                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatNotEqualTest * object = (const cPtr_immediatNotEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatNotEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 267)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 268)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftResult.objectCompare (var_rightResult)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatNotEqualTest_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatNotEqualTest.mSlotID,
                            categoryMethod_immediatNotEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatNotEqualTest_eval (defineCategoryMethod_immediatNotEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@immediatGreaterOrEqualTest eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatGreaterOrEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                            GALGAS_sint_36__34_ & outArgument_outResult,
                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatGreaterOrEqualTest * object = (const cPtr_immediatGreaterOrEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatGreaterOrEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 283)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 284)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, var_leftResult.objectCompare (var_rightResult)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatGreaterOrEqualTest_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest.mSlotID,
                            categoryMethod_immediatGreaterOrEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatGreaterOrEqualTest_eval (defineCategoryMethod_immediatGreaterOrEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@immediatLowerOrEqualTest eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatLowerOrEqualTest_eval (const cPtr_immediatExpression * inObject,
                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                          GALGAS_sint_36__34_ & outArgument_outResult,
                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLowerOrEqualTest * object = (const cPtr_immediatLowerOrEqualTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLowerOrEqualTest) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 299)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 300)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsInfOrEqual, var_leftResult.objectCompare (var_rightResult)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatLowerOrEqualTest_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatLowerOrEqualTest.mSlotID,
                            categoryMethod_immediatLowerOrEqualTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLowerOrEqualTest_eval (defineCategoryMethod_immediatLowerOrEqualTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@immediatGreaterTest eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatGreaterTest_eval (const cPtr_immediatExpression * inObject,
                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                     GALGAS_sint_36__34_ & outArgument_outResult,
                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatGreaterTest * object = (const cPtr_immediatGreaterTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatGreaterTest) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 315)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 316)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_leftResult.objectCompare (var_rightResult)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatGreaterTest_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatGreaterTest.mSlotID,
                            categoryMethod_immediatGreaterTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatGreaterTest_eval (defineCategoryMethod_immediatGreaterTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding category method '@immediatLowerTest eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatLowerTest_eval (const cPtr_immediatExpression * inObject,
                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                   GALGAS_sint_36__34_ & outArgument_outResult,
                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatLowerTest * object = (const cPtr_immediatLowerTest *) inObject ;
  macroValidSharedObject (object, cPtr_immediatLowerTest) ;
  GALGAS_sint_36__34_ var_leftResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 331)) ;
  GALGAS_sint_36__34_ var_rightResult ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 332)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_leftResult.objectCompare (var_rightResult)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatLowerTest_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatLowerTest.mSlotID,
                            categoryMethod_immediatLowerTest_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatLowerTest_eval (defineCategoryMethod_immediatLowerTest_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding category method '@immediatNegate eval'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatNegate_eval (const cPtr_immediatExpression * inObject,
                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                GALGAS_sint_36__34_ & outArgument_outResult,
                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatNegate * object = (const cPtr_immediatNegate *) inObject ;
  macroValidSharedObject (object, cPtr_immediatNegate) ;
  GALGAS_sint_36__34_ var_result ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 347)) ;
  outArgument_outResult = var_result.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 348)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatNegate_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatNegate.mSlotID,
                            categoryMethod_immediatNegate_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatNegate_eval (defineCategoryMethod_immediatNegate_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding category method '@immediatComplement eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatComplement_eval (const cPtr_immediatExpression * inObject,
                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatComplement * object = (const cPtr_immediatComplement *) inObject ;
  macroValidSharedObject (object, cPtr_immediatComplement) ;
  GALGAS_sint_36__34_ var_result ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 358)) ;
  outArgument_outResult = var_result.operator_tilde (SOURCE_FILE ("intermediate_generic.galgas", 359)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatComplement_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatComplement.mSlotID,
                            categoryMethod_immediatComplement_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatComplement_eval (defineCategoryMethod_immediatComplement_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding category method '@immediatSlice eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_immediatSlice_eval (const cPtr_immediatExpression * inObject,
                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                               GALGAS_sint_36__34_ & outArgument_outResult,
                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_immediatSlice * object = (const cPtr_immediatSlice *) inObject ;
  macroValidSharedObject (object, cPtr_immediatSlice) ;
  GALGAS_bitSliceTable var_bitSliceTable ;
  outArgument_outResult = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 371)) ;
  GALGAS_uintlist joker_14020_0 ; // Joker input parameter
  GALGAS_uint joker_14023_0 ; // Joker input parameter
  GALGAS_string joker_14042_0 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, joker_14020_0, joker_14023_0, var_bitSliceTable, joker_14042_0, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 372)) ;
  GALGAS_stringset var_sliceNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("intermediate_generic.galgas", 373)) ;
  cEnumerator_immediatSliceExpressionList enumerator_14120 (object->mAttribute_mSliceExpressionList, kEnumeration_up) ;
  while (enumerator_14120.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_sliceNameSet.reader_hasKey (enumerator_14120.current_mSliceName (HERE).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 375)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 375)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_14120.current_mSliceName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_14120.current_mSliceName (HERE).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 376)).add_operation (GALGAS_string ("' bit field has been already defined"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 376))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 376)) ;
    }else if (kBoolFalse == test_0) {
      var_sliceNameSet.addAssign_operation (enumerator_14120.current_mSliceName (HERE).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 378))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 378)) ;
      GALGAS_uint var_sliceIndex ;
      GALGAS_uint var_sliceSize ;
      var_bitSliceTable.method_searchKey (enumerator_14120.current_mSliceName (HERE), var_sliceIndex, var_sliceSize, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 381)) ;
      GALGAS_sint_36__34_ var_result ;
      callCategoryMethod_eval ((const cPtr_immediatExpression *) enumerator_14120.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 382)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).operator_or (GALGAS_bool (kIsStrictSup, var_result.objectCompare (GALGAS_sint_36__34_ ((int64_t) 1LL).left_shift_operation (var_sliceSize COMMA_SOURCE_FILE ("intermediate_generic.galgas", 383)).substract_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 383)))) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 383)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_14120.current_mSliceName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("invalid immediat value associated to the '").add_operation (enumerator_14120.current_mSliceName (HERE).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)).add_operation (GALGAS_string ("' bit field, evaluated as "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)).add_operation (var_result.reader_string (SOURCE_FILE ("intermediate_generic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)).add_operation (GALGAS_string (" (should be between 0 and "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)).add_operation (GALGAS_uint ((uint32_t) 1U).left_shift_operation (var_sliceSize COMMA_SOURCE_FILE ("intermediate_generic.galgas", 385)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 385)).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 385)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 385))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)) ;
      }
      outArgument_outResult = outArgument_outResult.operator_or (var_result.left_shift_operation (var_sliceIndex COMMA_SOURCE_FILE ("intermediate_generic.galgas", 387)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 387)) ;
    }
    enumerator_14120.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_immediatSlice_eval (void) {
  enterCategoryMethod_eval (kTypeDescriptor_GALGAS_immediatSlice.mSlotID,
                            categoryMethod_immediatSlice_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_immediatSlice_eval (defineCategoryMethod_immediatSlice_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@bitNumberLiteralValue getBitNumber'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bitNumberLiteralValue_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                                               const GALGAS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                               GALGAS_uint & outArgument_outBitNumber,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLiteralValue * object = (const cPtr_bitNumberLiteralValue *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLiteralValue) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBitNumberLiteralValue.reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 407)).objectCompare (GALGAS_uint ((uint32_t) 7U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mBitNumberLiteralValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("The bit number is ").add_operation (object->mAttribute_mBitNumberLiteralValue.reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 408)).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 408)).add_operation (GALGAS_string (" (should be <= 7)"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 408))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 408)) ;
  }
  outArgument_outBitNumber = object->mAttribute_mBitNumberLiteralValue.reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 410)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bitNumberLiteralValue_getBitNumber (void) {
  enterCategoryMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLiteralValue.mSlotID,
                                    categoryMethod_bitNumberLiteralValue_getBitNumber) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLiteralValue_getBitNumber (defineCategoryMethod_bitNumberLiteralValue_getBitNumber, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@bitNumberLabelValue getBitNumber'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bitNumberLabelValue_getBitNumber (const cPtr_bitNumberExpression * inObject,
                                                             const GALGAS_bitSliceTable constinArgument_inBitSliceTable,
                                                             GALGAS_uint & outArgument_outBitNumber,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitNumberLabelValue * object = (const cPtr_bitNumberLabelValue *) inObject ;
  macroValidSharedObject (object, cPtr_bitNumberLabelValue) ;
  GALGAS_uint var_sliceIndex ;
  GALGAS_uint var_sliceSize ;
  constinArgument_inBitSliceTable.method_searchKey (object->mAttribute_mBitNumberLabelValue, var_sliceIndex, var_sliceSize, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 420)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBitNumberIndexValue.reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 421)).objectCompare (var_sliceSize)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mBitNumberIndexValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("The ").add_operation (object->mAttribute_mBitNumberIndexValue.reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 422)).reader_string (SOURCE_FILE ("intermediate_generic.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 422)).add_operation (GALGAS_string (" index is too large (should be < "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 422)).add_operation (var_sliceSize.reader_string (SOURCE_FILE ("intermediate_generic.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 423)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 423))  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 422)) ;
  }
  outArgument_outBitNumber = var_sliceIndex.add_operation (object->mAttribute_mBitNumberIndexValue.reader_uint (SOURCE_FILE ("intermediate_generic.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 425)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bitNumberLabelValue_getBitNumber (void) {
  enterCategoryMethod_getBitNumber (kTypeDescriptor_GALGAS_bitNumberLabelValue.mSlotID,
                                    categoryMethod_bitNumberLabelValue_getBitNumber) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bitNumberLabelValue_getBitNumber (defineCategoryMethod_bitNumberLabelValue_getBitNumber, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@baseline_instruction_IF_BitTest addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 12)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@baseline_instruction_IF_SEMI_COLON addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 19)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@baseline_instruction_IF_IncDec addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  callCategoryMethod_addUsedRoutines ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 26)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@baseline_instruction_JUMP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JUMP * object = (const cPtr_baseline_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 33)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@baseline_instruction_GOTO addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_GOTO * object = (const cPtr_baseline_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_GOTO) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 40)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_GOTO_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@baseline_instruction_CALL addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_CALL * object = (const cPtr_baseline_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_CALL) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 47)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_CALL_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@baseline_instruction_FOREVER addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                               GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FOREVER * object = (const cPtr_baseline_5F_instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FOREVER) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 54)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@baseline_instruction_STATIC_REPEAT addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * object = (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 61)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_STATIC_5F_REPEAT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@baseline_instruction_MNOP addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@baseline_instruction_TRIS addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_TRIS_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@baseline_instruction_WO_OPERAND addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@baseline_instruction_F addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_F_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_F_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_F_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_F_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_F_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@baseline_instruction_FB addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_FB_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FB_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_FB_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@baseline_instruction_do_while addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_do_5F_while * object = (const cPtr_baseline_5F_instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 98)) ;
  }
  cEnumerator_baseline_5F_partList enumerator_3216 (object->mAttribute_mWhilePartList, kEnumeration_up) ;
  while (enumerator_3216.hasCurrentObject ()) {
    {
    routine_addBaselineUsedRoutinesFromInstructionList (enumerator_3216.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 100)) ;
    }
    enumerator_3216.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@baseline_instruction_structured_if addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mThenInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 108)) ;
  }
  {
  routine_addBaselineUsedRoutinesFromInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 109)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@baseline_instruction_FD addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_FD_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FD_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_FD_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@baseline_instruction_JSR addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (const cPtr_baseline_5F_instruction * inObject,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JSR * object = (const cPtr_baseline_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JSR) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 122)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_JSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@baseline_instruction_literalOperation addUsedRoutines'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (void) {
  enterCategoryMethod_addUsedRoutines (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                       categoryMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines (defineCategoryMethod_baseline_5F_instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@baseline_instruction_literalOperation shouldTerminateWithMOVLW'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                                                 const GALGAS_string constinArgument_inErrorMessage,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLiteralInstruction.objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_compilation.galgas", 25)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, constinArgument_inErrorMessage  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 26)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (void) {
  enterCategoryMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                                categoryMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW (defineCategoryMethod_baseline_5F_instruction_5F_literalOperation_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@baseline_instruction_CALL shouldTerminateWithMOVLW'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                     const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (void) {
  enterCategoryMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                                categoryMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW (defineCategoryMethod_baseline_5F_instruction_5F_CALL_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@baseline_instruction_structured_if shouldTerminateWithMOVLW'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (const cPtr_baseline_5F_instruction * inObject,
                                                                                                 const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_structured_5F_if * object = (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mThenInstructionList.reader_length (SOURCE_FILE ("baseline_compilation.galgas", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the 'then' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 42)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_baseline_5F_instruction var_lastInstruction ;
    object->mAttribute_mThenInstructionList.method_last (var_lastInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 44)) ;
    callCategoryMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction.ptr (), GALGAS_string ("the 'then' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 45)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mElseInstructionList.reader_length (SOURCE_FILE ("baseline_compilation.galgas", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the 'else' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction")  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 49)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_baseline_5F_instruction var_lastInstruction ;
    object->mAttribute_mElseInstructionList.method_last (var_lastInstruction, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 51)) ;
    callCategoryMethod_shouldTerminateWithMOVLW ((const cPtr_baseline_5F_instruction *) var_lastInstruction.ptr (), GALGAS_string ("the 'else' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 52)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (void) {
  enterCategoryMethod_shouldTerminateWithMOVLW (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if.mSlotID,
                                                categoryMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW (defineCategoryMethod_baseline_5F_instruction_5F_structured_5F_if_shouldTerminateWithMOVLW, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@baseline_instruction_GOTO shouldNotContinueInSequence'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                        const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (void) {
  enterCategoryMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                                   categoryMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence (defineCategoryMethod_baseline_5F_instruction_5F_GOTO_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@baseline_instruction_JUMP shouldNotContinueInSequence'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                        const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (void) {
  enterCategoryMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                                   categoryMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence (defineCategoryMethod_baseline_5F_instruction_5F_JUMP_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@baseline_instruction_FOREVER shouldNotContinueInSequence'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (const cPtr_baseline_5F_instruction * /* inObject */,
                                                                                           const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (void) {
  enterCategoryMethod_shouldNotContinueInSequence (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER.mSlotID,
                                                   categoryMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence (defineCategoryMethod_baseline_5F_instruction_5F_FOREVER_shouldNotContinueInSequence, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@baseline_instruction_WO_OPERAND build_baseline_intermediate_instructionList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                          const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                          const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                          GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                          GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                          const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * object = (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the last routine instruction should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 118)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 120))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 120)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_WO_5F_OPERAND_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@baseline_instruction_TRIS build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                 const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                 const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_TRIS * object = (const cPtr_baseline_5F_instruction_5F_TRIS *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_TRIS) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction but should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 150)) ;
  }
  const enumGalgasBool test_1 = function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 153)).reader_hasKey (object->mAttribute_mOperand.mAttribute_string COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 153)).operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_5417 (function_acceptableTRISoperand (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 155)), kEnumeration_up) ;
    while (enumerator_5417.hasCurrentObject ()) {
      var_s.dotAssign_operation (enumerator_5417.current_key (HERE)  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 156)) ;
      if (enumerator_5417.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 157)) ;
      }
      enumerator_5417.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("invalid TRIS operand; accepted operand are: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 159)) ;
  }
  GALGAS_uintlist var_registerAddressList ;
  GALGAS_uint joker_5638_3 ; // Joker input parameter
  GALGAS_bitSliceTable joker_5638_2 ; // Joker input parameter
  GALGAS_string joker_5638_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mOperand, var_registerAddressList, joker_5638_3, joker_5638_2, joker_5638_1, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 162)) ;
  GALGAS_uint var_opcode ;
  var_registerAddressList.method_first (var_opcode, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 163)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_TRIS::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOperand, var_opcode  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 165)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_TRIS_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@baseline_instruction_MNOP build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                 const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                 const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_MNOP * object = (const cPtr_baseline_5F_instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 183)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mOccurrenceFactor  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 185))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 185)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_MNOP_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding category method '@baseline_instruction_literalOperation build_baseline_intermediate_instructionList'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                             const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                             const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                             GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                             GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                             const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_literalOperation * object = (const cPtr_baseline_5F_instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_literalOperation) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mLiteralInstruction.objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 202)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 202)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 203)) ;
  }
  GALGAS_sint_36__34_ var_immediatValue ;
  callCategoryMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_immediatValue, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 205)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_immediatValue.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_immediatValue.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 207)))) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 207)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_immediatValue.reader_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 208)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 208))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 208)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::constructor_RETLW (SOURCE_FILE ("baseline_semantic_analysis.galgas", 214)), var_immediatValue.operator_and (GALGAS_sint ((int32_t) 255L).reader_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215)).reader_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 215))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 212)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mLiteralInstruction, var_immediatValue.operator_and (GALGAS_sint ((int32_t) 255L).reader_sint_36__34_ (SOURCE_FILE ("baseline_semantic_analysis.galgas", 220)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 220)).reader_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 220))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 217))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 217)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_literalOperation_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@baseline_instruction_FD build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                               const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                               const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                               GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                               const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FD * object = (const cPtr_baseline_5F_instruction_5F_FD *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FD) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 240)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription ;
  GALGAS_bitSliceTable var_bitSliceTable ;
  callCategoryMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, var_intermediateRegisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 242)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mInstruction_5F_FD_5F_base_5F_code, var_intermediateRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 248))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 248)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_FD_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@baseline_instruction_CALL build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                 const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                 const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_CALL * object = (const cPtr_baseline_5F_instruction_5F_CALL *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_CALL) ;
  GALGAS_bool var_isNoReturn ;
  GALGAS_luint var_targetPage ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_targetPage, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 270)) ;
  const enumGalgasBool test_0 = var_isNoReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 272)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage.mAttribute_uint)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("for an inter-page regular routine call, use a JSR instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 275)) ;
  }
  const enumGalgasBool test_4 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 279))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 279)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_CALL::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 283))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 283)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_CALL_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@baseline_instruction_JSR build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JSR * object = (const cPtr_baseline_5F_instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JSR) ;
  GALGAS_bool var_isNoReturn ;
  GALGAS_luint var_targetPage ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_targetPage, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 304)) ;
  const enumGalgasBool test_0 = var_isNoReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or a JUMP instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 306)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, constinArgument_inCurrentPage, var_targetPage.mAttribute_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 310))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 310)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JSR::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, constinArgument_inCurrentPage, var_targetPage.mAttribute_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 316))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 316)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_JSR_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@baseline_instruction_F build_baseline_intermediate_instructionList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                              const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                              const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                              GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                              GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                              GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                              const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                              const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_F * object = (const cPtr_baseline_5F_instruction_5F_F *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_F) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 339)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription ;
  GALGAS_bitSliceTable joker_13003_0 ; // Joker input parameter
  callCategoryMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, var_intermediateRegisterDescription, joker_13003_0, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 341)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_F::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mFAinstruction, var_intermediateRegisterDescription  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 347))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 347)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_F_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@baseline_instruction_FB build_baseline_intermediate_instructionList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                               const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                               const GALGAS_baselineRoutineMap /* constinArgument_inRoutineMap */,
                                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                               GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                               const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_FB * object = (const cPtr_baseline_5F_instruction_5F_FB *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_FB) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 368)) ;
  }
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription ;
  GALGAS_bitSliceTable var_bitSliceTable ;
  callCategoryMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, var_intermediateRegisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 370)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 376)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mBitOrientedOp, var_intermediateRegisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 380))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 380)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_FB_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@baseline_instruction_GOTO build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                 const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                 const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_GOTO * object = (const cPtr_baseline_5F_instruction_5F_GOTO *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_GOTO) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 402)) ;
  }
  GALGAS_bool var_isNoReturn ;
  GALGAS_luint var_targetPage ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_targetPage, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 404)) ;
  const enumGalgasBool test_1 = var_isNoReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 405)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("a regular routine should be called with a CALL or a JSR instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 406)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inCurrentPage.objectCompare (var_targetPage.mAttribute_uint)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("for an inter-page noreturn routine call, use a JUMP instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 409)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 413))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 413)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_GOTO_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@baseline_instruction_JUMP build_baseline_intermediate_instructionList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                 const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                 const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                                 GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                                 const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_JUMP * object = (const cPtr_baseline_5F_instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_JUMP) ;
  const enumGalgasBool test_0 = constinArgument_inLastInstructionShouldReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("this instruction is the last routine instruction and should be MOVLW")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 433)) ;
  }
  GALGAS_bool var_isNoReturn ;
  GALGAS_luint var_targetPage ;
  constinArgument_inRoutineMap.method_searchKey (object->mAttribute_mTargetLabel, var_isNoReturn, var_targetPage, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 435)) ;
  const enumGalgasBool test_1 = var_isNoReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 436)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTargetLabel.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("a regular routine should be called with a CALL or a JSR instruction")  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 437)) ;
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_JUMP::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTargetLabel, constinArgument_inCurrentPage, var_targetPage.mAttribute_uint  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 441))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 441)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_JUMP_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@baseline_instruction_IF_BitTest build_baseline_intermediate_instructionList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (const cPtr_baseline_5F_instruction * inObject,
                                                                                                                          const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                          const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                          GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                          GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                          GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                                          const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                          const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription ;
  GALGAS_bitSliceTable var_bitSliceTable ;
  callCategoryMethod_resolveBaselineAccess ((const cPtr_registerExpression *) object->mAttribute_mRegisterExpression.ptr (), constinArgument_inRegisterTable, var_intermediateRegisterDescription, var_bitSliceTable, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 462)) ;
  GALGAS_uint var_bitNumber ;
  callCategoryMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mAttribute_mBitNumber.ptr (), var_bitSliceTable, var_bitNumber, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 469)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSkipIfSet, var_intermediateRegisterDescription, var_bitNumber  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 473))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 473)) ;
  GALGAS_bool var_unusedContinuesInSequence = GALGAS_bool (true) ;
  callCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((const cPtr_baseline_5F_instruction *) object->mAttribute_mInstruction.ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_unusedContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 480)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (void) {
  enterCategoryMethod_build_5F_baseline_5F_intermediate_5F_instructionList (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                                                            categoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList (defineCategoryMethod_baseline_5F_instruction_5F_IF_5F_BitTest_build_5F_baseline_5F_intermediate_5F_instructionList, NULL) ;

