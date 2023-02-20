#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block::GALGAS_ipic_31__38_Block (void) :
mProperty_mAddress (),
mProperty_mLabel (),
mProperty_mInstructionList (),
mProperty_mTerminator (),
mProperty_mTerminatorMin (),
mProperty_mTerminatorMax () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block::~ GALGAS_ipic_31__38_Block (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block::GALGAS_ipic_31__38_Block (const GALGAS_uint & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_ipic_31__38_SequentialInstructionList & inOperand2,
                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                                    const GALGAS_uint & inOperand4,
                                                    const GALGAS_uint & inOperand5) :
mProperty_mAddress (inOperand0),
mProperty_mLabel (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mTerminator (inOperand3),
mProperty_mTerminatorMin (inOperand4),
mProperty_mTerminatorMax (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_Block::constructor_new (const GALGAS_uint & in_mAddress,
                                                                    const GALGAS_lstring & in_mLabel,
                                                                    const GALGAS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                                                    const GALGAS_uint & in_mTerminatorMin,
                                                                    const GALGAS_uint & in_mTerminatorMax 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_Block result ;
  if (in_mAddress.isValid () && in_mLabel.isValid () && in_mInstructionList.isValid () && in_mTerminator.isValid () && in_mTerminatorMin.isValid () && in_mTerminatorMax.isValid ()) {
    result = GALGAS_ipic_31__38_Block (in_mAddress, in_mLabel, in_mInstructionList, in_mTerminator, in_mTerminatorMin, in_mTerminatorMax) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_Block::objectCompare (const GALGAS_ipic_31__38_Block & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAddress.objectCompare (inOperand.mProperty_mAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabel.objectCompare (inOperand.mProperty_mLabel) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminator.objectCompare (inOperand.mProperty_mTerminator) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminatorMin.objectCompare (inOperand.mProperty_mTerminatorMin) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminatorMax.objectCompare (inOperand.mProperty_mTerminatorMax) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_Block::isValid (void) const {
  return mProperty_mAddress.isValid () && mProperty_mLabel.isValid () && mProperty_mInstructionList.isValid () && mProperty_mTerminator.isValid () && mProperty_mTerminatorMin.isValid () && mProperty_mTerminatorMax.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_Block::drop (void) {
  mProperty_mAddress.drop () ;
  mProperty_mLabel.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mTerminator.drop () ;
  mProperty_mTerminatorMin.drop () ;
  mProperty_mTerminatorMax.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_Block::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @ipic18Block:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabel.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminator.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminatorMin.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminatorMax.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18Block type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_Block ("ipic18Block",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_Block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_Block ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_Block::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_Block (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @ipic_31__38_JumpTerminator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_JumpTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_JumpTerminator * p = (const cPtr_ipic_31__38_JumpTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_JumpTerminator::objectCompare (const GALGAS_ipic_31__38_JumpTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator::GALGAS_ipic_31__38_JumpTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator::GALGAS_ipic_31__38_JumpTerminator (const cPtr_ipic_31__38_JumpTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_JumpTerminator) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_JumpTerminator::setter_setMLabel (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    p->mProperty_mLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_JumpTerminator::setter_setMKind (GALGAS_jumpInstructionKind inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38_JumpTerminator::readProperty_mLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    return p->mProperty_mLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_ipic_31__38_JumpTerminator::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_jumpInstructionKind () ;
  }else{
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18JumpTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_JumpTerminator::cPtr_ipic_31__38_JumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_lstring & in_mLabel,
                                                                  const GALGAS_jumpInstructionKind & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mLabel (in_mLabel),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_JumpTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;
}

void cPtr_ipic_31__38_JumpTerminator::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@ipic18JumpTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_JumpTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_JumpTerminator (mProperty_mInstructionLocation, mProperty_mLabel, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18JumpTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ("ipic18JumpTerminator",
                                                   & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_JumpTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_JumpTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_JumpTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @ipic_31__38_ConditionalJumpTerminator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ConditionalJumpTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConditionalBranch.objectCompare (p->mProperty_mConditionalBranch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabelWhenTrue.objectCompare (p->mProperty_mTargetLabelWhenTrue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchModeOnTrueLabel.objectCompare (p->mProperty_mBranchModeOnTrueLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabelWhenFalse.objectCompare (p->mProperty_mTargetLabelWhenFalse) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchModeOnFalseLabel.objectCompare (p->mProperty_mBranchModeOnFalseLabel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ConditionalJumpTerminator::objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator::GALGAS_ipic_31__38_ConditionalJumpTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator::GALGAS_ipic_31__38_ConditionalJumpTerminator (const cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMConditionalBranch (GALGAS_conditional_5F_branch inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mConditionalBranch = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMTargetLabelWhenTrue (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mTargetLabelWhenTrue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMBranchModeOnTrueLabel (GALGAS_conditionalBranchMode inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mBranchModeOnTrueLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMTargetLabelWhenFalse (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mTargetLabelWhenFalse = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMBranchModeOnFalseLabel (GALGAS_conditionalBranchMode inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mBranchModeOnFalseLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mConditionalBranch (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_conditional_5F_branch () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mConditionalBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mTargetLabelWhenTrue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mTargetLabelWhenTrue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mBranchModeOnTrueLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_conditionalBranchMode () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mBranchModeOnTrueLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mTargetLabelWhenFalse (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mTargetLabelWhenFalse ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mBranchModeOnFalseLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_conditionalBranchMode () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mBranchModeOnFalseLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ConditionalJumpTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ConditionalJumpTerminator::cPtr_ipic_31__38_ConditionalJumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                                                        const GALGAS_lstring & in_mTargetLabelWhenTrue,
                                                                                        const GALGAS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                                                        const GALGAS_lstring & in_mTargetLabelWhenFalse,
                                                                                        const GALGAS_conditionalBranchMode & in_mBranchModeOnFalseLabel
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mConditionalBranch (in_mConditionalBranch),
mProperty_mTargetLabelWhenTrue (in_mTargetLabelWhenTrue),
mProperty_mBranchModeOnTrueLabel (in_mBranchModeOnTrueLabel),
mProperty_mTargetLabelWhenFalse (in_mTargetLabelWhenFalse),
mProperty_mBranchModeOnFalseLabel (in_mBranchModeOnFalseLabel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ConditionalJumpTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;
}

void cPtr_ipic_31__38_ConditionalJumpTerminator::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@ipic18ConditionalJumpTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConditionalBranch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabelWhenTrue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchModeOnTrueLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabelWhenFalse.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchModeOnFalseLabel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ConditionalJumpTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38_ConditionalJumpTerminator (mProperty_mInstructionLocation, mProperty_mConditionalBranch, mProperty_mTargetLabelWhenTrue, mProperty_mBranchModeOnTrueLabel, mProperty_mTargetLabelWhenFalse, mProperty_mBranchModeOnFalseLabel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18ConditionalJumpTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ("ipic18ConditionalJumpTerminator",
                                                              & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ConditionalJumpTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ConditionalJumpTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ConditionalJumpTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_RegisterComparisonTerminator reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_RegisterComparisonTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_RegisterComparisonTerminator * p = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionTrue.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionTrue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionFalse.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionFalse) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_RegisterComparisonTerminator::objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator::GALGAS_pic_31__38_RegisterComparisonTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator::GALGAS_pic_31__38_RegisterComparisonTerminator (const cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterComparisonTerminator) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterComparisonTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterComparisonTerminator::setter_setMComparison (GALGAS_ipic_31__38_RegisterComparison inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    p->mProperty_mComparison = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_pic_31__38_RegisterComparisonTerminator::readProperty_mRegisterDescription (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparisonTerminator::readProperty_mComparison (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ipic_31__38_RegisterComparison () ;
  }else{
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    return p->mProperty_mComparison ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18RegisterComparisonTerminator class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterComparisonTerminator::cPtr_pic_31__38_RegisterComparisonTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                            const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                            const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                            const GALGAS_ipic_31__38_RegisterComparison & in_mComparison
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mComparison (in_mComparison) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_RegisterComparisonTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;
}

void cPtr_pic_31__38_RegisterComparisonTerminator::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@pic18RegisterComparisonTerminator:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_RegisterComparisonTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterComparisonTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mComparison COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18RegisterComparisonTerminator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ("pic18RegisterComparisonTerminator",
                                                                & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparisonTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparisonTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparisonTerminator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_JSR reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_JSR::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR::GALGAS_ipic_31__38__5F_intermediate_5F_JSR (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR::GALGAS_ipic_31__38__5F_intermediate_5F_JSR (const cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_JSR::setter_setMKind (GALGAS_jumpInstructionKind inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38__5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_ipic_31__38__5F_intermediate_5F_JSR::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_jumpInstructionKind () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_JSR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_JSR::cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_lstring & in_mTargetLabel,
                                                                                    const GALGAS_jumpInstructionKind & in_mKind
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_JSR:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_JSR type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ("ipic18_intermediate_JSR",
                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOffset.objectCompare (p->mProperty_mOffset) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightShift.objectCompare (p->mProperty_mRightShift) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_default (LOCATION_ARGS) {
  return GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                                    GALGAS_uint::constructor_default (HERE),
                                                                                    GALGAS_uint::constructor_default (HERE)
                                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::setter_setMLabel (GALGAS_lstring inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    p->mProperty_mLabel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::setter_setMOffset (GALGAS_uint inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    p->mProperty_mOffset = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::setter_setMRightShift (GALGAS_uint inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    p->mProperty_mRightShift = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mLabel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mLabel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mOffset (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mOffset ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mRightShift (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mRightShift ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_MOV_LABEL_W class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GALGAS_location & in_mInstructionLocation,
                                                                                                                const GALGAS_lstring & in_mLabel,
                                                                                                                const GALGAS_uint & in_mOffset,
                                                                                                                const GALGAS_uint & in_mRightShift
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLabel (in_mLabel),
mProperty_mOffset (in_mOffset),
mProperty_mRightShift (in_mRightShift) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "[@ipic18_intermediate_MOV_LABEL_W:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOffset.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightShift.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (mProperty_mInstructionLocation, mProperty_mLabel, mProperty_mOffset, mProperty_mRightShift COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18_intermediate_MOV_LABEL_W type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ("ipic18_intermediate_MOV_LABEL_W",
                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap::GALGAS_branchOverflowMap (void) :
AC_GALGAS_listmap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap GALGAS_branchOverflowMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_branchOverflowMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchOverflowMap::addAssign_operation (const GALGAS_string & inKey,
                                                    const GALGAS_string & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_stringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_branchOverflowMap::getter_listForKey (const GALGAS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_stringlist (listForKey (inKey)) ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_branchOverflowMap::cEnumerator_branchOverflowMap (const GALGAS_branchOverflowMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element cEnumerator_branchOverflowMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_branchOverflowMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_branchOverflowMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_branchOverflowMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_stringlist (p->mSharedListMapList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@branchOverflowMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchOverflowMap ("branchOverflowMap",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchOverflowMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchOverflowMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchOverflowMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block display'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_display (const GALGAS_ipic_31__38_Block inObject,
                              const GALGAS_string constinArgument_inNextBlockLabel,
                              GALGAS_string & ioArgument_ioListFileContents,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 12)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 12)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_Block temp_2 = inObject ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mAddress ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_display_block_list.galgas", 13)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_Block temp_3 = inObject ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", ORG ").add_operation (temp_3.readProperty_mAddress ().getter_hexString (SOURCE_FILE ("ipic18_display_block_list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 14)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 16)) ;
  const GALGAS_ipic_31__38_Block temp_4 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_501 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_501.hasCurrentObject ()) {
    GALGAS_stringlist var_d_553 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_501.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 19)) ;
    cEnumerator_stringlist enumerator_605 (var_d_553, kENUMERATION_UP) ;
    while (enumerator_605.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_605.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)) ;
      enumerator_605.gotoNextObject () ;
    }
    enumerator_501.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 25)) ;
  const GALGAS_ipic_31__38_Block temp_5 = inObject ;
  ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_5.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 27)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const GALGAS_ipic_31__38_Block inObject,
                                            const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                            GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  extensionMethod_enterInstructionReferencedLabels (temp_0.readProperty_mInstructionList (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 957)) ;
  const GALGAS_ipic_31__38_Block temp_1 = inObject ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_1.readProperty_mTerminator ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 962)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bool var_optimized_37167 ;
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_37259 ;
  {
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  const GALGAS_ipic_31__38_Block temp_1 = inObject ;
  routine_instructionListOptimization (constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, temp_0.readProperty_mInstructionList (), temp_1.readProperty_mLabel (), var_optimized_37167, ioArgument_ioListFileContents, var_optimizedInstructionList_37259, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 979)) ;
  }
  const GALGAS_ipic_31__38_Block temp_2 = inObject ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedTerminator_37361 = temp_2.readProperty_mTerminator () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_Block temp_4 = inObject ;
    test_3 = GALGAS_bool (kIsStrictSup, var_optimizedInstructionList_37259.getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 991)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (temp_4.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 991)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_ipic_31__38_SequentialInstruction var_lastInstruction_37566 ;
      GALGAS_uint joker_37568_2 ; // Joker input parameter
      GALGAS_uint joker_37568_1 ; // Joker input parameter
      var_optimizedInstructionList_37259.method_last (var_lastInstruction_37566, joker_37568_2, joker_37568_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 992)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation var_op_37585 (dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *> (var_lastInstruction_37566.ptr ())) ;
        if (NULL == var_op_37585.ptr ()) {
          test_5 = kBoolFalse ;
        }
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = constinArgument_inOptimizeFlagStruct.readProperty_mMOVLWfollowedByRETreplacedByRETLW ().operator_and (GALGAS_bool (kIsEqual, var_op_37585.readProperty_mLiteralInstruction ().objectCompare (GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 995)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 995)).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              GALGAS_ipic_31__38_SequentialInstruction joker_37910_3 ; // Joker input parameter
              GALGAS_uint joker_37910_2 ; // Joker input parameter
              GALGAS_uint joker_37910_1 ; // Joker input parameter
              var_optimizedInstructionList_37259.setter_popLast (joker_37910_3, joker_37910_2, joker_37910_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 996)) ;
              }
              var_optimizedTerminator_37361 = GALGAS_ipic_31__38_RetlwTerminator::constructor_new (var_op_37585.readProperty_mInstructionLocation (), var_op_37585.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 997)) ;
              var_optimized_37167 = GALGAS_bool (true) ;
              const GALGAS_ipic_31__38_Block temp_7 = inObject ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [M] ").add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)).add_operation (GALGAS_string (": MOVLW k ; RETURN --> RETLW k\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          GALGAS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_38210 (dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (var_lastInstruction_37566.ptr ())) ;
          if (NULL == var_jsr_38210.ptr ()) {
            test_8 = kBoolFalse ;
          }
          if (kBoolTrue == test_8) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRfollowedByRETreplacedByJUMP ().boolEnum () ;
              if (kBoolTrue == test_9) {
                {
                GALGAS_ipic_31__38_SequentialInstruction joker_38418_3 ; // Joker input parameter
                GALGAS_uint joker_38418_2 ; // Joker input parameter
                GALGAS_uint joker_38418_1 ; // Joker input parameter
                var_optimizedInstructionList_37259.setter_popLast (joker_38418_3, joker_38418_2, joker_38418_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1005)) ;
                }
                var_optimizedTerminator_37361 = GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_jsr_38210.readProperty_mInstructionLocation (), var_jsr_38210.readProperty_mTargetLabel (), var_jsr_38210.readProperty_mKind ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1006)) ;
                var_optimized_37167 = GALGAS_bool (true) ;
                const GALGAS_ipic_31__38_Block temp_10 = inObject ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [J] ").add_operation (temp_10.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (var_jsr_38210.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GALGAS_string (" ; RETURN --> JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (var_jsr_38210.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_optimized_37167.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 1027)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_ipic_31__38_Block temp_12 = inObject ;
      const GALGAS_ipic_31__38_Block temp_13 = inObject ;
      callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_12.readProperty_mTerminator ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, temp_13.readProperty_mLabel ().readProperty_string (), var_optimized_37167, ioArgument_ioListFileContents, var_optimizedTerminator_37361, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1028)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_optimized_37167.boolEnum () ;
    if (kBoolTrue == test_14) {
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      const GALGAS_ipic_31__38_Block temp_15 = inObject ;
      const GALGAS_ipic_31__38_Block temp_16 = inObject ;
      outArgument_outOptimizedBlock = GALGAS_ipic_31__38_Block::constructor_new (temp_15.readProperty_mAddress (), temp_16.readProperty_mLabel (), var_optimizedInstructionList_37259, var_optimizedTerminator_37361, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1046)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1041)) ;
    }
  }
  if (kBoolFalse == test_14) {
    const GALGAS_ipic_31__38_Block temp_17 = inObject ;
    outArgument_outOptimizedBlock = temp_17 ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_uint var_address_455 = constinArgument_inBlockStartAddress ;
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_501 (temp_0.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_501.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction var_modifiedInstruction_767 ;
    const GALGAS_ipic_31__38_Block temp_1 = inObject ;
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_501.current_mInstruction (HERE).ptr (), var_address_455, temp_1.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedInstruction_767, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 17)) ;
    var_modifiedInstructionList_389.addAssign_operation (var_modifiedInstruction_767, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)) ;
    var_address_455 = var_address_455.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_501.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)) ;
    enumerator_501.gotoNextObject () ;
  }
  GALGAS_ipic_31__38_AbstractBlockTerminator var_modifiedTerminator_1164 ;
  const GALGAS_ipic_31__38_Block temp_2 = inObject ;
  const GALGAS_ipic_31__38_Block temp_3 = inObject ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_2.readProperty_mTerminator ().ptr (), var_address_455, temp_3.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedTerminator_1164, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 29)) ;
  const GALGAS_ipic_31__38_Block temp_4 = inObject ;
  const GALGAS_ipic_31__38_Block temp_5 = inObject ;
  outArgument_outModifiedBlock = GALGAS_ipic_31__38_Block::constructor_new (temp_4.readProperty_mAddress (), temp_5.readProperty_mLabel (), var_modifiedInstructionList_389, var_modifiedTerminator_1164, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 44)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 39)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@ipic18Block blockSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint extensionGetter_blockSize (const GALGAS_ipic_31__38_Block & inObject,
                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  result_outResult = callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_0.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 92)) ;
  const GALGAS_ipic_31__38_Block temp_1 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_2802 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_2802.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_2802.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)) ;
    enumerator_2802.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const GALGAS_ipic_31__38_Block inObject,
                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                             const GALGAS_string constinArgument_inNextBlockLabel,
                                             const GALGAS_uint constinArgument_inBlockStartAddress,
                                             GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_6342 = constinArgument_inBlockStartAddress ;
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_6388 (temp_0.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_6388.hasCurrentObject ()) {
    const GALGAS_ipic_31__38_Block temp_1 = inObject ;
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_6388.current_mInstruction (HERE).ptr (), var_address_6342, temp_1.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 201)) ;
    var_address_6342 = var_address_6342.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_6388.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)) ;
    enumerator_6388.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_Block temp_2 = inObject ;
  const GALGAS_ipic_31__38_Block temp_3 = inObject ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_2.readProperty_mTerminator ().ptr (), var_address_6342, temp_3.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 210)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block generateCodeForBlock'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_Block temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mAddress ().objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 100)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      GALGAS_codeList temp_2 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
      const GALGAS_ipic_31__38_Block temp_3 = inObject ;
      temp_2.addAssign_operation (temp_3.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 103))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
      GALGAS_stringlist temp_4 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 104)) ;
      const GALGAS_ipic_31__38_Block temp_5 = inObject ;
      temp_4.addAssign_operation (GALGAS_string ("LABEL ").add_operation (temp_5.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104)) ;
      routine_generateLineWithCode (constinArgument_inBlockAddress, temp_2, temp_4, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 105)), GALGAS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 101)) ;
      }
      const GALGAS_ipic_31__38_Block temp_6 = inObject ;
      ioArgument_ioAssemblyString.plusAssign_operation(temp_6.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 109)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_codeList var_cd_3549 = GALGAS_codeList::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 111)) ;
    var_cd_3549.addAssign_operation (GALGAS_string ("ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 112))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)) ;
    const GALGAS_ipic_31__38_Block temp_7 = inObject ;
    var_cd_3549.addAssign_operation (temp_7.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 113))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)) ;
    {
    GALGAS_stringlist temp_8 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 117)) ;
    const GALGAS_ipic_31__38_Block temp_9 = inObject ;
    temp_8.addAssign_operation (GALGAS_string ("LABEL ").add_operation (temp_9.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)).add_operation (GALGAS_string (", ORG "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)).add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)) ;
    routine_generateLineWithCode (constinArgument_inBlockAddress, var_cd_3549, temp_8, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_code_generation.galgas", 118)), GALGAS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 114)) ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(GALGAS_string ("    ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)) ;
    const GALGAS_ipic_31__38_Block temp_10 = inObject ;
    ioArgument_ioAssemblyString.plusAssign_operation(temp_10.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 123)) ;
  }
  GALGAS_uint var_address_4013 = constinArgument_inBlockAddress ;
  const GALGAS_ipic_31__38_Block temp_11 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_4060 (temp_11.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_4060.hasCurrentObject ()) {
    GALGAS_codeList var_code_4199 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_4060.current_mInstruction (HERE).ptr (), var_address_4013, constinArgument_inSymbolTable, constinArgument_inDataMap, var_code_4199, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 128)) ;
    {
    ioArgument_ioGeneratedCodeMap.setter_insertKey (var_address_4013.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 134)).getter_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 134)), var_code_4199, enumerator_4060.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 134)) ;
    }
    {
    routine_generateLineWithCode (var_address_4013, var_code_4199, callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4060.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 138)), enumerator_4060.current_mMin (HERE), enumerator_4060.current_mMax (HERE), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 135)) ;
    }
    cEnumerator_codeList enumerator_4477 (var_code_4199, kENUMERATION_UP) ;
    while (enumerator_4477.hasCurrentObject ()) {
      cEnumerator_uintlist enumerator_4507 (enumerator_4477.current_mBinaryCode (HERE), kENUMERATION_UP) ;
      while (enumerator_4507.hasCurrentObject ()) {
        {
        routine_emitCode (enumerator_4507.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 145)) ;
        }
        enumerator_4507.gotoNextObject () ;
      }
      ioArgument_ioAssemblyString.plusAssign_operation(enumerator_4477.current_mAssemblyCode (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 147)) ;
      enumerator_4477.gotoNextObject () ;
    }
    var_address_4013 = var_address_4013.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4060.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 149)) ;
    GALGAS_uint var_generatedCodeSize_4767 = GALGAS_uint (uint32_t (0U)) ;
    cEnumerator_codeList enumerator_4794 (var_code_4199, kENUMERATION_UP) ;
    while (enumerator_4794.hasCurrentObject ()) {
      var_generatedCodeSize_4767 = var_generatedCodeSize_4767.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (enumerator_4794.current_mBinaryCode (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 153)) ;
      enumerator_4794.gotoNextObject () ;
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsNotEqual, var_generatedCodeSize_4767.objectCompare (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4060.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 155)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_s_4961 = GALGAS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_4767.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 156)).add_operation (GALGAS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4060.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)) ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 158)), var_s_4961, fixItArray13  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 158)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_s_4961.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 159)) ;
      }
    }
    enumerator_4060.gotoNextObject () ;
  }
  GALGAS_codeList var_code_5330 ;
  const GALGAS_ipic_31__38_Block temp_14 = inObject ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_14.readProperty_mTerminator ().ptr (), var_address_4013, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_code_5330, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 163)) ;
  {
  GALGAS_stringlist temp_15 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 172)) ;
  const GALGAS_ipic_31__38_Block temp_16 = inObject ;
  temp_15.addAssign_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_16.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172)) ;
  const GALGAS_ipic_31__38_Block temp_17 = inObject ;
  const GALGAS_ipic_31__38_Block temp_18 = inObject ;
  routine_generateLineWithCode (var_address_4013, var_code_5330, temp_15, temp_17.readProperty_mTerminatorMin (), temp_18.readProperty_mTerminatorMax (), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 169)) ;
  }
  cEnumerator_codeList enumerator_5557 (var_code_5330, kENUMERATION_UP) ;
  while (enumerator_5557.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_5585 (enumerator_5557.current_mBinaryCode (HERE), kENUMERATION_UP) ;
    while (enumerator_5585.hasCurrentObject ()) {
      {
      routine_emitCode (enumerator_5585.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 179)) ;
      }
      enumerator_5585.gotoNextObject () ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(enumerator_5557.current_mAssemblyCode (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 181)) ;
    enumerator_5557.gotoNextObject () ;
  }
  GALGAS_bigint var_generatedCodeSize_5775 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 184)) ;
  cEnumerator_codeList enumerator_5802 (var_code_5330, kENUMERATION_UP) ;
  while (enumerator_5802.hasCurrentObject ()) {
    var_generatedCodeSize_5775 = var_generatedCodeSize_5775.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (enumerator_5802.current_mBinaryCode (HERE).getter_length (SOURCE_FILE ("ipic18_code_generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 186)).getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 186)) ;
    enumerator_5802.gotoNextObject () ;
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_ipic_31__38_Block temp_20 = inObject ;
    test_19 = GALGAS_bool (kIsNotEqual, var_generatedCodeSize_5775.objectCompare (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_20.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 188)).getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 188)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_ipic_31__38_Block temp_21 = inObject ;
      GALGAS_string var_s_5990 = GALGAS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_5775.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 189)).add_operation (GALGAS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_21.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)) ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 191)), var_s_5990, fixItArray22  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 191)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_s_5990.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 192)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 195)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block computeDuration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_computeDuration (const GALGAS_ipic_31__38_Block inObject,
                                      GALGAS_blockDurationMap & ioArgument_ioExploredBlockMap,
                                      GALGAS_string inArgument_inNextLabel,
                                      GALGAS_ipic_31__38_Block & outArgument_outNewBlock,
                                      GALGAS_bool & ioArgument_ioContinue,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNewBlock.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_Block temp_1 = inObject ;
    const GALGAS_ipic_31__38_Block temp_2 = inObject ;
    test_0 = GALGAS_bool (kIsInfOrEqual, temp_1.readProperty_mTerminatorMin ().objectCompare (temp_2.readProperty_mTerminatorMax ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_Block temp_3 = inObject ;
      outArgument_outNewBlock = temp_3 ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_terminatorMin_22391 ;
    GALGAS_uint var_terminatorMax_22410 ;
    const GALGAS_ipic_31__38_Block temp_4 = inObject ;
    callExtensionMethod_terminatorMinMaxDuration ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_4.readProperty_mTerminator ().ptr (), ioArgument_ioExploredBlockMap, inArgument_inNextLabel, var_terminatorMin_22391, var_terminatorMax_22410, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 593)) ;
    GALGAS_uint var_min_22423 = var_terminatorMin_22391 ;
    GALGAS_uint var_max_22451 = var_terminatorMax_22410 ;
    GALGAS_ipic_31__38_SequentialInstructionList var_computedInstructionList_22532 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_duration_computations.galgas", 596)) ;
    GALGAS_bool var_ok_22548 = GALGAS_bool (kIsInfOrEqual, var_min_22423.objectCompare (var_max_22451)) ;
    const GALGAS_ipic_31__38_Block temp_5 = inObject ;
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_22582 (temp_5.readProperty_mInstructionList (), kENUMERATION_DOWN) ;
    while (enumerator_22582.hasCurrentObject ()) {
      GALGAS_uint var_instructionMin_22702 ;
      GALGAS_uint var_instructionMax_22736 ;
      callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_22582.current_mInstruction (HERE).ptr (), ioArgument_ioExploredBlockMap, var_instructionMin_22702, var_instructionMax_22736, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 599)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        GALGAS_bool test_7 = var_ok_22548 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = GALGAS_bool (kIsInfOrEqual, var_instructionMin_22702.objectCompare (var_instructionMax_22736)) ;
        }
        test_6 = test_7.boolEnum () ;
        if (kBoolTrue == test_6) {
          var_min_22423 = var_min_22423.add_operation (var_instructionMin_22702, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 605)) ;
          var_max_22451 = var_max_22451.add_operation (var_instructionMax_22736, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 606)) ;
          {
          var_computedInstructionList_22532.setter_insertAtIndex (enumerator_22582.current_mInstruction (HERE), var_min_22423, var_max_22451, GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 607)) ;
          }
        }
      }
      if (kBoolFalse == test_6) {
        var_ok_22548 = GALGAS_bool (false) ;
        {
        var_computedInstructionList_22532.setter_insertAtIndex (enumerator_22582.current_mInstruction (HERE), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 610)), GALGAS_uint (uint32_t (0U)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 610)) ;
        }
      }
      enumerator_22582.gotoNextObject () ;
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_ok_22548.boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_ipic_31__38_Block temp_9 = inObject ;
        const GALGAS_ipic_31__38_Block temp_10 = inObject ;
        const GALGAS_ipic_31__38_Block temp_11 = inObject ;
        outArgument_outNewBlock = GALGAS_ipic_31__38_Block::constructor_new (temp_9.readProperty_mAddress (), temp_10.readProperty_mLabel (), var_computedInstructionList_22532, temp_11.readProperty_mTerminator (), var_terminatorMin_22391, var_terminatorMax_22410  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 614)) ;
        ioArgument_ioContinue = GALGAS_bool (true) ;
        {
        const GALGAS_ipic_31__38_Block temp_12 = inObject ;
        ioArgument_ioExploredBlockMap.setter_insertKey (temp_12.readProperty_mLabel (), var_min_22423, var_max_22451, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 623)) ;
        }
      }
    }
    if (kBoolFalse == test_8) {
      const GALGAS_ipic_31__38_Block temp_13 = inObject ;
      outArgument_outNewBlock = temp_13 ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_piccoloDeviceModel::GALGAS_piccoloDeviceModel (void) :
mProperty_mDeviceName (),
mProperty_mProcessorType (),
mProperty_mRomSize (),
mProperty_mBankCount (),
mProperty_mRegisterTable (),
mProperty_mRamBankTable (),
mProperty_mEepromSize (),
mProperty_mEepromAddress (),
mProperty_mConfigRegisterMap (),
mProperty_mSharedBankName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_piccoloDeviceModel::~ GALGAS_piccoloDeviceModel (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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
mProperty_mDeviceName (inOperand0),
mProperty_mProcessorType (inOperand1),
mProperty_mRomSize (inOperand2),
mProperty_mBankCount (inOperand3),
mProperty_mRegisterTable (inOperand4),
mProperty_mRamBankTable (inOperand5),
mProperty_mEepromSize (inOperand6),
mProperty_mEepromAddress (inOperand7),
mProperty_mConfigRegisterMap (inOperand8),
mProperty_mSharedBankName (inOperand9) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_piccoloDeviceModel GALGAS_piccoloDeviceModel::constructor_new (const GALGAS_lstring & in_mDeviceName,
                                                                      const GALGAS_processorType & in_mProcessorType,
                                                                      const GALGAS_luint & in_mRomSize,
                                                                      const GALGAS_luint & in_mBankCount,
                                                                      const GALGAS_registerTable & in_mRegisterTable,
                                                                      const GALGAS_ramBankTable & in_mRamBankTable,
                                                                      const GALGAS_uint & in_mEepromSize,
                                                                      const GALGAS_uint & in_mEepromAddress,
                                                                      const GALGAS_configRegisterMap & in_mConfigRegisterMap,
                                                                      const GALGAS_string & in_mSharedBankName 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_piccoloDeviceModel result ;
  if (in_mDeviceName.isValid () && in_mProcessorType.isValid () && in_mRomSize.isValid () && in_mBankCount.isValid () && in_mRegisterTable.isValid () && in_mRamBankTable.isValid () && in_mEepromSize.isValid () && in_mEepromAddress.isValid () && in_mConfigRegisterMap.isValid () && in_mSharedBankName.isValid ()) {
    result = GALGAS_piccoloDeviceModel (in_mDeviceName, in_mProcessorType, in_mRomSize, in_mBankCount, in_mRegisterTable, in_mRamBankTable, in_mEepromSize, in_mEepromAddress, in_mConfigRegisterMap, in_mSharedBankName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_piccoloDeviceModel::objectCompare (const GALGAS_piccoloDeviceModel & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeviceName.objectCompare (inOperand.mProperty_mDeviceName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProcessorType.objectCompare (inOperand.mProperty_mProcessorType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRomSize.objectCompare (inOperand.mProperty_mRomSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBankCount.objectCompare (inOperand.mProperty_mBankCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterTable.objectCompare (inOperand.mProperty_mRegisterTable) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRamBankTable.objectCompare (inOperand.mProperty_mRamBankTable) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEepromSize.objectCompare (inOperand.mProperty_mEepromSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEepromAddress.objectCompare (inOperand.mProperty_mEepromAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConfigRegisterMap.objectCompare (inOperand.mProperty_mConfigRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSharedBankName.objectCompare (inOperand.mProperty_mSharedBankName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_piccoloDeviceModel::isValid (void) const {
  return mProperty_mDeviceName.isValid () && mProperty_mProcessorType.isValid () && mProperty_mRomSize.isValid () && mProperty_mBankCount.isValid () && mProperty_mRegisterTable.isValid () && mProperty_mRamBankTable.isValid () && mProperty_mEepromSize.isValid () && mProperty_mEepromAddress.isValid () && mProperty_mConfigRegisterMap.isValid () && mProperty_mSharedBankName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_piccoloDeviceModel::drop (void) {
  mProperty_mDeviceName.drop () ;
  mProperty_mProcessorType.drop () ;
  mProperty_mRomSize.drop () ;
  mProperty_mBankCount.drop () ;
  mProperty_mRegisterTable.drop () ;
  mProperty_mRamBankTable.drop () ;
  mProperty_mEepromSize.drop () ;
  mProperty_mEepromAddress.drop () ;
  mProperty_mConfigRegisterMap.drop () ;
  mProperty_mSharedBankName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_piccoloDeviceModel::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @piccoloDeviceModel:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProcessorType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRomSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBankCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRamBankTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEepromSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEepromAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConfigRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSharedBankName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@piccoloDeviceModel type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_piccoloDeviceModel ("piccoloDeviceModel",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_piccoloDeviceModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_piccoloDeviceModel ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_piccoloDeviceModel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_piccoloDeviceModel (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
// At index 19 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
, END_PRODUCTION
// At index 20 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_eepromsize) // $eepromsize$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, END_PRODUCTION
// At index 26 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
, END_PRODUCTION
// At index 27 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_unusedregister) // $unusedregister$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (3) // <select_piccoloDevice_5F_syntax_2>
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, END_PRODUCTION
// At index 33 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
, END_PRODUCTION
// At index 34 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, END_PRODUCTION
// At index 37 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
, END_PRODUCTION
// At index 38 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
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
// At index 48 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
, END_PRODUCTION
// At index 49 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mirrorat) // $mirrorat$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, END_PRODUCTION
// At index 53 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
, END_PRODUCTION
// At index 54 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, END_PRODUCTION
// At index 58 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
, END_PRODUCTION
// At index 59 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
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
// At index 71 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
, END_PRODUCTION
// At index 72 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, END_PRODUCTION
// At index 76 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
, END_PRODUCTION
// At index 77 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, END_PRODUCTION
// At index 81 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, END_PRODUCTION
// At index 85 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2D_) // $-$
, END_PRODUCTION
// At index 87 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
, END_PRODUCTION
// At index 88 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__2F_) // $/$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, END_PRODUCTION
// At index 93 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
, END_PRODUCTION
// At index 94 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__5B_) // $[$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken__5D_) // $]$
, END_PRODUCTION
// At index 98 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
, END_PRODUCTION
// At index 99 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
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
// At index 111 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
, END_PRODUCTION
// At index 112 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_illegal) // $illegal$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_message) // $message$
, TERMINAL (C_Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, END_PRODUCTION
// At index 120 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
, END_PRODUCTION
// At index 121 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
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
// At index 135 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
, END_PRODUCTION
// At index 136 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
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
19, // index 1 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
20, // index 2 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
26, // index 3 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
27, // index 4 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
33, // index 5 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
34, // index 6 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
37, // index 7 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
38, // index 8 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
48, // index 9 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
49, // index 10 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
53, // index 11 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
54, // index 12 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
58, // index 13 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
59, // index 14 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
71, // index 15 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
72, // index 16 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
76, // index 17 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
77, // index 18 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
81, // index 19 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
85, // index 20 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
87, // index 21 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
88, // index 22 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
93, // index 23 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
94, // index 24 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
98, // index 25 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
99, // index 26 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
111, // index 27 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
112, // index 28 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
120, // index 29 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
121, // index 30 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
135, // index 31 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
136, // index 32 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
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
  macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_piccoloDevice_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
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
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_piccoloDevice_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_piccoloDevice_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                      gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_piccoloDevice_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element::GALGAS_bitSliceTable_2D_element (void) :
mProperty_lkey (),
mProperty_mSliceIndex (),
mProperty_mSliceSize () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element::~ GALGAS_bitSliceTable_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element::GALGAS_bitSliceTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1,
                                                                  const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSliceIndex (inOperand1),
mProperty_mSliceSize (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bitSliceTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                  const GALGAS_uint & in_mSliceIndex,
                                                                                  const GALGAS_uint & in_mSliceSize 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bitSliceTable_2D_element result ;
  if (in_lkey.isValid () && in_mSliceIndex.isValid () && in_mSliceSize.isValid ()) {
    result = GALGAS_bitSliceTable_2D_element (in_lkey, in_mSliceIndex, in_mSliceSize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bitSliceTable_2D_element::objectCompare (const GALGAS_bitSliceTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSliceIndex.objectCompare (inOperand.mProperty_mSliceIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSliceSize.objectCompare (inOperand.mProperty_mSliceSize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_bitSliceTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSliceIndex.isValid () && mProperty_mSliceSize.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSliceIndex.drop () ;
  mProperty_mSliceSize.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @bitSliceTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSliceIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSliceSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@bitSliceTable-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitSliceTable_2D_element ("bitSliceTable-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitSliceTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitSliceTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitSliceTable_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element::GALGAS_ramDefinitionList_2D_element (void) :
mProperty_mBankName (),
mProperty_mDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element::~ GALGAS_ramDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element::GALGAS_ramDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_declarationInRamList & inOperand1) :
mProperty_mBankName (inOperand0),
mProperty_mDeclaration (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ramDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_declarationInRamList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::constructor_new (const GALGAS_lstring & in_mBankName,
                                                                                          const GALGAS_declarationInRamList & in_mDeclaration 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramDefinitionList_2D_element result ;
  if (in_mBankName.isValid () && in_mDeclaration.isValid ()) {
    result = GALGAS_ramDefinitionList_2D_element (in_mBankName, in_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ramDefinitionList_2D_element::objectCompare (const GALGAS_ramDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBankName.objectCompare (inOperand.mProperty_mBankName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ramDefinitionList_2D_element::isValid (void) const {
  return mProperty_mBankName.isValid () && mProperty_mDeclaration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList_2D_element::drop (void) {
  mProperty_mBankName.drop () ;
  mProperty_mDeclaration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @ramDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBankName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ramDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ("ramDefinitionList-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ramDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ramDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element::GALGAS_configSettingList_2D_element (void) :
mProperty_mSettingName (),
mProperty_mSettingValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element::~ GALGAS_configSettingList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element::GALGAS_configSettingList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mSettingName (inOperand0),
mProperty_mSettingValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configSettingList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::constructor_new (const GALGAS_lstring & in_mSettingName,
                                                                                          const GALGAS_lstring & in_mSettingValue 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configSettingList_2D_element result ;
  if (in_mSettingName.isValid () && in_mSettingValue.isValid ()) {
    result = GALGAS_configSettingList_2D_element (in_mSettingName, in_mSettingValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_configSettingList_2D_element::objectCompare (const GALGAS_configSettingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSettingName.objectCompare (inOperand.mProperty_mSettingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSettingValue.objectCompare (inOperand.mProperty_mSettingValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_configSettingList_2D_element::isValid (void) const {
  return mProperty_mSettingName.isValid () && mProperty_mSettingValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configSettingList_2D_element::drop (void) {
  mProperty_mSettingName.drop () ;
  mProperty_mSettingValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configSettingList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @configSettingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSettingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSettingValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@configSettingList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configSettingList_2D_element ("configSettingList-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configSettingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configSettingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configSettingList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element::GALGAS_immediatSliceExpressionList_2D_element (void) :
mProperty_mSliceName (),
mProperty_mExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element::~ GALGAS_immediatSliceExpressionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element::GALGAS_immediatSliceExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_immediatExpression & inOperand1) :
mProperty_mSliceName (inOperand0),
mProperty_mExpression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element GALGAS_immediatSliceExpressionList_2D_element::constructor_new (const GALGAS_lstring & in_mSliceName,
                                                                                                              const GALGAS_immediatExpression & in_mExpression 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList_2D_element result ;
  if (in_mSliceName.isValid () && in_mExpression.isValid ()) {
    result = GALGAS_immediatSliceExpressionList_2D_element (in_mSliceName, in_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_immediatSliceExpressionList_2D_element::objectCompare (const GALGAS_immediatSliceExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSliceName.objectCompare (inOperand.mProperty_mSliceName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_immediatSliceExpressionList_2D_element::isValid (void) const {
  return mProperty_mSliceName.isValid () && mProperty_mExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList_2D_element::drop (void) {
  mProperty_mSliceName.drop () ;
  mProperty_mExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @immediatSliceExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSliceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@immediatSliceExpressionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ("immediatSliceExpressionList-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSliceExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSliceExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSliceExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element::GALGAS_constantDefinitionList_2D_element (void) :
mProperty_mConstantName (),
mProperty_mExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element::~ GALGAS_constantDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element::GALGAS_constantDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_immediatExpression & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mExpression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element GALGAS_constantDefinitionList_2D_element::constructor_new (const GALGAS_lstring & in_mConstantName,
                                                                                                    const GALGAS_immediatExpression & in_mExpression 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantDefinitionList_2D_element result ;
  if (in_mConstantName.isValid () && in_mExpression.isValid ()) {
    result = GALGAS_constantDefinitionList_2D_element (in_mConstantName, in_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constantDefinitionList_2D_element::objectCompare (const GALGAS_constantDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constantDefinitionList_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @constantDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constantDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ("constantDefinitionList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element::GALGAS_actualConfigurationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddress (),
mProperty_mRegisterValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element::~ GALGAS_actualConfigurationMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element::GALGAS_actualConfigurationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uint & inOperand1,
                                                                                    const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mRegisterValue (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualConfigurationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_uint::constructor_default (HERE),
                                                   GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                    const GALGAS_uint & in_mRegisterAddress,
                                                                                                    const GALGAS_uint & in_mRegisterValue 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap_2D_element result ;
  if (in_lkey.isValid () && in_mRegisterAddress.isValid () && in_mRegisterValue.isValid ()) {
    result = GALGAS_actualConfigurationMap_2D_element (in_lkey, in_mRegisterAddress, in_mRegisterValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualConfigurationMap_2D_element::objectCompare (const GALGAS_actualConfigurationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterValue.objectCompare (inOperand.mProperty_mRegisterValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actualConfigurationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @actualConfigurationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actualConfigurationMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ("actualConfigurationMap-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualConfigurationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualConfigurationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualConfigurationMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element::~ GALGAS_labelMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_labelMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_labelMap_2D_element (in_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_labelMap_2D_element::objectCompare (const GALGAS_labelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_labelMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_labelMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_labelMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @labelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@labelMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap_2D_element ("labelMap-element",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_labelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_labelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::~ GALGAS_constantMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_sint_36__34_ & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                        GALGAS_sint_36__34_::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                              const GALGAS_sint_36__34_ & in_mValue 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  if (in_lkey.isValid () && in_mValue.isValid ()) {
    result = GALGAS_constantMap_2D_element (in_lkey, in_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constantMap_2D_element::objectCompare (const GALGAS_constantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_constantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @constantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@constantMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantMap_2D_element ("constantMap-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsNoReturn (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element::~ GALGAS_routineMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_uint & inOperand2,
                                                            const GALGAS_uint & inOperand3,
                                                            const GALGAS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mIsNoReturn (inOperand1),
mProperty_mRequiredBank (inOperand2),
mProperty_mReturnedBank (inOperand3),
mProperty_mPreservesBank (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE),
                                       GALGAS_uint::constructor_default (HERE),
                                       GALGAS_uint::constructor_default (HERE),
                                       GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                            const GALGAS_bool & in_mIsNoReturn,
                                                                            const GALGAS_uint & in_mRequiredBank,
                                                                            const GALGAS_uint & in_mReturnedBank,
                                                                            const GALGAS_bool & in_mPreservesBank 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  if (in_lkey.isValid () && in_mIsNoReturn.isValid () && in_mRequiredBank.isValid () && in_mReturnedBank.isValid () && in_mPreservesBank.isValid ()) {
    result = GALGAS_routineMap_2D_element (in_lkey, in_mIsNoReturn, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineMap_2D_element::objectCompare (const GALGAS_routineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @routineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap_2D_element ("routineMap-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element::GALGAS_symbolTableForOptimizations_2D_element (void) :
mProperty_lkey (),
mProperty_mDefinitionLineIndex (),
mProperty_mIsDeletable () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element::~ GALGAS_symbolTableForOptimizations_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element::GALGAS_symbolTableForOptimizations_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_uint & inOperand1,
                                                                                              const GALGAS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionLineIndex (inOperand1),
mProperty_mIsDeletable (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForOptimizations_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_uint::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                              const GALGAS_uint & in_mDefinitionLineIndex,
                                                                                                              const GALGAS_bool & in_mIsDeletable 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations_2D_element result ;
  if (in_lkey.isValid () && in_mDefinitionLineIndex.isValid () && in_mIsDeletable.isValid ()) {
    result = GALGAS_symbolTableForOptimizations_2D_element (in_lkey, in_mDefinitionLineIndex, in_mIsDeletable) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_symbolTableForOptimizations_2D_element::objectCompare (const GALGAS_symbolTableForOptimizations_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefinitionLineIndex.objectCompare (inOperand.mProperty_mDefinitionLineIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsDeletable.objectCompare (inOperand.mProperty_mIsDeletable) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForOptimizations_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () && mProperty_mIsDeletable.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionLineIndex.drop () ;
  mProperty_mIsDeletable.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForOptimizations-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsDeletable.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@symbolTableForOptimizations-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ("symbolTableForOptimizations-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForOptimizations_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForOptimizations_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForOptimizations_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element::GALGAS_configFieldMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRegisterName (),
mProperty_mMaskValue (),
mProperty_mDescription (),
mProperty_mFieldSettingMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element::~ GALGAS_configFieldMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element::GALGAS_configFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_luint & inOperand2,
                                                                    const GALGAS_lstring & inOperand3,
                                                                    const GALGAS_fieldSettingMap & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mRegisterName (inOperand1),
mProperty_mMaskValue (inOperand2),
mProperty_mDescription (inOperand3),
mProperty_mFieldSettingMap (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configFieldMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_luint::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_fieldSettingMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                    const GALGAS_lstring & in_mRegisterName,
                                                                                    const GALGAS_luint & in_mMaskValue,
                                                                                    const GALGAS_lstring & in_mDescription,
                                                                                    const GALGAS_fieldSettingMap & in_mFieldSettingMap 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configFieldMap_2D_element result ;
  if (in_lkey.isValid () && in_mRegisterName.isValid () && in_mMaskValue.isValid () && in_mDescription.isValid () && in_mFieldSettingMap.isValid ()) {
    result = GALGAS_configFieldMap_2D_element (in_lkey, in_mRegisterName, in_mMaskValue, in_mDescription, in_mFieldSettingMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_configFieldMap_2D_element::objectCompare (const GALGAS_configFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMaskValue.objectCompare (inOperand.mProperty_mMaskValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDescription.objectCompare (inOperand.mProperty_mDescription) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFieldSettingMap.objectCompare (inOperand.mProperty_mFieldSettingMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_configFieldMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterName.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mMaskValue.drop () ;
  mProperty_mDescription.drop () ;
  mProperty_mFieldSettingMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @configFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMaskValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@configFieldMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configFieldMap_2D_element ("configFieldMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element::GALGAS_baseline_5F_routineDefinitionList_2D_element (void) :
mProperty_mRoutineName (),
mProperty_mPage (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element::~ GALGAS_baseline_5F_routineDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element::GALGAS_baseline_5F_routineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                          const GALGAS_bool & inOperand2,
                                                                                                          const GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                                          const GALGAS_location & inOperand4) :
mProperty_mRoutineName (inOperand0),
mProperty_mPage (inOperand1),
mProperty_mIsNoReturn (inOperand2),
mProperty_mInstructionList (inOperand3),
mProperty_mEndOfRoutineLocation (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_routineDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_luint::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_baseline_5F_instructionList::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                          const GALGAS_luint & in_mPage,
                                                                                                                          const GALGAS_bool & in_mIsNoReturn,
                                                                                                                          const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                          const GALGAS_location & in_mEndOfRoutineLocation 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList_2D_element result ;
  if (in_mRoutineName.isValid () && in_mPage.isValid () && in_mIsNoReturn.isValid () && in_mInstructionList.isValid () && in_mEndOfRoutineLocation.isValid ()) {
    result = GALGAS_baseline_5F_routineDefinitionList_2D_element (in_mRoutineName, in_mPage, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_routineDefinitionList_2D_element::objectCompare (const GALGAS_baseline_5F_routineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPage.objectCompare (inOperand.mProperty_mPage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfRoutineLocation.objectCompare (inOperand.mProperty_mEndOfRoutineLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_routineDefinitionList_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mPage.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList_2D_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mPage.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @baseline_routineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_routineDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ("baseline_routineDefinitionList-element",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_routineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_routineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_routineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element::GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element::~ GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element::GALGAS_baseline_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_baseline_5F_declaredRoutineMap_2D_element (in_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_declaredRoutineMap_2D_element::objectCompare (const GALGAS_baseline_5F_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_declaredRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @baseline_declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_declaredRoutineMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ("baseline_declaredRoutineMap-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element::GALGAS_baselineRoutineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsNoReturn (),
mProperty_mPage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element::~ GALGAS_baselineRoutineMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element::GALGAS_baselineRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_luint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsNoReturn (inOperand1),
mProperty_mPage (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baselineRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                            const GALGAS_bool & in_mIsNoReturn,
                                                                                            const GALGAS_luint & in_mPage 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap_2D_element result ;
  if (in_lkey.isValid () && in_mIsNoReturn.isValid () && in_mPage.isValid ()) {
    result = GALGAS_baselineRoutineMap_2D_element (in_lkey, in_mIsNoReturn, in_mPage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baselineRoutineMap_2D_element::objectCompare (const GALGAS_baselineRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPage.objectCompare (inOperand.mProperty_mPage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baselineRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mPage.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mPage.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @baselineRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baselineRoutineMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ("baselineRoutineMap-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baselineRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baselineRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element::GALGAS_baselineSymbolTableForOptimizations_2D_element (void) :
mProperty_lkey (),
mProperty_mDefinitionLineIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element::~ GALGAS_baselineSymbolTableForOptimizations_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element::GALGAS_baselineSymbolTableForOptimizations_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionLineIndex (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baselineSymbolTableForOptimizations_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                              const GALGAS_uint & in_mDefinitionLineIndex 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations_2D_element result ;
  if (in_lkey.isValid () && in_mDefinitionLineIndex.isValid ()) {
    result = GALGAS_baselineSymbolTableForOptimizations_2D_element (in_lkey, in_mDefinitionLineIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baselineSymbolTableForOptimizations_2D_element::objectCompare (const GALGAS_baselineSymbolTableForOptimizations_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefinitionLineIndex.objectCompare (inOperand.mProperty_mDefinitionLineIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baselineSymbolTableForOptimizations_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionLineIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @baselineSymbolTableForOptimizations-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baselineSymbolTableForOptimizations-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ("baselineSymbolTableForOptimizations-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baselineSymbolTableForOptimizations_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baselineSymbolTableForOptimizations_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineSymbolTableForOptimizations_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element::GALGAS_baseline_5F_symbolTable_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element::~ GALGAS_baseline_5F_symbolTable_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element::GALGAS_baseline_5F_symbolTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_baseline_5F_symbolTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                      const GALGAS_uint & in_mRoutineAddress 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable_2D_element result ;
  if (in_lkey.isValid () && in_mRoutineAddress.isValid ()) {
    result = GALGAS_baseline_5F_symbolTable_2D_element (in_lkey, in_mRoutineAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_baseline_5F_symbolTable_2D_element::objectCompare (const GALGAS_baseline_5F_symbolTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineAddress.objectCompare (inOperand.mProperty_mRoutineAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_symbolTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @baseline_symbolTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_symbolTable-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ("baseline_symbolTable-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_symbolTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_symbolTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_symbolTable_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element::GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) :
mProperty_mInterruptLocation (),
mProperty_mInstructionList (),
mProperty_mFirstSaveRegister (),
mProperty_mSecondSaveRegister (),
mProperty_mEndOfInterruptLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element::~ GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element::GALGAS_midrange_5F_interruptDefinitionList_2D_element (const GALGAS_location & inOperand0,
                                                                                                              const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_lstring & inOperand3,
                                                                                                              const GALGAS_location & inOperand4) :
mProperty_mInterruptLocation (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mFirstSaveRegister (inOperand2),
mProperty_mSecondSaveRegister (inOperand3),
mProperty_mEndOfInterruptLocation (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_interruptDefinitionList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_midrange_5F_instructionList::constructor_emptyList (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::constructor_new (const GALGAS_location & in_mInterruptLocation,
                                                                                                                              const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                              const GALGAS_lstring & in_mFirstSaveRegister,
                                                                                                                              const GALGAS_lstring & in_mSecondSaveRegister,
                                                                                                                              const GALGAS_location & in_mEndOfInterruptLocation 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList_2D_element result ;
  if (in_mInterruptLocation.isValid () && in_mInstructionList.isValid () && in_mFirstSaveRegister.isValid () && in_mSecondSaveRegister.isValid () && in_mEndOfInterruptLocation.isValid ()) {
    result = GALGAS_midrange_5F_interruptDefinitionList_2D_element (in_mInterruptLocation, in_mInstructionList, in_mFirstSaveRegister, in_mSecondSaveRegister, in_mEndOfInterruptLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_interruptDefinitionList_2D_element::objectCompare (const GALGAS_midrange_5F_interruptDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInterruptLocation.objectCompare (inOperand.mProperty_mInterruptLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFirstSaveRegister.objectCompare (inOperand.mProperty_mFirstSaveRegister) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSecondSaveRegister.objectCompare (inOperand.mProperty_mSecondSaveRegister) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInterruptLocation.objectCompare (inOperand.mProperty_mEndOfInterruptLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_interruptDefinitionList_2D_element::isValid (void) const {
  return mProperty_mInterruptLocation.isValid () && mProperty_mInstructionList.isValid () && mProperty_mFirstSaveRegister.isValid () && mProperty_mSecondSaveRegister.isValid () && mProperty_mEndOfInterruptLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::drop (void) {
  mProperty_mInterruptLocation.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mFirstSaveRegister.drop () ;
  mProperty_mSecondSaveRegister.drop () ;
  mProperty_mEndOfInterruptLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @midrange_interruptDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInterruptLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFirstSaveRegister.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSecondSaveRegister.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_interruptDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ("midrange_interruptDefinitionList-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_interruptDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_interruptDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_interruptDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element::GALGAS_midrange_5F_routineDefinitionList_2D_element (void) :
mProperty_mRoutineName (),
mProperty_mPage (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element::~ GALGAS_midrange_5F_routineDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element::GALGAS_midrange_5F_routineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_luint & inOperand1,
                                                                                                          const GALGAS_luint & inOperand2,
                                                                                                          const GALGAS_luint & inOperand3,
                                                                                                          const GALGAS_bool & inOperand4,
                                                                                                          const GALGAS_bool & inOperand5,
                                                                                                          const GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                                          const GALGAS_location & inOperand7) :
mProperty_mRoutineName (inOperand0),
mProperty_mPage (inOperand1),
mProperty_mRequiredBank (inOperand2),
mProperty_mReturnedBank (inOperand3),
mProperty_mPreservesBank (inOperand4),
mProperty_mIsNoReturn (inOperand5),
mProperty_mInstructionList (inOperand6),
mProperty_mEndOfRoutineLocation (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                          const GALGAS_luint & in_mPage,
                                                                                                                          const GALGAS_luint & in_mRequiredBank,
                                                                                                                          const GALGAS_luint & in_mReturnedBank,
                                                                                                                          const GALGAS_bool & in_mPreservesBank,
                                                                                                                          const GALGAS_bool & in_mIsNoReturn,
                                                                                                                          const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                          const GALGAS_location & in_mEndOfRoutineLocation 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList_2D_element result ;
  if (in_mRoutineName.isValid () && in_mPage.isValid () && in_mRequiredBank.isValid () && in_mReturnedBank.isValid () && in_mPreservesBank.isValid () && in_mIsNoReturn.isValid () && in_mInstructionList.isValid () && in_mEndOfRoutineLocation.isValid ()) {
    result = GALGAS_midrange_5F_routineDefinitionList_2D_element (in_mRoutineName, in_mPage, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_routineDefinitionList_2D_element::objectCompare (const GALGAS_midrange_5F_routineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPage.objectCompare (inOperand.mProperty_mPage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfRoutineLocation.objectCompare (inOperand.mProperty_mEndOfRoutineLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_routineDefinitionList_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mPage.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList_2D_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mPage.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @midrange_routineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_routineDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ("midrange_routineDefinitionList-element",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_routineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_routineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_routineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::~ GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                                                  const GALGAS_uint & in_mRoutineAddress 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element result ;
  if (in_lkey.isValid () && in_mRoutineAddress.isValid ()) {
    result = GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (in_lkey, in_mRoutineAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::objectCompare (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineAddress.objectCompare (inOperand.mProperty_mRoutineAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @midrange_symbolTableForConvertingRelatives-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_symbolTableForConvertingRelatives-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ("midrange_symbolTableForConvertingRelatives-element",
                                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element::GALGAS_midrange_5F_symbolTable_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element::~ GALGAS_midrange_5F_symbolTable_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element::GALGAS_midrange_5F_symbolTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_symbolTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                      const GALGAS_uint & in_mRoutineAddress 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable_2D_element result ;
  if (in_lkey.isValid () && in_mRoutineAddress.isValid ()) {
    result = GALGAS_midrange_5F_symbolTable_2D_element (in_lkey, in_mRoutineAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_symbolTable_2D_element::objectCompare (const GALGAS_midrange_5F_symbolTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineAddress.objectCompare (inOperand.mProperty_mRoutineAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_symbolTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @midrange_symbolTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_symbolTable-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ("midrange_symbolTable-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_symbolTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTable_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element::GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element::~ GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element::GALGAS_midrange_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_midrange_5F_declaredRoutineMap_2D_element (in_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_midrange_5F_declaredRoutineMap_2D_element::objectCompare (const GALGAS_midrange_5F_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_declaredRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @midrange_declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_declaredRoutineMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ("midrange_declaredRoutineMap-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element::GALGAS_bootloaderReservedRAMmap_2D_element (void) :
mProperty_lkey (),
mProperty_mReservedSize () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element::~ GALGAS_bootloaderReservedRAMmap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element::GALGAS_bootloaderReservedRAMmap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_luint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mReservedSize (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootloaderReservedRAMmap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_luint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                        const GALGAS_luint & in_mReservedSize 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap_2D_element result ;
  if (in_lkey.isValid () && in_mReservedSize.isValid ()) {
    result = GALGAS_bootloaderReservedRAMmap_2D_element (in_lkey, in_mReservedSize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bootloaderReservedRAMmap_2D_element::objectCompare (const GALGAS_bootloaderReservedRAMmap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReservedSize.objectCompare (inOperand.mProperty_mReservedSize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_bootloaderReservedRAMmap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReservedSize.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReservedSize.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @bootloaderReservedRAMmap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReservedSize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@bootloaderReservedRAMmap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ("bootloaderReservedRAMmap-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bootloaderReservedRAMmap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bootloaderReservedRAMmap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootloaderReservedRAMmap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) :
mProperty_mBlockName (),
mProperty_mInstructionList (),
mProperty_mBlockTerminaisonForBlockInstruction (),
mProperty_mEndOfBlock () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::~ GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                                const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                                const GALGAS_location & inOperand3) :
mProperty_mBlockName (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mBlockTerminaisonForBlockInstruction (inOperand2),
mProperty_mEndOfBlock (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::constructor_new (const GALGAS_lstring & in_mBlockName,
                                                                                                                                const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                                const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                                const GALGAS_location & in_mEndOfBlock 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList_2D_element result ;
  if (in_mBlockName.isValid () && in_mInstructionList.isValid () && in_mBlockTerminaisonForBlockInstruction.isValid () && in_mEndOfBlock.isValid ()) {
    result = GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (in_mBlockName, in_mInstructionList, in_mBlockTerminaisonForBlockInstruction, in_mEndOfBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::objectCompare (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBlockName.objectCompare (inOperand.mProperty_mBlockName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBlockTerminaisonForBlockInstruction.objectCompare (inOperand.mProperty_mBlockTerminaisonForBlockInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBlock.objectCompare (inOperand.mProperty_mEndOfBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::isValid (void) const {
  return mProperty_mBlockName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::drop (void) {
  mProperty_mBlockName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mBlockTerminaisonForBlockInstruction.drop () ;
  mProperty_mEndOfBlock.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @pic18BlockInstructionBlockList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBlockName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18BlockInstructionBlockList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ("pic18BlockInstructionBlockList-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) :
mProperty_mInterruptName (),
mProperty_mFastReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfInterruptLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::~ GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::GALGAS_pic_31__38_InterruptDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                                            const GALGAS_location & inOperand3) :
mProperty_mInterruptName (inOperand0),
mProperty_mFastReturn (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mEndOfInterruptLocation (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_InterruptDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::constructor_new (const GALGAS_lstring & in_mInterruptName,
                                                                                                                            const GALGAS_bool & in_mFastReturn,
                                                                                                                            const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                            const GALGAS_location & in_mEndOfInterruptLocation 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList_2D_element result ;
  if (in_mInterruptName.isValid () && in_mFastReturn.isValid () && in_mInstructionList.isValid () && in_mEndOfInterruptLocation.isValid ()) {
    result = GALGAS_pic_31__38_InterruptDefinitionList_2D_element (in_mInterruptName, in_mFastReturn, in_mInstructionList, in_mEndOfInterruptLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_InterruptDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInterruptName.objectCompare (inOperand.mProperty_mInterruptName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFastReturn.objectCompare (inOperand.mProperty_mFastReturn) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInterruptLocation.objectCompare (inOperand.mProperty_mEndOfInterruptLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InterruptDefinitionList_2D_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mFastReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInterruptLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mFastReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInterruptLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @pic18InterruptDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInterruptName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFastReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18InterruptDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ("pic18InterruptDefinitionList-element",
                                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_InterruptDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_InterruptDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InterruptDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) :
mProperty_mRoutineName (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::~ GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::GALGAS_pic_31__38_RoutineDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_luint & inOperand1,
                                                                                                        const GALGAS_luint & inOperand2,
                                                                                                        const GALGAS_bool & inOperand3,
                                                                                                        const GALGAS_bool & inOperand4,
                                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                                        const GALGAS_location & inOperand6) :
mProperty_mRoutineName (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4),
mProperty_mInstructionList (inOperand5),
mProperty_mEndOfRoutineLocation (inOperand6) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_RoutineDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_luint::constructor_default (HERE),
                                                             GALGAS_luint::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE),
                                                             GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::constructor_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                        const GALGAS_luint & in_mRequiredBank,
                                                                                                                        const GALGAS_luint & in_mReturnedBank,
                                                                                                                        const GALGAS_bool & in_mPreservesBank,
                                                                                                                        const GALGAS_bool & in_mIsNoReturn,
                                                                                                                        const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                        const GALGAS_location & in_mEndOfRoutineLocation 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList_2D_element result ;
  if (in_mRoutineName.isValid () && in_mRequiredBank.isValid () && in_mReturnedBank.isValid () && in_mPreservesBank.isValid () && in_mIsNoReturn.isValid () && in_mInstructionList.isValid () && in_mEndOfRoutineLocation.isValid ()) {
    result = GALGAS_pic_31__38_RoutineDefinitionList_2D_element (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_RoutineDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfRoutineLocation.objectCompare (inOperand.mProperty_mEndOfRoutineLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @pic18RoutineDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18RoutineDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ("pic18RoutineDefinitionList-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RoutineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RoutineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RoutineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element::GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) :
mProperty_mMacroName (),
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element::~ GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element::GALGAS_pic_31__38_MacroDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstringlist & inOperand1,
                                                                                                    const GALGAS_pic_31__38_InstructionList & inOperand2) :
mProperty_mMacroName (inOperand0),
mProperty_mConstantNameList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_MacroDefinitionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE),
                                                           GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::constructor_new (const GALGAS_lstring & in_mMacroName,
                                                                                                                    const GALGAS_lstringlist & in_mConstantNameList,
                                                                                                                    const GALGAS_pic_31__38_InstructionList & in_mInstructionList 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList_2D_element result ;
  if (in_mMacroName.isValid () && in_mConstantNameList.isValid () && in_mInstructionList.isValid ()) {
    result = GALGAS_pic_31__38_MacroDefinitionList_2D_element (in_mMacroName, in_mConstantNameList, in_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_MacroDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMacroName.objectCompare (inOperand.mProperty_mMacroName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantNameList.objectCompare (inOperand.mProperty_mConstantNameList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_MacroDefinitionList_2D_element::isValid (void) const {
  return mProperty_mMacroName.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::drop (void) {
  mProperty_mMacroName.drop () ;
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @pic18MacroDefinitionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMacroName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18MacroDefinitionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ("pic18MacroDefinitionList-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_MacroDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element::GALGAS_pic_31__38_MacroMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element::~ GALGAS_pic_31__38_MacroMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element::GALGAS_pic_31__38_MacroMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstringlist & inOperand1,
                                                                              const GALGAS_pic_31__38_InstructionList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mConstantNameList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_MacroMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                              const GALGAS_lstringlist & in_mConstantNameList,
                                                                                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap_2D_element result ;
  if (in_lkey.isValid () && in_mConstantNameList.isValid () && in_mInstructionList.isValid ()) {
    result = GALGAS_pic_31__38_MacroMap_2D_element (in_lkey, in_mConstantNameList, in_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_MacroMap_2D_element::objectCompare (const GALGAS_pic_31__38_MacroMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantNameList.objectCompare (inOperand.mProperty_mConstantNameList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_MacroMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @pic18MacroMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18MacroMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ("pic18MacroMap-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_MacroMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element::GALGAS_routineDeclarationList_2D_element (void) :
mProperty_mRoutineName (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element::~ GALGAS_routineDeclarationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element::GALGAS_routineDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_luint & inOperand1,
                                                                                    const GALGAS_luint & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4) :
mProperty_mRoutineName (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineDeclarationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_luint::constructor_default (HERE),
                                                   GALGAS_luint::constructor_default (HERE),
                                                   GALGAS_bool::constructor_default (HERE),
                                                   GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::constructor_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                    const GALGAS_luint & in_mRequiredBank,
                                                                                                    const GALGAS_luint & in_mReturnedBank,
                                                                                                    const GALGAS_bool & in_mPreservesBank,
                                                                                                    const GALGAS_bool & in_mIsNoReturn 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDeclarationList_2D_element result ;
  if (in_mRoutineName.isValid () && in_mRequiredBank.isValid () && in_mReturnedBank.isValid () && in_mPreservesBank.isValid () && in_mIsNoReturn.isValid ()) {
    result = GALGAS_routineDeclarationList_2D_element (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineDeclarationList_2D_element::objectCompare (const GALGAS_routineDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineDeclarationList_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList_2D_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @routineDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineDeclarationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ("routineDeclarationList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (void) :
mProperty_mDataName (),
mProperty_mValueList (),
mProperty_mIsByteList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element::~ GALGAS_dataList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_immediatExpressionList & inOperand1,
                                                        const GALGAS_bool & inOperand2) :
mProperty_mDataName (inOperand0),
mProperty_mValueList (inOperand1),
mProperty_mIsByteList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_dataList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_immediatExpressionList::constructor_emptyList (HERE),
                                     GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::constructor_new (const GALGAS_lstring & in_mDataName,
                                                                        const GALGAS_immediatExpressionList & in_mValueList,
                                                                        const GALGAS_bool & in_mIsByteList 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  if (in_mDataName.isValid () && in_mValueList.isValid () && in_mIsByteList.isValid ()) {
    result = GALGAS_dataList_2D_element (in_mDataName, in_mValueList, in_mIsByteList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dataList_2D_element::objectCompare (const GALGAS_dataList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDataName.objectCompare (inOperand.mProperty_mDataName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValueList.objectCompare (inOperand.mProperty_mValueList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsByteList.objectCompare (inOperand.mProperty_mIsByteList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_dataList_2D_element::isValid (void) const {
  return mProperty_mDataName.isValid () && mProperty_mValueList.isValid () && mProperty_mIsByteList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList_2D_element::drop (void) {
  mProperty_mDataName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mIsByteList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @dataList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDataName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsByteList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dataList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataList_2D_element ("dataList-element",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element::GALGAS_caseConstantMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element::~ GALGAS_caseConstantMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element::GALGAS_caseConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_caseConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_caseConstantMap_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_caseConstantMap_2D_element (in_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_caseConstantMap_2D_element::objectCompare (const GALGAS_caseConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_caseConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @caseConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@caseConstantMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_caseConstantMap_2D_element ("caseConstantMap-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_caseConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_caseConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_caseConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (void) :
mProperty_lkey (),
mProperty_mData (),
mProperty_mIsData_38_ () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element::~ GALGAS_pic_31__38__5F_dataMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uintlist & inOperand1,
                                                                                    const GALGAS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mData (inOperand1),
mProperty_mIsData_38_ (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38__5F_dataMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_uintlist::constructor_emptyList (HERE),
                                                   GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                    const GALGAS_uintlist & in_mData,
                                                                                                    const GALGAS_bool & in_mIsData8 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  if (in_lkey.isValid () && in_mData.isValid () && in_mIsData8.isValid ()) {
    result = GALGAS_pic_31__38__5F_dataMap_2D_element (in_lkey, in_mData, in_mIsData8) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38__5F_dataMap_2D_element::objectCompare (const GALGAS_pic_31__38__5F_dataMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mData.objectCompare (inOperand.mProperty_mData) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsData_38_.objectCompare (inOperand.mProperty_mIsData_38_) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38__5F_dataMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mData.isValid () && mProperty_mIsData_38_.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mData.drop () ;
  mProperty_mIsData_38_.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @pic18_dataMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mData.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsData_38_.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18_dataMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ("pic18_dataMap-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element::GALGAS_ipic_31__38_BlockList_2D_element (void) :
mProperty_mBlock () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element::~ GALGAS_ipic_31__38_BlockList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element::GALGAS_ipic_31__38_BlockList_2D_element (const GALGAS_ipic_31__38_Block & inOperand0) :
mProperty_mBlock (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element GALGAS_ipic_31__38_BlockList_2D_element::constructor_new (const GALGAS_ipic_31__38_Block & in_mBlock 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList_2D_element result ;
  if (in_mBlock.isValid ()) {
    result = GALGAS_ipic_31__38_BlockList_2D_element (in_mBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_BlockList_2D_element::objectCompare (const GALGAS_ipic_31__38_BlockList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBlock.objectCompare (inOperand.mProperty_mBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_BlockList_2D_element::isValid (void) const {
  return mProperty_mBlock.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList_2D_element::drop (void) {
  mProperty_mBlock.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @ipic18BlockList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ipic18BlockList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ("ipic18BlockList-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_BlockList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_BlockList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_BlockList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element::GALGAS_symbolTableForBlockOptimization_2D_element (void) :
mProperty_lkey (),
mProperty_mDefinitionBlockIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element::~ GALGAS_symbolTableForBlockOptimization_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element::GALGAS_symbolTableForBlockOptimization_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionBlockIndex (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForBlockOptimization_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                      const GALGAS_uint & in_mDefinitionBlockIndex 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization_2D_element result ;
  if (in_lkey.isValid () && in_mDefinitionBlockIndex.isValid ()) {
    result = GALGAS_symbolTableForBlockOptimization_2D_element (in_lkey, in_mDefinitionBlockIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_symbolTableForBlockOptimization_2D_element::objectCompare (const GALGAS_symbolTableForBlockOptimization_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefinitionBlockIndex.objectCompare (inOperand.mProperty_mDefinitionBlockIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForBlockOptimization_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionBlockIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionBlockIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForBlockOptimization-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefinitionBlockIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@symbolTableForBlockOptimization-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ("symbolTableForBlockOptimization-element",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForBlockOptimization_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForBlockOptimization_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForBlockOptimization_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element::GALGAS_symbolTableForClusterOrdering_2D_element (void) :
mProperty_lkey (),
mProperty_mCluster () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element::~ GALGAS_symbolTableForClusterOrdering_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element::GALGAS_symbolTableForClusterOrdering_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mCluster (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForClusterOrdering_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                  const GALGAS_uint & in_mCluster 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering_2D_element result ;
  if (in_lkey.isValid () && in_mCluster.isValid ()) {
    result = GALGAS_symbolTableForClusterOrdering_2D_element (in_lkey, in_mCluster) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_symbolTableForClusterOrdering_2D_element::objectCompare (const GALGAS_symbolTableForClusterOrdering_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCluster.objectCompare (inOperand.mProperty_mCluster) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForClusterOrdering_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCluster.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCluster.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForClusterOrdering-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCluster.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@symbolTableForClusterOrdering-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ("symbolTableForClusterOrdering-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForClusterOrdering_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForClusterOrdering_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForClusterOrdering_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element::GALGAS_symbolTableForRelativesResolution_2D_element (void) :
mProperty_lkey (),
mProperty_mLabelAddress () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element::~ GALGAS_symbolTableForRelativesResolution_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element::GALGAS_symbolTableForRelativesResolution_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelAddress (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_symbolTableForRelativesResolution_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                          const GALGAS_uint & in_mLabelAddress 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution_2D_element result ;
  if (in_lkey.isValid () && in_mLabelAddress.isValid ()) {
    result = GALGAS_symbolTableForRelativesResolution_2D_element (in_lkey, in_mLabelAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_symbolTableForRelativesResolution_2D_element::objectCompare (const GALGAS_symbolTableForRelativesResolution_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabelAddress.objectCompare (inOperand.mProperty_mLabelAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForRelativesResolution_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelAddress.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelAddress.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @symbolTableForRelativesResolution-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabelAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@symbolTableForRelativesResolution-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ("symbolTableForRelativesResolution-element",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForRelativesResolution_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForRelativesResolution_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForRelativesResolution_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) :
mProperty_lkey (),
mProperty_mDataAddress () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::~ GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::GALGAS_pic_31__38__5F_dataAddressMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDataAddress (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38__5F_dataAddressMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                  const GALGAS_uint & in_mDataAddress 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap_2D_element result ;
  if (in_lkey.isValid () && in_mDataAddress.isValid ()) {
    result = GALGAS_pic_31__38__5F_dataAddressMap_2D_element (in_lkey, in_mDataAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38__5F_dataAddressMap_2D_element::objectCompare (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDataAddress.objectCompare (inOperand.mProperty_mDataAddress) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38__5F_dataAddressMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDataAddress.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDataAddress.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @pic18_dataAddressMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDataAddress.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@pic18_dataAddressMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ("pic18_dataAddressMap-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataAddressMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataAddressMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataAddressMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element::GALGAS_declaredRoutineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element::~ GALGAS_declaredRoutineMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element::GALGAS_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_luint & inOperand1,
                                                                            const GALGAS_luint & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_bool & inOperand4,
                                                                            const GALGAS_pic_31__38_InstructionList & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4),
mProperty_mInstructionList (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_declaredRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_luint::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_pic_31__38_InstructionList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                            const GALGAS_luint & in_mRequiredBank,
                                                                                            const GALGAS_luint & in_mReturnedBank,
                                                                                            const GALGAS_bool & in_mPreservesBank,
                                                                                            const GALGAS_bool & in_mIsNoReturn,
                                                                                            const GALGAS_pic_31__38_InstructionList & in_mInstructionList 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap_2D_element result ;
  if (in_lkey.isValid () && in_mRequiredBank.isValid () && in_mReturnedBank.isValid () && in_mPreservesBank.isValid () && in_mIsNoReturn.isValid () && in_mInstructionList.isValid ()) {
    result = GALGAS_declaredRoutineMap_2D_element (in_lkey, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_declaredRoutineMap_2D_element::objectCompare (const GALGAS_declaredRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_declaredRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @declaredRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@declaredRoutineMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ("declaredRoutineMap-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element::GALGAS_blockInstructionBlockMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInstructionList (),
mProperty_mBlockTerminaisonForBlockInstruction (),
mProperty_mEndOfBlock () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element::~ GALGAS_blockInstructionBlockMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element::GALGAS_blockInstructionBlockMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                        const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                        const GALGAS_location & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mBlockTerminaisonForBlockInstruction (inOperand2),
mProperty_mEndOfBlock (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element GALGAS_blockInstructionBlockMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                        const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                        const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                        const GALGAS_location & in_mEndOfBlock 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap_2D_element result ;
  if (in_lkey.isValid () && in_mInstructionList.isValid () && in_mBlockTerminaisonForBlockInstruction.isValid () && in_mEndOfBlock.isValid ()) {
    result = GALGAS_blockInstructionBlockMap_2D_element (in_lkey, in_mInstructionList, in_mBlockTerminaisonForBlockInstruction, in_mEndOfBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_blockInstructionBlockMap_2D_element::objectCompare (const GALGAS_blockInstructionBlockMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBlockTerminaisonForBlockInstruction.objectCompare (inOperand.mProperty_mBlockTerminaisonForBlockInstruction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBlock.objectCompare (inOperand.mProperty_mEndOfBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_blockInstructionBlockMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mBlockTerminaisonForBlockInstruction.drop () ;
  mProperty_mEndOfBlock.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @blockInstructionBlockMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@blockInstructionBlockMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ("blockInstructionBlockMap-element",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInstructionBlockMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInstructionBlockMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInstructionBlockMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element::GALGAS_blockInitialBankSelectionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInitialBankSelection (),
mProperty_mSourceBlock () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element::~ GALGAS_blockInitialBankSelectionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element::GALGAS_blockInitialBankSelectionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_uint & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mInitialBankSelection (inOperand1),
mProperty_mSourceBlock (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_blockInitialBankSelectionMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                const GALGAS_uint & in_mInitialBankSelection,
                                                                                                                const GALGAS_string & in_mSourceBlock 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap_2D_element result ;
  if (in_lkey.isValid () && in_mInitialBankSelection.isValid () && in_mSourceBlock.isValid ()) {
    result = GALGAS_blockInitialBankSelectionMap_2D_element (in_lkey, in_mInitialBankSelection, in_mSourceBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_blockInitialBankSelectionMap_2D_element::objectCompare (const GALGAS_blockInitialBankSelectionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialBankSelection.objectCompare (inOperand.mProperty_mInitialBankSelection) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceBlock.objectCompare (inOperand.mProperty_mSourceBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_blockInitialBankSelectionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialBankSelection.isValid () && mProperty_mSourceBlock.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialBankSelection.drop () ;
  mProperty_mSourceBlock.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @blockInitialBankSelectionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialBankSelection.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@blockInitialBankSelectionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ("blockInitialBankSelectionMap-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInitialBankSelectionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInitialBankSelectionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInitialBankSelectionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element::GALGAS_neededConversionForClusterOrder_2D_element (void) :
mProperty_lkey (),
mProperty_mConversions () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element::~ GALGAS_neededConversionForClusterOrder_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element::GALGAS_neededConversionForClusterOrder_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConversions (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_neededConversionForClusterOrder_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                                      const GALGAS_uint & in_mConversions 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder_2D_element result ;
  if (in_lkey.isValid () && in_mConversions.isValid ()) {
    result = GALGAS_neededConversionForClusterOrder_2D_element (in_lkey, in_mConversions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_neededConversionForClusterOrder_2D_element::objectCompare (const GALGAS_neededConversionForClusterOrder_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConversions.objectCompare (inOperand.mProperty_mConversions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_neededConversionForClusterOrder_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConversions.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConversions.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @neededConversionForClusterOrder-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConversions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@neededConversionForClusterOrder-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ("neededConversionForClusterOrder-element",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_neededConversionForClusterOrder_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_neededConversionForClusterOrder_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_neededConversionForClusterOrder_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element::GALGAS_generatedCodeMap_2D_element (void) :
mProperty_lkey (),
mProperty_mCode (),
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element::~ GALGAS_generatedCodeMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element::GALGAS_generatedCodeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_codeList & inOperand1,
                                                                        const GALGAS_ipic_31__38_SequentialInstruction & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mCode (inOperand1),
mProperty_mInstruction (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element GALGAS_generatedCodeMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                        const GALGAS_codeList & in_mCode,
                                                                                        const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generatedCodeMap_2D_element result ;
  if (in_lkey.isValid () && in_mCode.isValid () && in_mInstruction.isValid ()) {
    result = GALGAS_generatedCodeMap_2D_element (in_lkey, in_mCode, in_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_generatedCodeMap_2D_element::objectCompare (const GALGAS_generatedCodeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCode.objectCompare (inOperand.mProperty_mCode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_generatedCodeMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCode.isValid () && mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCode.drop () ;
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @generatedCodeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@generatedCodeMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ("generatedCodeMap-element",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generatedCodeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generatedCodeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generatedCodeMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element::GALGAS_blockMapForStackComputation_2D_element (void) :
mProperty_lkey (),
mProperty_mBlock () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element::~ GALGAS_blockMapForStackComputation_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element::GALGAS_blockMapForStackComputation_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_ipic_31__38_Block & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mBlock (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element GALGAS_blockMapForStackComputation_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                              const GALGAS_ipic_31__38_Block & in_mBlock 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation_2D_element result ;
  if (in_lkey.isValid () && in_mBlock.isValid ()) {
    result = GALGAS_blockMapForStackComputation_2D_element (in_lkey, in_mBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_blockMapForStackComputation_2D_element::objectCompare (const GALGAS_blockMapForStackComputation_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBlock.objectCompare (inOperand.mProperty_mBlock) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_blockMapForStackComputation_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBlock.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBlock.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @blockMapForStackComputation-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@blockMapForStackComputation-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ("blockMapForStackComputation-element",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockMapForStackComputation_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockMapForStackComputation_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockMapForStackComputation_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (void) :
mProperty_lkey (),
mProperty_mCalledRoutineSet (),
mProperty_mTerminatorStackNeeds () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element::~ GALGAS_routineCallMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_stringset & inOperand1,
                                                                    const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mCalledRoutineSet (inOperand1),
mProperty_mTerminatorStackNeeds (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineCallMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_stringset::constructor_emptySet (HERE),
                                           GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                    const GALGAS_stringset & in_mCalledRoutineSet,
                                                                                    const GALGAS_uint & in_mTerminatorStackNeeds 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  if (in_lkey.isValid () && in_mCalledRoutineSet.isValid () && in_mTerminatorStackNeeds.isValid ()) {
    result = GALGAS_routineCallMap_2D_element (in_lkey, in_mCalledRoutineSet, in_mTerminatorStackNeeds) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineCallMap_2D_element::objectCompare (const GALGAS_routineCallMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCalledRoutineSet.objectCompare (inOperand.mProperty_mCalledRoutineSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminatorStackNeeds.objectCompare (inOperand.mProperty_mTerminatorStackNeeds) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineCallMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCalledRoutineSet.isValid () && mProperty_mTerminatorStackNeeds.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCalledRoutineSet.drop () ;
  mProperty_mTerminatorStackNeeds.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @routineCallMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCalledRoutineSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminatorStackNeeds.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineCallMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineCallMap_2D_element ("routineCallMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineCallMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineCallMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineCallMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element::GALGAS_routineStackRequirementMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLevels () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element::~ GALGAS_routineStackRequirementMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element::GALGAS_routineStackRequirementMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLevels (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineStackRequirementMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                            const GALGAS_uint & in_mLevels 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap_2D_element result ;
  if (in_lkey.isValid () && in_mLevels.isValid ()) {
    result = GALGAS_routineStackRequirementMap_2D_element (in_lkey, in_mLevels) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineStackRequirementMap_2D_element::objectCompare (const GALGAS_routineStackRequirementMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLevels.objectCompare (inOperand.mProperty_mLevels) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_routineStackRequirementMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLevels.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLevels.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @routineStackRequirementMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLevels.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@routineStackRequirementMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ("routineStackRequirementMap-element",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineStackRequirementMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineStackRequirementMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineStackRequirementMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element::GALGAS_blockDurationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mMinDuration (),
mProperty_mMaxDuration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element::~ GALGAS_blockDurationMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element::GALGAS_blockDurationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mMinDuration (inOperand1),
mProperty_mMaxDuration (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_blockDurationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE),
                                             GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                        const GALGAS_uint & in_mMinDuration,
                                                                                        const GALGAS_uint & in_mMaxDuration 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockDurationMap_2D_element result ;
  if (in_lkey.isValid () && in_mMinDuration.isValid () && in_mMaxDuration.isValid ()) {
    result = GALGAS_blockDurationMap_2D_element (in_lkey, in_mMinDuration, in_mMaxDuration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_blockDurationMap_2D_element::objectCompare (const GALGAS_blockDurationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMinDuration.objectCompare (inOperand.mProperty_mMinDuration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMaxDuration.objectCompare (inOperand.mProperty_mMaxDuration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_blockDurationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMinDuration.isValid () && mProperty_mMaxDuration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mMinDuration.drop () ;
  mProperty_mMaxDuration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @blockDurationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMinDuration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMaxDuration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@blockDurationMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_blockDurationMap_2D_element ("blockDurationMap-element",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockDurationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockDurationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockDurationMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element::GALGAS_declaredByteMap_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element::~ GALGAS_declaredByteMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element::GALGAS_declaredByteMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_declaredByteMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredByteMap_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_declaredByteMap_2D_element (in_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_declaredByteMap_2D_element::objectCompare (const GALGAS_declaredByteMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_declaredByteMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @declaredByteMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@declaredByteMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declaredByteMap_2D_element ("declaredByteMap-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredByteMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredByteMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredByteMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element::GALGAS_registerTable_2D_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddressList (),
mProperty_mSize (),
mProperty_mBitSliceTable (),
mProperty_mBitDefinitionString (),
mProperty_mProtection () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element::~ GALGAS_registerTable_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element::GALGAS_registerTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uintlist & inOperand1,
                                                                  const GALGAS_uint & inOperand2,
                                                                  const GALGAS_bitSliceTable & inOperand3,
                                                                  const GALGAS_string & inOperand4,
                                                                  const GALGAS_registerProtection & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddressList (inOperand1),
mProperty_mSize (inOperand2),
mProperty_mBitSliceTable (inOperand3),
mProperty_mBitDefinitionString (inOperand4),
mProperty_mProtection (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                  const GALGAS_uintlist & in_mRegisterAddressList,
                                                                                  const GALGAS_uint & in_mSize,
                                                                                  const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                                                  const GALGAS_string & in_mBitDefinitionString,
                                                                                  const GALGAS_registerProtection & in_mProtection 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerTable_2D_element result ;
  if (in_lkey.isValid () && in_mRegisterAddressList.isValid () && in_mSize.isValid () && in_mBitSliceTable.isValid () && in_mBitDefinitionString.isValid () && in_mProtection.isValid ()) {
    result = GALGAS_registerTable_2D_element (in_lkey, in_mRegisterAddressList, in_mSize, in_mBitSliceTable, in_mBitDefinitionString, in_mProtection) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_registerTable_2D_element::objectCompare (const GALGAS_registerTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddressList.objectCompare (inOperand.mProperty_mRegisterAddressList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSize.objectCompare (inOperand.mProperty_mSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitSliceTable.objectCompare (inOperand.mProperty_mBitSliceTable) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitDefinitionString.objectCompare (inOperand.mProperty_mBitDefinitionString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProtection.objectCompare (inOperand.mProperty_mProtection) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_registerTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddressList.isValid () && mProperty_mSize.isValid () && mProperty_mBitSliceTable.isValid () && mProperty_mBitDefinitionString.isValid () && mProperty_mProtection.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddressList.drop () ;
  mProperty_mSize.drop () ;
  mProperty_mBitSliceTable.drop () ;
  mProperty_mBitDefinitionString.drop () ;
  mProperty_mProtection.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerTable_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @registerTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddressList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitSliceTable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitDefinitionString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProtection.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@registerTable-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerTable_2D_element ("registerTable-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerTable_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element::GALGAS_ramBankTable_2D_element (void) :
mProperty_lkey (),
mProperty_mFirstAddress (),
mProperty_mFirstFreeAddress (),
mProperty_mLastAddressPlusOne (),
mProperty_mMirrorOffsetList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element::~ GALGAS_ramBankTable_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element::GALGAS_ramBankTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_uint & inOperand1,
                                                                const GALGAS_uint & inOperand2,
                                                                const GALGAS_uint & inOperand3,
                                                                const GALGAS_uintlist & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mFirstAddress (inOperand1),
mProperty_mFirstFreeAddress (inOperand2),
mProperty_mLastAddressPlusOne (inOperand3),
mProperty_mMirrorOffsetList (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ramBankTable_2D_element (GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uint::constructor_default (HERE),
                                         GALGAS_uintlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                const GALGAS_uint & in_mFirstAddress,
                                                                                const GALGAS_uint & in_mFirstFreeAddress,
                                                                                const GALGAS_uint & in_mLastAddressPlusOne,
                                                                                const GALGAS_uintlist & in_mMirrorOffsetList 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramBankTable_2D_element result ;
  if (in_lkey.isValid () && in_mFirstAddress.isValid () && in_mFirstFreeAddress.isValid () && in_mLastAddressPlusOne.isValid () && in_mMirrorOffsetList.isValid ()) {
    result = GALGAS_ramBankTable_2D_element (in_lkey, in_mFirstAddress, in_mFirstFreeAddress, in_mLastAddressPlusOne, in_mMirrorOffsetList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ramBankTable_2D_element::objectCompare (const GALGAS_ramBankTable_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFirstAddress.objectCompare (inOperand.mProperty_mFirstAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFirstFreeAddress.objectCompare (inOperand.mProperty_mFirstFreeAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLastAddressPlusOne.objectCompare (inOperand.mProperty_mLastAddressPlusOne) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMirrorOffsetList.objectCompare (inOperand.mProperty_mMirrorOffsetList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ramBankTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFirstAddress.isValid () && mProperty_mFirstFreeAddress.isValid () && mProperty_mLastAddressPlusOne.isValid () && mProperty_mMirrorOffsetList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFirstAddress.drop () ;
  mProperty_mFirstFreeAddress.drop () ;
  mProperty_mLastAddressPlusOne.drop () ;
  mProperty_mMirrorOffsetList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @ramBankTable-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFirstAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFirstFreeAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLastAddressPlusOne.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMirrorOffsetList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ramBankTable-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ramBankTable_2D_element ("ramBankTable-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ramBankTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ramBankTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramBankTable_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element::GALGAS_illegalMaskList_2D_element (void) :
mProperty_mIllegalValue (),
mProperty_mIllegalMask (),
mProperty_mDescription () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element::~ GALGAS_illegalMaskList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element::GALGAS_illegalMaskList_2D_element (const GALGAS_luint & inOperand0,
                                                                      const GALGAS_luint & inOperand1,
                                                                      const GALGAS_lstring & inOperand2) :
mProperty_mIllegalValue (inOperand0),
mProperty_mIllegalMask (inOperand1),
mProperty_mDescription (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_illegalMaskList_2D_element (GALGAS_luint::constructor_default (HERE),
                                            GALGAS_luint::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::constructor_new (const GALGAS_luint & in_mIllegalValue,
                                                                                      const GALGAS_luint & in_mIllegalMask,
                                                                                      const GALGAS_lstring & in_mDescription 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_illegalMaskList_2D_element result ;
  if (in_mIllegalValue.isValid () && in_mIllegalMask.isValid () && in_mDescription.isValid ()) {
    result = GALGAS_illegalMaskList_2D_element (in_mIllegalValue, in_mIllegalMask, in_mDescription) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_illegalMaskList_2D_element::objectCompare (const GALGAS_illegalMaskList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIllegalValue.objectCompare (inOperand.mProperty_mIllegalValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIllegalMask.objectCompare (inOperand.mProperty_mIllegalMask) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDescription.objectCompare (inOperand.mProperty_mDescription) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_illegalMaskList_2D_element::isValid (void) const {
  return mProperty_mIllegalValue.isValid () && mProperty_mIllegalMask.isValid () && mProperty_mDescription.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList_2D_element::drop (void) {
  mProperty_mIllegalValue.drop () ;
  mProperty_mIllegalMask.drop () ;
  mProperty_mDescription.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @illegalMaskList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIllegalValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIllegalMask.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@illegalMaskList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_illegalMaskList_2D_element ("illegalMaskList-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_illegalMaskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_illegalMaskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_illegalMaskList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element::GALGAS_fieldSettingMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue (),
mProperty_mMask () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element::~ GALGAS_fieldSettingMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element::GALGAS_fieldSettingMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1,
                                                                      const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1),
mProperty_mMask (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_fieldSettingMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                      const GALGAS_uint & in_mValue,
                                                                                      const GALGAS_uint & in_mMask 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fieldSettingMap_2D_element result ;
  if (in_lkey.isValid () && in_mValue.isValid () && in_mMask.isValid ()) {
    result = GALGAS_fieldSettingMap_2D_element (in_lkey, in_mValue, in_mMask) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fieldSettingMap_2D_element::objectCompare (const GALGAS_fieldSettingMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMask.objectCompare (inOperand.mProperty_mMask) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fieldSettingMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () && mProperty_mMask.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
  mProperty_mMask.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @fieldSettingMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMask.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@fieldSettingMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ("fieldSettingMap-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fieldSettingMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fieldSettingMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fieldSettingMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element::GALGAS_configRegisterMaskMap_2D_element (void) :
mProperty_lkey (),
mProperty_mMaskValue (),
mProperty_mDescription (),
mProperty_mFieldSettingMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element::~ GALGAS_configRegisterMaskMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element::GALGAS_configRegisterMaskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_luint & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_fieldSettingMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mMaskValue (inOperand1),
mProperty_mDescription (inOperand2),
mProperty_mFieldSettingMap (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configRegisterMaskMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_luint::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_fieldSettingMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                                  const GALGAS_luint & in_mMaskValue,
                                                                                                  const GALGAS_lstring & in_mDescription,
                                                                                                  const GALGAS_fieldSettingMap & in_mFieldSettingMap 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap_2D_element result ;
  if (in_lkey.isValid () && in_mMaskValue.isValid () && in_mDescription.isValid () && in_mFieldSettingMap.isValid ()) {
    result = GALGAS_configRegisterMaskMap_2D_element (in_lkey, in_mMaskValue, in_mDescription, in_mFieldSettingMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_configRegisterMaskMap_2D_element::objectCompare (const GALGAS_configRegisterMaskMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMaskValue.objectCompare (inOperand.mProperty_mMaskValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDescription.objectCompare (inOperand.mProperty_mDescription) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFieldSettingMap.objectCompare (inOperand.mProperty_mFieldSettingMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_configRegisterMaskMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mMaskValue.drop () ;
  mProperty_mDescription.drop () ;
  mProperty_mFieldSettingMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @configRegisterMaskMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMaskValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@configRegisterMaskMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ("configRegisterMaskMap-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configRegisterMaskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configRegisterMaskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMaskMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element::GALGAS_configRegisterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddress (),
mProperty_mRegisterWidth (),
mProperty_mConfigRegisterMaskMap (),
mProperty_mIllegalMaskList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element::~ GALGAS_configRegisterMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element::GALGAS_configRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_luint & inOperand1,
                                                                          const GALGAS_luint & inOperand2,
                                                                          const GALGAS_configRegisterMaskMap & inOperand3,
                                                                          const GALGAS_illegalMaskList & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mRegisterWidth (inOperand2),
mProperty_mConfigRegisterMaskMap (inOperand3),
mProperty_mIllegalMaskList (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_configRegisterMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_luint::constructor_default (HERE),
                                              GALGAS_luint::constructor_default (HERE),
                                              GALGAS_configRegisterMaskMap::constructor_emptyMap (HERE),
                                              GALGAS_illegalMaskList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                          const GALGAS_luint & in_mRegisterAddress,
                                                                                          const GALGAS_luint & in_mRegisterWidth,
                                                                                          const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                                                          const GALGAS_illegalMaskList & in_mIllegalMaskList 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMap_2D_element result ;
  if (in_lkey.isValid () && in_mRegisterAddress.isValid () && in_mRegisterWidth.isValid () && in_mConfigRegisterMaskMap.isValid () && in_mIllegalMaskList.isValid ()) {
    result = GALGAS_configRegisterMap_2D_element (in_lkey, in_mRegisterAddress, in_mRegisterWidth, in_mConfigRegisterMaskMap, in_mIllegalMaskList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_configRegisterMap_2D_element::objectCompare (const GALGAS_configRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterWidth.objectCompare (inOperand.mProperty_mRegisterWidth) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConfigRegisterMaskMap.objectCompare (inOperand.mProperty_mConfigRegisterMaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIllegalMaskList.objectCompare (inOperand.mProperty_mIllegalMaskList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_configRegisterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterWidth.isValid () && mProperty_mConfigRegisterMaskMap.isValid () && mProperty_mIllegalMaskList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterWidth.drop () ;
  mProperty_mConfigRegisterMaskMap.drop () ;
  mProperty_mIllegalMaskList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @configRegisterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterWidth.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConfigRegisterMaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIllegalMaskList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@configRegisterMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configRegisterMap_2D_element ("configRegisterMap-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @registerExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_registerExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerExpression * p = (const cPtr_registerExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOffset.objectCompare (p->mProperty_mOffset) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfOffsetExpression.objectCompare (p->mProperty_mEndOfOffsetExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_registerExpression::objectCompare (const GALGAS_registerExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression::GALGAS_registerExpression (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression::GALGAS_registerExpression (const cPtr_registerExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerExpression::setter_setMRegisterName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerExpression::setter_setMOffset (GALGAS_immediatExpression inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    p->mProperty_mOffset = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_registerExpression::setter_setMEndOfOffsetExpression (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    p->mProperty_mEndOfOffsetExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_registerExpression::readProperty_mRegisterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mRegisterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_registerExpression::readProperty_mOffset (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mOffset ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_registerExpression::readProperty_mEndOfOffsetExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_registerExpression * p = (cPtr_registerExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerExpression) ;
    return p->mProperty_mEndOfOffsetExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @registerExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_registerExpression::cPtr_registerExpression (const GALGAS_lstring & in_mRegisterName,
                                                  const GALGAS_immediatExpression & in_mOffset,
                                                  const GALGAS_location & in_mEndOfOffsetExpression
                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mOffset (in_mOffset),
mProperty_mEndOfOffsetExpression (in_mEndOfOffsetExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_registerExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

void cPtr_registerExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@registerExpression:" ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOffset.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfOffsetExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_registerExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerExpression (mProperty_mRegisterName, mProperty_mOffset, mProperty_mEndOfOffsetExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@registerExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerExpression ("registerExpression",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @immediatRegister reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_immediatRegister::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_immediatRegister * p = (const cPtr_immediatRegister *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_immediatRegister) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_immediatRegister::objectCompare (const GALGAS_immediatRegister & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatRegister::GALGAS_immediatRegister (void) :
GALGAS_immediatExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatRegister::GALGAS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) :
GALGAS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRegister) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_immediatRegister GALGAS_immediatRegister::constructor_new (const GALGAS_registerExpression & inAttribute_mRegister
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_immediatRegister result ;
  if (inAttribute_mRegister.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_immediatRegister (inAttribute_mRegister COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_immediatRegister::setter_setMRegister (GALGAS_registerExpression inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_immediatRegister * p = (cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    p->mProperty_mRegister = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_immediatRegister::readProperty_mRegister (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_immediatRegister * p = (cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    return p->mProperty_mRegister ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @immediatRegister class
//----------------------------------------------------------------------------------------------------------------------

cPtr_immediatRegister::cPtr_immediatRegister (const GALGAS_registerExpression & in_mRegister
                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (THERE),
mProperty_mRegister (in_mRegister) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatRegister::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

void cPtr_immediatRegister::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@immediatRegister:" ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatRegister::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_immediatRegister (mProperty_mRegister COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@immediatRegister type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_immediatRegister ("immediatRegister",
                                         & kTypeDescriptor_GALGAS_immediatExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatRegister::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatRegister::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatRegister (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FD reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FD * p = (const cPtr_baseline_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_instruction_5F_FD & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD::GALGAS_baseline_5F_instruction_5F_FD (const cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FD) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setter_setMInstruction_5F_FD_5F_base_5F_code (GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction_5F_FD_5F_base_5F_code = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FD::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FD::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FD class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FD::cPtr_baseline_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_instruction_5F_FD::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_FD:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_FD type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ("baseline_instruction_FD",
                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_F reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_F * p = (const cPtr_baseline_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_instruction_5F_F & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_F::GALGAS_baseline_5F_instruction_5F_F (const cPtr_baseline_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_F) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_F::setter_setMFAinstruction (GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_F::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_instruction_5F_F::readProperty_mFAinstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    return p->mProperty_mFAinstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_F::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_F class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_F::cPtr_baseline_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_instruction_5F_F::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_F:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_F type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ("baseline_instruction_F",
                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FB reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_FB * p = (const cPtr_baseline_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_instruction_5F_FB & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FB::GALGAS_baseline_5F_instruction_5F_FB (const cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FB) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setter_setMBitOrientedOp (GALGAS_baseline_5F_bit_5F_oriented_5F_op inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_FB::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_FB::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FB class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FB::cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_instruction_5F_FB::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_FB:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_FB type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ("baseline_instruction_FB",
                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_IF_5F_BitTest reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_BitTest class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_IF_BitTest:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_IF_BitTest type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ("baseline_instruction_IF_BitTest",
                                                                 & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getBaseCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_getBaseCode (GALGAS_uint & outArgument_outBaseCode,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outBaseCode = GALGAS_uint (uint32_t (7168U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint (uint32_t (6144U)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getBaseCode  (out_outBaseCode, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction_IF_BitTest getMnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_getMnemonic (GALGAS_string & outArgument_outMnemonic,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getMnemonic  (out_outMnemonic, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_IF_5F_IncDec reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_IncDec class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mIncrement (in_mIncrement),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@baseline_instruction_IF_IncDec:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mIncrement, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_instruction_IF_IncDec type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ("baseline_instruction_IF_IncDec",
                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_incDecRegisterInCondition reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_incDecRegisterInCondition * p = (const cPtr_baseline_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_incDecRegisterInCondition::GALGAS_baseline_5F_incDecRegisterInCondition (const cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_incDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_incDecRegisterInCondition::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_incDecRegisterInCondition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_incDecRegisterInCondition::cPtr_baseline_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@baseline_incDecRegisterInCondition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_incDecRegisterInCondition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ("baseline_incDecRegisterInCondition",
                                                              & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_baseline_5F_conditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                                                      const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mBitNumber (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mBitNumber ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @baseline_bitTest_in_structured_if_condition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "[@baseline_bitTest_in_structured_if_condition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@baseline_bitTest_in_structured_if_condition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("baseline_bitTest_in_structured_if_condition",
                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveBaselineAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_resolveBaselineAccess (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                            GALGAS_baseline_5F_intermediate_5F_registerExpression & outArgument_outIntermediateRegisterDescription,
                                                            GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_offset_710 ;
  const GALGAS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_710, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 21)) ;
  const GALGAS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 22)) ;
  const GALGAS_registerExpression temp_2 = this ;
  GALGAS_string var_assemblyString_833 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsStrictSup, var_offset_710.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_833.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_710.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)).getter_hexString (SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_1055 ;
  GALGAS_registerProtection var_protection_1111 ;
  const GALGAS_registerExpression temp_4 = this ;
  GALGAS_uint joker_1061 ; // Joker input parameter
  GALGAS_string joker_1090 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_1055, joker_1061, outArgument_outBitSliceTable, joker_1090, var_protection_1111, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 29)) ;
  const GALGAS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), GALGAS_bool (true), var_protection_1111, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 37)) ;
  GALGAS_uint var_registerAddress_1264 = GALGAS_uint (uint32_t (0U)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsStrictSup, var_registerAddressList_1055.getter_length (SOURCE_FILE ("baseline_semantic_analysis.galgas", 40)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_bool var_found_1331 = GALGAS_bool (false) ;
      cEnumerator_uintlist enumerator_1355 (var_registerAddressList_1055, kENUMERATION_UP) ;
      bool bool_7 = var_found_1331.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)).isValidAndTrue () ;
      if (enumerator_1355.hasCurrentObject () && bool_7) {
        while (enumerator_1355.hasCurrentObject () && bool_7) {
          var_registerAddress_1264 = enumerator_1355.current_mValue (HERE) ;
          var_found_1331 = GALGAS_bool (kIsInfOrEqual, enumerator_1355.current_mValue (HERE).objectCompare (GALGAS_uint (uint32_t (31U)))) ;
          enumerator_1355.gotoNextObject () ;
          if (enumerator_1355.hasCurrentObject ()) {
            bool_7 = var_found_1331.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_found_1331.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 46)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_registerExpression temp_9 = this ;
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the register cannot be accessed directly; use indirect addressing throught FSR register"), fixItArray10  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 47)) ;
        }
      }
    }
  }
  outArgument_outIntermediateRegisterDescription = GALGAS_baseline_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_833, var_registerAddress_1264.add_operation (var_offset_710.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 53))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 51)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveBaselineAccess (cPtr_registerExpression * inObject,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIntermediateRegisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_resolveBaselineAccess  (constin_inRegisterTable, constin_inConstantMap, out_outIntermediateRegisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_banksel_5F_register reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_banksel_5F_register::objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register::GALGAS_midrange_5F_instruction_5F_banksel_5F_register (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register::GALGAS_midrange_5F_instruction_5F_banksel_5F_register (const cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_banksel_5F_register::setter_setMRegister (GALGAS_registerExpression inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    p->mProperty_mRegister = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_banksel_5F_register::setter_setMWarningOnUselessBanksel (GALGAS_bool inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_banksel_5F_register::readProperty_mRegister (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    return p->mProperty_mRegister ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_banksel_5F_register::readProperty_mWarningOnUselessBanksel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_banksel_register class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                          const GALGAS_registerExpression & in_mRegister,
                                                                                                          const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegister (in_mRegister),
mProperty_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_banksel_register:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_banksel_register type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ("midrange_instruction_banksel_register",
                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_savebank reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_savebank * p = (const cPtr_midrange_5F_instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSaveBankInstruction.objectCompare (p->mProperty_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_savebank::objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank::GALGAS_midrange_5F_instruction_5F_savebank (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank::GALGAS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_savebank) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setter_setMRegister (GALGAS_registerExpression inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mRegister = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setter_setMInstructionList (GALGAS_midrange_5F_instructionList inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_savebank::setter_setMEndOfSaveBankInstruction (GALGAS_location inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    p->mProperty_mEndOfSaveBankInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_savebank::readProperty_mRegister (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mRegister ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_savebank::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_savebank::readProperty_mEndOfSaveBankInstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mEndOfSaveBankInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_savebank class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_registerExpression & in_mRegister,
                                                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                    const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegister (in_mRegister),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfSaveBankInstruction (in_mEndOfSaveBankInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

void cPtr_midrange_5F_instruction_5F_savebank::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_savebank:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_savebank type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ("midrange_instruction_savebank",
                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FD reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_FD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_FD * p = (const cPtr_midrange_5F_instruction_5F_FD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FD_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FD_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_FD::objectCompare (const GALGAS_midrange_5F_instruction_5F_FD & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD::GALGAS_midrange_5F_instruction_5F_FD (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD::GALGAS_midrange_5F_instruction_5F_FD (const cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FD) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setter_setMInstruction_5F_FD_5F_base_5F_code (GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction_5F_FD_5F_base_5F_code = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_FD::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FD class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (in_mInstruction_5F_FD_5F_base_5F_code),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

void cPtr_midrange_5F_instruction_5F_FD::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_FD:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_FD type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ("midrange_instruction_FD",
                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_F reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_F::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_F * p = (const cPtr_midrange_5F_instruction_5F_F *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_F::objectCompare (const GALGAS_midrange_5F_instruction_5F_F & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F::GALGAS_midrange_5F_instruction_5F_F (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F::GALGAS_midrange_5F_instruction_5F_F (const cPtr_midrange_5F_instruction_5F_F * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_F) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_F::setter_setMFAinstruction (GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_F::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_F::readProperty_mFAinstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    return p->mProperty_mFAinstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_F::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_F class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GALGAS_registerExpression & in_mRegisterExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterExpression (in_mRegisterExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

void cPtr_midrange_5F_instruction_5F_F::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_F:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_F type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ("midrange_instruction_F",
                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FB reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_FB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_FB * p = (const cPtr_midrange_5F_instruction_5F_FB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_FB::objectCompare (const GALGAS_midrange_5F_instruction_5F_FB & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB::GALGAS_midrange_5F_instruction_5F_FB (void) :
GALGAS_midrange_5F_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB::GALGAS_midrange_5F_instruction_5F_FB (const cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FB) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setter_setMBitOrientedOp (GALGAS_midrange_5F_bit_5F_oriented_5F_op inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FB::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_midrange_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_FB::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_midrange_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FB class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

void cPtr_midrange_5F_instruction_5F_FB::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_FB:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_FB type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ("midrange_instruction_FB",
                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_BitTest reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_BitTest class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                              const GALGAS_bool & in_mSkipIfSet,
                                                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_IF_BitTest:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_IF_BitTest type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ("midrange_instruction_IF_BitTest",
                                                                 & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_getBaseCode (GALGAS_uint & outArgument_outBaseCode,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outBaseCode = GALGAS_uint (uint32_t (7168U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outBaseCode = GALGAS_uint (uint32_t (6144U)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getBaseCode  (out_outBaseCode, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_getMnemonic (GALGAS_string & outArgument_outMnemonic,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outMnemonic = GALGAS_string ("BTFSS") ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMnemonic = GALGAS_string ("BTFSC") ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getMnemonic  (out_outMnemonic, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_IncDec reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction.objectCompare (p->mProperty_mInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setMIncrement (GALGAS_bool inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_IncDec class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                                                            const GALGAS_bool & in_mIncrement,
                                                                                            const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction COMMA_THERE),
mProperty_mIncrement (in_mIncrement),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@midrange_instruction_IF_IncDec:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mIncrement, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_instruction_IF_IncDec type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ("midrange_instruction_IF_IncDec",
                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_incDecRegisterInCondition reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_incDecRegisterInCondition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_incDecRegisterInCondition * p = (const cPtr_midrange_5F_incDecRegisterInCondition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranchIfZero.objectCompare (p->mProperty_mBranchIfZero) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_incDecRegisterInCondition::objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition::GALGAS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                            const GALGAS_bool & inAttribute_mIncrement,
                                                                                                            const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination,
                                                                                                            const GALGAS_bool & inAttribute_mBranchIfZero
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid () && inAttribute_mBranchIfZero.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_incDecRegisterInCondition (inAttribute_mRegisterExpression, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination, inAttribute_mBranchIfZero COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMIncrement (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_incDecRegisterInCondition::setter_setMBranchIfZero (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_incDecRegisterInCondition::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_incDecRegisterInCondition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                        const GALGAS_bool & in_mIncrement,
                                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GALGAS_bool & in_mBranchIfZero
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination),
mProperty_mBranchIfZero (in_mBranchIfZero) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

void cPtr_midrange_5F_incDecRegisterInCondition::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@midrange_incDecRegisterInCondition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_incDecRegisterInCondition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ("midrange_incDecRegisterInCondition",
                                                              & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition result ;
  const GALGAS_midrange_5F_incDecRegisterInCondition * p = (const GALGAS_midrange_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::constructor_new (const GALGAS_registerExpression & inAttribute_mRegisterExpression,
                                                                                                                                                      const GALGAS_bitNumberExpression & inAttribute_mBitNumber
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (inAttribute_mRegisterExpression.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inAttribute_mRegisterExpression, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::setter_setMBitNumber (GALGAS_bitNumberExpression inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bitNumberExpression GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mBitNumber (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mBitNumber ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @midrange_bitTest_in_structured_if_condition class
//----------------------------------------------------------------------------------------------------------------------

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GALGAS_bitNumberExpression & in_mBitNumber
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mBitNumber (in_mBitNumber) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "[@midrange_bitTest_in_structured_if_condition:" ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@midrange_bitTest_in_structured_if_condition type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("midrange_bitTest_in_structured_if_condition",
                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveMidrangeAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_resolveMidrangeAccess (const GALGAS_uint constinArgument_inTotalBankCount,
                                                            const GALGAS_uint constinArgument_inCurrentBank,
                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                            GALGAS_midrange_5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                            GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_offset_653 ;
  const GALGAS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_653, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 21)) ;
  const GALGAS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 22)) ;
  const GALGAS_registerExpression temp_2 = this ;
  GALGAS_string var_assemblyString_776 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsStrictSup, var_offset_653.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_776.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_653.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)).getter_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_985 ;
  GALGAS_uint var_size_1005 ;
  GALGAS_registerProtection var_protection_1054 ;
  const GALGAS_registerExpression temp_4 = this ;
  GALGAS_string joker_1033 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_985, var_size_1005, outArgument_outBitSliceTable, joker_1033, var_protection_1054, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 29)) ;
  const GALGAS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), GALGAS_bool (true), var_protection_1054, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 37)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsSupOrEqual, var_offset_653.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 39)).objectCompare (var_size_1005)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_registerExpression temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GALGAS_string ("maximum index value is ").add_operation (var_size_1005.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), fixItArray8  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)) ;
    }
  }
  GALGAS_uintlist var_acceptableBanks_1319 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("midrange_intermediate_classes.galgas", 43)) ;
  cEnumerator_uintlist enumerator_1356 (var_registerAddressList_985, kENUMERATION_UP) ;
  while (enumerator_1356.hasCurrentObject ()) {
    var_acceptableBanks_1319.addAssign_operation (enumerator_1356.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)) ;
    enumerator_1356.gotoNextObject () ;
  }
  GALGAS_uint var_registerAddress_1459 = GALGAS_uint (uint32_t (0U)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_uint var_bank_1586 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_bool var_ok_1607 = GALGAS_bool (true) ;
      if (constinArgument_inTotalBankCount.isValid ()) {
        uint32_t variant_1623 = constinArgument_inTotalBankCount.uintValue () ;
        bool loop_1623 = true ;
        while (loop_1623) {
          loop_1623 = GALGAS_bool (kIsStrictInf, var_bank_1586.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1607 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValid () ;
          if (loop_1623) {
            loop_1623 = GALGAS_bool (kIsStrictInf, var_bank_1586.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1607 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).boolValue () ;
          }
          if (loop_1623 && (0 == variant_1623)) {
            loop_1623 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)) ;
          }
          if (loop_1623) {
            variant_1623 -- ;
            var_ok_1607 = GALGAS_bool (false) ;
            cEnumerator_uintlist enumerator_1717 (var_registerAddressList_985, kENUMERATION_UP) ;
            bool bool_10 = var_ok_1607.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
            if (enumerator_1717.hasCurrentObject () && bool_10) {
              while (enumerator_1717.hasCurrentObject () && bool_10) {
                var_ok_1607 = GALGAS_bool (kIsSupOrEqual, enumerator_1717.current_mValue (HERE).objectCompare (var_bank_1586.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_1717.current_mValue (HERE).objectCompare (var_bank_1586.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)).add_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)) ;
                var_registerAddress_1459 = enumerator_1717.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 57)) ;
                enumerator_1717.gotoNextObject () ;
                if (enumerator_1717.hasCurrentObject ()) {
                  bool_10 = var_ok_1607.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
                }
              }
            }
            var_bank_1586.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)) ;
          }
        }
      }
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_ok_1607.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 61)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_string var_acceptableBankMessage_1961 = GALGAS_string::makeEmptyString () ;
          cEnumerator_uintlist enumerator_1984 (var_registerAddressList_985, kENUMERATION_UP) ;
          while (enumerator_1984.hasCurrentObject ()) {
            var_acceptableBankMessage_1961.plusAssign_operation(enumerator_1984.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)) ;
            if (enumerator_1984.hasNextObject ()) {
              var_acceptableBankMessage_1961.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)) ;
            }
            enumerator_1984.gotoNextObject () ;
          }
          const GALGAS_registerExpression temp_12 = this ;
          const GALGAS_registerExpression temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("as no bank is currently known, the '").add_operation (temp_13.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (var_acceptableBankMessage_1961, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GALGAS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), fixItArray14  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_bool var_found_2367 = GALGAS_bool (false) ;
    cEnumerator_uintlist enumerator_2391 (var_registerAddressList_985, kENUMERATION_UP) ;
    bool bool_15 = var_found_2367.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
    if (enumerator_2391.hasCurrentObject () && bool_15) {
      while (enumerator_2391.hasCurrentObject () && bool_15) {
        var_found_2367 = GALGAS_bool (kIsSupOrEqual, enumerator_2391.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))).operator_and (GALGAS_bool (kIsStrictInf, enumerator_2391.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)).add_operation (GALGAS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)) ;
        var_registerAddress_1459 = enumerator_2391.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)) ;
        enumerator_2391.gotoNextObject () ;
        if (enumerator_2391.hasCurrentObject ()) {
          bool_15 = var_found_2367.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_found_2367.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 75)).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_acceptableBankMessage_2632 = GALGAS_string::makeEmptyString () ;
        cEnumerator_uintlist enumerator_2655 (var_registerAddressList_985, kENUMERATION_UP) ;
        while (enumerator_2655.hasCurrentObject ()) {
          var_acceptableBankMessage_2632.plusAssign_operation(enumerator_2655.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)) ;
          if (enumerator_2655.hasNextObject ()) {
            var_acceptableBankMessage_2632.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)) ;
          }
          enumerator_2655.gotoNextObject () ;
        }
        const GALGAS_registerExpression temp_17 = this ;
        const GALGAS_registerExpression temp_18 = this ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_18.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (var_acceptableBankMessage_2632, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), fixItArray19  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)) ;
      }
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_midrange_5F_intermediate_5F_registerExpression::constructor_new (var_assemblyString_776, var_registerAddress_1459.add_operation (var_offset_653.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 85)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveMidrangeAccess (cPtr_registerExpression * inObject,
                                                const GALGAS_uint constin_inTotalBankCount,
                                                const GALGAS_uint constin_inCurrentBank,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_resolveMidrangeAccess  (constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_banksel_5F_register reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_banksel_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterExpression.objectCompare (p->mProperty_mRegisterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarningOnUselessBanksel.objectCompare (p->mProperty_mWarningOnUselessBanksel) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::setter_setMRegisterExpression (GALGAS_registerExpression inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    p->mProperty_mRegisterExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::setter_setMWarningOnUselessBanksel (GALGAS_bool inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::readProperty_mRegisterExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::readProperty_mWarningOnUselessBanksel (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_banksel_register class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                                                                        const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterExpression (in_mRegisterExpression),
mProperty_mWarningOnUselessBanksel (in_mWarningOnUselessBanksel) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_banksel_register:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegisterExpression, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_banksel_register type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ("pic18Instruction_banksel_register",
                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_savebank reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_savebank::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_savebank * p = (const cPtr_pic_31__38_Instruction_5F_savebank *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegister.objectCompare (p->mProperty_mRegister) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSaveBankInstruction.objectCompare (p->mProperty_mEndOfSaveBankInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_savebank::objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_savebank::GALGAS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMRegister (GALGAS_registerExpression inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mRegister = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_savebank::setter_setMEndOfSaveBankInstruction (GALGAS_location inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    p->mProperty_mEndOfSaveBankInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_registerExpression GALGAS_pic_31__38_Instruction_5F_savebank::readProperty_mRegister (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mRegister ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_savebank::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_savebank::readProperty_mEndOfSaveBankInstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mEndOfSaveBankInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_savebank class
//----------------------------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_registerExpression & in_mRegister,
                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfSaveBankInstruction
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegister (in_mRegister),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mEndOfSaveBankInstruction (in_mEndOfSaveBankInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

void cPtr_pic_31__38_Instruction_5F_savebank::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@pic18Instruction_savebank:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_savebank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@pic18Instruction_savebank type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ("pic18Instruction_savebank",
                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

