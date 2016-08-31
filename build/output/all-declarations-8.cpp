#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ipic_31__38_JumpTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_JumpTerminator * p = (const cPtr_ipic_31__38_JumpTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLabel.objectCompare (p->mAttribute_mLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ipic_31__38_JumpTerminator::objectCompare (const GALGAS_ipic_31__38_JumpTerminator & inOperand) const {
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

GALGAS_ipic_31__38_JumpTerminator::GALGAS_ipic_31__38_JumpTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_JumpTerminator::GALGAS_ipic_31__38_JumpTerminator (const cPtr_ipic_31__38_JumpTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_JumpTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_JumpTerminator GALGAS_ipic_31__38_JumpTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                      const GALGAS_lstring & inAttribute_mLabel,
                                                                                      const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_JumpTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_JumpTerminator (inAttribute_mInstructionLocation, inAttribute_mLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ipic_31__38_JumpTerminator::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_JumpTerminator * p = (const cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    result = p->mAttribute_mLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_ipic_31__38_JumpTerminator::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind GALGAS_ipic_31__38_JumpTerminator::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_jumpInstructionKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_JumpTerminator * p = (const cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind cPtr_ipic_31__38_JumpTerminator::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @ipic18JumpTerminator class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ipic_31__38_JumpTerminator::cPtr_ipic_31__38_JumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_lstring & in_mLabel,
                                                                  const GALGAS_jumpInstructionKind & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE),
mAttribute_mLabel (in_mLabel),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ipic_31__38_JumpTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;
}

void cPtr_ipic_31__38_JumpTerminator::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@ipic18JumpTerminator:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ipic_31__38_JumpTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_JumpTerminator (mAttribute_mInstructionLocation, mAttribute_mLabel, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @ipic18JumpTerminator type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ("ipic18JumpTerminator",
                                                   & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38_JumpTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38_JumpTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_JumpTerminator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_JumpTerminator GALGAS_ipic_31__38_JumpTerminator::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_JumpTerminator result ;
  const GALGAS_ipic_31__38_JumpTerminator * p = (const GALGAS_ipic_31__38_JumpTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_JumpTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18JumpTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ipic_31__38_ConditionalJumpTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConditionalBranch.objectCompare (p->mAttribute_mConditionalBranch) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabelWhenTrue.objectCompare (p->mAttribute_mTargetLabelWhenTrue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchModeOnTrueLabel.objectCompare (p->mAttribute_mBranchModeOnTrueLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetLabelWhenFalse.objectCompare (p->mAttribute_mTargetLabelWhenFalse) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchModeOnFalseLabel.objectCompare (p->mAttribute_mBranchModeOnFalseLabel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ipic_31__38_ConditionalJumpTerminator::objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inOperand) const {
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

GALGAS_ipic_31__38_ConditionalJumpTerminator::GALGAS_ipic_31__38_ConditionalJumpTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_ConditionalJumpTerminator::GALGAS_ipic_31__38_ConditionalJumpTerminator (const cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_ConditionalJumpTerminator GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_conditional_5F_branch & inAttribute_mConditionalBranch,
                                                                                                            const GALGAS_lstring & inAttribute_mTargetLabelWhenTrue,
                                                                                                            const GALGAS_conditionalBranchMode & inAttribute_mBranchModeOnTrueLabel,
                                                                                                            const GALGAS_lstring & inAttribute_mTargetLabelWhenFalse,
                                                                                                            const GALGAS_conditionalBranchMode & inAttribute_mBranchModeOnFalseLabel
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ConditionalJumpTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConditionalBranch.isValid () && inAttribute_mTargetLabelWhenTrue.isValid () && inAttribute_mBranchModeOnTrueLabel.isValid () && inAttribute_mTargetLabelWhenFalse.isValid () && inAttribute_mBranchModeOnFalseLabel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ConditionalJumpTerminator (inAttribute_mInstructionLocation, inAttribute_mConditionalBranch, inAttribute_mTargetLabelWhenTrue, inAttribute_mBranchModeOnTrueLabel, inAttribute_mTargetLabelWhenFalse, inAttribute_mBranchModeOnFalseLabel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditional_5F_branch GALGAS_ipic_31__38_ConditionalJumpTerminator::getter_mConditionalBranch (UNUSED_LOCATION_ARGS) const {
  GALGAS_conditional_5F_branch result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    result = p->mAttribute_mConditionalBranch ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditional_5F_branch cPtr_ipic_31__38_ConditionalJumpTerminator::getter_mConditionalBranch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConditionalBranch ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ipic_31__38_ConditionalJumpTerminator::getter_mTargetLabelWhenTrue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    result = p->mAttribute_mTargetLabelWhenTrue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_ipic_31__38_ConditionalJumpTerminator::getter_mTargetLabelWhenTrue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabelWhenTrue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditionalBranchMode GALGAS_ipic_31__38_ConditionalJumpTerminator::getter_mBranchModeOnTrueLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_conditionalBranchMode result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    result = p->mAttribute_mBranchModeOnTrueLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditionalBranchMode cPtr_ipic_31__38_ConditionalJumpTerminator::getter_mBranchModeOnTrueLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchModeOnTrueLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ipic_31__38_ConditionalJumpTerminator::getter_mTargetLabelWhenFalse (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    result = p->mAttribute_mTargetLabelWhenFalse ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_ipic_31__38_ConditionalJumpTerminator::getter_mTargetLabelWhenFalse (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabelWhenFalse ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditionalBranchMode GALGAS_ipic_31__38_ConditionalJumpTerminator::getter_mBranchModeOnFalseLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_conditionalBranchMode result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    result = p->mAttribute_mBranchModeOnFalseLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_conditionalBranchMode cPtr_ipic_31__38_ConditionalJumpTerminator::getter_mBranchModeOnFalseLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchModeOnFalseLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @ipic18ConditionalJumpTerminator class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ipic_31__38_ConditionalJumpTerminator::cPtr_ipic_31__38_ConditionalJumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                                                        const GALGAS_lstring & in_mTargetLabelWhenTrue,
                                                                                        const GALGAS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                                                        const GALGAS_lstring & in_mTargetLabelWhenFalse,
                                                                                        const GALGAS_conditionalBranchMode & in_mBranchModeOnFalseLabel
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mAttribute_mConditionalBranch (in_mConditionalBranch),
mAttribute_mTargetLabelWhenTrue (in_mTargetLabelWhenTrue),
mAttribute_mBranchModeOnTrueLabel (in_mBranchModeOnTrueLabel),
mAttribute_mTargetLabelWhenFalse (in_mTargetLabelWhenFalse),
mAttribute_mBranchModeOnFalseLabel (in_mBranchModeOnFalseLabel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ipic_31__38_ConditionalJumpTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;
}

void cPtr_ipic_31__38_ConditionalJumpTerminator::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@ipic18ConditionalJumpTerminator:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConditionalBranch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabelWhenTrue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchModeOnTrueLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabelWhenFalse.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchModeOnFalseLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ipic_31__38_ConditionalJumpTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_ConditionalJumpTerminator (mAttribute_mInstructionLocation, mAttribute_mConditionalBranch, mAttribute_mTargetLabelWhenTrue, mAttribute_mBranchModeOnTrueLabel, mAttribute_mTargetLabelWhenFalse, mAttribute_mBranchModeOnFalseLabel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @ipic18ConditionalJumpTerminator type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ("ipic18ConditionalJumpTerminator",
                                                              & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ConditionalJumpTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38_ConditionalJumpTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ConditionalJumpTerminator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_ConditionalJumpTerminator GALGAS_ipic_31__38_ConditionalJumpTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ConditionalJumpTerminator result ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator * p = (const GALGAS_ipic_31__38_ConditionalJumpTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38_ConditionalJumpTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ConditionalJumpTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pic_31__38_RegisterComparisonTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_RegisterComparisonTerminator * p = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSingleInstructionTerminatorIfConditionTrue.objectCompare (p->mAttribute_mSingleInstructionTerminatorIfConditionTrue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSingleInstructionTerminatorIfConditionFalse.objectCompare (p->mAttribute_mSingleInstructionTerminatorIfConditionFalse) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDescription.objectCompare (p->mAttribute_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mComparison.objectCompare (p->mAttribute_mComparison) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pic_31__38_RegisterComparisonTerminator::objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator & inOperand) const {
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

GALGAS_pic_31__38_RegisterComparisonTerminator::GALGAS_pic_31__38_RegisterComparisonTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonTerminator::GALGAS_pic_31__38_RegisterComparisonTerminator (const cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterComparisonTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonTerminator GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionTrue,
                                                                                                                const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionFalse,
                                                                                                                const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                const GALGAS_ipic_31__38_RegisterComparison & inAttribute_mComparison
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionTrue.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionFalse.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mComparison.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterComparisonTerminator (inAttribute_mInstructionLocation, inAttribute_mSingleInstructionTerminatorIfConditionTrue, inAttribute_mSingleInstructionTerminatorIfConditionFalse, inAttribute_mRegisterDescription, inAttribute_mComparison COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_pic_31__38_RegisterComparisonTerminator::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterComparisonTerminator * p = (const cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    result = p->mAttribute_mRegisterDescription ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression cPtr_pic_31__38_RegisterComparisonTerminator::getter_mRegisterDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparisonTerminator::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_RegisterComparison result ;
  if (NULL != mObjectPtr) {
    const cPtr_pic_31__38_RegisterComparisonTerminator * p = (const cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    result = p->mAttribute_mComparison ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_RegisterComparison cPtr_pic_31__38_RegisterComparisonTerminator::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComparison ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @pic18RegisterComparisonTerminator class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pic_31__38_RegisterComparisonTerminator::cPtr_pic_31__38_RegisterComparisonTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                            const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                            const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                            const GALGAS_ipic_31__38_RegisterComparison & in_mComparison
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse COMMA_THERE),
mAttribute_mRegisterDescription (in_mRegisterDescription),
mAttribute_mComparison (in_mComparison) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pic_31__38_RegisterComparisonTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;
}

void cPtr_pic_31__38_RegisterComparisonTerminator::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@pic18RegisterComparisonTerminator:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mComparison.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pic_31__38_RegisterComparisonTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterComparisonTerminator (mAttribute_mInstructionLocation, mAttribute_mSingleInstructionTerminatorIfConditionTrue, mAttribute_mSingleInstructionTerminatorIfConditionFalse, mAttribute_mRegisterDescription, mAttribute_mComparison COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18RegisterComparisonTerminator type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ("pic18RegisterComparisonTerminator",
                                                                & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparisonTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparisonTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparisonTerminator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_RegisterComparisonTerminator GALGAS_pic_31__38_RegisterComparisonTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonTerminator result ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator * p = (const GALGAS_pic_31__38_RegisterComparisonTerminator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_RegisterComparisonTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
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


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_JSR::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const {
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

GALGAS_ipic_31__38__5F_intermediate_5F_JSR::GALGAS_ipic_31__38__5F_intermediate_5F_JSR (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_JSR::GALGAS_ipic_31__38__5F_intermediate_5F_JSR (const cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_JSR GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                        const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ipic_31__38__5F_intermediate_5F_JSR::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    result = p->mAttribute_mTargetLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_mTargetLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind GALGAS_ipic_31__38__5F_intermediate_5F_JSR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_jumpInstructionKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_jumpInstructionKind cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @ipic18_intermediate_JSR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ipic_31__38__5F_intermediate_5F_JSR::cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_lstring & in_mTargetLabel,
                                                                                    const GALGAS_jumpInstructionKind & in_mKind
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mTargetLabel (in_mTargetLabel),
mAttribute_mKind (in_mKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_JSR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_JSR (mAttribute_mInstructionLocation, mAttribute_mTargetLabel, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @ipic18_intermediate_JSR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ("ipic18_intermediate_JSR",
                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_JSR GALGAS_ipic_31__38__5F_intermediate_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_JSR result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLabel.objectCompare (p->mAttribute_mLabel) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOffset.objectCompare (p->mAttribute_mOffset) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightShift.objectCompare (p->mAttribute_mRightShift) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const {
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

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                                    GALGAS_uint::constructor_default (HERE),
                                                                                    GALGAS_uint::constructor_default (HERE)
                                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                    const GALGAS_lstring & inAttribute_mLabel,
                                                                                                                                    const GALGAS_uint & inAttribute_mOffset,
                                                                                                                                    const GALGAS_uint & inAttribute_mRightShift
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLabel.isValid () && inAttribute_mOffset.isValid () && inAttribute_mRightShift.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (inAttribute_mInstructionLocation, inAttribute_mLabel, inAttribute_mOffset, inAttribute_mRightShift COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    result = p->mAttribute_mLabel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_mLabel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_mOffset (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    result = p->mAttribute_mOffset ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_mOffset (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOffset ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_mRightShift (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    result = p->mAttribute_mRightShift ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_mRightShift (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightShift ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @ipic18_intermediate_MOV_LABEL_W class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GALGAS_location & in_mInstructionLocation,
                                                                                                                const GALGAS_lstring & in_mLabel,
                                                                                                                const GALGAS_uint & in_mOffset,
                                                                                                                const GALGAS_uint & in_mRightShift
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mLabel (in_mLabel),
mAttribute_mOffset (in_mOffset),
mAttribute_mRightShift (in_mRightShift) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_MOV_LABEL_W:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOffset.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightShift.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (mAttribute_mInstructionLocation, mAttribute_mLabel, mAttribute_mOffset, mAttribute_mRightShift COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @ipic18_intermediate_MOV_LABEL_W type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ("ipic18_intermediate_MOV_LABEL_W",
                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_MOV_LABEL_W", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap::GALGAS_branchOverflowMap (void) :
AC_GALGAS_listmap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap GALGAS_branchOverflowMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_branchOverflowMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchOverflowMap::addAssign_operation (const GALGAS_string & inKey,
                                                    const GALGAS_string & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_stringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_branchOverflowMap::getter_listForKey (const GALGAS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_stringlist (listForKey (inKey)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_branchOverflowMap::cEnumerator_branchOverflowMap (const GALGAS_branchOverflowMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap_2D_element cEnumerator_branchOverflowMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_branchOverflowMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_branchOverflowMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_branchOverflowMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_stringlist (p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @branchOverflowMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchOverflowMap ("branchOverflowMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_branchOverflowMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_branchOverflowMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchOverflowMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchOverflowMap GALGAS_branchOverflowMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_branchOverflowMap result ;
  const GALGAS_branchOverflowMap * p = (const GALGAS_branchOverflowMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchOverflowMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@ipic18Block display'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_display (const GALGAS_ipic_31__38_Block inObject,
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
    GALGAS_stringlist var_d_517 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_492.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 19)) ;
    cEnumerator_stringlist enumerator_570 (var_d_517, kEnumeration_up) ;
    while (enumerator_570.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_570.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)) ;
      enumerator_570.gotoNextObject () ;
    }
    enumerator_492.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 27)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@ipic18Block enterReferencedLabels'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterReferencedLabels (const GALGAS_ipic_31__38_Block inObject,
                                            const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                            GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_enterInstructionReferencedLabels (inObject.mAttribute_mInstructionList, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 952)) ;
  callExtensionMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 957)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension method '@ipic18Block optimize'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_optimize (const GALGAS_ipic_31__38_Block inObject,
                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                               const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                               GALGAS_bool & ioArgument_ioOptimizationDone,
                               GALGAS_string & ioArgument_ioListFileContents,
                               GALGAS_ipic_31__38_Block & outArgument_outOptimizedBlock,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizedBlock.drop () ; // Release 'out' argument
  GALGAS_bool var_optimized_36516 ;
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_36608 ;
  {
  routine_instructionListOptimization (constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, inObject.mAttribute_mInstructionList, inObject.mAttribute_mLabel, var_optimized_36516, ioArgument_ioListFileContents, var_optimizedInstructionList_36608, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 974)) ;
  }
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedTerminator_36706 = inObject.mAttribute_mTerminator ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_optimizedInstructionList_36608.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 986)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (inObject.mAttribute_mTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 986)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_SequentialInstruction var_lastInstruction_36901 ;
    GALGAS_uint joker_36903_2 ; // Joker input parameter
    GALGAS_uint joker_36903_1 ; // Joker input parameter
    var_optimizedInstructionList_36608.method_last (var_lastInstruction_36901, joker_36903_2, joker_36903_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 987)) ;
    if (var_lastInstruction_36901.isValid ()) {
      if (var_lastInstruction_36901.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) {
        GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation cast_36996_op ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) var_lastInstruction_36901.ptr ()) ;
        const enumGalgasBool test_1 = constinArgument_inOptimizeFlagStruct.mAttribute_mMOVLWfollowedByRETreplacedByRETLW.operator_and (GALGAS_bool (kIsEqual, cast_36996_op.getter_mLiteralInstruction (SOURCE_FILE ("ipic18_optimize_block.galgas", 990)).objectCompare (GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 990)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 990)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GALGAS_ipic_31__38_SequentialInstruction joker_37181_3 ; // Joker input parameter
          GALGAS_uint joker_37181_2 ; // Joker input parameter
          GALGAS_uint joker_37181_1 ; // Joker input parameter
          var_optimizedInstructionList_36608.setter_popLast (joker_37181_3, joker_37181_2, joker_37181_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 991)) ;
          }
          var_optimizedTerminator_36706 = GALGAS_ipic_31__38_RetlwTerminator::constructor_new (cast_36996_op.getter_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 992)), cast_36996_op.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 992))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 992)) ;
          var_optimized_36516 = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [M] ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 994)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 994)).add_operation (GALGAS_string (": MOVLW k ; RETURN --> RETLW k\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 994)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 994)) ;
        }
      }else if (var_lastInstruction_36901.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR) {
        GALGAS_ipic_31__38__5F_intermediate_5F_JSR cast_37503_jsr ((cPtr_ipic_31__38__5F_intermediate_5F_JSR *) var_lastInstruction_36901.ptr ()) ;
        const enumGalgasBool test_2 = constinArgument_inOptimizeFlagStruct.mAttribute_mJSRfollowedByRETreplacedByJUMP.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_ipic_31__38_SequentialInstruction joker_37618_3 ; // Joker input parameter
          GALGAS_uint joker_37618_2 ; // Joker input parameter
          GALGAS_uint joker_37618_1 ; // Joker input parameter
          var_optimizedInstructionList_36608.setter_popLast (joker_37618_3, joker_37618_2, joker_37618_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)) ;
          }
          var_optimizedTerminator_36706 = GALGAS_ipic_31__38_JumpTerminator::constructor_new (cast_37503_jsr.getter_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 1000)), cast_37503_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 1000)), cast_37503_jsr.getter_mKind (SOURCE_FILE ("ipic18_optimize_block.galgas", 1000))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1000)) ;
          var_optimized_36516 = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [J] ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (cast_37503_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (GALGAS_string (" ; RETURN --> JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (cast_37503_jsr.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1002)) ;
        }
      }
    }
  }
  const enumGalgasBool test_3 = var_optimized_36516.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 1021)).boolEnum () ;
  if (kBoolTrue == test_3) {
    callExtensionMethod_optimizeTerminator ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, inObject.mAttribute_mLabel.mAttribute_string, var_optimized_36516, ioArgument_ioListFileContents, var_optimizedTerminator_36706, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1022)) ;
  }
  const enumGalgasBool test_4 = var_optimized_36516.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    outArgument_outOptimizedBlock = GALGAS_ipic_31__38_Block::constructor_new (inObject.mAttribute_mAddress, inObject.mAttribute_mLabel, var_optimizedInstructionList_36608, var_optimizedTerminator_36706, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1040)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1035)) ;
  }else if (kBoolFalse == test_4) {
    const GALGAS_ipic_31__38_Block temp_5 = inObject ;
    outArgument_outOptimizedBlock = temp_5 ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@ipic18Block performRelativesResolution'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_performRelativesResolution (const GALGAS_ipic_31__38_Block inObject,
                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                 const GALGAS_string constinArgument_inNextBlockLabel,
                                                 const GALGAS_uint constinArgument_inBlockStartAddress,
                                                 GALGAS_uint & ioArgument_ioConversionCount,
                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                 GALGAS_ipic_31__38_Block & outArgument_outModifiedBlock,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifiedBlock.drop () ; // Release 'out' argument
  GALGAS_ipic_31__38_SequentialInstructionList var_modifiedInstructionList_389 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 14)) ;
  GALGAS_uint var_address_451 = constinArgument_inBlockStartAddress ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_503 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_503.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction var_modifiedInstruction_737 ;
    callExtensionMethod_performInstructionRelativeBranchResolution ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_503.current_mInstruction (HERE).ptr (), var_address_451, inObject.mAttribute_mLabel.mAttribute_string, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedInstruction_737, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 17)) ;
    var_modifiedInstructionList_389.addAssign_operation (var_modifiedInstruction_737, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)) ;
    var_address_451 = var_address_451.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_503.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)) ;
    enumerator_503.gotoNextObject () ;
  }
  GALGAS_ipic_31__38_AbstractBlockTerminator var_modifiedTerminator_1124 ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), var_address_451, inObject.mAttribute_mLabel.mAttribute_string, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedTerminator_1124, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 29)) ;
  outArgument_outModifiedBlock = GALGAS_ipic_31__38_Block::constructor_new (inObject.mAttribute_mAddress, inObject.mAttribute_mLabel, var_modifiedInstructionList_389, var_modifiedTerminator_1124, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 44)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 39)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension Getter '@ipic18Block blockSize'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint extensionGetter_blockSize (const GALGAS_ipic_31__38_Block & inObject,
                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outResult ; // Returned variable
  result_outResult = callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 92)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_2739 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_2739.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_2739.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)) ;
    enumerator_2739.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@ipic18Block relativeBranchOverflow'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_relativeBranchOverflow (const GALGAS_ipic_31__38_Block inObject,
                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                             const GALGAS_string constinArgument_inNextBlockLabel,
                                             const GALGAS_uint constinArgument_inBlockStartAddress,
                                             GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_6210 = constinArgument_inBlockStartAddress ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_6262 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_6262.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_6262.current_mInstruction (HERE).ptr (), var_address_6210, inObject.mAttribute_mLabel.mAttribute_string, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 201)) ;
    var_address_6210 = var_address_6210.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_6262.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)) ;
    enumerator_6262.gotoNextObject () ;
  }
  callExtensionMethod_terminatorRelativeBranchOverflow ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), var_address_6210, inObject.mAttribute_mLabel.mAttribute_string, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 210)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@ipic18Block generateCodeForBlock'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCodeForBlock (const GALGAS_ipic_31__38_Block inObject,
                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataMap,
                                           const GALGAS_uint constinArgument_inBlockAddress,
                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                           GALGAS_string & ioArgument_ioListFileContents,
                                           GALGAS_string & ioArgument_ioAssemblyString,
                                           GALGAS_generatedCodeMap & ioArgument_ioGeneratedCodeMap,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Addr.  Code       Duration    Assembly                                           Intermediate Representation\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 98)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mAttribute_mAddress.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 100)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_codeList temp_1 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
    temp_1.addAssign_operation (inObject.mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 103))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
    GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 104)) ;
    temp_2.addAssign_operation (GALGAS_string ("LABEL ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104)) ;
    routine_generateLineWithCode (constinArgument_inBlockAddress, temp_1, temp_2, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 105)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 101)) ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(inObject.mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 109)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_codeList var_cd_3449 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 111)) ;
    var_cd_3449.addAssign_operation (GALGAS_string ("ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 112))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)) ;
    var_cd_3449.addAssign_operation (inObject.mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 113))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)) ;
    {
    GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 117)) ;
    temp_3.addAssign_operation (GALGAS_string ("LABEL ").add_operation (inObject.mAttribute_mLabel.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)).add_operation (GALGAS_string (", ORG "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)).add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)) ;
    routine_generateLineWithCode (constinArgument_inBlockAddress, var_cd_3449, temp_3, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 118)), GALGAS_uint ((uint32_t) 0U), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 114)) ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(GALGAS_string ("    ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)) ;
    ioArgument_ioAssemblyString.plusAssign_operation(inObject.mAttribute_mLabel.mAttribute_string.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 123)) ;
  }
  GALGAS_uint var_address_3898 = constinArgument_inBlockAddress ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_3944 (inObject.mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_3944.hasCurrentObject ()) {
    GALGAS_codeList var_code_4057 ;
    callExtensionMethod_generateCode ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3944.current_mInstruction (HERE).ptr (), var_address_3898, constinArgument_inSymbolTable, constinArgument_inDataMap, var_code_4057, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 128)) ;
    {
    ioArgument_ioGeneratedCodeMap.setter_insertKey (var_address_3898.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 134)).getter_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 134)), var_code_4057, enumerator_3944.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 134)) ;
    }
    {
    routine_generateLineWithCode (var_address_3898, var_code_4057, callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3944.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 138)), enumerator_3944.current_mMin (HERE), enumerator_3944.current_mMax (HERE), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 135)) ;
    }
    cEnumerator_codeList enumerator_4319 (var_code_4057, kEnumeration_up) ;
    while (enumerator_4319.hasCurrentObject ()) {
      cEnumerator_uintlist enumerator_4350 (enumerator_4319.current_mBinaryCode (HERE), kEnumeration_up) ;
      while (enumerator_4350.hasCurrentObject ()) {
        {
        routine_emitCode (enumerator_4350.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 145)) ;
        }
        enumerator_4350.gotoNextObject () ;
      }
      ioArgument_ioAssemblyString.plusAssign_operation(enumerator_4319.current_mAssemblyCode (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 147)) ;
      enumerator_4319.gotoNextObject () ;
    }
    var_address_3898 = var_address_3898.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3944.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 149)) ;
    GALGAS_uint var_generatedCodeSize_4590 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_codeList enumerator_4613 (var_code_4057, kEnumeration_up) ;
    while (enumerator_4613.hasCurrentObject ()) {
      var_generatedCodeSize_4590 = var_generatedCodeSize_4590.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_4613.current_mBinaryCode (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 153)) ;
      enumerator_4613.gotoNextObject () ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_generatedCodeSize_4590.objectCompare (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3944.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 155)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_4771 = GALGAS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_4590.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 156)).add_operation (GALGAS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_3944.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)) ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 158)), var_s_4771, fixItArray5  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 158)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_s_4771.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 159)) ;
    }
    enumerator_3944.gotoNextObject () ;
  }
  GALGAS_codeList var_code_5135 ;
  callExtensionMethod_generateTerminatorCode ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), var_address_3898, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_code_5135, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 163)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 172)) ;
  temp_6.addAssign_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172)) ;
  routine_generateLineWithCode (var_address_3898, var_code_5135, temp_6, inObject.mAttribute_mTerminatorMin, inObject.mAttribute_mTerminatorMax, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 169)) ;
  }
  cEnumerator_codeList enumerator_5331 (var_code_5135, kEnumeration_up) ;
  while (enumerator_5331.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_5360 (enumerator_5331.current_mBinaryCode (HERE), kEnumeration_up) ;
    while (enumerator_5360.hasCurrentObject ()) {
      {
      routine_emitCode (enumerator_5360.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 179)) ;
      }
      enumerator_5360.gotoNextObject () ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(enumerator_5331.current_mAssemblyCode (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 181)) ;
    enumerator_5331.gotoNextObject () ;
  }
  GALGAS_uint var_generatedCodeSize_5534 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_codeList enumerator_5557 (var_code_5135, kEnumeration_up) ;
  while (enumerator_5557.hasCurrentObject ()) {
    var_generatedCodeSize_5534 = var_generatedCodeSize_5534.add_operation (GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_5557.current_mBinaryCode (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 186)) ;
    enumerator_5557.gotoNextObject () ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_generatedCodeSize_5534.objectCompare (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 188)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_string var_s_5731 = GALGAS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_5534.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 189)).add_operation (GALGAS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) inObject.mAttribute_mTerminator.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)) ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 191)), var_s_5731, fixItArray8  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 191)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_5731.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 192)) ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 195)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@ipic18Block computeDuration'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_computeDuration (const GALGAS_ipic_31__38_Block inObject,
                                      GALGAS_blockDurationMap & ioArgument_ioExploredBlockMap,
                                      GALGAS_string inArgument_inNextLabel,
                                      GALGAS_ipic_31__38_Block & outArgument_outNewBlock,
                                      GALGAS_bool & ioArgument_ioContinue,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNewBlock.drop () ; // Release 'out' argument
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  const GALGAS_ipic_31__38_Block temp_1 = inObject ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, temp_0.mAttribute_mTerminatorMin.objectCompare (temp_1.mAttribute_mTerminatorMax)).boolEnum () ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38_Block temp_3 = inObject ;
    outArgument_outNewBlock = temp_3 ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_terminatorMin_22152 ;
    GALGAS_uint var_terminatorMax_22171 ;
    const GALGAS_ipic_31__38_Block temp_4 = inObject ;
    callExtensionMethod_terminatorMinMaxDuration ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_4.mAttribute_mTerminator.ptr (), ioArgument_ioExploredBlockMap, inArgument_inNextLabel, var_terminatorMin_22152, var_terminatorMax_22171, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 593)) ;
    GALGAS_uint var_min_22184 = var_terminatorMin_22152 ;
    GALGAS_uint var_max_22212 = var_terminatorMax_22171 ;
    GALGAS_ipic_31__38_SequentialInstructionList var_computedInstructionList_22289 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_duration_computations.galgas", 596)) ;
    GALGAS_bool var_ok_22305 = GALGAS_bool (kIsInfOrEqual, var_min_22184.objectCompare (var_max_22212)) ;
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_22360 (inObject.mAttribute_mInstructionList, kEnumeration_down) ;
    while (enumerator_22360.hasCurrentObject ()) {
      GALGAS_uint var_instructionMin_22454 ;
      GALGAS_uint var_instructionMax_22488 ;
      callExtensionMethod_minMaxDuration ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_22360.current_mInstruction (HERE).ptr (), ioArgument_ioExploredBlockMap, var_instructionMin_22454, var_instructionMax_22488, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 599)) ;
      GALGAS_bool test_5 = var_ok_22305 ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = GALGAS_bool (kIsInfOrEqual, var_instructionMin_22454.objectCompare (var_instructionMax_22488)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        var_min_22184 = var_min_22184.add_operation (var_instructionMin_22454, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 605)) ;
        var_max_22212 = var_max_22212.add_operation (var_instructionMax_22488, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 606)) ;
        {
        var_computedInstructionList_22289.setter_insertAtIndex (enumerator_22360.current_mInstruction (HERE), var_min_22184, var_max_22212, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 607)) ;
        }
      }else if (kBoolFalse == test_6) {
        var_ok_22305 = GALGAS_bool (false) ;
        {
        var_computedInstructionList_22289.setter_insertAtIndex (enumerator_22360.current_mInstruction (HERE), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 610)), GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 610)) ;
        }
      }
      enumerator_22360.gotoNextObject () ;
    }
    const enumGalgasBool test_7 = var_ok_22305.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_ipic_31__38_Block temp_8 = inObject ;
      const GALGAS_ipic_31__38_Block temp_9 = inObject ;
      const GALGAS_ipic_31__38_Block temp_10 = inObject ;
      outArgument_outNewBlock = GALGAS_ipic_31__38_Block::constructor_new (temp_8.mAttribute_mAddress, temp_9.mAttribute_mLabel, var_computedInstructionList_22289, temp_10.mAttribute_mTerminator, var_terminatorMin_22152, var_terminatorMax_22171  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 614)) ;
      ioArgument_ioContinue = GALGAS_bool (true) ;
      {
      const GALGAS_ipic_31__38_Block temp_11 = inObject ;
      ioArgument_ioExploredBlockMap.setter_insertKey (temp_11.mAttribute_mLabel, var_min_22184, var_max_22212, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 623)) ;
      }
    }else if (kBoolFalse == test_7) {
      const GALGAS_ipic_31__38_Block temp_12 = inObject ;
      outArgument_outNewBlock = temp_12 ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel::GALGAS_piccoloDeviceModel (void) :
mAttribute_mDeviceName (),
mAttribute_mProcessorType (),
mAttribute_mRomSize (),
mAttribute_mBankCount (),
mAttribute_mRegisterTable (),
mAttribute_mRamBankTable (),
mAttribute_mEepromSize (),
mAttribute_mEepromAddress (),
mAttribute_mConfigRegisterMap (),
mAttribute_mSharedBankName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel::~ GALGAS_piccoloDeviceModel (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel::GALGAS_piccoloDeviceModel (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_processorType & inOperand1,
                                                      const GALGAS_luint & inOperand2,
                                                      const GALGAS_luint & inOperand3,
                                                      const GALGAS_registerTable & inOperand4,
                                                      const GALGAS_ramBankTable & inOperand5,
                                                      const GALGAS_uint & inOperand6,
                                                      const GALGAS_uint & inOperand7,
                                                      const GALGAS_configRegisterMap & inOperand8,
                                                      const GALGAS_string & inOperand9) :
mAttribute_mDeviceName (inOperand0),
mAttribute_mProcessorType (inOperand1),
mAttribute_mRomSize (inOperand2),
mAttribute_mBankCount (inOperand3),
mAttribute_mRegisterTable (inOperand4),
mAttribute_mRamBankTable (inOperand5),
mAttribute_mEepromSize (inOperand6),
mAttribute_mEepromAddress (inOperand7),
mAttribute_mConfigRegisterMap (inOperand8),
mAttribute_mSharedBankName (inOperand9) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel GALGAS_piccoloDeviceModel::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_processorType & inOperand1,
                                                                      const GALGAS_luint & inOperand2,
                                                                      const GALGAS_luint & inOperand3,
                                                                      const GALGAS_registerTable & inOperand4,
                                                                      const GALGAS_ramBankTable & inOperand5,
                                                                      const GALGAS_uint & inOperand6,
                                                                      const GALGAS_uint & inOperand7,
                                                                      const GALGAS_configRegisterMap & inOperand8,
                                                                      const GALGAS_string & inOperand9 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_piccoloDeviceModel result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_piccoloDeviceModel (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_piccoloDeviceModel::objectCompare (const GALGAS_piccoloDeviceModel & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeviceName.objectCompare (inOperand.mAttribute_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcessorType.objectCompare (inOperand.mAttribute_mProcessorType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRomSize.objectCompare (inOperand.mAttribute_mRomSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBankCount.objectCompare (inOperand.mAttribute_mBankCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterTable.objectCompare (inOperand.mAttribute_mRegisterTable) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRamBankTable.objectCompare (inOperand.mAttribute_mRamBankTable) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEepromSize.objectCompare (inOperand.mAttribute_mEepromSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEepromAddress.objectCompare (inOperand.mAttribute_mEepromAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConfigRegisterMap.objectCompare (inOperand.mAttribute_mConfigRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSharedBankName.objectCompare (inOperand.mAttribute_mSharedBankName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_piccoloDeviceModel::isValid (void) const {
  return mAttribute_mDeviceName.isValid () && mAttribute_mProcessorType.isValid () && mAttribute_mRomSize.isValid () && mAttribute_mBankCount.isValid () && mAttribute_mRegisterTable.isValid () && mAttribute_mRamBankTable.isValid () && mAttribute_mEepromSize.isValid () && mAttribute_mEepromAddress.isValid () && mAttribute_mConfigRegisterMap.isValid () && mAttribute_mSharedBankName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_piccoloDeviceModel::drop (void) {
  mAttribute_mDeviceName.drop () ;
  mAttribute_mProcessorType.drop () ;
  mAttribute_mRomSize.drop () ;
  mAttribute_mBankCount.drop () ;
  mAttribute_mRegisterTable.drop () ;
  mAttribute_mRamBankTable.drop () ;
  mAttribute_mEepromSize.drop () ;
  mAttribute_mEepromAddress.drop () ;
  mAttribute_mConfigRegisterMap.drop () ;
  mAttribute_mSharedBankName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_piccoloDeviceModel::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @piccoloDeviceModel:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeviceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcessorType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRomSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBankCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRamBankTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEepromSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEepromAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConfigRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSharedBankName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_piccoloDeviceModel::getter_mDeviceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeviceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_processorType GALGAS_piccoloDeviceModel::getter_mProcessorType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcessorType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_piccoloDeviceModel::getter_mRomSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRomSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_piccoloDeviceModel::getter_mBankCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBankCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerTable GALGAS_piccoloDeviceModel::getter_mRegisterTable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramBankTable GALGAS_piccoloDeviceModel::getter_mRamBankTable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRamBankTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_piccoloDeviceModel::getter_mEepromSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEepromSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_piccoloDeviceModel::getter_mEepromAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEepromAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMap GALGAS_piccoloDeviceModel::getter_mConfigRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConfigRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_piccoloDeviceModel::getter_mSharedBankName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSharedBankName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @piccoloDeviceModel type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_piccoloDeviceModel ("piccoloDeviceModel",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_piccoloDeviceModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_piccoloDeviceModel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_piccoloDeviceModel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_piccoloDeviceModel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_piccoloDeviceModel GALGAS_piccoloDeviceModel::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_piccoloDeviceModel result ;
  const GALGAS_piccoloDeviceModel * p = (const GALGAS_piccoloDeviceModel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_piccoloDeviceModel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("piccoloDeviceModel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_piccoloDevice_grammar [] = {
// At index 0 : <start_symbol>, in file 'piccoloDevice_syntax.ggs', line 10
  TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_controller) // $controller$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_) // ${$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_processor) // $processor$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_romsize) // $romsize$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (1) // <select_piccoloDevice_5F_syntax_0>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_bank) // $bank$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, NONTERMINAL (4) // <select_piccoloDevice_5F_syntax_3>
, NONTERMINAL (7) // <select_piccoloDevice_5F_syntax_6>
, NONTERMINAL (13) // <select_piccoloDevice_5F_syntax_12>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_) // $}$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 19 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 35
, END_PRODUCTION
// At index 20 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 35
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize) // $eepromsize$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 26 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 50
, END_PRODUCTION
// At index 27 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 50
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister) // $unusedregister$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (3) // <select_piccoloDevice_5F_syntax_2>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, END_PRODUCTION
// At index 33 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 54
, END_PRODUCTION
// At index 34 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 54
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, END_PRODUCTION
// At index 37 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 62
, END_PRODUCTION
// At index 38 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 62
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_ram) // $ram$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3A_) // $:$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (5) // <select_piccoloDevice_5F_syntax_4>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (4) // <select_piccoloDevice_5F_syntax_3>
, END_PRODUCTION
// At index 48 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 71
, END_PRODUCTION
// At index 49 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 71
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat) // $mirrorat$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, END_PRODUCTION
// At index 53 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 74
, END_PRODUCTION
// At index 54 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 74
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, END_PRODUCTION
// At index 58 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 91
, END_PRODUCTION
// At index 59 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 91
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_register) // $register$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3C_) // $<$
, NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3E_) // $>$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (7) // <select_piccoloDevice_5F_syntax_6>
, END_PRODUCTION
// At index 71 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 97
, END_PRODUCTION
// At index 72 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 97
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, END_PRODUCTION
// At index 76 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 107
, END_PRODUCTION
// At index 77 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 107
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, END_PRODUCTION
// At index 81 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 108
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, END_PRODUCTION
// At index 85 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 108
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2D_) // $-$
, END_PRODUCTION
// At index 87 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 110
, END_PRODUCTION
// At index 88 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 110
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2F_) // $/$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, END_PRODUCTION
// At index 93 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 113
, END_PRODUCTION
// At index 94 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 113
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 98 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 154
, END_PRODUCTION
// At index 99 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 154
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_configuration) // $configuration$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_width) // $width$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__7B_) // ${$
, NONTERMINAL (15) // <select_piccoloDevice_5F_syntax_14>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__7D_) // $}$
, NONTERMINAL (13) // <select_piccoloDevice_5F_syntax_12>
, END_PRODUCTION
// At index 111 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 163
, END_PRODUCTION
// At index 112 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 163
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_illegal) // $illegal$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_message) // $message$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, END_PRODUCTION
// At index 120 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 176
, END_PRODUCTION
// At index 121 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 176
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_setting) // $setting$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, NONTERMINAL (16) // <select_piccoloDevice_5F_syntax_15>
, NONTERMINAL (15) // <select_piccoloDevice_5F_syntax_14>
, END_PRODUCTION
// At index 135 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 188
, END_PRODUCTION
// At index 136 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 188
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_setting) // $setting$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, NONTERMINAL (16) // <select_piccoloDevice_5F_syntax_15>
, END_PRODUCTION
// At index 144 : <>, in file '.ggs', line 0
, NONTERMINAL (0) // <start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_piccoloDevice_grammar [34] = {
 {"<start_symbol>", "piccoloDevice_syntax", 0}, // at index 0
 {"<select_piccoloDevice_5F_syntax_0>", "piccoloDevice_syntax", 19}, // at index 1
 {"<select_piccoloDevice_5F_syntax_0>", "piccoloDevice_syntax", 20}, // at index 2
 {"<select_piccoloDevice_5F_syntax_1>", "piccoloDevice_syntax", 26}, // at index 3
 {"<select_piccoloDevice_5F_syntax_1>", "piccoloDevice_syntax", 27}, // at index 4
 {"<select_piccoloDevice_5F_syntax_2>", "piccoloDevice_syntax", 33}, // at index 5
 {"<select_piccoloDevice_5F_syntax_2>", "piccoloDevice_syntax", 34}, // at index 6
 {"<select_piccoloDevice_5F_syntax_3>", "piccoloDevice_syntax", 37}, // at index 7
 {"<select_piccoloDevice_5F_syntax_3>", "piccoloDevice_syntax", 38}, // at index 8
 {"<select_piccoloDevice_5F_syntax_4>", "piccoloDevice_syntax", 48}, // at index 9
 {"<select_piccoloDevice_5F_syntax_4>", "piccoloDevice_syntax", 49}, // at index 10
 {"<select_piccoloDevice_5F_syntax_5>", "piccoloDevice_syntax", 53}, // at index 11
 {"<select_piccoloDevice_5F_syntax_5>", "piccoloDevice_syntax", 54}, // at index 12
 {"<select_piccoloDevice_5F_syntax_6>", "piccoloDevice_syntax", 58}, // at index 13
 {"<select_piccoloDevice_5F_syntax_6>", "piccoloDevice_syntax", 59}, // at index 14
 {"<select_piccoloDevice_5F_syntax_7>", "piccoloDevice_syntax", 71}, // at index 15
 {"<select_piccoloDevice_5F_syntax_7>", "piccoloDevice_syntax", 72}, // at index 16
 {"<select_piccoloDevice_5F_syntax_8>", "piccoloDevice_syntax", 76}, // at index 17
 {"<select_piccoloDevice_5F_syntax_8>", "piccoloDevice_syntax", 77}, // at index 18
 {"<select_piccoloDevice_5F_syntax_9>", "piccoloDevice_syntax", 81}, // at index 19
 {"<select_piccoloDevice_5F_syntax_9>", "piccoloDevice_syntax", 85}, // at index 20
 {"<select_piccoloDevice_5F_syntax_10>", "piccoloDevice_syntax", 87}, // at index 21
 {"<select_piccoloDevice_5F_syntax_10>", "piccoloDevice_syntax", 88}, // at index 22
 {"<select_piccoloDevice_5F_syntax_11>", "piccoloDevice_syntax", 93}, // at index 23
 {"<select_piccoloDevice_5F_syntax_11>", "piccoloDevice_syntax", 94}, // at index 24
 {"<select_piccoloDevice_5F_syntax_12>", "piccoloDevice_syntax", 98}, // at index 25
 {"<select_piccoloDevice_5F_syntax_12>", "piccoloDevice_syntax", 99}, // at index 26
 {"<select_piccoloDevice_5F_syntax_13>", "piccoloDevice_syntax", 111}, // at index 27
 {"<select_piccoloDevice_5F_syntax_13>", "piccoloDevice_syntax", 112}, // at index 28
 {"<select_piccoloDevice_5F_syntax_14>", "piccoloDevice_syntax", 120}, // at index 29
 {"<select_piccoloDevice_5F_syntax_14>", "piccoloDevice_syntax", 121}, // at index 30
 {"<select_piccoloDevice_5F_syntax_15>", "piccoloDevice_syntax", 135}, // at index 31
 {"<select_piccoloDevice_5F_syntax_15>", "piccoloDevice_syntax", 136}, // at index 32
 {"<>", "", 144} // at index 33
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_piccoloDevice_grammar [34] = {
0, // index 0 : <start_symbol>, in file 'piccoloDevice_syntax.ggs', line 10
19, // index 1 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 35
20, // index 2 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 35
26, // index 3 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 50
27, // index 4 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 50
33, // index 5 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 54
34, // index 6 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 54
37, // index 7 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 62
38, // index 8 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 62
48, // index 9 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 71
49, // index 10 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 71
53, // index 11 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 74
54, // index 12 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 74
58, // index 13 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 91
59, // index 14 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 91
71, // index 15 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 97
72, // index 16 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 97
76, // index 17 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 107
77, // index 18 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 107
81, // index 19 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 108
85, // index 20 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 108
87, // index 21 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 110
88, // index 22 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 110
93, // index 23 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 113
94, // index 24 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 113
98, // index 25 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 154
99, // index 26 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 154
111, // index 27 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 163
112, // index 28 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 163
120, // index 29 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 176
121, // index 30 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 176
135, // index 31 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 188
136, // index 32 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 188
144 // index 33 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_piccoloDevice_grammar [19] = {
0, // at 0 : <start_symbol>
1, // at 1 : <select_piccoloDevice_5F_syntax_0>
3, // at 2 : <select_piccoloDevice_5F_syntax_1>
5, // at 3 : <select_piccoloDevice_5F_syntax_2>
7, // at 4 : <select_piccoloDevice_5F_syntax_3>
9, // at 5 : <select_piccoloDevice_5F_syntax_4>
11, // at 6 : <select_piccoloDevice_5F_syntax_5>
13, // at 7 : <select_piccoloDevice_5F_syntax_6>
15, // at 8 : <select_piccoloDevice_5F_syntax_7>
17, // at 9 : <select_piccoloDevice_5F_syntax_8>
19, // at 10 : <select_piccoloDevice_5F_syntax_9>
21, // at 11 : <select_piccoloDevice_5F_syntax_10>
23, // at 12 : <select_piccoloDevice_5F_syntax_11>
25, // at 13 : <select_piccoloDevice_5F_syntax_12>
27, // at 14 : <select_piccoloDevice_5F_syntax_13>
29, // at 15 : <select_piccoloDevice_5F_syntax_14>
31, // at 16 : <select_piccoloDevice_5F_syntax_15>
33, // at 17 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_piccoloDevice_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 1 : <select_piccoloDevice_5F_syntax_0>
C_Lexique_piccoloDevice_5F_lexique::kToken_bank, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize, -1, // Choice 2
  -1,
// At index 6 : <select_piccoloDevice_5F_syntax_1>
C_Lexique_piccoloDevice_5F_lexique::kToken_ram, C_Lexique_piccoloDevice_5F_lexique::kToken_register, C_Lexique_piccoloDevice_5F_lexique::kToken_configuration, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister, -1, // Choice 2
  -1,
// At index 14 : <select_piccoloDevice_5F_syntax_2>
C_Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_to, -1, // Choice 2
  -1,
// At index 19 : <select_piccoloDevice_5F_syntax_3>
C_Lexique_piccoloDevice_5F_lexique::kToken_register, C_Lexique_piccoloDevice_5F_lexique::kToken_configuration, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_ram, -1, // Choice 2
  -1,
// At index 26 : <select_piccoloDevice_5F_syntax_4>
C_Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat, -1, // Choice 2
  -1,
// At index 31 : <select_piccoloDevice_5F_syntax_5>
C_Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 36 : <select_piccoloDevice_5F_syntax_6>
C_Lexique_piccoloDevice_5F_lexique::kToken_configuration, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_register, -1, // Choice 2
  -1,
// At index 42 : <select_piccoloDevice_5F_syntax_7>
C_Lexique_piccoloDevice_5F_lexique::kToken__3C_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 47 : <select_piccoloDevice_5F_syntax_8>
C_Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 52 : <select_piccoloDevice_5F_syntax_9>
C_Lexique_piccoloDevice_5F_lexique::kToken_identifier, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2D_, -1, // Choice 2
  -1,
// At index 57 : <select_piccoloDevice_5F_syntax_10>
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, C_Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__2F_, -1, // Choice 2
  -1,
// At index 63 : <select_piccoloDevice_5F_syntax_11>
C_Lexique_piccoloDevice_5F_lexique::kToken__2C_, C_Lexique_piccoloDevice_5F_lexique::kToken__2F_, C_Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken__5B_, -1, // Choice 2
  -1,
// At index 70 : <select_piccoloDevice_5F_syntax_12>
C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_configuration, -1, // Choice 2
  -1,
// At index 75 : <select_piccoloDevice_5F_syntax_13>
C_Lexique_piccoloDevice_5F_lexique::kToken__7B_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_illegal, -1, // Choice 2
  -1,
// At index 80 : <select_piccoloDevice_5F_syntax_14>
C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_identifier, -1, // Choice 2
  -1,
// At index 85 : <select_piccoloDevice_5F_syntax_15>
C_Lexique_piccoloDevice_5F_lexique::kToken_identifier, C_Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
C_Lexique_piccoloDevice_5F_lexique::kToken_setting, -1, // Choice 2
  -1,
// At index 91 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_piccoloDevice_grammar [19] = {
0, // at 0 : <start_symbol>
1, // at 1 : <select_piccoloDevice_5F_syntax_0>
6, // at 2 : <select_piccoloDevice_5F_syntax_1>
14, // at 3 : <select_piccoloDevice_5F_syntax_2>
19, // at 4 : <select_piccoloDevice_5F_syntax_3>
26, // at 5 : <select_piccoloDevice_5F_syntax_4>
31, // at 6 : <select_piccoloDevice_5F_syntax_5>
36, // at 7 : <select_piccoloDevice_5F_syntax_6>
42, // at 8 : <select_piccoloDevice_5F_syntax_7>
47, // at 9 : <select_piccoloDevice_5F_syntax_8>
52, // at 10 : <select_piccoloDevice_5F_syntax_9>
57, // at 11 : <select_piccoloDevice_5F_syntax_10>
63, // at 12 : <select_piccoloDevice_5F_syntax_11>
70, // at 13 : <select_piccoloDevice_5F_syntax_12>
75, // at 14 : <select_piccoloDevice_5F_syntax_13>
80, // at 15 : <select_piccoloDevice_5F_syntax_14>
85, // at 16 : <select_piccoloDevice_5F_syntax_15>
91, // at 17 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'start_symbol' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_parse (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_ (GALGAS_piccoloDeviceModel & parameter_1,
                                C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_(parameter_1, inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_piccoloDevice_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_piccoloDevice_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_piccoloDevice_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_piccoloDeviceModel &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                      gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_piccoloDevice_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_piccoloDeviceModel &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_piccoloDevice_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_0' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_1' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_2' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_3' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_4' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_5' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_6' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_7' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_8' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_piccoloDevice_5F_syntax_9' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_10' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_11' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_12' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_13' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_14' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_piccoloDevice_5F_syntax_15' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element::GALGAS_bitSliceTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSliceIndex (),
mAttribute_mSliceSize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element::~ GALGAS_bitSliceTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element::GALGAS_bitSliceTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1,
                                                                  const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mSliceIndex (inOperand1),
mAttribute_mSliceSize (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bitSliceTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_uint & inOperand1,
                                                                                  const GALGAS_uint & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bitSliceTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_bitSliceTable_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bitSliceTable_2D_element::objectCompare (const GALGAS_bitSliceTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSliceIndex.objectCompare (inOperand.mAttribute_mSliceIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSliceSize.objectCompare (inOperand.mAttribute_mSliceSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bitSliceTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSliceIndex.isValid () && mAttribute_mSliceSize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSliceIndex.drop () ;
  mAttribute_mSliceSize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitSliceTable_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @bitSliceTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSliceIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSliceSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bitSliceTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitSliceTable_2D_element::getter_mSliceIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSliceIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitSliceTable_2D_element::getter_mSliceSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSliceSize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bitSliceTable-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitSliceTable_2D_element ("bitSliceTable-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bitSliceTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bitSliceTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitSliceTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bitSliceTable_2D_element result ;
  const GALGAS_bitSliceTable_2D_element * p = (const GALGAS_bitSliceTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitSliceTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element::GALGAS_ramDefinitionList_2D_element (void) :
mAttribute_mBankName (),
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element::~ GALGAS_ramDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element::GALGAS_ramDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_declarationInRamList & inOperand1) :
mAttribute_mBankName (inOperand0),
mAttribute_mDeclaration (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ramDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_declarationInRamList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_declarationInRamList & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ramDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ramDefinitionList_2D_element::objectCompare (const GALGAS_ramDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBankName.objectCompare (inOperand.mAttribute_mBankName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ramDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mBankName.isValid () && mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList_2D_element::drop (void) {
  mAttribute_mBankName.drop () ;
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ramDefinitionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @ramDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBankName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_ramDefinitionList_2D_element::getter_mBankName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBankName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_declarationInRamList GALGAS_ramDefinitionList_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @ramDefinitionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ("ramDefinitionList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ramDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ramDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ramDefinitionList_2D_element result ;
  const GALGAS_ramDefinitionList_2D_element * p = (const GALGAS_ramDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ramDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element::GALGAS_configSettingList_2D_element (void) :
mAttribute_mSettingName (),
mAttribute_mSettingValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element::~ GALGAS_configSettingList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element::GALGAS_configSettingList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mAttribute_mSettingName (inOperand0),
mAttribute_mSettingValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configSettingList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configSettingList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_configSettingList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configSettingList_2D_element::objectCompare (const GALGAS_configSettingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSettingName.objectCompare (inOperand.mAttribute_mSettingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSettingValue.objectCompare (inOperand.mAttribute_mSettingValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_configSettingList_2D_element::isValid (void) const {
  return mAttribute_mSettingName.isValid () && mAttribute_mSettingValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList_2D_element::drop (void) {
  mAttribute_mSettingName.drop () ;
  mAttribute_mSettingValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configSettingList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @configSettingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSettingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSettingValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configSettingList_2D_element::getter_mSettingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSettingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configSettingList_2D_element::getter_mSettingValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSettingValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @configSettingList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configSettingList_2D_element ("configSettingList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configSettingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configSettingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configSettingList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configSettingList_2D_element result ;
  const GALGAS_configSettingList_2D_element * p = (const GALGAS_configSettingList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configSettingList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element::GALGAS_immediatSliceExpressionList_2D_element (void) :
mAttribute_mSliceName (),
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element::~ GALGAS_immediatSliceExpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element::GALGAS_immediatSliceExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_immediatExpression & inOperand1) :
mAttribute_mSliceName (inOperand0),
mAttribute_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element GALGAS_immediatSliceExpressionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_immediatExpression & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_immediatSliceExpressionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_immediatSliceExpressionList_2D_element::objectCompare (const GALGAS_immediatSliceExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSliceName.objectCompare (inOperand.mAttribute_mSliceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_immediatSliceExpressionList_2D_element::isValid (void) const {
  return mAttribute_mSliceName.isValid () && mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList_2D_element::drop (void) {
  mAttribute_mSliceName.drop () ;
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_immediatSliceExpressionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @immediatSliceExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSliceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_immediatSliceExpressionList_2D_element::getter_mSliceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSliceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_immediatSliceExpressionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @immediatSliceExpressionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ("immediatSliceExpressionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatSliceExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatSliceExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSliceExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatSliceExpressionList_2D_element GALGAS_immediatSliceExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList_2D_element result ;
  const GALGAS_immediatSliceExpressionList_2D_element * p = (const GALGAS_immediatSliceExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatSliceExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element::GALGAS_constantDefinitionList_2D_element (void) :
mAttribute_mConstantName (),
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element::~ GALGAS_constantDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element::GALGAS_constantDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_immediatExpression & inOperand1) :
mAttribute_mConstantName (inOperand0),
mAttribute_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element GALGAS_constantDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_immediatExpression & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constantDefinitionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constantDefinitionList_2D_element::objectCompare (const GALGAS_constantDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantName.objectCompare (inOperand.mAttribute_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constantDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mConstantName.isValid () && mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList_2D_element::drop (void) {
  mAttribute_mConstantName.drop () ;
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantDefinitionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @constantDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantDefinitionList_2D_element::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_constantDefinitionList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @constantDefinitionList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ("constantDefinitionList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantDefinitionList_2D_element GALGAS_constantDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constantDefinitionList_2D_element result ;
  const GALGAS_constantDefinitionList_2D_element * p = (const GALGAS_constantDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element::GALGAS_actualConfigurationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterAddress (),
mAttribute_mRegisterValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element::~ GALGAS_actualConfigurationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element::GALGAS_actualConfigurationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uint & inOperand1,
                                                                                    const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterAddress (inOperand1),
mAttribute_mRegisterValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualConfigurationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_uint::constructor_default (HERE),
                                                   GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                    const GALGAS_uint & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actualConfigurationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actualConfigurationMap_2D_element::objectCompare (const GALGAS_actualConfigurationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterValue.objectCompare (inOperand.mAttribute_mRegisterValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actualConfigurationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterAddress.isValid () && mAttribute_mRegisterValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterAddress.drop () ;
  mAttribute_mRegisterValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualConfigurationMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @actualConfigurationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_actualConfigurationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_actualConfigurationMap_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_actualConfigurationMap_2D_element::getter_mRegisterValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @actualConfigurationMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ("actualConfigurationMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualConfigurationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualConfigurationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualConfigurationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap_2D_element result ;
  const GALGAS_actualConfigurationMap_2D_element * p = (const GALGAS_actualConfigurationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualConfigurationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::~ GALGAS_labelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_labelMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_labelMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_labelMap_2D_element::objectCompare (const GALGAS_labelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_labelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @labelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_labelMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @labelMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap_2D_element ("labelMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_labelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_labelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  const GALGAS_labelMap_2D_element * p = (const GALGAS_labelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_labelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element::~ GALGAS_constantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_sint_36__34_ & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_sint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_sint_36__34_ & inOperand1 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constantMap_2D_element::objectCompare (const GALGAS_constantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @constantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_constantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @constantMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantMap_2D_element ("constantMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  const GALGAS_constantMap_2D_element * p = (const GALGAS_constantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsNoReturn (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::~ GALGAS_routineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_uint & inOperand2,
                                                            const GALGAS_uint & inOperand3,
                                                            const GALGAS_bool & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mIsNoReturn (inOperand1),
mAttribute_mRequiredBank (inOperand2),
mAttribute_mReturnedBank (inOperand3),
mAttribute_mPreservesBank (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE),
                                       GALGAS_uint::constructor_default (HERE),
                                       GALGAS_uint::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_uint & inOperand2,
                                                                            const GALGAS_uint & inOperand3,
                                                                            const GALGAS_bool & inOperand4 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_routineMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMap_2D_element::objectCompare (const GALGAS_routineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @routineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreservesBank.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineMap_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineMap_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @routineMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap_2D_element ("routineMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  const GALGAS_routineMap_2D_element * p = (const GALGAS_routineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element::GALGAS_symbolTableForOptimizations_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDefinitionLineIndex (),
mAttribute_mIsDeletable () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element::~ GALGAS_symbolTableForOptimizations_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element::GALGAS_symbolTableForOptimizations_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_uint & inOperand1,
                                                                                              const GALGAS_bool & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mDefinitionLineIndex (inOperand1),
mAttribute_mIsDeletable (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForOptimizations_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_uint::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1,
                                                                                                              const GALGAS_bool & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_symbolTableForOptimizations_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_symbolTableForOptimizations_2D_element::objectCompare (const GALGAS_symbolTableForOptimizations_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefinitionLineIndex.objectCompare (inOperand.mAttribute_mDefinitionLineIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsDeletable.objectCompare (inOperand.mAttribute_mIsDeletable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_symbolTableForOptimizations_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDefinitionLineIndex.isValid () && mAttribute_mIsDeletable.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDefinitionLineIndex.drop () ;
  mAttribute_mIsDeletable.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_symbolTableForOptimizations_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForOptimizations-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsDeletable.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_symbolTableForOptimizations_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForOptimizations_2D_element::getter_mDefinitionLineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinitionLineIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_symbolTableForOptimizations_2D_element::getter_mIsDeletable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsDeletable ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @symbolTableForOptimizations-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ("symbolTableForOptimizations-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_symbolTableForOptimizations_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_symbolTableForOptimizations_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForOptimizations_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations_2D_element result ;
  const GALGAS_symbolTableForOptimizations_2D_element * p = (const GALGAS_symbolTableForOptimizations_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_symbolTableForOptimizations_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element::GALGAS_configFieldMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRegisterName (),
mAttribute_mMaskValue (),
mAttribute_mDescription (),
mAttribute_mFieldSettingMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element::~ GALGAS_configFieldMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element::GALGAS_configFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_luint & inOperand2,
                                                                    const GALGAS_lstring & inOperand3,
                                                                    const GALGAS_fieldSettingMap & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mRegisterName (inOperand1),
mAttribute_mMaskValue (inOperand2),
mAttribute_mDescription (inOperand3),
mAttribute_mFieldSettingMap (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configFieldMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_luint::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_fieldSettingMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_luint & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3,
                                                                                    const GALGAS_fieldSettingMap & inOperand4 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configFieldMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_configFieldMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_configFieldMap_2D_element::objectCompare (const GALGAS_configFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterName.objectCompare (inOperand.mAttribute_mRegisterName) ;
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

bool GALGAS_configFieldMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegisterName.isValid () && mAttribute_mMaskValue.isValid () && mAttribute_mDescription.isValid () && mAttribute_mFieldSettingMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRegisterName.drop () ;
  mAttribute_mMaskValue.drop () ;
  mAttribute_mDescription.drop () ;
  mAttribute_mFieldSettingMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_configFieldMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @configFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_configFieldMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configFieldMap_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configFieldMap_2D_element::getter_mMaskValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaskValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configFieldMap_2D_element::getter_mDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_configFieldMap_2D_element::getter_mFieldSettingMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldSettingMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @configFieldMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configFieldMap_2D_element ("configFieldMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_configFieldMap_2D_element result ;
  const GALGAS_configFieldMap_2D_element * p = (const GALGAS_configFieldMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element::GALGAS_baseline_5F_routineDefinitionList_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mPage (),
mAttribute_mIsNoReturn (),
mAttribute_mInstructionList (),
mAttribute_mEndOfRoutineLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element::~ GALGAS_baseline_5F_routineDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element::GALGAS_baseline_5F_routineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                          const GALGAS_bool & inOperand2,
                                                                                                          const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                                          const GALGAS_location & inOperand4) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mPage (inOperand1),
mAttribute_mIsNoReturn (inOperand2),
mAttribute_mInstructionList (inOperand3),
mAttribute_mEndOfRoutineLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_routineDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_baseline_5F_instructionList::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                                          const GALGAS_bool & inOperand2,
                                                                                                                          const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                                                          const GALGAS_location & inOperand4 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_baseline_5F_routineDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_routineDefinitionList_2D_element::objectCompare (const GALGAS_baseline_5F_routineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPage.objectCompare (inOperand.mAttribute_mPage) ;
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

bool GALGAS_baseline_5F_routineDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mPage.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfRoutineLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mPage.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfRoutineLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_routineDefinitionList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @baseline_routineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPage.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instructionList GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_baseline_5F_routineDefinitionList_2D_element::getter_mEndOfRoutineLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRoutineLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_routineDefinitionList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ("baseline_routineDefinitionList-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_routineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_routineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_routineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList_2D_element result ;
  const GALGAS_baseline_5F_routineDefinitionList_2D_element * p = (const GALGAS_baseline_5F_routineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_routineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element::GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element::~ GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element::GALGAS_baseline_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_baseline_5F_declaredRoutineMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_declaredRoutineMap_2D_element::objectCompare (const GALGAS_baseline_5F_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baseline_5F_declaredRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @baseline_declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baseline_5F_declaredRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_declaredRoutineMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ("baseline_declaredRoutineMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap_2D_element result ;
  const GALGAS_baseline_5F_declaredRoutineMap_2D_element * p = (const GALGAS_baseline_5F_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element::GALGAS_baselineRoutineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsNoReturn (),
mAttribute_mPage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element::~ GALGAS_baselineRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element::GALGAS_baselineRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_luint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mIsNoReturn (inOperand1),
mAttribute_mPage (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baselineRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_luint & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_baselineRoutineMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baselineRoutineMap_2D_element::objectCompare (const GALGAS_baselineRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsNoReturn.objectCompare (inOperand.mAttribute_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPage.objectCompare (inOperand.mAttribute_mPage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baselineRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mPage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mPage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineRoutineMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @baselineRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baselineRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baselineRoutineMap_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_baselineRoutineMap_2D_element::getter_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baselineRoutineMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ("baselineRoutineMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baselineRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baselineRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap_2D_element result ;
  const GALGAS_baselineRoutineMap_2D_element * p = (const GALGAS_baselineRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baselineRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element::GALGAS_baselineSymbolTableForOptimizations_2D_element (void) :
mAttribute_lkey (),
mAttribute_mDefinitionLineIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element::~ GALGAS_baselineSymbolTableForOptimizations_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element::GALGAS_baselineSymbolTableForOptimizations_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mDefinitionLineIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baselineSymbolTableForOptimizations_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_uint & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_baselineSymbolTableForOptimizations_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baselineSymbolTableForOptimizations_2D_element::objectCompare (const GALGAS_baselineSymbolTableForOptimizations_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefinitionLineIndex.objectCompare (inOperand.mAttribute_mDefinitionLineIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_baselineSymbolTableForOptimizations_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mDefinitionLineIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mDefinitionLineIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baselineSymbolTableForOptimizations_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @baselineSymbolTableForOptimizations-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_baselineSymbolTableForOptimizations_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baselineSymbolTableForOptimizations_2D_element::getter_mDefinitionLineIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinitionLineIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baselineSymbolTableForOptimizations-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ("baselineSymbolTableForOptimizations-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baselineSymbolTableForOptimizations_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baselineSymbolTableForOptimizations_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineSymbolTableForOptimizations_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations_2D_element result ;
  const GALGAS_baselineSymbolTableForOptimizations_2D_element * p = (const GALGAS_baselineSymbolTableForOptimizations_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baselineSymbolTableForOptimizations_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element::GALGAS_baseline_5F_symbolTable_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element::~ GALGAS_baseline_5F_symbolTable_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element::GALGAS_baseline_5F_symbolTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_symbolTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_baseline_5F_symbolTable_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_baseline_5F_symbolTable_2D_element::objectCompare (const GALGAS_baseline_5F_symbolTable_2D_element & inOperand) const {
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

bool GALGAS_baseline_5F_symbolTable_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_symbolTable_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_baseline_5F_symbolTable_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @baseline_symbolTable-element:" ;
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

GALGAS_lstring GALGAS_baseline_5F_symbolTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_baseline_5F_symbolTable_2D_element::getter_mRoutineAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_symbolTable-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ("baseline_symbolTable-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_symbolTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_symbolTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_symbolTable_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable_2D_element result ;
  const GALGAS_baseline_5F_symbolTable_2D_element * p = (const GALGAS_baseline_5F_symbolTable_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_symbolTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element::GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) :
mAttribute_mInterruptLocation (),
mAttribute_mInstructionList (),
mAttribute_mFirstSaveRegister (),
mAttribute_mSecondSaveRegister (),
mAttribute_mEndOfInterruptLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element::~ GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element::GALGAS_midrange_5F_interruptDefinitionList_2D_element (const GALGAS_location & inOperand0,
                                                                                                              const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_lstring & inOperand3,
                                                                                                              const GALGAS_location & inOperand4) :
mAttribute_mInterruptLocation (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mFirstSaveRegister (inOperand2),
mAttribute_mSecondSaveRegister (inOperand3),
mAttribute_mEndOfInterruptLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_interruptDefinitionList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_midrange_5F_instructionList::constructor_emptyList (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                                                                              const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                                              const GALGAS_lstring & inOperand3,
                                                                                                                              const GALGAS_location & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_midrange_5F_interruptDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_interruptDefinitionList_2D_element::objectCompare (const GALGAS_midrange_5F_interruptDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInterruptLocation.objectCompare (inOperand.mAttribute_mInterruptLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFirstSaveRegister.objectCompare (inOperand.mAttribute_mFirstSaveRegister) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSecondSaveRegister.objectCompare (inOperand.mAttribute_mSecondSaveRegister) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInterruptLocation.objectCompare (inOperand.mAttribute_mEndOfInterruptLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_midrange_5F_interruptDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mInterruptLocation.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mFirstSaveRegister.isValid () && mAttribute_mSecondSaveRegister.isValid () && mAttribute_mEndOfInterruptLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::drop (void) {
  mAttribute_mInterruptLocation.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mFirstSaveRegister.drop () ;
  mAttribute_mSecondSaveRegister.drop () ;
  mAttribute_mEndOfInterruptLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @midrange_interruptDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInterruptLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFirstSaveRegister.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSecondSaveRegister.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mInterruptLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mFirstSaveRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstSaveRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mSecondSaveRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSecondSaveRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_interruptDefinitionList_2D_element::getter_mEndOfInterruptLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInterruptLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_interruptDefinitionList-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ("midrange_interruptDefinitionList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_interruptDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_interruptDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_interruptDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList_2D_element result ;
  const GALGAS_midrange_5F_interruptDefinitionList_2D_element * p = (const GALGAS_midrange_5F_interruptDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_interruptDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_interruptDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element::GALGAS_midrange_5F_routineDefinitionList_2D_element (void) :
mAttribute_mRoutineName (),
mAttribute_mPage (),
mAttribute_mRequiredBank (),
mAttribute_mReturnedBank (),
mAttribute_mPreservesBank (),
mAttribute_mIsNoReturn (),
mAttribute_mInstructionList (),
mAttribute_mEndOfRoutineLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element::~ GALGAS_midrange_5F_routineDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element::GALGAS_midrange_5F_routineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                          const GALGAS_luint & inOperand2,
                                                                                                          const GALGAS_luint & inOperand3,
                                                                                                          const GALGAS_bool & inOperand4,
                                                                                                          const GALGAS_bool & inOperand5,
                                                                                                          const GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                                          const GALGAS_location & inOperand7) :
mAttribute_mRoutineName (inOperand0),
mAttribute_mPage (inOperand1),
mAttribute_mRequiredBank (inOperand2),
mAttribute_mReturnedBank (inOperand3),
mAttribute_mPreservesBank (inOperand4),
mAttribute_mIsNoReturn (inOperand5),
mAttribute_mInstructionList (inOperand6),
mAttribute_mEndOfRoutineLocation (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_routineDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_midrange_5F_instructionList::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                                          const GALGAS_luint & inOperand2,
                                                                                                                          const GALGAS_luint & inOperand3,
                                                                                                                          const GALGAS_bool & inOperand4,
                                                                                                                          const GALGAS_bool & inOperand5,
                                                                                                                          const GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                                                          const GALGAS_location & inOperand7 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_midrange_5F_routineDefinitionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_routineDefinitionList_2D_element::objectCompare (const GALGAS_midrange_5F_routineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPage.objectCompare (inOperand.mAttribute_mPage) ;
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

bool GALGAS_midrange_5F_routineDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mRoutineName.isValid () && mAttribute_mPage.isValid () && mAttribute_mRequiredBank.isValid () && mAttribute_mReturnedBank.isValid () && mAttribute_mPreservesBank.isValid () && mAttribute_mIsNoReturn.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfRoutineLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_routineDefinitionList_2D_element::drop (void) {
  mAttribute_mRoutineName.drop () ;
  mAttribute_mPage.drop () ;
  mAttribute_mRequiredBank.drop () ;
  mAttribute_mReturnedBank.drop () ;
  mAttribute_mPreservesBank.drop () ;
  mAttribute_mIsNoReturn.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfRoutineLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_routineDefinitionList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @midrange_routineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPage.description (ioString, inIndentation+1) ;
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

GALGAS_lstring GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mPage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_routineDefinitionList_2D_element::getter_mEndOfRoutineLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRoutineLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @midrange_routineDefinitionList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ("midrange_routineDefinitionList-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_routineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_routineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_routineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList_2D_element result ;
  const GALGAS_midrange_5F_routineDefinitionList_2D_element * p = (const GALGAS_midrange_5F_routineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_routineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_routineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineAddress () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::~ GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineAddress (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                                  const GALGAS_uint & inOperand1 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::objectCompare (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element & inOperand) const {
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

bool GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineAddress.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @midrange_symbolTableForConvertingRelatives-element:" ;
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

GALGAS_lstring GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::getter_mRoutineAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @midrange_symbolTableForConvertingRelatives-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ("midrange_symbolTableForConvertingRelatives-element",
                                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element result ;
  const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element * p = (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

GALGAS_lstring GALGAS_midrange_5F_symbolTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_midrange_5F_symbolTable_2D_element::getter_mRoutineAddress (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_midrange_5F_declaredRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_bootloaderReservedRAMmap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_bootloaderReservedRAMmap_2D_element::getter_mReservedSize (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::getter_mBlockName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::getter_mBlockTerminaisonForBlockInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockTerminaisonForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::getter_mEndOfBlock (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_pic_31__38_InterruptDefinitionList_2D_element::getter_mInterruptName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_InterruptDefinitionList_2D_element::getter_mFastReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFastReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_InterruptDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_InterruptDefinitionList_2D_element::getter_mEndOfInterruptLocation (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_pic_31__38_RoutineDefinitionList_2D_element::getter_mEndOfRoutineLocation (UNUSED_LOCATION_ARGS) const {
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

GALGAS_pic_31__38_MacroDefinitionList_2D_element::GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) :
mAttribute_mMacroName (),
mAttribute_mConstantNameList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element::~ GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element::GALGAS_pic_31__38_MacroDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstringlist & inOperand1,
                                                                                                    const GALGAS_pic_31__38_InstructionList & inOperand2) :
mAttribute_mMacroName (inOperand0),
mAttribute_mConstantNameList (inOperand1),
mAttribute_mInstructionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_MacroDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                                           GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_lstringlist & inOperand1,
                                                                                                                    const GALGAS_pic_31__38_InstructionList & inOperand2 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_MacroDefinitionList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_MacroDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMacroName.objectCompare (inOperand.mAttribute_mMacroName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantNameList.objectCompare (inOperand.mAttribute_mConstantNameList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_MacroDefinitionList_2D_element::isValid (void) const {
  return mAttribute_mMacroName.isValid () && mAttribute_mConstantNameList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::drop (void) {
  mAttribute_mMacroName.drop () ;
  mAttribute_mConstantNameList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @pic18MacroDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMacroName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_MacroDefinitionList_2D_element::getter_mMacroName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMacroName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_MacroDefinitionList_2D_element::getter_mConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_MacroDefinitionList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic18MacroDefinitionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ("pic18MacroDefinitionList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_MacroDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_MacroDefinitionList_2D_element * p = (const GALGAS_pic_31__38_MacroDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_MacroDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element::GALGAS_pic_31__38_MacroMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mConstantNameList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element::~ GALGAS_pic_31__38_MacroMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element::GALGAS_pic_31__38_MacroMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstringlist & inOperand1,
                                                                              const GALGAS_pic_31__38_InstructionList & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mConstantNameList (inOperand1),
mAttribute_mInstructionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_MacroMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                              const GALGAS_pic_31__38_InstructionList & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_MacroMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_pic_31__38_MacroMap_2D_element::objectCompare (const GALGAS_pic_31__38_MacroMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstantNameList.objectCompare (inOperand.mAttribute_mConstantNameList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38_MacroMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mConstantNameList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_MacroMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mConstantNameList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38_MacroMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @pic18MacroMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38_MacroMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_pic_31__38_MacroMap_2D_element::getter_mConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_MacroMap_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18MacroMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ("pic18MacroMap-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pic_31__38_MacroMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap_2D_element result ;
  const GALGAS_pic_31__38_MacroMap_2D_element * p = (const GALGAS_pic_31__38_MacroMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pic_31__38_MacroMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_routineDeclarationList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_routineDeclarationList_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_routineDeclarationList_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDeclarationList_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDeclarationList_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
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
mAttribute_mValueList (),
mAttribute_mIsByteList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element::~ GALGAS_dataList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_immediatExpressionList & inOperand1,
                                                        const GALGAS_bool & inOperand2) :
mAttribute_mDataName (inOperand0),
mAttribute_mValueList (inOperand1),
mAttribute_mIsByteList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_dataList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_immediatExpressionList::constructor_emptyList (HERE),
                                     GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_immediatExpressionList & inOperand1,
                                                                        const GALGAS_bool & inOperand2 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_dataList_2D_element (inOperand0, inOperand1, inOperand2) ;
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
  if (result == kOperandEqual) {
    result = mAttribute_mIsByteList.objectCompare (inOperand.mAttribute_mIsByteList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_dataList_2D_element::isValid (void) const {
  return mAttribute_mDataName.isValid () && mAttribute_mValueList.isValid () && mAttribute_mIsByteList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_dataList_2D_element::drop (void) {
  mAttribute_mDataName.drop () ;
  mAttribute_mValueList.drop () ;
  mAttribute_mIsByteList.drop () ;
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
    ioString << ", " ;
    mAttribute_mIsByteList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_dataList_2D_element::getter_mDataName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDataName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpressionList GALGAS_dataList_2D_element::getter_mValueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_dataList_2D_element::getter_mIsByteList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsByteList ;
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

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mData (),
mAttribute_mIsData_38_ () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element::~ GALGAS_pic_31__38__5F_dataMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uintlist & inOperand1,
                                                                                    const GALGAS_bool & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mData (inOperand1),
mAttribute_mIsData_38_ (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38__5F_dataMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_uintlist::constructor_emptyList (HERE),
                                                   GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_uintlist & inOperand1,
                                                                                                    const GALGAS_bool & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38__5F_dataMap_2D_element (inOperand0, inOperand1, inOperand2) ;
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
  if (result == kOperandEqual) {
    result = mAttribute_mIsData_38_.objectCompare (inOperand.mAttribute_mIsData_38_) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_pic_31__38__5F_dataMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mData.isValid () && mAttribute_mIsData_38_.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_pic_31__38__5F_dataMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mData.drop () ;
  mAttribute_mIsData_38_.drop () ;
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
    ioString << ", " ;
    mAttribute_mIsData_38_.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_pic_31__38__5F_dataMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_pic_31__38__5F_dataMap_2D_element::getter_mData (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mData ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_pic_31__38__5F_dataMap_2D_element::getter_mIsData_38_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsData_38_ ;
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

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_BlockList_2D_element::getter_mBlock (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_symbolTableForBlockOptimization_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForBlockOptimization_2D_element::getter_mDefinitionBlockIndex (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_symbolTableForClusterOrdering_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForClusterOrdering_2D_element::getter_mCluster (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_symbolTableForRelativesResolution_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_symbolTableForRelativesResolution_2D_element::getter_mLabelAddress (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_pic_31__38__5F_dataAddressMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_pic_31__38__5F_dataAddressMap_2D_element::getter_mDataAddress (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_declaredRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_declaredRoutineMap_2D_element::getter_mRequiredBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_declaredRoutineMap_2D_element::getter_mReturnedBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnedBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_declaredRoutineMap_2D_element::getter_mPreservesBank (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreservesBank ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_declaredRoutineMap_2D_element::getter_mIsNoReturn (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsNoReturn ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_declaredRoutineMap_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_caseConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_blockInstructionBlockMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pic_31__38_InstructionList GALGAS_blockInstructionBlockMap_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBlockTerminationForBlockInstruction GALGAS_blockInstructionBlockMap_2D_element::getter_mBlockTerminaisonForBlockInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockTerminaisonForBlockInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_blockInstructionBlockMap_2D_element::getter_mEndOfBlock (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_blockInitialBankSelectionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_blockInitialBankSelectionMap_2D_element::getter_mInitialBankSelection (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialBankSelection ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_blockInitialBankSelectionMap_2D_element::getter_mSourceBlock (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_neededConversionForClusterOrder_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_neededConversionForClusterOrder_2D_element::getter_mConversions (UNUSED_LOCATION_ARGS) const {
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

GALGAS_generatedCodeMap_2D_element::GALGAS_generatedCodeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mCode (),
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element::~ GALGAS_generatedCodeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element::GALGAS_generatedCodeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_codeList & inOperand1,
                                                                        const GALGAS_ipic_31__38_SequentialInstruction & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mCode (inOperand1),
mAttribute_mInstruction (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element GALGAS_generatedCodeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_codeList & inOperand1,
                                                                                        const GALGAS_ipic_31__38_SequentialInstruction & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generatedCodeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_generatedCodeMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_generatedCodeMap_2D_element::objectCompare (const GALGAS_generatedCodeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCode.objectCompare (inOperand.mAttribute_mCode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_generatedCodeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCode.isValid () && mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generatedCodeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCode.drop () ;
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_generatedCodeMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @generatedCodeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_generatedCodeMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_codeList GALGAS_generatedCodeMap_2D_element::getter_mCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_SequentialInstruction GALGAS_generatedCodeMap_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @generatedCodeMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ("generatedCodeMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_generatedCodeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_generatedCodeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generatedCodeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_generatedCodeMap_2D_element GALGAS_generatedCodeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_generatedCodeMap_2D_element result ;
  const GALGAS_generatedCodeMap_2D_element * p = (const GALGAS_generatedCodeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generatedCodeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_blockMapForStackComputation_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ipic_31__38_Block GALGAS_blockMapForStackComputation_2D_element::getter_mBlock (UNUSED_LOCATION_ARGS) const {
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
mAttribute_mCalledRoutineSet (),
mAttribute_mTerminatorStackNeeds () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element::~ GALGAS_routineCallMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_stringset & inOperand1,
                                                                    const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mCalledRoutineSet (inOperand1),
mAttribute_mTerminatorStackNeeds (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineCallMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_stringset::constructor_emptySet (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1,
                                                                                    const GALGAS_uint & inOperand2 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineCallMap_2D_element (inOperand0, inOperand1, inOperand2) ;
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
  if (result == kOperandEqual) {
    result = mAttribute_mTerminatorStackNeeds.objectCompare (inOperand.mAttribute_mTerminatorStackNeeds) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineCallMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCalledRoutineSet.isValid () && mAttribute_mTerminatorStackNeeds.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineCallMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mCalledRoutineSet.drop () ;
  mAttribute_mTerminatorStackNeeds.drop () ;
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
    ioString << ", " ;
    mAttribute_mTerminatorStackNeeds.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineCallMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_routineCallMap_2D_element::getter_mCalledRoutineSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCalledRoutineSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineCallMap_2D_element::getter_mTerminatorStackNeeds (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminatorStackNeeds ;
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

GALGAS_lstring GALGAS_routineStackRequirementMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_routineStackRequirementMap_2D_element::getter_mLevels (UNUSED_LOCATION_ARGS) const {
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

GALGAS_blockDurationMap_2D_element::GALGAS_blockDurationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mMinDuration (),
mAttribute_mMaxDuration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element::~ GALGAS_blockDurationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element::GALGAS_blockDurationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mMinDuration (inOperand1),
mAttribute_mMaxDuration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_blockDurationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_uint & inOperand1,
                                                                                        const GALGAS_uint & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockDurationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_blockDurationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_blockDurationMap_2D_element::objectCompare (const GALGAS_blockDurationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMinDuration.objectCompare (inOperand.mAttribute_mMinDuration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMaxDuration.objectCompare (inOperand.mAttribute_mMaxDuration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_blockDurationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mMinDuration.isValid () && mAttribute_mMaxDuration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockDurationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mMinDuration.drop () ;
  mAttribute_mMaxDuration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_blockDurationMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @blockDurationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMinDuration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMaxDuration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_blockDurationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_blockDurationMap_2D_element::getter_mMinDuration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMinDuration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_blockDurationMap_2D_element::getter_mMaxDuration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaxDuration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @blockDurationMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockDurationMap_2D_element ("blockDurationMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_blockDurationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_blockDurationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockDurationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_blockDurationMap_2D_element result ;
  const GALGAS_blockDurationMap_2D_element * p = (const GALGAS_blockDurationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_blockDurationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_declaredByteMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_registerTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_registerTable_2D_element::getter_mRegisterAddressList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddressList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_registerTable_2D_element::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitSliceTable GALGAS_registerTable_2D_element::getter_mBitSliceTable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitSliceTable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_registerTable_2D_element::getter_mBitDefinitionString (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_ramBankTable_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::getter_mFirstAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::getter_mFirstFreeAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFirstFreeAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ramBankTable_2D_element::getter_mLastAddressPlusOne (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLastAddressPlusOne ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_ramBankTable_2D_element::getter_mMirrorOffsetList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_luint GALGAS_illegalMaskList_2D_element::getter_mIllegalValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIllegalValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_illegalMaskList_2D_element::getter_mIllegalMask (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIllegalMask ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_illegalMaskList_2D_element::getter_mDescription (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_fieldSettingMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_fieldSettingMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_fieldSettingMap_2D_element::getter_mMask (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_configRegisterMaskMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMaskMap_2D_element::getter_mMaskValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaskValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configRegisterMaskMap_2D_element::getter_mDescription (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fieldSettingMap GALGAS_configRegisterMaskMap_2D_element::getter_mFieldSettingMap (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_configRegisterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMap_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_configRegisterMap_2D_element::getter_mRegisterWidth (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterWidth ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configRegisterMaskMap GALGAS_configRegisterMap_2D_element::getter_mConfigRegisterMaskMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConfigRegisterMaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_illegalMaskList GALGAS_configRegisterMap_2D_element::getter_mIllegalMaskList (UNUSED_LOCATION_ARGS) const {
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
//   Object comparison                                                                                                 *
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
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfOffsetExpression.objectCompare (p->mAttribute_mEndOfOffsetExpression) ;
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

GALGAS_registerExpression::GALGAS_registerExpression (const cPtr_registerExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_registerExpression::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                                      const GALGAS_immediatExpression & inAttribute_mOffset,
                                                                      const GALGAS_location & inAttribute_mEndOfOffsetExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerExpression result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mOffset.isValid () && inAttribute_mEndOfOffsetExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerExpression (inAttribute_mRegisterName, inAttribute_mOffset, inAttribute_mEndOfOffsetExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerExpression::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerExpression * p = (const cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerExpression::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression GALGAS_registerExpression::getter_mOffset (UNUSED_LOCATION_ARGS) const {
  GALGAS_immediatExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerExpression * p = (const cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    result = p->mAttribute_mOffset ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatExpression cPtr_registerExpression::getter_mOffset (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOffset ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerExpression::getter_mEndOfOffsetExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerExpression * p = (const cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    result = p->mAttribute_mEndOfOffsetExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_registerExpression::getter_mEndOfOffsetExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfOffsetExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @registerExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerExpression::cPtr_registerExpression (const GALGAS_lstring & in_mRegisterName,
                                                  const GALGAS_immediatExpression & in_mOffset,
                                                  const GALGAS_location & in_mEndOfOffsetExpression
                                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mRegisterName (in_mRegisterName),
mAttribute_mOffset (in_mOffset),
mAttribute_mEndOfOffsetExpression (in_mEndOfOffsetExpression) {
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
  ioString << ", " ;
  mAttribute_mEndOfOffsetExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerExpression (mAttribute_mRegisterName, mAttribute_mOffset, mAttribute_mEndOfOffsetExpression COMMA_THERE)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_immediatRegister::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatRegister * p = (const cPtr_immediatRegister *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatRegister) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegister.objectCompare (p->mAttribute_mRegister) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_immediatRegister::objectCompare (const GALGAS_immediatRegister & inOperand) const {
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

GALGAS_immediatRegister::GALGAS_immediatRegister (void) :
GALGAS_immediatExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatRegister::GALGAS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRegister) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatRegister GALGAS_immediatRegister::constructor_new (const GALGAS_registerExpression & inAttribute_mRegister
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatRegister result ;
  if (inAttribute_mRegister.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatRegister (inAttribute_mRegister COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_immediatRegister::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_immediatRegister * p = (const cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    result = p->mAttribute_mRegister ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_immediatRegister::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @immediatRegister class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_immediatRegister::cPtr_immediatRegister (const GALGAS_registerExpression & in_mRegister
                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mAttribute_mRegister (in_mRegister) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_immediatRegister::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

void cPtr_immediatRegister::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@immediatRegister:" ;
  mAttribute_mRegister.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_immediatRegister::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatRegister (mAttribute_mRegister COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @immediatRegister type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatRegister ("immediatRegister",
                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_immediatRegister::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_immediatRegister::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatRegister (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_immediatRegister GALGAS_immediatRegister::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_immediatRegister result ;
  const GALGAS_immediatRegister * p = (const GALGAS_immediatRegister *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_immediatRegister *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRegister", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mAttribute_mInstruction_5F_FD_5F_base_5F_code) ;
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


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (const cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction_5F_FD_5F_base_5F_code,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FD_5F_base_5F_code.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FD_5F_base_5F_code, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD::getter_mInstruction_5F_FD_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    result = p->mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code cPtr_baseline_5F_instruction_5F_FD::getter_mInstruction_5F_FD_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FD::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_FD::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_instruction_5F_FD::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @baseline_instruction_FD class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_FD::cPtr_baseline_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_instruction_5F_FD::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_FD:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FD (mAttribute_mInstructionLocation, mAttribute_mInstruction_5F_FD_5F_base_5F_code, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_instruction_FD type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ("baseline_instruction_FD",
                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FD GALGAS_baseline_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
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


typeComparisonResult GALGAS_baseline_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (const cPtr_baseline_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                          const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_F::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    result = p->mAttribute_mFAinstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code cPtr_baseline_5F_instruction_5F_F::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFAinstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_F::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_F::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @baseline_instruction_F class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_F::cPtr_baseline_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mFAinstruction (in_mFAinstruction),
mAttribute_mRegisterExpression (in_mRegisterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_instruction_5F_F::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_F:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_F (mAttribute_mInstructionLocation, mAttribute_mFAinstruction, mAttribute_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_instruction_F type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ("baseline_instruction_F",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_F GALGAS_baseline_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
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


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (const cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FB) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_instruction_5F_FB::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_baseline_5F_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitOrientedOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bit_5F_oriented_5F_op cPtr_baseline_5F_instruction_5F_FB::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitOrientedOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FB::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_FB::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_FB::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_baseline_5F_instruction_5F_FB::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @baseline_instruction_FB class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_FB::cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBitOrientedOp (in_mBitOrientedOp),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_instruction_5F_FB::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_FB:" ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FB (mAttribute_mInstructionLocation, mAttribute_mBitOrientedOp, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @baseline_instruction_FB type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ("baseline_instruction_FB",
                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_FB GALGAS_baseline_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSkipIfSet.objectCompare (p->mAttribute_mSkipIfSet) ;
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


typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                  const GALGAS_baseline_5F_instruction & inAttribute_mInstruction,
                                                                                                                  const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                  const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                  const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @baseline_instruction_IF_BitTest class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mAttribute_mSkipIfSet (in_mSkipIfSet),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_IF_BitTest:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mSkipIfSet, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_instruction_IF_BitTest type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ("baseline_instruction_IF_BitTest",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@baseline_instruction_IF_BitTest getBaseCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode> gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) {
  gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getBaseCode (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
      f = gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
           f = gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outBaseCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
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

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  enterExtensionMethod_getBaseCode (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode,
                                                                                 freeExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@baseline_instruction_IF_BitTest getMnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic> gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) {
  gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getMnemonic (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic f = NULL ;
    if (classIndex < gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
      f = gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
           f = gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outMnemonic, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
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

static void defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  enterExtensionMethod_getMnemonic (kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  gExtensionMethodTable_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic (defineExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic,
                                                                                 freeExtensionMethod_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
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


typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_baseline_5F_instruction & inAttribute_mInstruction,
                                                                                                                const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mIncrement, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @baseline_instruction_IF_IncDec class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mAttribute_mIncrement (in_mIncrement),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_IF_IncDec:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mIncrement, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_instruction_IF_IncDec type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ("baseline_instruction_IF_IncDec",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_W_5F_isDestination.objectCompare (p->mAttribute_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBranchIfZero.objectCompare (p->mAttribute_mBranchIfZero) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (const cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                            const GALGAS_bool & inAttribute_mIncrement,
                                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                            const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_incDecRegisterInCondition (inAttribute_mRegisterExpression, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_incDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_incDecRegisterInCondition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_incDecRegisterInCondition::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_incDecRegisterInCondition::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    result = p->mAttribute_mBranchIfZero ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_baseline_5F_incDecRegisterInCondition::getter_mBranchIfZero (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchIfZero ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @baseline_incDecRegisterInCondition class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_incDecRegisterInCondition::cPtr_baseline_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mIncrement (in_mIncrement),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mAttribute_mBranchIfZero (in_mBranchIfZero) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_incDecRegisterInCondition:" ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_incDecRegisterInCondition (mAttribute_mRegisterExpression, mAttribute_mIncrement, mAttribute_m_5F_W_5F_isDestination, mAttribute_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_incDecRegisterInCondition type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ("baseline_incDecRegisterInCondition",
                                                              & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_incDecRegisterInCondition GALGAS_baseline_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterExpression.objectCompare (p->mAttribute_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitNumber.objectCompare (p->mAttribute_mBitNumber) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
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

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                                                      const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @baseline_bitTest_in_structured_if_condition class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "[@baseline_bitTest_in_structured_if_condition:" ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_bitTest_in_structured_if_condition type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("baseline_bitTest_in_structured_if_condition",
                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@registerExpression resolveBaselineAccess'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_registerExpression_resolveBaselineAccess> gExtensionMethodTable_registerExpression_resolveBaselineAccess ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_resolveBaselineAccess (const int32_t inClassIndex,
                                                 extensionMethodSignature_registerExpression_resolveBaselineAccess inMethod) {
  gExtensionMethodTable_registerExpression_resolveBaselineAccess.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_resolveBaselineAccess (const cPtr_registerExpression * inObject,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
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
    extensionMethodSignature_registerExpression_resolveBaselineAccess f = NULL ;
    if (classIndex < gExtensionMethodTable_registerExpression_resolveBaselineAccess.count ()) {
      f = gExtensionMethodTable_registerExpression_resolveBaselineAccess (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_registerExpression_resolveBaselineAccess.count ()) {
           f = gExtensionMethodTable_registerExpression_resolveBaselineAccess (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_registerExpression_resolveBaselineAccess.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRegisterTable, constin_inConstantMap, out_outIntermediateRegisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerExpression_resolveBaselineAccess (const cPtr_registerExpression * inObject,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      GALGAS_baseline_5F_intermediate_5F_registerExpression & outArgument_outIntermediateRegisterDescription,
                                                                      GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_registerExpression) ;
  GALGAS_sint_36__34_ var_offset_683 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mAttribute_mOffset.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_683, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 21)) ;
  ioArgument_ioUsedRegisters.addAssign_operation (object->mAttribute_mRegisterName.mAttribute_string  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 22)) ;
  GALGAS_string var_assemblyString_797 = object->mAttribute_mRegisterName.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 24)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_offset_683.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_assemblyString_797.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_683.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)).getter_hexString (SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)) ;
  }
  GALGAS_uintlist var_registerAddressList_1013 ;
  GALGAS_uint var_size_1033 ;
  GALGAS_string joker_1061 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (object->mAttribute_mRegisterName, var_registerAddressList_1013, var_size_1033, outArgument_outBitSliceTable, joker_1061, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 29)) ;
  GALGAS_uint var_registerAddress_1128 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_registerAddressList_1013.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 38)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bool var_found_1191 = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_1234 (var_registerAddressList_1013, kEnumeration_up) ;
    bool bool_2 = var_found_1191.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 40)).isValidAndTrue () ;
    if (enumerator_1234.hasCurrentObject () && bool_2) {
      while (enumerator_1234.hasCurrentObject () && bool_2) {
        var_registerAddress_1128 = enumerator_1234.current_mValue (HERE) ;
        var_found_1191 = GALGAS_bool (kIsInfOrEqual, enumerator_1234.current_mValue (HERE).objectCompare (GALGAS_uint ((uint32_t) 31U))) ;
        enumerator_1234.gotoNextObject () ;
        if (enumerator_1234.hasCurrentObject ()) {
          bool_2 = var_found_1191.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 40)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_3 = var_found_1191.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 44)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mRegisterName.getter_location (SOURCE_FILE ("baseline_semantic_analysis.galgas", 45)), GALGAS_string ("the register cannot be accessed directly; use indirect addressing throught FSR register"), fixItArray4  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 45)) ;
    }
  }
  outArgument_outIntermediateRegisterDescription = GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_797, var_registerAddress_1128.add_operation (var_offset_683.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 51))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 49)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerExpression_resolveBaselineAccess (void) {
  enterExtensionMethod_resolveBaselineAccess (kTypeDescriptor_GALGAS_registerExpression.mSlotID,
                                              extensionMethod_registerExpression_resolveBaselineAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_registerExpression_resolveBaselineAccess (void) {
  gExtensionMethodTable_registerExpression_resolveBaselineAccess.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerExpression_resolveBaselineAccess (defineExtensionMethod_registerExpression_resolveBaselineAccess,
                                                                     freeExtensionMethod_registerExpression_resolveBaselineAccess) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegister.objectCompare (p->mAttribute_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWarningOnUselessBanksel.objectCompare (p->mAttribute_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_midrange_5F_instruction_5F_banksel_5F_register::objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_banksel_5F_register::GALGAS_midrange_5F_instruction_5F_banksel_5F_register (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_banksel_5F_register::GALGAS_midrange_5F_instruction_5F_banksel_5F_register (const cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_banksel_5F_register GALGAS_midrange_5F_instruction_5F_banksel_5F_register::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                              const GALGAS_registerExpression & inAttribute_mRegister,
                                                                                                                              const GALGAS_bool & inAttribute_mWarningOnUselessBanksel
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_5F_register result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegister.isValid () && inAttribute_mWarningOnUselessBanksel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (inAttribute_mInstructionLocation, inAttribute_mRegister, inAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_banksel_5F_register::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    result = p->mAttribute_mRegister ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_banksel_5F_register::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_banksel_5F_register::getter_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    result = p->mAttribute_mWarningOnUselessBanksel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_instruction_5F_banksel_5F_register::getter_mWarningOnUselessBanksel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarningOnUselessBanksel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @midrange_instruction_banksel_register class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                          const GALGAS_registerExpression & in_mRegister,
                                                                                                          const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegister (in_mRegister),
mAttribute_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_banksel_register:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegister.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (mAttribute_mInstructionLocation, mAttribute_mRegister, mAttribute_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @midrange_instruction_banksel_register type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ("midrange_instruction_banksel_register",
                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_banksel_5F_register GALGAS_midrange_5F_instruction_5F_banksel_5F_register::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_5F_register result ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register * p = (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_banksel_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_savebank * p = (const cPtr_midrange_5F_instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
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


typeComparisonResult GALGAS_midrange_5F_instruction_5F_savebank::objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_savebank::GALGAS_midrange_5F_instruction_5F_savebank (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_savebank::GALGAS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_savebank) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_savebank GALGAS_midrange_5F_instruction_5F_savebank::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_registerExpression & inAttribute_mRegister,
                                                                                                        const GALGAS_midrange_5F_instructionList & inAttribute_mInstructionList,
                                                                                                        const GALGAS_location & inAttribute_mEndOfSaveBankInstruction
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_savebank result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRegister.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mEndOfSaveBankInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_savebank (inAttribute_mInstructionLocation, inAttribute_mRegister, inAttribute_mInstructionList, inAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_savebank::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_savebank * p = (const cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    result = p->mAttribute_mRegister ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_savebank::getter_mRegister (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_savebank::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_savebank * p = (const cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instructionList cPtr_midrange_5F_instruction_5F_savebank::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_midrange_5F_instruction_5F_savebank::getter_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_savebank * p = (const cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    result = p->mAttribute_mEndOfSaveBankInstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_midrange_5F_instruction_5F_savebank::getter_mEndOfSaveBankInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSaveBankInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @midrange_instruction_savebank class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_registerExpression & in_mRegister,
                                                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                    const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mRegister (in_mRegister),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mEndOfSaveBankInstruction (in_mEndOfSaveBankInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

void cPtr_midrange_5F_instruction_5F_savebank::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_savebank:" ;
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

acPtr_class * cPtr_midrange_5F_instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_savebank (mAttribute_mInstructionLocation, mAttribute_mRegister, mAttribute_mInstructionList, mAttribute_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrange_instruction_savebank type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ("midrange_instruction_savebank",
                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_savebank GALGAS_midrange_5F_instruction_5F_savebank::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_savebank result ;
  const GALGAS_midrange_5F_instruction_5F_savebank * p = (const GALGAS_midrange_5F_instruction_5F_savebank *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_savebank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_savebank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mAttribute_mInstruction_5F_FD_5F_base_5F_code) ;
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


typeComparisonResult GALGAS_midrange_5F_instruction_5F_FD::objectCompare (const GALGAS_midrange_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FD::GALGAS_midrange_5F_instruction_5F_FD (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD::GALGAS_midrange_5F_instruction_5F_FD (const cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FD) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD GALGAS_midrange_5F_instruction_5F_FD::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inAttribute_mInstruction_5F_FD_5F_base_5F_code,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FD_5F_base_5F_code.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FD (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FD_5F_base_5F_code, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD::getter_mInstruction_5F_FD_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    result = p->mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code cPtr_midrange_5F_instruction_5F_FD::getter_mInstruction_5F_FD_5F_base_5F_code (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_FD::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_FD::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_instruction_5F_FD::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @midrange_instruction_FD class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

void cPtr_midrange_5F_instruction_5F_FD::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_FD:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FD (mAttribute_mInstructionLocation, mAttribute_mInstruction_5F_FD_5F_base_5F_code, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @midrange_instruction_FD type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ("midrange_instruction_FD",
                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FD GALGAS_midrange_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD result ;
  const GALGAS_midrange_5F_instruction_5F_FD * p = (const GALGAS_midrange_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_F * p = (const cPtr_midrange_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
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


typeComparisonResult GALGAS_midrange_5F_instruction_5F_F::objectCompare (const GALGAS_midrange_5F_instruction_5F_F & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_F::GALGAS_midrange_5F_instruction_5F_F (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_F::GALGAS_midrange_5F_instruction_5F_F (const cPtr_midrange_5F_instruction_5F_F * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_F) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_F GALGAS_midrange_5F_instruction_5F_F::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                          const GALGAS_registerExpression & inAttribute_mRegisterExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_F result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_F (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_F::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_F * p = (const cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    result = p->mAttribute_mFAinstruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code cPtr_midrange_5F_instruction_5F_F::getter_mFAinstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFAinstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_F::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_F * p = (const cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_F::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @midrange_instruction_F class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mFAinstruction (in_mFAinstruction),
mAttribute_mRegisterExpression (in_mRegisterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

void cPtr_midrange_5F_instruction_5F_F::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_F:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_F (mAttribute_mInstructionLocation, mAttribute_mFAinstruction, mAttribute_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @midrange_instruction_F type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ("midrange_instruction_F",
                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_F GALGAS_midrange_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_F result ;
  const GALGAS_midrange_5F_instruction_5F_F * p = (const GALGAS_midrange_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
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


typeComparisonResult GALGAS_midrange_5F_instruction_5F_FB::objectCompare (const GALGAS_midrange_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FB::GALGAS_midrange_5F_instruction_5F_FB (void) :
GALGAS_midrange_5F_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FB::GALGAS_midrange_5F_instruction_5F_FB (const cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FB) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FB GALGAS_midrange_5F_instruction_5F_FB::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                            const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                            const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FB (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_instruction_5F_FB::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_bit_5F_oriented_5F_op result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitOrientedOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_bit_5F_oriented_5F_op cPtr_midrange_5F_instruction_5F_FB::getter_mBitOrientedOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitOrientedOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_FB::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_FB::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_midrange_5F_instruction_5F_FB::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_midrange_5F_instruction_5F_FB::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @midrange_instruction_FB class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mAttribute_mBitOrientedOp (in_mBitOrientedOp),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

void cPtr_midrange_5F_instruction_5F_FB::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_FB:" ;
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

acPtr_class * cPtr_midrange_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FB (mAttribute_mInstructionLocation, mAttribute_mBitOrientedOp, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @midrange_instruction_FB type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ("midrange_instruction_FB",
                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_FB GALGAS_midrange_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FB result ;
  const GALGAS_midrange_5F_instruction_5F_FB * p = (const GALGAS_midrange_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSkipIfSet.objectCompare (p->mAttribute_mSkipIfSet) ;
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


typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                  const GALGAS_midrange_5F_instruction & inAttribute_mInstruction,
                                                                                                                  const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                  const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                  const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mSkipIfSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mSkipIfSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSkipIfSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bitNumberExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    result = p->mAttribute_mBitNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitNumberExpression cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::getter_mBitNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @midrange_instruction_IF_BitTest class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mAttribute_mSkipIfSet (in_mSkipIfSet),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_mBitNumber (in_mBitNumber) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_IF_BitTest:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mSkipIfSet, mAttribute_mRegisterExpression, mAttribute_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_instruction_IF_BitTest type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ("midrange_instruction_IF_BitTest",
                                                                 & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@midrange_instruction_IF_BitTest getBaseCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode> gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getBaseCode (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode f = NULL ;
    if (classIndex < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
      f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.count ()) {
           f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outBaseCode, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
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

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  enterExtensionMethod_getBaseCode (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (void) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode,
                                                                                 freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@midrange_instruction_IF_BitTest getMnemonic'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic> gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getMnemonic (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic f = NULL ;
    if (classIndex < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
      f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.count ()) {
           f = gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_outMnemonic, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
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

static void defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  enterExtensionMethod_getMnemonic (kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest.mSlotID,
                                    extensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (void) {
  gExtensionMethodTable_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic (defineExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic,
                                                                                 freeExtensionMethod_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstruction.objectCompare (p->mAttribute_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIncrement.objectCompare (p->mAttribute_mIncrement) ;
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


typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_midrange_5F_instruction & inAttribute_mInstruction,
                                                                                                                const GALGAS_bool & inAttribute_mIncrement,
                                                                                                                const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction.isValid () && inAttribute_mIncrement.isValid () && inAttribute_mRegisterExpression.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (inAttribute_mInstructionLocation, inAttribute_mInstruction, inAttribute_mIncrement, inAttribute_mRegisterExpression, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mIncrement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::getter_mIncrement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIncrement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_mRegisterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerExpression cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::getter_mRegisterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    result = p->mAttribute_m_5F_W_5F_isDestination ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::getter_m_5F_W_5F_isDestination (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_W_5F_isDestination ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @midrange_instruction_IF_IncDec class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mAttribute_mIncrement (in_mIncrement),
mAttribute_mRegisterExpression (in_mRegisterExpression),
mAttribute_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_IF_IncDec:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (mAttribute_mInstructionLocation, mAttribute_mInstruction, mAttribute_mIncrement, mAttribute_mRegisterExpression, mAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_instruction_IF_IncDec type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ("midrange_instruction_IF_IncDec",
                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

