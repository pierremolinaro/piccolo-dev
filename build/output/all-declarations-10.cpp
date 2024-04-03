#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block::GALGAS_ipic_31__38_Block (void) :
mProperty_mAddress (),
mProperty_mLabel (),
mProperty_mInstructionList (),
mProperty_mTerminator (),
mProperty_mTerminatorMin (),
mProperty_mTerminatorMax () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block::~ GALGAS_ipic_31__38_Block (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_Block::init_28__2C__2C__2C__2C__2C__29_ (const GALGAS_uint & in_mAddress,
                                                                                     const GALGAS_lstring & in_mLabel,
                                                                                     const GALGAS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                                                                     const GALGAS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                                                                     const GALGAS_uint & in_mTerminatorMin,
                                                                                     const GALGAS_uint & in_mTerminatorMax,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_Block result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mLabel = in_mLabel ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mTerminator = in_mTerminator ;
  result.mProperty_mTerminatorMin = in_mTerminatorMin ;
  result.mProperty_mTerminatorMax = in_mTerminatorMax ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_Block::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_Block::class_func_new (const GALGAS_uint & in_mAddress,
                                                                   const GALGAS_lstring & in_mLabel,
                                                                   const GALGAS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                                                   const GALGAS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                                                   const GALGAS_uint & in_mTerminatorMin,
                                                                   const GALGAS_uint & in_mTerminatorMax,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_Block result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAddress = in_mAddress ;
  result.mProperty_mLabel = in_mLabel ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mTerminator = in_mTerminator ;
  result.mProperty_mTerminatorMin = in_mTerminatorMin ;
  result.mProperty_mTerminatorMax = in_mTerminatorMax ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ipic_31__38_Block::objectCompare (const GALGAS_ipic_31__38_Block & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAddress.objectCompare (inOperand.mProperty_mAddress) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLabel.objectCompare (inOperand.mProperty_mLabel) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTerminator.objectCompare (inOperand.mProperty_mTerminator) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTerminatorMin.objectCompare (inOperand.mProperty_mTerminatorMin) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTerminatorMax.objectCompare (inOperand.mProperty_mTerminatorMax) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_Block::isValid (void) const {
  return mProperty_mAddress.isValid () && mProperty_mLabel.isValid () && mProperty_mInstructionList.isValid () && mProperty_mTerminator.isValid () && mProperty_mTerminatorMin.isValid () && mProperty_mTerminatorMax.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_Block::drop (void) {
  mProperty_mAddress.drop () ;
  mProperty_mLabel.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mTerminator.drop () ;
  mProperty_mTerminatorMin.drop () ;
  mProperty_mTerminatorMax.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_Block::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18Block:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabel.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminator.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminatorMin.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminatorMax.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18Block generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_Block ("ipic18Block",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_Block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_Block ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_Block::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_Block (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_Block::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_Block result ;
  const GALGAS_ipic_31__38_Block * p = (const GALGAS_ipic_31__38_Block *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_Block *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18Block", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_JumpTerminator reference class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_JumpTerminator::cPtr_ipic_31__38_JumpTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_JumpTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ipic_31__38_JumpTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ipic_31__38_JumpTerminator * p = (const cPtr_ipic_31__38_JumpTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ipic_31__38_JumpTerminator::objectCompare (const GALGAS_ipic_31__38_JumpTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator::GALGAS_ipic_31__38_JumpTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_ipic_31__38_JumpTerminator GALGAS_ipic_31__38_JumpTerminator::init_28__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_lstring & in_mLabel,
                                                                                              const GALGAS_jumpInstructionKind & in_mKind,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_JumpTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_JumpTerminator (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mLabel = in_mLabel ;
  object->mProperty_mKind = in_mKind ;
  const GALGAS_ipic_31__38_JumpTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator::GALGAS_ipic_31__38_JumpTerminator (const cPtr_ipic_31__38_JumpTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_JumpTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator GALGAS_ipic_31__38_JumpTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                     const GALGAS_lstring & inAttribute_mLabel,
                                                                                     const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_JumpTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_JumpTerminator (inAttribute_mInstructionLocation, inAttribute_mLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_JumpTerminator::setter_setMLabel (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    p->mProperty_mLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_JumpTerminator::setter_setMKind (GALGAS_jumpInstructionKind inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38_JumpTerminator::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_ipic_31__38_JumpTerminator::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_jumpInstructionKind () ;
  }else{
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18JumpTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_JumpTerminator::cPtr_ipic_31__38_JumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_lstring & in_mLabel,
                                                                  const GALGAS_jumpInstructionKind & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mLabel (in_mLabel),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_JumpTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;
}

void cPtr_ipic_31__38_JumpTerminator::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18JumpTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_JumpTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_JumpTerminator (mProperty_mInstructionLocation, mProperty_mLabel, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18JumpTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ("ipic18JumpTerminator",
                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_JumpTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_JumpTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_JumpTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator GALGAS_ipic_31__38_JumpTerminator::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_JumpTerminator result ;
  const GALGAS_ipic_31__38_JumpTerminator * p = (const GALGAS_ipic_31__38_JumpTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_JumpTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18JumpTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ConditionalJumpTerminator reference class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ConditionalJumpTerminator::cPtr_ipic_31__38_ConditionalJumpTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE),
mProperty_mConditionalBranch (),
mProperty_mTargetLabelWhenTrue (),
mProperty_mBranchModeOnTrueLabel (),
mProperty_mTargetLabelWhenFalse (),
mProperty_mBranchModeOnFalseLabel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ConditionalJumpTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mConditionalBranch.printNonNullClassInstanceProperties ("mConditionalBranch") ;
    mProperty_mTargetLabelWhenTrue.printNonNullClassInstanceProperties ("mTargetLabelWhenTrue") ;
    mProperty_mBranchModeOnTrueLabel.printNonNullClassInstanceProperties ("mBranchModeOnTrueLabel") ;
    mProperty_mTargetLabelWhenFalse.printNonNullClassInstanceProperties ("mTargetLabelWhenFalse") ;
    mProperty_mBranchModeOnFalseLabel.printNonNullClassInstanceProperties ("mBranchModeOnFalseLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ipic_31__38_ConditionalJumpTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConditionalBranch.objectCompare (p->mProperty_mConditionalBranch) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabelWhenTrue.objectCompare (p->mProperty_mTargetLabelWhenTrue) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBranchModeOnTrueLabel.objectCompare (p->mProperty_mBranchModeOnTrueLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabelWhenFalse.objectCompare (p->mProperty_mTargetLabelWhenFalse) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBranchModeOnFalseLabel.objectCompare (p->mProperty_mBranchModeOnFalseLabel) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ipic_31__38_ConditionalJumpTerminator::objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator::GALGAS_ipic_31__38_ConditionalJumpTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_ipic_31__38_ConditionalJumpTerminator GALGAS_ipic_31__38_ConditionalJumpTerminator::init_28__2C__2C__2C__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                                                                                                const GALGAS_lstring & in_mTargetLabelWhenTrue,
                                                                                                                                const GALGAS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                                                                                                const GALGAS_lstring & in_mTargetLabelWhenFalse,
                                                                                                                                const GALGAS_conditionalBranchMode & in_mBranchModeOnFalseLabel,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ConditionalJumpTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ConditionalJumpTerminator (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mConditionalBranch = in_mConditionalBranch ;
  object->mProperty_mTargetLabelWhenTrue = in_mTargetLabelWhenTrue ;
  object->mProperty_mBranchModeOnTrueLabel = in_mBranchModeOnTrueLabel ;
  object->mProperty_mTargetLabelWhenFalse = in_mTargetLabelWhenFalse ;
  object->mProperty_mBranchModeOnFalseLabel = in_mBranchModeOnFalseLabel ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator::GALGAS_ipic_31__38_ConditionalJumpTerminator (const cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator GALGAS_ipic_31__38_ConditionalJumpTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMConditionalBranch (GALGAS_conditional_5F_branch inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mConditionalBranch = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMTargetLabelWhenTrue (GALGAS_lstring inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mTargetLabelWhenTrue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMBranchModeOnTrueLabel (GALGAS_conditionalBranchMode inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mBranchModeOnTrueLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMTargetLabelWhenFalse (GALGAS_lstring inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mTargetLabelWhenFalse = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ConditionalJumpTerminator::setter_setMBranchModeOnFalseLabel (GALGAS_conditionalBranchMode inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    p->mProperty_mBranchModeOnFalseLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditional_5F_branch GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mConditionalBranch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_conditional_5F_branch () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mConditionalBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mTargetLabelWhenTrue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mTargetLabelWhenTrue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mBranchModeOnTrueLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_conditionalBranchMode () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mBranchModeOnTrueLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mTargetLabelWhenFalse (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mTargetLabelWhenFalse ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_ipic_31__38_ConditionalJumpTerminator::readProperty_mBranchModeOnFalseLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_conditionalBranchMode () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mBranchModeOnFalseLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ConditionalJumpTerminator class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ConditionalJumpTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;
}

void cPtr_ipic_31__38_ConditionalJumpTerminator::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18ConditionalJumpTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConditionalBranch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabelWhenTrue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchModeOnTrueLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabelWhenFalse.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchModeOnFalseLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ConditionalJumpTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ConditionalJumpTerminator (mProperty_mInstructionLocation, mProperty_mConditionalBranch, mProperty_mTargetLabelWhenTrue, mProperty_mBranchModeOnTrueLabel, mProperty_mTargetLabelWhenFalse, mProperty_mBranchModeOnFalseLabel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18ConditionalJumpTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ("ipic18ConditionalJumpTerminator",
                                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ConditionalJumpTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ConditionalJumpTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ConditionalJumpTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator GALGAS_ipic_31__38_ConditionalJumpTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ConditionalJumpTerminator result ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator * p = (const GALGAS_ipic_31__38_ConditionalJumpTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ConditionalJumpTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ConditionalJumpTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_RegisterComparisonTerminator reference class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterComparisonTerminator::cPtr_pic_31__38_RegisterComparisonTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mComparison () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_RegisterComparisonTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_pic_31__38_RegisterComparisonTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_pic_31__38_RegisterComparisonTerminator * p = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionTrue.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionTrue) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSingleInstructionTerminatorIfConditionFalse.objectCompare (p->mProperty_mSingleInstructionTerminatorIfConditionFalse) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_pic_31__38_RegisterComparisonTerminator::objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator::GALGAS_pic_31__38_RegisterComparisonTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_pic_31__38_RegisterComparisonTerminator GALGAS_pic_31__38_RegisterComparisonTerminator::init_28__2C__2C__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                                                                const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                                                                const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                const GALGAS_ipic_31__38_RegisterComparison & in_mComparison,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_RegisterComparisonTerminator * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_RegisterComparisonTerminator (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  object->mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  object->mProperty_mRegisterDescription = in_mRegisterDescription ;
  object->mProperty_mComparison = in_mComparison ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator::GALGAS_pic_31__38_RegisterComparisonTerminator (const cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterComparisonTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator GALGAS_pic_31__38_RegisterComparisonTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterComparisonTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RegisterComparisonTerminator::setter_setMComparison (GALGAS_ipic_31__38_RegisterComparison inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    p->mProperty_mComparison = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_pic_31__38_RegisterComparisonTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_pic_31__38_RegisterComparisonTerminator::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38_RegisterComparison () ;
  }else{
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18RegisterComparisonTerminator class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_RegisterComparisonTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;
}

void cPtr_pic_31__38_RegisterComparisonTerminator::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18RegisterComparisonTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_RegisterComparisonTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterComparisonTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mComparison COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18RegisterComparisonTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ("pic18RegisterComparisonTerminator",
                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparisonTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparisonTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparisonTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator GALGAS_pic_31__38_RegisterComparisonTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonTerminator result ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator * p = (const GALGAS_pic_31__38_RegisterComparisonTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_RegisterComparisonTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_JSR::cPtr_ipic_31__38__5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_JSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetLabel.objectCompare (p->mProperty_mTargetLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_JSR::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR::GALGAS_ipic_31__38__5F_intermediate_5F_JSR (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_ipic_31__38__5F_intermediate_5F_JSR GALGAS_ipic_31__38__5F_intermediate_5F_JSR::init_28__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                                                                const GALGAS_lstring & in_mTargetLabel,
                                                                                                                const GALGAS_jumpInstructionKind & in_mKind,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mTargetLabel = in_mTargetLabel ;
  object->mProperty_mKind = in_mKind ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR::GALGAS_ipic_31__38__5F_intermediate_5F_JSR (const cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR GALGAS_ipic_31__38__5F_intermediate_5F_JSR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                       const GALGAS_lstring & inAttribute_mTargetLabel,
                                                                                                       const GALGAS_jumpInstructionKind & inAttribute_mKind
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_JSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabel.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR (inAttribute_mInstructionLocation, inAttribute_mTargetLabel, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_JSR::setter_setMTargetLabel (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_JSR::setter_setMKind (GALGAS_jumpInstructionKind inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38__5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_jumpInstructionKind GALGAS_ipic_31__38__5F_intermediate_5F_JSR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_jumpInstructionKind () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_JSR::cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_lstring & in_mTargetLabel,
                                                                                    const GALGAS_jumpInstructionKind & in_mKind
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabel (in_mTargetLabel),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_JSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_JSR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ("ipic18_intermediate_JSR",
                                                                                           & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR GALGAS_ipic_31__38__5F_intermediate_5F_JSR::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_JSR result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W reference class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mOffset (),
mProperty_mRightShift () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
    mProperty_mOffset.printNonNullClassInstanceProperties ("mOffset") ;
    mProperty_mRightShift.printNonNullClassInstanceProperties ("mRightShift") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLabel.objectCompare (p->mProperty_mLabel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOffset.objectCompare (p->mProperty_mOffset) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRightShift.objectCompare (p->mProperty_mRightShift) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_28__2C__2C__2C__29_ (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                                const GALGAS_lstring & in_mLabel,
                                                                                                                                                const GALGAS_uint & in_mOffset,
                                                                                                                                                const GALGAS_uint & in_mRightShift,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (inCompiler COMMA_THERE)) ;
  object->mProperty_mInstructionLocation = in_mInstructionLocation ;
  object->mProperty_mLabel = in_mLabel ;
  object->mProperty_mOffset = in_mOffset ;
  object->mProperty_mRightShift = in_mRightShift ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::setter_setMLabel (GALGAS_lstring inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    p->mProperty_mLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::setter_setMOffset (GALGAS_uint inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    p->mProperty_mOffset = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::setter_setMRightShift (GALGAS_uint inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    p->mProperty_mRightShift = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mOffset (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mOffset ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mRightShift (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mRightShift ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_MOV_LABEL_W class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_MOV_LABEL_W:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOffset.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightShift.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (mProperty_mInstructionLocation, mProperty_mLabel, mProperty_mOffset, mProperty_mRightShift COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_MOV_LABEL_W generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ("ipic18_intermediate_MOV_LABEL_W",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_MOV_LABEL_W", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap::GALGAS_branchOverflowMap (void) :
AC_GALGAS_listmap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap GALGAS_branchOverflowMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_branchOverflowMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchOverflowMap::addAssign_operation (const GALGAS_string & inKey,
                                                    const GALGAS_string & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_stringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchOverflowMap::setter_insert (const GALGAS_string inKey,
                                              const GALGAS_string inOperand0,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_stringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_branchOverflowMap::getter_listForKey (const GALGAS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_stringlist (listForKey (inKey)) ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_branchOverflowMap::cEnumerator_branchOverflowMap (const GALGAS_branchOverflowMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap_2D_element cEnumerator_branchOverflowMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_branchOverflowMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_branchOverflowMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_branchOverflowMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_stringlist (p->mSharedListMapList) ;
}

//--------------------------------------------------------------------------------------------------
//
//     @branchOverflowMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap ("branchOverflowMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchOverflowMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchOverflowMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchOverflowMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchOverflowMap GALGAS_branchOverflowMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_branchOverflowMap result ;
  const GALGAS_branchOverflowMap * p = (const GALGAS_branchOverflowMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_branchOverflowMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block display'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_display (const GALGAS_ipic_31__38_Block inObject,
                              const GALGAS_string constinArgument_inNextBlockLabel,
                              GALGAS_string & ioArgument_ioListFileContents,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 12)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 12)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_Block temp_2 = inObject ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_display_block_list.galgas", 13)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_Block temp_3 = inObject ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", ORG ").add_operation (temp_3.readProperty_mAddress ().getter_hexString (SOURCE_FILE ("ipic18_display_block_list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 14)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 16)) ;
  const GALGAS_ipic_31__38_Block temp_4 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_501 (temp_4.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_501.hasCurrentObject ()) {
    GALGAS_stringlist var_d_553 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_501.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 19)) ;
    cEnumerator_stringlist enumerator_600 (var_d_553, EnumerationOrder::up) ;
    while (enumerator_600.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_600.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)) ;
      enumerator_600.gotoNextObject () ;
    }
    enumerator_501.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 25)) ;
  const GALGAS_ipic_31__38_Block temp_5 = inObject ;
  ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_5.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 27)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_analyzeRegisterExpression (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                const GALGAS_uint constinArgument_inCurrentBank,
                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                const GALGAS_bool constinArgument_inWriteAccess,
                                                                GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                GALGAS_bitSliceTable & outArgument_outBitSliceTable,
                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_offset_615 ;
  const GALGAS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_615, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 19)) ;
  const GALGAS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 20)) ;
  const GALGAS_registerExpression temp_2 = this ;
  GALGAS_string var_assemblyString_730 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_offset_615.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_730.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)) ;
    }
  }
  GALGAS_uint var_registerAddress_874 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_uintlist var_registerAddressList_956 ;
  GALGAS_uint var_size_991 ;
  GALGAS_registerProtection var_protection_1034 ;
  const GALGAS_registerExpression temp_4 = this ;
  GALGAS_string joker_1022 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_956, var_size_991, outArgument_outBitSliceTable, joker_1022, var_protection_1034, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 28)) ;
  const GALGAS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_1034, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 36)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::lowerThan, var_offset_615.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_registerExpression temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GALGAS_string ("offset (").add_operation (var_offset_615.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)) ;
    }
  }
  if (kBoolFalse == test_6) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 40)).objectCompare (var_size_991)).boolEnum () ;
      if (kBoolTrue == test_9) {
        const GALGAS_registerExpression temp_10 = this ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mEndOfOffsetExpression (), GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_991.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)) ;
      }
    }
  }
  GALGAS_bool var_found_1410 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_1431 (var_registerAddressList_956, EnumerationOrder::up) ;
  bool bool_12 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)).isValidAndTrue () ;
  if (enumerator_1431.hasCurrentObject () && bool_12) {
    while (enumerator_1431.hasCurrentObject () && bool_12) {
      var_found_1410 = GALGAS_bool (ComparisonKind::lowerThan, enumerator_1431.current_mValue (HERE).objectCompare (constinArgument_inAccessBankSplitOffset)).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, enumerator_1431.current_mValue (HERE).objectCompare (GALGAS_uint (uint32_t (3840U)).add_operation (constinArgument_inAccessBankSplitOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 46)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 46)) ;
      var_registerAddress_874 = enumerator_1431.current_mValue (HERE) ;
      enumerator_1431.gotoNextObject () ;
      if (enumerator_1431.hasCurrentObject ()) {
        bool_12 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)).isValidAndTrue () ;
      }
    }
  }
  GALGAS_bool var_needsBSRaccess_1625 = GALGAS_bool (false) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 50)).boolEnum () ;
    if (kBoolTrue == test_13) {
      var_needsBSRaccess_1625 = GALGAS_bool (true) ;
      var_registerAddressList_956.method_first (var_registerAddress_874, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)) ;
      GALGAS_uint var_neededBank_1757 = var_registerAddress_874.right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (ComparisonKind::notEqual, var_neededBank_1757.objectCompare (constinArgument_inCurrentBank)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_registerExpression temp_15 = this ;
          GALGAS_string var_errorMessage_1851 = GALGAS_string ("Accessing the '").add_operation (temp_15.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)).add_operation (GALGAS_string ("' needs the bank selection set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)).add_operation (var_neededBank_1757.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (ComparisonKind::equal, constinArgument_inCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 56)))).boolEnum () ;
            if (kBoolTrue == test_16) {
              var_errorMessage_1851.plusAssign_operation(GALGAS_string (", but current bank selection cannot be known"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 57)) ;
            }
          }
          if (kBoolFalse == test_16) {
            var_errorMessage_1851.plusAssign_operation(GALGAS_string (", but current bank selection is set to ").add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)) ;
          }
          const GALGAS_registerExpression temp_17 = this ;
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), var_errorMessage_1851, fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 61)) ;
        }
      }
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::class_func_new (var_assemblyString_730, var_registerAddress_874.add_operation (var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)), var_needsBSRaccess_1625, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 65)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpression (cPtr_registerExpression * inObject,
                                                    const GALGAS_uint constin_inAccessBankSplitOffset,
                                                    const GALGAS_uint constin_inCurrentBank,
                                                    const GALGAS_registerTable constin_inRegisterTable,
                                                    const GALGAS_constantMap constin_inConstantMap,
                                                    const GALGAS_bool constin_inWriteAccess,
                                                    GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    GALGAS_bitSliceTable & out_outBitSliceTable,
                                                    GALGAS_stringset & io_ioUsedRegisters,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_analyzeRegisterExpression  (constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_analyzeRegisterExpressionWithoutCheckingBank (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                   const GALGAS_bool constinArgument_inWriteAccess,
                                                                                   GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument_outIPICregisterDescription,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_registerExpression temp_0 = this ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_0.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 81)) ;
  const GALGAS_registerExpression temp_1 = this ;
  GALGAS_string var_assemblyString_2892 = temp_1.readProperty_mRegisterName ().readProperty_string () ;
  GALGAS_sint_36__34_ var_offset_3001 ;
  const GALGAS_registerExpression temp_2 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_2.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_3001, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 84)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_offset_3001.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_assemblyString_2892.plusAssign_operation(GALGAS_string (" + ").add_operation (var_offset_3001.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_3180 ;
  GALGAS_uint var_size_3211 ;
  GALGAS_registerProtection var_protection_3225 ;
  const GALGAS_registerExpression temp_4 = this ;
  GALGAS_bitSliceTable joker_3216_2 ; // Joker input parameter
  GALGAS_string joker_3216_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_3180, var_size_3211, joker_3216_2, joker_3216_1, var_protection_3225, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 89)) ;
  const GALGAS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_3225, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 90)) ;
  GALGAS_uint var_registerAddress_3369 ;
  var_registerAddressList_3180.method_first (var_registerAddress_3369, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 91)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_offset_3001.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 93)).objectCompare (var_size_3211)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_registerExpression temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_3211.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)) ;
    }
  }
  outArgument_outIPICregisterDescription = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::class_func_new (var_assemblyString_2892, var_registerAddress_3369.add_operation (var_offset_3001.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 97)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (cPtr_registerExpression * inObject,
                                                                       const GALGAS_registerTable constin_inRegisterTable,
                                                                       const GALGAS_constantMap constin_inConstantMap,
                                                                       const GALGAS_bool constin_inWriteAccess,
                                                                       GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       GALGAS_stringset & io_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_analyzeRegisterExpressionWithoutCheckingBank  (constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, out_outIPICregisterDescription, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression getRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_getRegisterAddress (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                         const GALGAS_bool constinArgument_inWriteAccess,
                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                         GALGAS_uint & outArgument_outRegisterAddress,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_registerAddressList_4062 ;
  GALGAS_uint var_size_4093 ;
  GALGAS_registerProtection var_protection_4107 ;
  const GALGAS_registerExpression temp_0 = this ;
  GALGAS_bitSliceTable joker_4098_2 ; // Joker input parameter
  GALGAS_string joker_4098_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_0.readProperty_mRegisterName (), var_registerAddressList_4062, var_size_4093, joker_4098_2, joker_4098_1, var_protection_4107, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 112)) ;
  const GALGAS_registerExpression temp_1 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_1.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_4107, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 113)) ;
  GALGAS_sint_36__34_ var_offset_4282 ;
  const GALGAS_registerExpression temp_2 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_2.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4282, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::lowerThan, var_offset_4282.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_registerExpression temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfOffsetExpression (), GALGAS_string ("offset (").add_operation (var_offset_4282.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)) ;
      outArgument_outRegisterAddress.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_offset_4282.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 118)).objectCompare (var_size_4093)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_registerExpression temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GALGAS_string ("this offset is too large: should be lower than ").add_operation (var_size_4093.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)) ;
        outArgument_outRegisterAddress.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      var_registerAddressList_4062.method_first (outArgument_outRegisterAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 121)) ;
      outArgument_outRegisterAddress = outArgument_outRegisterAddress.add_operation (var_offset_4282.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 122)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (cPtr_registerExpression * inObject,
                                             const GALGAS_registerTable constin_inRegisterTable,
                                             const GALGAS_constantMap constin_inConstantMap,
                                             const GALGAS_bool constin_inWriteAccess,
                                             GALGAS_stringset & io_ioUsedRegisters,
                                             GALGAS_uint & out_outRegisterAddress,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outRegisterAddress.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_getRegisterAddress  (constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, io_ioUsedRegisters, out_outRegisterAddress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const GALGAS_ipic_31__38_Block inObject,
                                            const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                            GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  extensionMethod_enterInstructionReferencedLabels (temp_0.readProperty_mInstructionList (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 957)) ;
  const GALGAS_ipic_31__38_Block temp_1 = inObject ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_1.readProperty_mTerminator ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 962)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_optimize (const GALGAS_ipic_31__38_Block inObject,
                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                               const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                               GALGAS_bool & ioArgument_ioOptimizationDone,
                               GALGAS_string & ioArgument_ioListFileContents,
                               GALGAS_ipic_31__38_Block & outArgument_outOptimizedBlock,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizedBlock.drop () ; // Release 'out' argument
  GALGAS_bool var_optimized_37159 ;
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_37236 ;
  {
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  const GALGAS_ipic_31__38_Block temp_1 = inObject ;
  routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, temp_0.readProperty_mInstructionList (), temp_1.readProperty_mLabel (), var_optimized_37159, ioArgument_ioListFileContents, var_optimizedInstructionList_37236, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 979)) ;
  }
  const GALGAS_ipic_31__38_Block temp_2 = inObject ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_optimizedTerminator_37343 = temp_2.readProperty_mTerminator () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_Block temp_4 = inObject ;
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_optimizedInstructionList_37236.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 991)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (temp_4.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 991)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_ipic_31__38_SequentialInstruction var_lastInstruction_37552 ;
      GALGAS_uint joker_37568_2 ; // Joker input parameter
      GALGAS_uint joker_37568_1 ; // Joker input parameter
      var_optimizedInstructionList_37236.method_last (var_lastInstruction_37552, joker_37568_2, joker_37568_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 992)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation var_op_37584 (dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *> (var_lastInstruction_37552.ptr ())) ;
        if (nullptr == var_op_37584.ptr ()) {
          test_5 = kBoolFalse ;
        }
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = constinArgument_inOptimizeFlagStruct.readProperty_mMOVLWfollowedByRETreplacedByRETLW ().operator_and (GALGAS_bool (ComparisonKind::equal, var_op_37584.readProperty_mLiteralInstruction ().objectCompare (GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 995)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 995)).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              GALGAS_ipic_31__38_SequentialInstruction joker_37910_3 ; // Joker input parameter
              GALGAS_uint joker_37910_2 ; // Joker input parameter
              GALGAS_uint joker_37910_1 ; // Joker input parameter
              var_optimizedInstructionList_37236.setter_popLast (joker_37910_3, joker_37910_2, joker_37910_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 996)) ;
              }
              var_optimizedTerminator_37343 = GALGAS_ipic_31__38_RetlwTerminator::class_func_new (var_op_37584.readProperty_mInstructionLocation (), var_op_37584.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 997)) ;
              var_optimized_37159 = GALGAS_bool (true) ;
              const GALGAS_ipic_31__38_Block temp_7 = inObject ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [M] ").add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)).add_operation (GALGAS_string (": MOVLW k ; RETURN --> RETLW k\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          GALGAS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_38208 (dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (var_lastInstruction_37552.ptr ())) ;
          if (nullptr == var_jsr_38208.ptr ()) {
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
                var_optimizedInstructionList_37236.setter_popLast (joker_38418_3, joker_38418_2, joker_38418_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1005)) ;
                }
                var_optimizedTerminator_37343 = GALGAS_ipic_31__38_JumpTerminator::class_func_new (var_jsr_38208.readProperty_mInstructionLocation (), var_jsr_38208.readProperty_mTargetLabel (), var_jsr_38208.readProperty_mKind ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1006)) ;
                var_optimized_37159 = GALGAS_bool (true) ;
                const GALGAS_ipic_31__38_Block temp_10 = inObject ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [J] ").add_operation (temp_10.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (var_jsr_38208.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GALGAS_string (" ; RETURN --> JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (var_jsr_38208.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_optimized_37159.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 1027)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_ipic_31__38_Block temp_12 = inObject ;
      const GALGAS_ipic_31__38_Block temp_13 = inObject ;
      callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_12.readProperty_mTerminator ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, temp_13.readProperty_mLabel ().readProperty_string (), var_optimized_37159, ioArgument_ioListFileContents, var_optimizedTerminator_37343, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1028)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_optimized_37159.boolEnum () ;
    if (kBoolTrue == test_14) {
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      const GALGAS_ipic_31__38_Block temp_15 = inObject ;
      const GALGAS_ipic_31__38_Block temp_16 = inObject ;
      outArgument_outOptimizedBlock = GALGAS_ipic_31__38_Block::class_func_new (temp_15.readProperty_mAddress (), temp_16.readProperty_mLabel (), var_optimizedInstructionList_37236, var_optimizedTerminator_37343, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1046)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1041)) ;
    }
  }
  if (kBoolFalse == test_14) {
    const GALGAS_ipic_31__38_Block temp_17 = inObject ;
    outArgument_outOptimizedBlock = temp_17 ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_performRelativesResolution (const GALGAS_ipic_31__38_Block inObject,
                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                 const GALGAS_string constinArgument_inNextBlockLabel,
                                                 const GALGAS_uint constinArgument_inBlockStartAddress,
                                                 GALGAS_uint & ioArgument_ioConversionCount,
                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                 GALGAS_ipic_31__38_Block & outArgument_outModifiedBlock,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifiedBlock.drop () ; // Release 'out' argument
  GALGAS_ipic_31__38_SequentialInstructionList var_modifiedInstructionList_367 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 14)) ;
  GALGAS_uint var_address_449 = constinArgument_inBlockStartAddress ;
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_501 (temp_0.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_501.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction var_modifiedInstruction_749 ;
    const GALGAS_ipic_31__38_Block temp_1 = inObject ;
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_501.current_mInstruction (HERE).ptr (), var_address_449, temp_1.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedInstruction_749, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 17)) ;
    var_modifiedInstructionList_367.addAssign_operation (var_modifiedInstruction_749, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)) ;
    var_address_449 = var_address_449.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_501.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)) ;
    enumerator_501.gotoNextObject () ;
  }
  GALGAS_ipic_31__38_AbstractBlockTerminator var_modifiedTerminator_1147 ;
  const GALGAS_ipic_31__38_Block temp_2 = inObject ;
  const GALGAS_ipic_31__38_Block temp_3 = inObject ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_2.readProperty_mTerminator ().ptr (), var_address_449, temp_3.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedTerminator_1147, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 29)) ;
  const GALGAS_ipic_31__38_Block temp_4 = inObject ;
  const GALGAS_ipic_31__38_Block temp_5 = inObject ;
  outArgument_outModifiedBlock = GALGAS_ipic_31__38_Block::class_func_new (temp_4.readProperty_mAddress (), temp_5.readProperty_mLabel (), var_modifiedInstructionList_367, var_modifiedTerminator_1147, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 44)), GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 39)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@ipic18Block blockSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint extensionGetter_blockSize (const GALGAS_ipic_31__38_Block & inObject,
                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  result_outResult = callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_0.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 92)) ;
  const GALGAS_ipic_31__38_Block temp_1 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_2802 (temp_1.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_2802.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_2802.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)) ;
    enumerator_2802.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const GALGAS_ipic_31__38_Block inObject,
                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                             const GALGAS_string constinArgument_inNextBlockLabel,
                                             const GALGAS_uint constinArgument_inBlockStartAddress,
                                             GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_6339 = constinArgument_inBlockStartAddress ;
  const GALGAS_ipic_31__38_Block temp_0 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_6391 (temp_0.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_6391.hasCurrentObject ()) {
    const GALGAS_ipic_31__38_Block temp_1 = inObject ;
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_6391.current_mInstruction (HERE).ptr (), var_address_6339, temp_1.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 201)) ;
    var_address_6339 = var_address_6339.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_6391.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)) ;
    enumerator_6391.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_Block temp_2 = inObject ;
  const GALGAS_ipic_31__38_Block temp_3 = inObject ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_2.readProperty_mTerminator ().ptr (), var_address_6339, temp_3.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 210)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block generateCodeForBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCodeForBlock (const GALGAS_ipic_31__38_Block inObject,
                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataMap,
                                           const GALGAS_uint constinArgument_inBlockAddress,
                                           const GALGAS_string constinArgument_inNextBlockLabel,
                                           GALGAS_string & ioArgument_ioListFileContents,
                                           GALGAS_string & ioArgument_ioAssemblyString,
                                           GALGAS_generatedCodeMap & ioArgument_ioGeneratedCodeMap,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Addr.  Code       Duration    Assembly                                           Intermediate Representation\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 98)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_Block temp_1 = inObject ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 100)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      GALGAS_codeList temp_2 = GALGAS_codeList::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
      const GALGAS_ipic_31__38_Block temp_3 = inObject ;
      temp_2.addAssign_operation (temp_3.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)), GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 103))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
      GALGAS_stringlist temp_4 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 104)) ;
      const GALGAS_ipic_31__38_Block temp_5 = inObject ;
      temp_4.addAssign_operation (GALGAS_string ("LABEL ").add_operation (temp_5.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104)) ;
      routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (constinArgument_inBlockAddress, temp_2, temp_4, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 105)), GALGAS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 101)) ;
      }
      const GALGAS_ipic_31__38_Block temp_6 = inObject ;
      ioArgument_ioAssemblyString.plusAssign_operation(temp_6.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 109)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_codeList var_cd_3548 = GALGAS_codeList::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 111)) ;
    var_cd_3548.addAssign_operation (GALGAS_string ("ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)), GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 112))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)) ;
    const GALGAS_ipic_31__38_Block temp_7 = inObject ;
    var_cd_3548.addAssign_operation (temp_7.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)), GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 113))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)) ;
    {
    GALGAS_stringlist temp_8 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 117)) ;
    const GALGAS_ipic_31__38_Block temp_9 = inObject ;
    temp_8.addAssign_operation (GALGAS_string ("LABEL ").add_operation (temp_9.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)).add_operation (GALGAS_string (", ORG "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)).add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)) ;
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (constinArgument_inBlockAddress, var_cd_3548, temp_8, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 118)), GALGAS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 114)) ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(GALGAS_string ("    ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)) ;
    const GALGAS_ipic_31__38_Block temp_10 = inObject ;
    ioArgument_ioAssemblyString.plusAssign_operation(temp_10.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 123)) ;
  }
  GALGAS_uint var_address_4007 = constinArgument_inBlockAddress ;
  const GALGAS_ipic_31__38_Block temp_11 = inObject ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_4057 (temp_11.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_4057.hasCurrentObject ()) {
    GALGAS_codeList var_code_4196 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_4057.current_mInstruction (HERE).ptr (), var_address_4007, constinArgument_inSymbolTable, constinArgument_inDataMap, var_code_4196, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 128)) ;
    {
    ioArgument_ioGeneratedCodeMap.setter_insertKey (var_address_4007.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 134)).getter_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 134)), var_code_4196, enumerator_4057.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 134)) ;
    }
    {
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_address_4007, var_code_4196, callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4057.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 138)), enumerator_4057.current_mMin (HERE), enumerator_4057.current_mMax (HERE), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 135)) ;
    }
    cEnumerator_codeList enumerator_4467 (var_code_4196, EnumerationOrder::up) ;
    while (enumerator_4467.hasCurrentObject ()) {
      cEnumerator_uintlist enumerator_4502 (enumerator_4467.current_mBinaryCode (HERE), EnumerationOrder::up) ;
      while (enumerator_4502.hasCurrentObject ()) {
        {
        routine_emitCode_3F_ (enumerator_4502.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 145)) ;
        }
        enumerator_4502.gotoNextObject () ;
      }
      ioArgument_ioAssemblyString.plusAssign_operation(enumerator_4467.current_mAssemblyCode (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 147)) ;
      enumerator_4467.gotoNextObject () ;
    }
    var_address_4007 = var_address_4007.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4057.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 149)) ;
    GALGAS_uint var_generatedCodeSize_4751 = GALGAS_uint (uint32_t (0U)) ;
    cEnumerator_codeList enumerator_4784 (var_code_4196, EnumerationOrder::up) ;
    while (enumerator_4784.hasCurrentObject ()) {
      var_generatedCodeSize_4751 = var_generatedCodeSize_4751.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (enumerator_4784.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 153)) ;
      enumerator_4784.gotoNextObject () ;
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (ComparisonKind::notEqual, var_generatedCodeSize_4751.objectCompare (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4057.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 155)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_s_4961 = GALGAS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_4751.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 156)).add_operation (GALGAS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4057.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)) ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 158)), var_s_4961, fixItArray13  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 158)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_s_4961.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 159)) ;
      }
    }
    enumerator_4057.gotoNextObject () ;
  }
  GALGAS_codeList var_code_5327 ;
  const GALGAS_ipic_31__38_Block temp_14 = inObject ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_14.readProperty_mTerminator ().ptr (), var_address_4007, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_code_5327, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 163)) ;
  {
  GALGAS_stringlist temp_15 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 172)) ;
  const GALGAS_ipic_31__38_Block temp_16 = inObject ;
  temp_15.addAssign_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_16.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172)) ;
  const GALGAS_ipic_31__38_Block temp_17 = inObject ;
  const GALGAS_ipic_31__38_Block temp_18 = inObject ;
  routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_address_4007, var_code_5327, temp_15, temp_17.readProperty_mTerminatorMin (), temp_18.readProperty_mTerminatorMax (), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 169)) ;
  }
  cEnumerator_codeList enumerator_5547 (var_code_5327, EnumerationOrder::up) ;
  while (enumerator_5547.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_5580 (enumerator_5547.current_mBinaryCode (HERE), EnumerationOrder::up) ;
    while (enumerator_5580.hasCurrentObject ()) {
      {
      routine_emitCode_3F_ (enumerator_5580.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 179)) ;
      }
      enumerator_5580.gotoNextObject () ;
    }
    ioArgument_ioAssemblyString.plusAssign_operation(enumerator_5547.current_mAssemblyCode (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 181)) ;
    enumerator_5547.gotoNextObject () ;
  }
  GALGAS_bigint var_generatedCodeSize_5759 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 184)) ;
  cEnumerator_codeList enumerator_5792 (var_code_5327, EnumerationOrder::up) ;
  while (enumerator_5792.hasCurrentObject ()) {
    var_generatedCodeSize_5759 = var_generatedCodeSize_5759.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (enumerator_5792.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 186)).getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 186)) ;
    enumerator_5792.gotoNextObject () ;
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_ipic_31__38_Block temp_20 = inObject ;
    test_19 = GALGAS_bool (ComparisonKind::notEqual, var_generatedCodeSize_5759.objectCompare (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_20.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 188)).getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 188)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_ipic_31__38_Block temp_21 = inObject ;
      GALGAS_string var_s_5990 = GALGAS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_5759.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 189)).add_operation (GALGAS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_21.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)) ;
      TC_Array <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 191)), var_s_5990, fixItArray22  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 191)) ;
      ioArgument_ioListFileContents.plusAssign_operation(var_s_5990.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 192)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block computeDuration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_computeDuration (const GALGAS_ipic_31__38_Block inObject,
                                      GALGAS_blockDurationMap & ioArgument_ioExploredBlockMap,
                                      GALGAS_string inArgument_inNextLabel,
                                      GALGAS_ipic_31__38_Block & outArgument_outNewBlock,
                                      GALGAS_bool & ioArgument_ioContinue,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNewBlock.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_Block temp_1 = inObject ;
    const GALGAS_ipic_31__38_Block temp_2 = inObject ;
    test_0 = GALGAS_bool (ComparisonKind::lowerOrEqual, temp_1.readProperty_mTerminatorMin ().objectCompare (temp_2.readProperty_mTerminatorMax ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_Block temp_3 = inObject ;
      outArgument_outNewBlock = temp_3 ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_terminatorMin_22379 ;
    GALGAS_uint var_terminatorMax_22398 ;
    const GALGAS_ipic_31__38_Block temp_4 = inObject ;
    callExtensionMethod_terminatorMinMaxDuration ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_4.readProperty_mTerminator ().ptr (), ioArgument_ioExploredBlockMap, inArgument_inNextLabel, var_terminatorMin_22379, var_terminatorMax_22398, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 593)) ;
    GALGAS_uint var_min_22421 = var_terminatorMin_22379 ;
    GALGAS_uint var_max_22449 = var_terminatorMax_22398 ;
    GALGAS_ipic_31__38_SequentialInstructionList var_computedInstructionList_22510 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_duration_computations.galgas", 596)) ;
    GALGAS_bool var_ok_22547 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_min_22421.objectCompare (var_max_22449)) ;
    const GALGAS_ipic_31__38_Block temp_5 = inObject ;
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_22582 (temp_5.readProperty_mInstructionList (), EnumerationOrder::down) ;
    while (enumerator_22582.hasCurrentObject ()) {
      GALGAS_uint var_instructionMin_22689 ;
      GALGAS_uint var_instructionMax_22723 ;
      callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_22582.current_mInstruction (HERE).ptr (), ioArgument_ioExploredBlockMap, var_instructionMin_22689, var_instructionMax_22723, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 599)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        GALGAS_bool test_7 = var_ok_22547 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_instructionMin_22689.objectCompare (var_instructionMax_22723)) ;
        }
        test_6 = test_7.boolEnum () ;
        if (kBoolTrue == test_6) {
          var_min_22421 = var_min_22421.add_operation (var_instructionMin_22689, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 605)) ;
          var_max_22449 = var_max_22449.add_operation (var_instructionMax_22723, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 606)) ;
          {
          var_computedInstructionList_22510.setter_insertAtIndex (enumerator_22582.current_mInstruction (HERE), var_min_22421, var_max_22449, GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 607)) ;
          }
        }
      }
      if (kBoolFalse == test_6) {
        var_ok_22547 = GALGAS_bool (false) ;
        {
        var_computedInstructionList_22510.setter_insertAtIndex (enumerator_22582.current_mInstruction (HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 610)), GALGAS_uint (uint32_t (0U)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 610)) ;
        }
      }
      enumerator_22582.gotoNextObject () ;
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_ok_22547.boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_ipic_31__38_Block temp_9 = inObject ;
        const GALGAS_ipic_31__38_Block temp_10 = inObject ;
        const GALGAS_ipic_31__38_Block temp_11 = inObject ;
        outArgument_outNewBlock = GALGAS_ipic_31__38_Block::class_func_new (temp_9.readProperty_mAddress (), temp_10.readProperty_mLabel (), var_computedInstructionList_22510, temp_11.readProperty_mTerminator (), var_terminatorMin_22379, var_terminatorMax_22398, inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 614)) ;
        ioArgument_ioContinue = GALGAS_bool (true) ;
        {
        const GALGAS_ipic_31__38_Block temp_12 = inObject ;
        ioArgument_ioExploredBlockMap.setter_insertKey (temp_12.readProperty_mLabel (), var_min_22421, var_max_22449, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 623)) ;
        }
      }
    }
    if (kBoolFalse == test_8) {
      const GALGAS_ipic_31__38_Block temp_13 = inObject ;
      outArgument_outNewBlock = temp_13 ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_piccoloDeviceModel::~ GALGAS_piccoloDeviceModel (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_piccoloDeviceModel GALGAS_piccoloDeviceModel::init_28__2C__2C__2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_mDeviceName,
                                                                                                       const GALGAS_processorType & in_mProcessorType,
                                                                                                       const GALGAS_luint & in_mRomSize,
                                                                                                       const GALGAS_luint & in_mBankCount,
                                                                                                       const GALGAS_registerTable & in_mRegisterTable,
                                                                                                       const GALGAS_ramBankTable & in_mRamBankTable,
                                                                                                       const GALGAS_uint & in_mEepromSize,
                                                                                                       const GALGAS_uint & in_mEepromAddress,
                                                                                                       const GALGAS_configRegisterMap & in_mConfigRegisterMap,
                                                                                                       const GALGAS_string & in_mSharedBankName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_piccoloDeviceModel result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeviceName = in_mDeviceName ;
  result.mProperty_mProcessorType = in_mProcessorType ;
  result.mProperty_mRomSize = in_mRomSize ;
  result.mProperty_mBankCount = in_mBankCount ;
  result.mProperty_mRegisterTable = in_mRegisterTable ;
  result.mProperty_mRamBankTable = in_mRamBankTable ;
  result.mProperty_mEepromSize = in_mEepromSize ;
  result.mProperty_mEepromAddress = in_mEepromAddress ;
  result.mProperty_mConfigRegisterMap = in_mConfigRegisterMap ;
  result.mProperty_mSharedBankName = in_mSharedBankName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_piccoloDeviceModel::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_piccoloDeviceModel GALGAS_piccoloDeviceModel::class_func_new (const GALGAS_lstring & in_mDeviceName,
                                                                     const GALGAS_processorType & in_mProcessorType,
                                                                     const GALGAS_luint & in_mRomSize,
                                                                     const GALGAS_luint & in_mBankCount,
                                                                     const GALGAS_registerTable & in_mRegisterTable,
                                                                     const GALGAS_ramBankTable & in_mRamBankTable,
                                                                     const GALGAS_uint & in_mEepromSize,
                                                                     const GALGAS_uint & in_mEepromAddress,
                                                                     const GALGAS_configRegisterMap & in_mConfigRegisterMap,
                                                                     const GALGAS_string & in_mSharedBankName,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_piccoloDeviceModel result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeviceName = in_mDeviceName ;
  result.mProperty_mProcessorType = in_mProcessorType ;
  result.mProperty_mRomSize = in_mRomSize ;
  result.mProperty_mBankCount = in_mBankCount ;
  result.mProperty_mRegisterTable = in_mRegisterTable ;
  result.mProperty_mRamBankTable = in_mRamBankTable ;
  result.mProperty_mEepromSize = in_mEepromSize ;
  result.mProperty_mEepromAddress = in_mEepromAddress ;
  result.mProperty_mConfigRegisterMap = in_mConfigRegisterMap ;
  result.mProperty_mSharedBankName = in_mSharedBankName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_piccoloDeviceModel::objectCompare (const GALGAS_piccoloDeviceModel & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDeviceName.objectCompare (inOperand.mProperty_mDeviceName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mProcessorType.objectCompare (inOperand.mProperty_mProcessorType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRomSize.objectCompare (inOperand.mProperty_mRomSize) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBankCount.objectCompare (inOperand.mProperty_mBankCount) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterTable.objectCompare (inOperand.mProperty_mRegisterTable) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRamBankTable.objectCompare (inOperand.mProperty_mRamBankTable) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEepromSize.objectCompare (inOperand.mProperty_mEepromSize) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEepromAddress.objectCompare (inOperand.mProperty_mEepromAddress) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConfigRegisterMap.objectCompare (inOperand.mProperty_mConfigRegisterMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSharedBankName.objectCompare (inOperand.mProperty_mSharedBankName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_piccoloDeviceModel::isValid (void) const {
  return mProperty_mDeviceName.isValid () && mProperty_mProcessorType.isValid () && mProperty_mRomSize.isValid () && mProperty_mBankCount.isValid () && mProperty_mRegisterTable.isValid () && mProperty_mRamBankTable.isValid () && mProperty_mEepromSize.isValid () && mProperty_mEepromAddress.isValid () && mProperty_mConfigRegisterMap.isValid () && mProperty_mSharedBankName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_piccoloDeviceModel::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @piccoloDeviceModel:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProcessorType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRomSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBankCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterTable.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRamBankTable.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEepromSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEepromAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConfigRegisterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSharedBankName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @piccoloDeviceModel generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ("piccoloDeviceModel",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_piccoloDeviceModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_piccoloDeviceModel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_piccoloDeviceModel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_piccoloDeviceModel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_piccoloDeviceModel GALGAS_piccoloDeviceModel::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_piccoloDeviceModel result ;
  const GALGAS_piccoloDeviceModel * p = (const GALGAS_piccoloDeviceModel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_piccoloDeviceModel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("piccoloDeviceModel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_piccoloDevice_grammar [] = {
// At index 0 : <start_symbol>, in file 'piccoloDevice_syntax.ggs', line 10
  TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_controller) // $controller$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__7B_) // ${$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_processor) // $processor$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_romsize) // $romsize$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (1) // <select_piccoloDevice_5F_syntax_0>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_bank) // $bank$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, TOP_DOWN_NONTERMINAL (4) // <select_piccoloDevice_5F_syntax_3>
, TOP_DOWN_NONTERMINAL (7) // <select_piccoloDevice_5F_syntax_6>
, TOP_DOWN_NONTERMINAL (13) // <select_piccoloDevice_5F_syntax_12>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 19 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
, TOP_DOWN_END_PRODUCTION ()
// At index 20 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize) // $eepromsize$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 26 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
, TOP_DOWN_END_PRODUCTION ()
// At index 27 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister) // $unusedregister$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (3) // <select_piccoloDevice_5F_syntax_2>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 33 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
, TOP_DOWN_END_PRODUCTION ()
// At index 34 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_END_PRODUCTION ()
// At index 37 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
, TOP_DOWN_END_PRODUCTION ()
// At index 38 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_ram) // $ram$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (5) // <select_piccoloDevice_5F_syntax_4>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (4) // <select_piccoloDevice_5F_syntax_3>
, TOP_DOWN_END_PRODUCTION ()
// At index 48 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
, TOP_DOWN_END_PRODUCTION ()
// At index 49 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat) // $mirrorat$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, TOP_DOWN_END_PRODUCTION ()
// At index 53 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
, TOP_DOWN_END_PRODUCTION ()
// At index 54 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, TOP_DOWN_END_PRODUCTION ()
// At index 58 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
, TOP_DOWN_END_PRODUCTION ()
// At index 59 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_register) // $register$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3C_) // $<$
, TOP_DOWN_NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, TOP_DOWN_NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3E_) // $>$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (7) // <select_piccoloDevice_5F_syntax_6>
, TOP_DOWN_END_PRODUCTION ()
// At index 71 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
, TOP_DOWN_END_PRODUCTION ()
// At index 72 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, TOP_DOWN_END_PRODUCTION ()
// At index 76 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
, TOP_DOWN_END_PRODUCTION ()
// At index 77 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TOP_DOWN_NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, TOP_DOWN_NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, TOP_DOWN_END_PRODUCTION ()
// At index 81 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, TOP_DOWN_NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, TOP_DOWN_END_PRODUCTION ()
// At index 85 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2D_) // $-$
, TOP_DOWN_END_PRODUCTION ()
// At index 87 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
, TOP_DOWN_END_PRODUCTION ()
// At index 88 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2F_) // $/$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, TOP_DOWN_NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, TOP_DOWN_END_PRODUCTION ()
// At index 93 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
, TOP_DOWN_END_PRODUCTION ()
// At index 94 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__5B_) // $[$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__5D_) // $]$
, TOP_DOWN_END_PRODUCTION ()
// At index 98 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
, TOP_DOWN_END_PRODUCTION ()
// At index 99 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_configuration) // $configuration$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_width) // $width$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (15) // <select_piccoloDevice_5F_syntax_14>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__7D_) // $}$
, TOP_DOWN_NONTERMINAL (13) // <select_piccoloDevice_5F_syntax_12>
, TOP_DOWN_END_PRODUCTION ()
// At index 111 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
, TOP_DOWN_END_PRODUCTION ()
// At index 112 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_illegal) // $illegal$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_message) // $message$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, TOP_DOWN_END_PRODUCTION ()
// At index 120 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
, TOP_DOWN_END_PRODUCTION ()
// At index 121 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_setting) // $setting$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_NONTERMINAL (16) // <select_piccoloDevice_5F_syntax_15>
, TOP_DOWN_NONTERMINAL (15) // <select_piccoloDevice_5F_syntax_14>
, TOP_DOWN_END_PRODUCTION ()
// At index 135 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
, TOP_DOWN_END_PRODUCTION ()
// At index 136 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_setting) // $setting$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_NONTERMINAL (16) // <select_piccoloDevice_5F_syntax_15>
, TOP_DOWN_END_PRODUCTION ()
// At index 144 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (0) // <start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_piccoloDevice_grammar [34] = {
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

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_piccoloDevice_grammar [34] = {
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

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_piccoloDevice_grammar [19] = {
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

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_piccoloDevice_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 1 : <select_piccoloDevice_5F_syntax_0>
Lexique_piccoloDevice_5F_lexique::kToken_bank, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_eepromsize, -1, // Choice 2
  -1,
// At index 6 : <select_piccoloDevice_5F_syntax_1>
Lexique_piccoloDevice_5F_lexique::kToken_ram, Lexique_piccoloDevice_5F_lexique::kToken_register, Lexique_piccoloDevice_5F_lexique::kToken_configuration, Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_unusedregister, -1, // Choice 2
  -1,
// At index 14 : <select_piccoloDevice_5F_syntax_2>
Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_to, -1, // Choice 2
  -1,
// At index 19 : <select_piccoloDevice_5F_syntax_3>
Lexique_piccoloDevice_5F_lexique::kToken_register, Lexique_piccoloDevice_5F_lexique::kToken_configuration, Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_ram, -1, // Choice 2
  -1,
// At index 26 : <select_piccoloDevice_5F_syntax_4>
Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_mirrorat, -1, // Choice 2
  -1,
// At index 31 : <select_piccoloDevice_5F_syntax_5>
Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 36 : <select_piccoloDevice_5F_syntax_6>
Lexique_piccoloDevice_5F_lexique::kToken_configuration, Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_register, -1, // Choice 2
  -1,
// At index 42 : <select_piccoloDevice_5F_syntax_7>
Lexique_piccoloDevice_5F_lexique::kToken__3C_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 47 : <select_piccoloDevice_5F_syntax_8>
Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 52 : <select_piccoloDevice_5F_syntax_9>
Lexique_piccoloDevice_5F_lexique::kToken_identifier, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2D_, -1, // Choice 2
  -1,
// At index 57 : <select_piccoloDevice_5F_syntax_10>
Lexique_piccoloDevice_5F_lexique::kToken__2C_, Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2F_, -1, // Choice 2
  -1,
// At index 63 : <select_piccoloDevice_5F_syntax_11>
Lexique_piccoloDevice_5F_lexique::kToken__2C_, Lexique_piccoloDevice_5F_lexique::kToken__2F_, Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__5B_, -1, // Choice 2
  -1,
// At index 70 : <select_piccoloDevice_5F_syntax_12>
Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_configuration, -1, // Choice 2
  -1,
// At index 75 : <select_piccoloDevice_5F_syntax_13>
Lexique_piccoloDevice_5F_lexique::kToken__7B_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_illegal, -1, // Choice 2
  -1,
// At index 80 : <select_piccoloDevice_5F_syntax_14>
Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_identifier, -1, // Choice 2
  -1,
// At index 85 : <select_piccoloDevice_5F_syntax_15>
Lexique_piccoloDevice_5F_lexique::kToken_identifier, Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_setting, -1, // Choice 2
  -1,
// At index 91 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_piccoloDevice_grammar [19] = {
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

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_parse (Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_indexing (Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_ (GALGAS_piccoloDeviceModel & parameter_1,
                                Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_(parameter_1, inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
    if (ok) {
      cGrammar_piccoloDevice_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_piccoloDevice_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_piccoloDevice_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_piccoloDevice_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_piccoloDeviceModel &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                      gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_piccoloDevice_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_piccoloDeviceModel &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_piccoloDevice_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_0' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_0 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_1' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_1 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_2' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_2 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_3' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_3 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_4' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_4 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_5' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_5 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_6' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_6 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_7' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_7 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_8' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_8 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_9' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_9 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_10' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_10 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_11' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_11 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_12' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_12 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_13' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_13 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_14' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_14 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_15' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_15 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::~ GALGAS__32_lstringlist_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_mValue_30_,
                                                                                       const GALGAS_lstring & in_mValue_31_,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::class_func_new (const GALGAS_lstring & in_mValue0,
                                                                                     const GALGAS_lstring & in_mValue1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS__32_lstringlist_2D_element::objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue_30_.objectCompare (inOperand.mProperty_mValue_30_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue_31_.objectCompare (inOperand.mProperty_mValue_31_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS__32_lstringlist_2D_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2D_element ("2lstringlist-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS__32_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS__32_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  const GALGAS__32_lstringlist_2D_element * p = (const GALGAS__32_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS__32_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element::GALGAS_bitSliceTable_2D_element (void) :
mProperty_lkey (),
mProperty_mSliceIndex (),
mProperty_mSliceSize () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element::~ GALGAS_bitSliceTable_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_uint & in_mSliceIndex,
                                                                                       const GALGAS_uint & in_mSliceSize,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bitSliceTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSliceIndex = in_mSliceIndex ;
  result.mProperty_mSliceSize = in_mSliceSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element::GALGAS_bitSliceTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_uint & inOperand1,
                                                                  const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSliceIndex (inOperand1),
mProperty_mSliceSize (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                 const GALGAS_uint & in_mSliceIndex,
                                                                                 const GALGAS_uint & in_mSliceSize,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bitSliceTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSliceIndex = in_mSliceIndex ;
  result.mProperty_mSliceSize = in_mSliceSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bitSliceTable_2D_element::objectCompare (const GALGAS_bitSliceTable_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSliceIndex.objectCompare (inOperand.mProperty_mSliceIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSliceSize.objectCompare (inOperand.mProperty_mSliceSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bitSliceTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSliceIndex.isValid () && mProperty_mSliceSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSliceIndex.drop () ;
  mProperty_mSliceSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bitSliceTable_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bitSliceTable-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSliceIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSliceSize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bitSliceTable-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitSliceTable_2D_element ("bitSliceTable-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bitSliceTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bitSliceTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitSliceTable_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bitSliceTable_2D_element GALGAS_bitSliceTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bitSliceTable_2D_element result ;
  const GALGAS_bitSliceTable_2D_element * p = (const GALGAS_bitSliceTable_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bitSliceTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element::GALGAS_ramDefinitionList_2D_element (void) :
mProperty_mBankName (),
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element::~ GALGAS_ramDefinitionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_mBankName,
                                                                                           const GALGAS_declarationInRamList & in_mDeclaration,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBankName = in_mBankName ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element::GALGAS_ramDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_declarationInRamList & inOperand1) :
mProperty_mBankName (inOperand0),
mProperty_mDeclaration (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::class_func_new (const GALGAS_lstring & in_mBankName,
                                                                                         const GALGAS_declarationInRamList & in_mDeclaration,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBankName = in_mBankName ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ramDefinitionList_2D_element::objectCompare (const GALGAS_ramDefinitionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBankName.objectCompare (inOperand.mProperty_mBankName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ramDefinitionList_2D_element::isValid (void) const {
  return mProperty_mBankName.isValid () && mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList_2D_element::drop (void) {
  mProperty_mBankName.drop () ;
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramDefinitionList_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ramDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBankName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ramDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ("ramDefinitionList-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ramDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ramDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramDefinitionList_2D_element GALGAS_ramDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ramDefinitionList_2D_element result ;
  const GALGAS_ramDefinitionList_2D_element * p = (const GALGAS_ramDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ramDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element::GALGAS_configSettingList_2D_element (void) :
mProperty_mSettingName (),
mProperty_mSettingValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element::~ GALGAS_configSettingList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_mSettingName,
                                                                                           const GALGAS_lstring & in_mSettingValue,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configSettingList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSettingName = in_mSettingName ;
  result.mProperty_mSettingValue = in_mSettingValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element::GALGAS_configSettingList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1) :
mProperty_mSettingName (inOperand0),
mProperty_mSettingValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::class_func_new (const GALGAS_lstring & in_mSettingName,
                                                                                         const GALGAS_lstring & in_mSettingValue,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configSettingList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSettingName = in_mSettingName ;
  result.mProperty_mSettingValue = in_mSettingValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_configSettingList_2D_element::objectCompare (const GALGAS_configSettingList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSettingName.objectCompare (inOperand.mProperty_mSettingName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSettingValue.objectCompare (inOperand.mProperty_mSettingValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_configSettingList_2D_element::isValid (void) const {
  return mProperty_mSettingName.isValid () && mProperty_mSettingValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList_2D_element::drop (void) {
  mProperty_mSettingName.drop () ;
  mProperty_mSettingValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configSettingList_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configSettingList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSettingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSettingValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configSettingList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configSettingList_2D_element ("configSettingList-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configSettingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configSettingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configSettingList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configSettingList_2D_element GALGAS_configSettingList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configSettingList_2D_element result ;
  const GALGAS_configSettingList_2D_element * p = (const GALGAS_configSettingList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configSettingList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element::GALGAS_immediatSliceExpressionList_2D_element (void) :
mProperty_mSliceName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element::~ GALGAS_immediatSliceExpressionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element GALGAS_immediatSliceExpressionList_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_mSliceName,
                                                                                                               const GALGAS_immediatExpression & in_mExpression,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceName = in_mSliceName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element::GALGAS_immediatSliceExpressionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_immediatExpression & inOperand1) :
mProperty_mSliceName (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element GALGAS_immediatSliceExpressionList_2D_element::class_func_new (const GALGAS_lstring & in_mSliceName,
                                                                                                             const GALGAS_immediatExpression & in_mExpression,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceName = in_mSliceName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_immediatSliceExpressionList_2D_element::objectCompare (const GALGAS_immediatSliceExpressionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSliceName.objectCompare (inOperand.mProperty_mSliceName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_immediatSliceExpressionList_2D_element::isValid (void) const {
  return mProperty_mSliceName.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList_2D_element::drop (void) {
  mProperty_mSliceName.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_immediatSliceExpressionList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @immediatSliceExpressionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSliceName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @immediatSliceExpressionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ("immediatSliceExpressionList-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_immediatSliceExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_immediatSliceExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_immediatSliceExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatSliceExpressionList_2D_element GALGAS_immediatSliceExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_immediatSliceExpressionList_2D_element result ;
  const GALGAS_immediatSliceExpressionList_2D_element * p = (const GALGAS_immediatSliceExpressionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_immediatSliceExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element::GALGAS_constantDefinitionList_2D_element (void) :
mProperty_mConstantName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element::~ GALGAS_constantDefinitionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element GALGAS_constantDefinitionList_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_mConstantName,
                                                                                                     const GALGAS_immediatExpression & in_mExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element::GALGAS_constantDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_immediatExpression & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element GALGAS_constantDefinitionList_2D_element::class_func_new (const GALGAS_lstring & in_mConstantName,
                                                                                                   const GALGAS_immediatExpression & in_mExpression,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_constantDefinitionList_2D_element::objectCompare (const GALGAS_constantDefinitionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constantDefinitionList_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantDefinitionList_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constantDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ("constantDefinitionList-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantDefinitionList_2D_element GALGAS_constantDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constantDefinitionList_2D_element result ;
  const GALGAS_constantDefinitionList_2D_element * p = (const GALGAS_constantDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constantDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element::GALGAS_actualConfigurationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddress (),
mProperty_mRegisterValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element::~ GALGAS_actualConfigurationMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_uint & in_mRegisterAddress,
                                                                                                         const GALGAS_uint & in_mRegisterValue,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterValue = in_mRegisterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element::GALGAS_actualConfigurationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uint & inOperand1,
                                                                                    const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mRegisterValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_uint & in_mRegisterAddress,
                                                                                                   const GALGAS_uint & in_mRegisterValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterValue = in_mRegisterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_actualConfigurationMap_2D_element::objectCompare (const GALGAS_actualConfigurationMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterValue.objectCompare (inOperand.mProperty_mRegisterValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_actualConfigurationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualConfigurationMap_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualConfigurationMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actualConfigurationMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ("actualConfigurationMap-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualConfigurationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualConfigurationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualConfigurationMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualConfigurationMap_2D_element GALGAS_actualConfigurationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualConfigurationMap_2D_element result ;
  const GALGAS_actualConfigurationMap_2D_element * p = (const GALGAS_actualConfigurationMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualConfigurationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element::~ GALGAS_labelMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::init_28__29_ (const GALGAS_lstring & in_lkey,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_labelMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_labelMap_2D_element::objectCompare (const GALGAS_labelMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_labelMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_labelMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_labelMap_2D_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @labelMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @labelMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap_2D_element ("labelMap-element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_labelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_labelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  const GALGAS_labelMap_2D_element * p = (const GALGAS_labelMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_labelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::~ GALGAS_constantMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                               const GALGAS_sint_36__34_ & in_mValue,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_sint_36__34_ & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                             const GALGAS_sint_36__34_ & in_mValue,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_constantMap_2D_element::objectCompare (const GALGAS_constantMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2D_element ("constantMap-element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  const GALGAS_constantMap_2D_element * p = (const GALGAS_constantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element::GALGAS_routineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsNoReturn (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element::~ GALGAS_routineMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::init_28__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_bool & in_mIsNoReturn,
                                                                                         const GALGAS_uint & in_mRequiredBank,
                                                                                         const GALGAS_uint & in_mReturnedBank,
                                                                                         const GALGAS_bool & in_mPreservesBank,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                           const GALGAS_bool & in_mIsNoReturn,
                                                                           const GALGAS_uint & in_mRequiredBank,
                                                                           const GALGAS_uint & in_mReturnedBank,
                                                                           const GALGAS_bool & in_mPreservesBank,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineMap_2D_element::objectCompare (const GALGAS_routineMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap_2D_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap_2D_element ("routineMap-element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap_2D_element GALGAS_routineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineMap_2D_element result ;
  const GALGAS_routineMap_2D_element * p = (const GALGAS_routineMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element::GALGAS_symbolTableForOptimizations_2D_element (void) :
mProperty_lkey (),
mProperty_mDefinitionLineIndex (),
mProperty_mIsDeletable () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element::~ GALGAS_symbolTableForOptimizations_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_uint & in_mDefinitionLineIndex,
                                                                                                                   const GALGAS_bool & in_mIsDeletable,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  result.mProperty_mIsDeletable = in_mIsDeletable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element::GALGAS_symbolTableForOptimizations_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_uint & inOperand1,
                                                                                              const GALGAS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionLineIndex (inOperand1),
mProperty_mIsDeletable (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                             const GALGAS_uint & in_mDefinitionLineIndex,
                                                                                                             const GALGAS_bool & in_mIsDeletable,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  result.mProperty_mIsDeletable = in_mIsDeletable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_symbolTableForOptimizations_2D_element::objectCompare (const GALGAS_symbolTableForOptimizations_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDefinitionLineIndex.objectCompare (inOperand.mProperty_mDefinitionLineIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsDeletable.objectCompare (inOperand.mProperty_mIsDeletable) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForOptimizations_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () && mProperty_mIsDeletable.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionLineIndex.drop () ;
  mProperty_mIsDeletable.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForOptimizations_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForOptimizations-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsDeletable.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForOptimizations-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ("symbolTableForOptimizations-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForOptimizations_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForOptimizations_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForOptimizations_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForOptimizations_2D_element GALGAS_symbolTableForOptimizations_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForOptimizations_2D_element result ;
  const GALGAS_symbolTableForOptimizations_2D_element * p = (const GALGAS_symbolTableForOptimizations_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_symbolTableForOptimizations_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element::GALGAS_configFieldMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRegisterName (),
mProperty_mMaskValue (),
mProperty_mDescription (),
mProperty_mFieldSettingMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element::~ GALGAS_configFieldMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::init_28__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_lstring & in_mRegisterName,
                                                                                                 const GALGAS_luint & in_mMaskValue,
                                                                                                 const GALGAS_lstring & in_mDescription,
                                                                                                 const GALGAS_fieldSettingMap & in_mFieldSettingMap,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configFieldMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_lstring & in_mRegisterName,
                                                                                   const GALGAS_luint & in_mMaskValue,
                                                                                   const GALGAS_lstring & in_mDescription,
                                                                                   const GALGAS_fieldSettingMap & in_mFieldSettingMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configFieldMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_configFieldMap_2D_element::objectCompare (const GALGAS_configFieldMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMaskValue.objectCompare (inOperand.mProperty_mMaskValue) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDescription.objectCompare (inOperand.mProperty_mDescription) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFieldSettingMap.objectCompare (inOperand.mProperty_mFieldSettingMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_configFieldMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterName.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mMaskValue.drop () ;
  mProperty_mDescription.drop () ;
  mProperty_mFieldSettingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configFieldMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configFieldMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaskValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configFieldMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configFieldMap_2D_element ("configFieldMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configFieldMap_2D_element GALGAS_configFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_configFieldMap_2D_element result ;
  const GALGAS_configFieldMap_2D_element * p = (const GALGAS_configFieldMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element::GALGAS_baseline_5F_routineDefinitionList_2D_element (void) :
mProperty_mRoutineName (),
mProperty_mPage (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element::~ GALGAS_baseline_5F_routineDefinitionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::init_28__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_mRoutineName,
                                                                                                                                       const GALGAS_luint & in_mPage,
                                                                                                                                       const GALGAS_bool & in_mIsNoReturn,
                                                                                                                                       const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                                       const GALGAS_location & in_mEndOfRoutineLocation,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mPage = in_mPage ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                         const GALGAS_luint & in_mPage,
                                                                                                                         const GALGAS_bool & in_mIsNoReturn,
                                                                                                                         const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                         const GALGAS_location & in_mEndOfRoutineLocation,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mPage = in_mPage ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_routineDefinitionList_2D_element::objectCompare (const GALGAS_baseline_5F_routineDefinitionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPage.objectCompare (inOperand.mProperty_mPage) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfRoutineLocation.objectCompare (inOperand.mProperty_mEndOfRoutineLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_routineDefinitionList_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mPage.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList_2D_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mPage.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_routineDefinitionList_2D_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_routineDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_routineDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ("baseline_routineDefinitionList-element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_routineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_routineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_routineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_routineDefinitionList_2D_element GALGAS_baseline_5F_routineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_routineDefinitionList_2D_element result ;
  const GALGAS_baseline_5F_routineDefinitionList_2D_element * p = (const GALGAS_baseline_5F_routineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_routineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element::GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element::~ GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::init_28__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element::GALGAS_baseline_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_declaredRoutineMap_2D_element::objectCompare (const GALGAS_baseline_5F_declaredRoutineMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_declaredRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_declaredRoutineMap_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_declaredRoutineMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_declaredRoutineMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ("baseline_declaredRoutineMap-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_declaredRoutineMap_2D_element GALGAS_baseline_5F_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_declaredRoutineMap_2D_element result ;
  const GALGAS_baseline_5F_declaredRoutineMap_2D_element * p = (const GALGAS_baseline_5F_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element::GALGAS_baselineRoutineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIsNoReturn (),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element::~ GALGAS_baselineRoutineMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_bool & in_mIsNoReturn,
                                                                                                 const GALGAS_luint & in_mPage,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mPage = in_mPage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element::GALGAS_baselineRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_luint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsNoReturn (inOperand1),
mProperty_mPage (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_bool & in_mIsNoReturn,
                                                                                           const GALGAS_luint & in_mPage,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mPage = in_mPage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baselineRoutineMap_2D_element::objectCompare (const GALGAS_baselineRoutineMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPage.objectCompare (inOperand.mProperty_mPage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baselineRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mPage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mPage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineRoutineMap_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baselineRoutineMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baselineRoutineMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ("baselineRoutineMap-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baselineRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baselineRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineRoutineMap_2D_element GALGAS_baselineRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baselineRoutineMap_2D_element result ;
  const GALGAS_baselineRoutineMap_2D_element * p = (const GALGAS_baselineRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baselineRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element::GALGAS_baselineSymbolTableForOptimizations_2D_element (void) :
mProperty_lkey (),
mProperty_mDefinitionLineIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element::~ GALGAS_baselineSymbolTableForOptimizations_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                               const GALGAS_uint & in_mDefinitionLineIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element::GALGAS_baselineSymbolTableForOptimizations_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionLineIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                             const GALGAS_uint & in_mDefinitionLineIndex,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baselineSymbolTableForOptimizations_2D_element::objectCompare (const GALGAS_baselineSymbolTableForOptimizations_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDefinitionLineIndex.objectCompare (inOperand.mProperty_mDefinitionLineIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baselineSymbolTableForOptimizations_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionLineIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baselineSymbolTableForOptimizations_2D_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baselineSymbolTableForOptimizations-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baselineSymbolTableForOptimizations-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ("baselineSymbolTableForOptimizations-element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baselineSymbolTableForOptimizations_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baselineSymbolTableForOptimizations_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baselineSymbolTableForOptimizations_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baselineSymbolTableForOptimizations_2D_element GALGAS_baselineSymbolTableForOptimizations_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baselineSymbolTableForOptimizations_2D_element result ;
  const GALGAS_baselineSymbolTableForOptimizations_2D_element * p = (const GALGAS_baselineSymbolTableForOptimizations_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baselineSymbolTableForOptimizations_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element::GALGAS_baseline_5F_symbolTable_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element::~ GALGAS_baseline_5F_symbolTable_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_uint & in_mRoutineAddress,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element::GALGAS_baseline_5F_symbolTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_uint & in_mRoutineAddress,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_symbolTable_2D_element::objectCompare (const GALGAS_baseline_5F_symbolTable_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineAddress.objectCompare (inOperand.mProperty_mRoutineAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_symbolTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_symbolTable-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_symbolTable-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ("baseline_symbolTable-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_symbolTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_symbolTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_symbolTable_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element GALGAS_baseline_5F_symbolTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable_2D_element result ;
  const GALGAS_baseline_5F_symbolTable_2D_element * p = (const GALGAS_baseline_5F_symbolTable_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_symbolTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element::GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) :
mProperty_mInterruptLocation (),
mProperty_mInstructionList (),
mProperty_mFirstSaveRegister (),
mProperty_mSecondSaveRegister (),
mProperty_mEndOfInterruptLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element::~ GALGAS_midrange_5F_interruptDefinitionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::init_28__2C__2C__2C__2C__29_ (const GALGAS_location & in_mInterruptLocation,
                                                                                                                                           const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                                           const GALGAS_lstring & in_mFirstSaveRegister,
                                                                                                                                           const GALGAS_lstring & in_mSecondSaveRegister,
                                                                                                                                           const GALGAS_location & in_mEndOfInterruptLocation,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptLocation = in_mInterruptLocation ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mFirstSaveRegister = in_mFirstSaveRegister ;
  result.mProperty_mSecondSaveRegister = in_mSecondSaveRegister ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::class_func_new (const GALGAS_location & in_mInterruptLocation,
                                                                                                                             const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                             const GALGAS_lstring & in_mFirstSaveRegister,
                                                                                                                             const GALGAS_lstring & in_mSecondSaveRegister,
                                                                                                                             const GALGAS_location & in_mEndOfInterruptLocation,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptLocation = in_mInterruptLocation ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mFirstSaveRegister = in_mFirstSaveRegister ;
  result.mProperty_mSecondSaveRegister = in_mSecondSaveRegister ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_interruptDefinitionList_2D_element::objectCompare (const GALGAS_midrange_5F_interruptDefinitionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInterruptLocation.objectCompare (inOperand.mProperty_mInterruptLocation) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFirstSaveRegister.objectCompare (inOperand.mProperty_mFirstSaveRegister) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSecondSaveRegister.objectCompare (inOperand.mProperty_mSecondSaveRegister) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfInterruptLocation.objectCompare (inOperand.mProperty_mEndOfInterruptLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_interruptDefinitionList_2D_element::isValid (void) const {
  return mProperty_mInterruptLocation.isValid () && mProperty_mInstructionList.isValid () && mProperty_mFirstSaveRegister.isValid () && mProperty_mSecondSaveRegister.isValid () && mProperty_mEndOfInterruptLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::drop (void) {
  mProperty_mInterruptLocation.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mFirstSaveRegister.drop () ;
  mProperty_mSecondSaveRegister.drop () ;
  mProperty_mEndOfInterruptLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList_2D_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_interruptDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInterruptLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFirstSaveRegister.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSecondSaveRegister.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_interruptDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ("midrange_interruptDefinitionList-element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_interruptDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_interruptDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_interruptDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element GALGAS_midrange_5F_interruptDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList_2D_element result ;
  const GALGAS_midrange_5F_interruptDefinitionList_2D_element * p = (const GALGAS_midrange_5F_interruptDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_interruptDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_interruptDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element::~ GALGAS_midrange_5F_routineDefinitionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::init_28__2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_mRoutineName,
                                                                                                                                                   const GALGAS_luint & in_mPage,
                                                                                                                                                   const GALGAS_luint & in_mRequiredBank,
                                                                                                                                                   const GALGAS_luint & in_mReturnedBank,
                                                                                                                                                   const GALGAS_bool & in_mPreservesBank,
                                                                                                                                                   const GALGAS_bool & in_mIsNoReturn,
                                                                                                                                                   const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                                                   const GALGAS_location & in_mEndOfRoutineLocation,
                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mPage = in_mPage ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                         const GALGAS_luint & in_mPage,
                                                                                                                         const GALGAS_luint & in_mRequiredBank,
                                                                                                                         const GALGAS_luint & in_mReturnedBank,
                                                                                                                         const GALGAS_bool & in_mPreservesBank,
                                                                                                                         const GALGAS_bool & in_mIsNoReturn,
                                                                                                                         const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                         const GALGAS_location & in_mEndOfRoutineLocation,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mPage = in_mPage ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_routineDefinitionList_2D_element::objectCompare (const GALGAS_midrange_5F_routineDefinitionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPage.objectCompare (inOperand.mProperty_mPage) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfRoutineLocation.objectCompare (inOperand.mProperty_mEndOfRoutineLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_routineDefinitionList_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mPage.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList_2D_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_routineDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_routineDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ("midrange_routineDefinitionList-element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_routineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_routineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_routineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element GALGAS_midrange_5F_routineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList_2D_element result ;
  const GALGAS_midrange_5F_routineDefinitionList_2D_element * p = (const GALGAS_midrange_5F_routineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_routineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_routineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::~ GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                                                   const GALGAS_uint & in_mRoutineAddress,
                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                                  const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                                                 const GALGAS_uint & in_mRoutineAddress,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::objectCompare (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineAddress.objectCompare (inOperand.mProperty_mRoutineAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_symbolTableForConvertingRelatives-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_symbolTableForConvertingRelatives-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ("midrange_symbolTableForConvertingRelatives-element",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element result ;
  const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element * p = (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element::GALGAS_midrange_5F_symbolTable_2D_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element::~ GALGAS_midrange_5F_symbolTable_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_uint & in_mRoutineAddress,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element::GALGAS_midrange_5F_symbolTable_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_uint & in_mRoutineAddress,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_symbolTable_2D_element::objectCompare (const GALGAS_midrange_5F_symbolTable_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineAddress.objectCompare (inOperand.mProperty_mRoutineAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_symbolTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_symbolTable_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_symbolTable-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_symbolTable-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ("midrange_symbolTable-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_symbolTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_symbolTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_symbolTable_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_symbolTable_2D_element GALGAS_midrange_5F_symbolTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_symbolTable_2D_element result ;
  const GALGAS_midrange_5F_symbolTable_2D_element * p = (const GALGAS_midrange_5F_symbolTable_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_symbolTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element::GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element::~ GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::init_28__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element::GALGAS_midrange_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_declaredRoutineMap_2D_element::objectCompare (const GALGAS_midrange_5F_declaredRoutineMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_declaredRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_declaredRoutineMap_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_declaredRoutineMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_declaredRoutineMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ("midrange_declaredRoutineMap-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_declaredRoutineMap_2D_element GALGAS_midrange_5F_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_declaredRoutineMap_2D_element result ;
  const GALGAS_midrange_5F_declaredRoutineMap_2D_element * p = (const GALGAS_midrange_5F_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element::GALGAS_bootloaderReservedRAMmap_2D_element (void) :
mProperty_lkey (),
mProperty_mReservedSize () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element::~ GALGAS_bootloaderReservedRAMmap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_luint & in_mReservedSize,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReservedSize = in_mReservedSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element::GALGAS_bootloaderReservedRAMmap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_luint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mReservedSize (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_luint & in_mReservedSize,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReservedSize = in_mReservedSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_bootloaderReservedRAMmap_2D_element::objectCompare (const GALGAS_bootloaderReservedRAMmap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mReservedSize.objectCompare (inOperand.mProperty_mReservedSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bootloaderReservedRAMmap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReservedSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReservedSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bootloaderReservedRAMmap_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bootloaderReservedRAMmap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReservedSize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bootloaderReservedRAMmap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ("bootloaderReservedRAMmap-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bootloaderReservedRAMmap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bootloaderReservedRAMmap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootloaderReservedRAMmap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bootloaderReservedRAMmap_2D_element GALGAS_bootloaderReservedRAMmap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bootloaderReservedRAMmap_2D_element result ;
  const GALGAS_bootloaderReservedRAMmap_2D_element * p = (const GALGAS_bootloaderReservedRAMmap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bootloaderReservedRAMmap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) :
mProperty_mBlockName (),
mProperty_mInstructionList (),
mProperty_mBlockTerminaisonForBlockInstruction (),
mProperty_mEndOfBlock () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::~ GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::init_28__2C__2C__2C__29_ (const GALGAS_lstring & in_mBlockName,
                                                                                                                                         const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                                         const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                                         const GALGAS_location & in_mEndOfBlock,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlockName = in_mBlockName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                                                const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                                const GALGAS_location & inOperand3) :
mProperty_mBlockName (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mBlockTerminaisonForBlockInstruction (inOperand2),
mProperty_mEndOfBlock (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::class_func_new (const GALGAS_lstring & in_mBlockName,
                                                                                                                               const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                               const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                               const GALGAS_location & in_mEndOfBlock,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlockName = in_mBlockName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::objectCompare (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBlockName.objectCompare (inOperand.mProperty_mBlockName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBlockTerminaisonForBlockInstruction.objectCompare (inOperand.mProperty_mBlockTerminaisonForBlockInstruction) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfBlock.objectCompare (inOperand.mProperty_mEndOfBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::isValid (void) const {
  return mProperty_mBlockName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::drop (void) {
  mProperty_mBlockName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mBlockTerminaisonForBlockInstruction.drop () ;
  mProperty_mEndOfBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18BlockInstructionBlockList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBlockName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18BlockInstructionBlockList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ("pic18BlockInstructionBlockList-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BlockInstructionBlockList_2D_element GALGAS_pic_31__38_BlockInstructionBlockList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList_2D_element result ;
  const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element * p = (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BlockInstructionBlockList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) :
mProperty_mInterruptName (),
mProperty_mFastReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfInterruptLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::~ GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::init_28__2C__2C__2C__29_ (const GALGAS_lstring & in_mInterruptName,
                                                                                                                                     const GALGAS_bool & in_mFastReturn,
                                                                                                                                     const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                                     const GALGAS_location & in_mEndOfInterruptLocation,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mFastReturn = in_mFastReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element::GALGAS_pic_31__38_InterruptDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                            const GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                                            const GALGAS_location & inOperand3) :
mProperty_mInterruptName (inOperand0),
mProperty_mFastReturn (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mEndOfInterruptLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::class_func_new (const GALGAS_lstring & in_mInterruptName,
                                                                                                                           const GALGAS_bool & in_mFastReturn,
                                                                                                                           const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                           const GALGAS_location & in_mEndOfInterruptLocation,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mFastReturn = in_mFastReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_InterruptDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInterruptName.objectCompare (inOperand.mProperty_mInterruptName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFastReturn.objectCompare (inOperand.mProperty_mFastReturn) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfInterruptLocation.objectCompare (inOperand.mProperty_mEndOfInterruptLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_InterruptDefinitionList_2D_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mFastReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInterruptLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mFastReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInterruptLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_InterruptDefinitionList_2D_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18InterruptDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInterruptName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFastReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18InterruptDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ("pic18InterruptDefinitionList-element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_InterruptDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_InterruptDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_InterruptDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InterruptDefinitionList_2D_element GALGAS_pic_31__38_InterruptDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_InterruptDefinitionList_2D_element * p = (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_InterruptDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InterruptDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) :
mProperty_mRoutineName (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element::~ GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::init_28__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_mRoutineName,
                                                                                                                                             const GALGAS_luint & in_mRequiredBank,
                                                                                                                                             const GALGAS_luint & in_mReturnedBank,
                                                                                                                                             const GALGAS_bool & in_mPreservesBank,
                                                                                                                                             const GALGAS_bool & in_mIsNoReturn,
                                                                                                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                                             const GALGAS_location & in_mEndOfRoutineLocation,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                                       const GALGAS_luint & in_mRequiredBank,
                                                                                                                       const GALGAS_luint & in_mReturnedBank,
                                                                                                                       const GALGAS_bool & in_mPreservesBank,
                                                                                                                       const GALGAS_bool & in_mIsNoReturn,
                                                                                                                       const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                       const GALGAS_location & in_mEndOfRoutineLocation,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_RoutineDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfRoutineLocation.objectCompare (inOperand.mProperty_mEndOfRoutineLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_RoutineDefinitionList_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_RoutineDefinitionList_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18RoutineDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18RoutineDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ("pic18RoutineDefinitionList-element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RoutineDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RoutineDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RoutineDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RoutineDefinitionList_2D_element GALGAS_pic_31__38_RoutineDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RoutineDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_RoutineDefinitionList_2D_element * p = (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_RoutineDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RoutineDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element::GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) :
mProperty_mMacroName (),
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element::~ GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_mMacroName,
                                                                                                                         const GALGAS_lstringlist & in_mConstantNameList,
                                                                                                                         const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMacroName = in_mMacroName ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element::GALGAS_pic_31__38_MacroDefinitionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstringlist & inOperand1,
                                                                                                    const GALGAS_pic_31__38_InstructionList & inOperand2) :
mProperty_mMacroName (inOperand0),
mProperty_mConstantNameList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::class_func_new (const GALGAS_lstring & in_mMacroName,
                                                                                                                   const GALGAS_lstringlist & in_mConstantNameList,
                                                                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMacroName = in_mMacroName ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_MacroDefinitionList_2D_element::objectCompare (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMacroName.objectCompare (inOperand.mProperty_mMacroName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantNameList.objectCompare (inOperand.mProperty_mConstantNameList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_MacroDefinitionList_2D_element::isValid (void) const {
  return mProperty_mMacroName.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::drop (void) {
  mProperty_mMacroName.drop () ;
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroDefinitionList_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18MacroDefinitionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMacroName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18MacroDefinitionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ("pic18MacroDefinitionList-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroDefinitionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_MacroDefinitionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroDefinitionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroDefinitionList_2D_element GALGAS_pic_31__38_MacroDefinitionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroDefinitionList_2D_element result ;
  const GALGAS_pic_31__38_MacroDefinitionList_2D_element * p = (const GALGAS_pic_31__38_MacroDefinitionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_MacroDefinitionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroDefinitionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element::GALGAS_pic_31__38_MacroMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element::~ GALGAS_pic_31__38_MacroMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_lstringlist & in_mConstantNameList,
                                                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element::GALGAS_pic_31__38_MacroMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_lstringlist & inOperand1,
                                                                              const GALGAS_pic_31__38_InstructionList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mConstantNameList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_lstringlist & in_mConstantNameList,
                                                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38_MacroMap_2D_element::objectCompare (const GALGAS_pic_31__38_MacroMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantNameList.objectCompare (inOperand.mProperty_mConstantNameList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38_MacroMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_MacroMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18MacroMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18MacroMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ("pic18MacroMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_MacroMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_MacroMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_MacroMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_MacroMap_2D_element GALGAS_pic_31__38_MacroMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_MacroMap_2D_element result ;
  const GALGAS_pic_31__38_MacroMap_2D_element * p = (const GALGAS_pic_31__38_MacroMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_MacroMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element::GALGAS_routineDeclarationList_2D_element (void) :
mProperty_mRoutineName (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element::~ GALGAS_routineDeclarationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::init_28__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_mRoutineName,
                                                                                                                 const GALGAS_luint & in_mRequiredBank,
                                                                                                                 const GALGAS_luint & in_mReturnedBank,
                                                                                                                 const GALGAS_bool & in_mPreservesBank,
                                                                                                                 const GALGAS_bool & in_mIsNoReturn,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                   const GALGAS_luint & in_mRequiredBank,
                                                                                                   const GALGAS_luint & in_mReturnedBank,
                                                                                                   const GALGAS_bool & in_mPreservesBank,
                                                                                                   const GALGAS_bool & in_mIsNoReturn,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineDeclarationList_2D_element::objectCompare (const GALGAS_routineDeclarationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRoutineName.objectCompare (inOperand.mProperty_mRoutineName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineDeclarationList_2D_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList_2D_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineDeclarationList_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineDeclarationList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineDeclarationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ("routineDeclarationList-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineDeclarationList_2D_element GALGAS_routineDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineDeclarationList_2D_element result ;
  const GALGAS_routineDeclarationList_2D_element * p = (const GALGAS_routineDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (void) :
mProperty_mDataName (),
mProperty_mValueList (),
mProperty_mIsByteList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element::~ GALGAS_dataList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_mDataName,
                                                                             const GALGAS_immediatExpressionList & in_mValueList,
                                                                             const GALGAS_bool & in_mIsByteList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDataName = in_mDataName ;
  result.mProperty_mValueList = in_mValueList ;
  result.mProperty_mIsByteList = in_mIsByteList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element::GALGAS_dataList_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_immediatExpressionList & inOperand1,
                                                        const GALGAS_bool & inOperand2) :
mProperty_mDataName (inOperand0),
mProperty_mValueList (inOperand1),
mProperty_mIsByteList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::class_func_new (const GALGAS_lstring & in_mDataName,
                                                                       const GALGAS_immediatExpressionList & in_mValueList,
                                                                       const GALGAS_bool & in_mIsByteList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDataName = in_mDataName ;
  result.mProperty_mValueList = in_mValueList ;
  result.mProperty_mIsByteList = in_mIsByteList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dataList_2D_element::objectCompare (const GALGAS_dataList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDataName.objectCompare (inOperand.mProperty_mDataName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValueList.objectCompare (inOperand.mProperty_mValueList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsByteList.objectCompare (inOperand.mProperty_mIsByteList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_dataList_2D_element::isValid (void) const {
  return mProperty_mDataName.isValid () && mProperty_mValueList.isValid () && mProperty_mIsByteList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList_2D_element::drop (void) {
  mProperty_mDataName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mIsByteList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dataList_2D_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @dataList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDataName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsByteList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dataList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList_2D_element ("dataList-element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dataList_2D_element GALGAS_dataList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dataList_2D_element result ;
  const GALGAS_dataList_2D_element * p = (const GALGAS_dataList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dataList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element::GALGAS_caseConstantMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element::~ GALGAS_caseConstantMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::init_28__29_ (const GALGAS_lstring & in_lkey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_caseConstantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element::GALGAS_caseConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_caseConstantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_caseConstantMap_2D_element::objectCompare (const GALGAS_caseConstantMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_caseConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @caseConstantMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @caseConstantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap_2D_element ("caseConstantMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_caseConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_caseConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_caseConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element GALGAS_caseConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_caseConstantMap_2D_element result ;
  const GALGAS_caseConstantMap_2D_element * p = (const GALGAS_caseConstantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_caseConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (void) :
mProperty_lkey (),
mProperty_mData (),
mProperty_mIsData_38_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element::~ GALGAS_pic_31__38__5F_dataMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_uintlist & in_mData,
                                                                                                         const GALGAS_bool & in_mIsData_38_,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mData = in_mData ;
  result.mProperty_mIsData_38_ = in_mIsData_38_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element::GALGAS_pic_31__38__5F_dataMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_uintlist & inOperand1,
                                                                                    const GALGAS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mData (inOperand1),
mProperty_mIsData_38_ (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_uintlist & in_mData,
                                                                                                   const GALGAS_bool & in_mIsData8,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mData = in_mData ;
  result.mProperty_mIsData_38_ = in_mIsData8 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38__5F_dataMap_2D_element::objectCompare (const GALGAS_pic_31__38__5F_dataMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mData.objectCompare (inOperand.mProperty_mData) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsData_38_.objectCompare (inOperand.mProperty_mIsData_38_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38__5F_dataMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mData.isValid () && mProperty_mIsData_38_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mData.drop () ;
  mProperty_mIsData_38_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18_dataMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mData.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsData_38_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18_dataMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ("pic18_dataMap-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element GALGAS_pic_31__38__5F_dataMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap_2D_element result ;
  const GALGAS_pic_31__38__5F_dataMap_2D_element * p = (const GALGAS_pic_31__38__5F_dataMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38__5F_dataMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element::GALGAS_ipic_31__38_BlockList_2D_element (void) :
mProperty_mBlock () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element::~ GALGAS_ipic_31__38_BlockList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element GALGAS_ipic_31__38_BlockList_2D_element::init_28__29_ (const GALGAS_ipic_31__38_Block & in_mBlock,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element::GALGAS_ipic_31__38_BlockList_2D_element (const GALGAS_ipic_31__38_Block & inOperand0) :
mProperty_mBlock (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element GALGAS_ipic_31__38_BlockList_2D_element::class_func_new (const GALGAS_ipic_31__38_Block & in_mBlock,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ipic_31__38_BlockList_2D_element::objectCompare (const GALGAS_ipic_31__38_BlockList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBlock.objectCompare (inOperand.mProperty_mBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_BlockList_2D_element::isValid (void) const {
  return mProperty_mBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList_2D_element::drop (void) {
  mProperty_mBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18BlockList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18BlockList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ("ipic18BlockList-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_BlockList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_BlockList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_BlockList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element GALGAS_ipic_31__38_BlockList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList_2D_element result ;
  const GALGAS_ipic_31__38_BlockList_2D_element * p = (const GALGAS_ipic_31__38_BlockList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_BlockList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element::GALGAS_symbolTableForBlockOptimization_2D_element (void) :
mProperty_lkey (),
mProperty_mDefinitionBlockIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element::~ GALGAS_symbolTableForBlockOptimization_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                       const GALGAS_uint & in_mDefinitionBlockIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionBlockIndex = in_mDefinitionBlockIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element::GALGAS_symbolTableForBlockOptimization_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionBlockIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                     const GALGAS_uint & in_mDefinitionBlockIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionBlockIndex = in_mDefinitionBlockIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_symbolTableForBlockOptimization_2D_element::objectCompare (const GALGAS_symbolTableForBlockOptimization_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDefinitionBlockIndex.objectCompare (inOperand.mProperty_mDefinitionBlockIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForBlockOptimization_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionBlockIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionBlockIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization_2D_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForBlockOptimization-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefinitionBlockIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForBlockOptimization-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ("symbolTableForBlockOptimization-element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForBlockOptimization_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForBlockOptimization_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForBlockOptimization_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element GALGAS_symbolTableForBlockOptimization_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization_2D_element result ;
  const GALGAS_symbolTableForBlockOptimization_2D_element * p = (const GALGAS_symbolTableForBlockOptimization_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_symbolTableForBlockOptimization_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element::GALGAS_symbolTableForClusterOrdering_2D_element (void) :
mProperty_lkey (),
mProperty_mCluster () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element::~ GALGAS_symbolTableForClusterOrdering_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_uint & in_mCluster,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCluster = in_mCluster ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element::GALGAS_symbolTableForClusterOrdering_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mCluster (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                 const GALGAS_uint & in_mCluster,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCluster = in_mCluster ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_symbolTableForClusterOrdering_2D_element::objectCompare (const GALGAS_symbolTableForClusterOrdering_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCluster.objectCompare (inOperand.mProperty_mCluster) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForClusterOrdering_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCluster.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCluster.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForClusterOrdering_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForClusterOrdering-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCluster.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForClusterOrdering-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ("symbolTableForClusterOrdering-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForClusterOrdering_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForClusterOrdering_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForClusterOrdering_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForClusterOrdering_2D_element GALGAS_symbolTableForClusterOrdering_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForClusterOrdering_2D_element result ;
  const GALGAS_symbolTableForClusterOrdering_2D_element * p = (const GALGAS_symbolTableForClusterOrdering_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_symbolTableForClusterOrdering_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element::GALGAS_symbolTableForRelativesResolution_2D_element (void) :
mProperty_lkey (),
mProperty_mLabelAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element::~ GALGAS_symbolTableForRelativesResolution_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                           const GALGAS_uint & in_mLabelAddress,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelAddress = in_mLabelAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element::GALGAS_symbolTableForRelativesResolution_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                         const GALGAS_uint & in_mLabelAddress,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelAddress = in_mLabelAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_symbolTableForRelativesResolution_2D_element::objectCompare (const GALGAS_symbolTableForRelativesResolution_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLabelAddress.objectCompare (inOperand.mProperty_mLabelAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForRelativesResolution_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForRelativesResolution_2D_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForRelativesResolution-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForRelativesResolution-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ("symbolTableForRelativesResolution-element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForRelativesResolution_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForRelativesResolution_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForRelativesResolution_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForRelativesResolution_2D_element GALGAS_symbolTableForRelativesResolution_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForRelativesResolution_2D_element result ;
  const GALGAS_symbolTableForRelativesResolution_2D_element * p = (const GALGAS_symbolTableForRelativesResolution_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_symbolTableForRelativesResolution_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) :
mProperty_lkey (),
mProperty_mDataAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::~ GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_uint & in_mDataAddress,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDataAddress = in_mDataAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element::GALGAS_pic_31__38__5F_dataAddressMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDataAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                 const GALGAS_uint & in_mDataAddress,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDataAddress = in_mDataAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_pic_31__38__5F_dataAddressMap_2D_element::objectCompare (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDataAddress.objectCompare (inOperand.mProperty_mDataAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38__5F_dataAddressMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDataAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDataAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataAddressMap_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18_dataAddressMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDataAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18_dataAddressMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ("pic18_dataAddressMap-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataAddressMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataAddressMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataAddressMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataAddressMap_2D_element GALGAS_pic_31__38__5F_dataAddressMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataAddressMap_2D_element result ;
  const GALGAS_pic_31__38__5F_dataAddressMap_2D_element * p = (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38__5F_dataAddressMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element::GALGAS_declaredRoutineMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element::~ GALGAS_declaredRoutineMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::init_28__2C__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                             const GALGAS_luint & in_mRequiredBank,
                                                                                                             const GALGAS_luint & in_mReturnedBank,
                                                                                                             const GALGAS_bool & in_mPreservesBank,
                                                                                                             const GALGAS_bool & in_mIsNoReturn,
                                                                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_luint & in_mRequiredBank,
                                                                                           const GALGAS_luint & in_mReturnedBank,
                                                                                           const GALGAS_bool & in_mPreservesBank,
                                                                                           const GALGAS_bool & in_mIsNoReturn,
                                                                                           const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_declaredRoutineMap_2D_element::objectCompare (const GALGAS_declaredRoutineMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRequiredBank.objectCompare (inOperand.mProperty_mRequiredBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mReturnedBank.objectCompare (inOperand.mProperty_mReturnedBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPreservesBank.objectCompare (inOperand.mProperty_mPreservesBank) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsNoReturn.objectCompare (inOperand.mProperty_mIsNoReturn) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_declaredRoutineMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredRoutineMap_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declaredRoutineMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declaredRoutineMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ("declaredRoutineMap-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredRoutineMap_2D_element GALGAS_declaredRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declaredRoutineMap_2D_element result ;
  const GALGAS_declaredRoutineMap_2D_element * p = (const GALGAS_declaredRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declaredRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element::GALGAS_blockInstructionBlockMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInstructionList (),
mProperty_mBlockTerminaisonForBlockInstruction (),
mProperty_mEndOfBlock () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element::~ GALGAS_blockInstructionBlockMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element GALGAS_blockInstructionBlockMap_2D_element::init_28__2C__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                 const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                 const GALGAS_location & in_mEndOfBlock,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element::GALGAS_blockInstructionBlockMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                        const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                        const GALGAS_location & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mBlockTerminaisonForBlockInstruction (inOperand2),
mProperty_mEndOfBlock (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element GALGAS_blockInstructionBlockMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                       const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                       const GALGAS_location & in_mEndOfBlock,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_blockInstructionBlockMap_2D_element::objectCompare (const GALGAS_blockInstructionBlockMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBlockTerminaisonForBlockInstruction.objectCompare (inOperand.mProperty_mBlockTerminaisonForBlockInstruction) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfBlock.objectCompare (inOperand.mProperty_mEndOfBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_blockInstructionBlockMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mBlockTerminaisonForBlockInstruction.drop () ;
  mProperty_mEndOfBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInstructionBlockMap_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockInstructionBlockMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockInstructionBlockMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ("blockInstructionBlockMap-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInstructionBlockMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInstructionBlockMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInstructionBlockMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInstructionBlockMap_2D_element GALGAS_blockInstructionBlockMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_blockInstructionBlockMap_2D_element result ;
  const GALGAS_blockInstructionBlockMap_2D_element * p = (const GALGAS_blockInstructionBlockMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockInstructionBlockMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element::GALGAS_blockInitialBankSelectionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInitialBankSelection (),
mProperty_mSourceBlock () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element::~ GALGAS_blockInitialBankSelectionMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                     const GALGAS_uint & in_mInitialBankSelection,
                                                                                                                     const GALGAS_string & in_mSourceBlock,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialBankSelection = in_mInitialBankSelection ;
  result.mProperty_mSourceBlock = in_mSourceBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element::GALGAS_blockInitialBankSelectionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_uint & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mInitialBankSelection (inOperand1),
mProperty_mSourceBlock (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                               const GALGAS_uint & in_mInitialBankSelection,
                                                                                                               const GALGAS_string & in_mSourceBlock,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialBankSelection = in_mInitialBankSelection ;
  result.mProperty_mSourceBlock = in_mSourceBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_blockInitialBankSelectionMap_2D_element::objectCompare (const GALGAS_blockInitialBankSelectionMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInitialBankSelection.objectCompare (inOperand.mProperty_mInitialBankSelection) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSourceBlock.objectCompare (inOperand.mProperty_mSourceBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_blockInitialBankSelectionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialBankSelection.isValid () && mProperty_mSourceBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialBankSelection.drop () ;
  mProperty_mSourceBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockInitialBankSelectionMap_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockInitialBankSelectionMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialBankSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockInitialBankSelectionMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ("blockInitialBankSelectionMap-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockInitialBankSelectionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockInitialBankSelectionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockInitialBankSelectionMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockInitialBankSelectionMap_2D_element GALGAS_blockInitialBankSelectionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_blockInitialBankSelectionMap_2D_element result ;
  const GALGAS_blockInitialBankSelectionMap_2D_element * p = (const GALGAS_blockInitialBankSelectionMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockInitialBankSelectionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element::GALGAS_neededConversionForClusterOrder_2D_element (void) :
mProperty_lkey (),
mProperty_mConversions () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element::~ GALGAS_neededConversionForClusterOrder_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                                       const GALGAS_uint & in_mConversions,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConversions = in_mConversions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element::GALGAS_neededConversionForClusterOrder_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConversions (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                     const GALGAS_uint & in_mConversions,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConversions = in_mConversions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_neededConversionForClusterOrder_2D_element::objectCompare (const GALGAS_neededConversionForClusterOrder_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConversions.objectCompare (inOperand.mProperty_mConversions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_neededConversionForClusterOrder_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConversions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConversions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_neededConversionForClusterOrder_2D_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @neededConversionForClusterOrder-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConversions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @neededConversionForClusterOrder-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ("neededConversionForClusterOrder-element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_neededConversionForClusterOrder_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_neededConversionForClusterOrder_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_neededConversionForClusterOrder_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_neededConversionForClusterOrder_2D_element GALGAS_neededConversionForClusterOrder_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_neededConversionForClusterOrder_2D_element result ;
  const GALGAS_neededConversionForClusterOrder_2D_element * p = (const GALGAS_neededConversionForClusterOrder_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_neededConversionForClusterOrder_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element::GALGAS_generatedCodeMap_2D_element (void) :
mProperty_lkey (),
mProperty_mCode (),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element::~ GALGAS_generatedCodeMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element GALGAS_generatedCodeMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_codeList & in_mCode,
                                                                                             const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generatedCodeMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCode = in_mCode ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element::GALGAS_generatedCodeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_codeList & inOperand1,
                                                                        const GALGAS_ipic_31__38_SequentialInstruction & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mCode (inOperand1),
mProperty_mInstruction (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element GALGAS_generatedCodeMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_codeList & in_mCode,
                                                                                       const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generatedCodeMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCode = in_mCode ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_generatedCodeMap_2D_element::objectCompare (const GALGAS_generatedCodeMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCode.objectCompare (inOperand.mProperty_mCode) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_generatedCodeMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCode.isValid () && mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCode.drop () ;
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generatedCodeMap_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generatedCodeMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @generatedCodeMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ("generatedCodeMap-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generatedCodeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generatedCodeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generatedCodeMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generatedCodeMap_2D_element GALGAS_generatedCodeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_generatedCodeMap_2D_element result ;
  const GALGAS_generatedCodeMap_2D_element * p = (const GALGAS_generatedCodeMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_generatedCodeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element::GALGAS_blockMapForStackComputation_2D_element (void) :
mProperty_lkey (),
mProperty_mBlock () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element::~ GALGAS_blockMapForStackComputation_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element GALGAS_blockMapForStackComputation_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                               const GALGAS_ipic_31__38_Block & in_mBlock,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element::GALGAS_blockMapForStackComputation_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_ipic_31__38_Block & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mBlock (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element GALGAS_blockMapForStackComputation_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                             const GALGAS_ipic_31__38_Block & in_mBlock,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_blockMapForStackComputation_2D_element::objectCompare (const GALGAS_blockMapForStackComputation_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBlock.objectCompare (inOperand.mProperty_mBlock) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_blockMapForStackComputation_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockMapForStackComputation_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockMapForStackComputation-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockMapForStackComputation-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ("blockMapForStackComputation-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockMapForStackComputation_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockMapForStackComputation_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockMapForStackComputation_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockMapForStackComputation_2D_element GALGAS_blockMapForStackComputation_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_blockMapForStackComputation_2D_element result ;
  const GALGAS_blockMapForStackComputation_2D_element * p = (const GALGAS_blockMapForStackComputation_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockMapForStackComputation_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (void) :
mProperty_lkey (),
mProperty_mCalledRoutineSet (),
mProperty_mTerminatorStackNeeds () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element::~ GALGAS_routineCallMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_stringset & in_mCalledRoutineSet,
                                                                                         const GALGAS_uint & in_mTerminatorStackNeeds,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCalledRoutineSet = in_mCalledRoutineSet ;
  result.mProperty_mTerminatorStackNeeds = in_mTerminatorStackNeeds ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element::GALGAS_routineCallMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_stringset & inOperand1,
                                                                    const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mCalledRoutineSet (inOperand1),
mProperty_mTerminatorStackNeeds (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_stringset & in_mCalledRoutineSet,
                                                                                   const GALGAS_uint & in_mTerminatorStackNeeds,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCalledRoutineSet = in_mCalledRoutineSet ;
  result.mProperty_mTerminatorStackNeeds = in_mTerminatorStackNeeds ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineCallMap_2D_element::objectCompare (const GALGAS_routineCallMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCalledRoutineSet.objectCompare (inOperand.mProperty_mCalledRoutineSet) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTerminatorStackNeeds.objectCompare (inOperand.mProperty_mTerminatorStackNeeds) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineCallMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCalledRoutineSet.isValid () && mProperty_mTerminatorStackNeeds.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCalledRoutineSet.drop () ;
  mProperty_mTerminatorStackNeeds.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineCallMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineCallMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCalledRoutineSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminatorStackNeeds.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineCallMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap_2D_element ("routineCallMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineCallMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineCallMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineCallMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineCallMap_2D_element GALGAS_routineCallMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineCallMap_2D_element result ;
  const GALGAS_routineCallMap_2D_element * p = (const GALGAS_routineCallMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineCallMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element::GALGAS_routineStackRequirementMap_2D_element (void) :
mProperty_lkey (),
mProperty_mLevels () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element::~ GALGAS_routineStackRequirementMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::init_28__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                             const GALGAS_uint & in_mLevels,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLevels = in_mLevels ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element::GALGAS_routineStackRequirementMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLevels (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                           const GALGAS_uint & in_mLevels,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLevels = in_mLevels ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineStackRequirementMap_2D_element::objectCompare (const GALGAS_routineStackRequirementMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLevels.objectCompare (inOperand.mProperty_mLevels) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineStackRequirementMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLevels.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLevels.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineStackRequirementMap_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineStackRequirementMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLevels.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineStackRequirementMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ("routineStackRequirementMap-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineStackRequirementMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineStackRequirementMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineStackRequirementMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineStackRequirementMap_2D_element GALGAS_routineStackRequirementMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineStackRequirementMap_2D_element result ;
  const GALGAS_routineStackRequirementMap_2D_element * p = (const GALGAS_routineStackRequirementMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineStackRequirementMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element::GALGAS_blockDurationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mMinDuration (),
mProperty_mMaxDuration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element::~ GALGAS_blockDurationMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_uint & in_mMinDuration,
                                                                                             const GALGAS_uint & in_mMaxDuration,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockDurationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMinDuration = in_mMinDuration ;
  result.mProperty_mMaxDuration = in_mMaxDuration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element::GALGAS_blockDurationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mMinDuration (inOperand1),
mProperty_mMaxDuration (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_uint & in_mMinDuration,
                                                                                       const GALGAS_uint & in_mMaxDuration,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_blockDurationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMinDuration = in_mMinDuration ;
  result.mProperty_mMaxDuration = in_mMaxDuration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_blockDurationMap_2D_element::objectCompare (const GALGAS_blockDurationMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMinDuration.objectCompare (inOperand.mProperty_mMinDuration) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMaxDuration.objectCompare (inOperand.mProperty_mMaxDuration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_blockDurationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMinDuration.isValid () && mProperty_mMaxDuration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mMinDuration.drop () ;
  mProperty_mMaxDuration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_blockDurationMap_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockDurationMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMinDuration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaxDuration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @blockDurationMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap_2D_element ("blockDurationMap-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_blockDurationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_blockDurationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_blockDurationMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_blockDurationMap_2D_element GALGAS_blockDurationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_blockDurationMap_2D_element result ;
  const GALGAS_blockDurationMap_2D_element * p = (const GALGAS_blockDurationMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_blockDurationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element::GALGAS_declaredByteMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element::~ GALGAS_declaredByteMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::init_28__29_ (const GALGAS_lstring & in_lkey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredByteMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element::GALGAS_declaredByteMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declaredByteMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_declaredByteMap_2D_element::objectCompare (const GALGAS_declaredByteMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_declaredByteMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declaredByteMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declaredByteMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declaredByteMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap_2D_element ("declaredByteMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declaredByteMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declaredByteMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declaredByteMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declaredByteMap_2D_element GALGAS_declaredByteMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declaredByteMap_2D_element result ;
  const GALGAS_declaredByteMap_2D_element * p = (const GALGAS_declaredByteMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declaredByteMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element::GALGAS_registerTable_2D_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddressList (),
mProperty_mSize (),
mProperty_mBitSliceTable (),
mProperty_mBitDefinitionString (),
mProperty_mProtection () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element::~ GALGAS_registerTable_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::init_28__2C__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_uintlist & in_mRegisterAddressList,
                                                                                                   const GALGAS_uint & in_mSize,
                                                                                                   const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                                                                   const GALGAS_string & in_mBitDefinitionString,
                                                                                                   const GALGAS_registerProtection & in_mProtection,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddressList = in_mRegisterAddressList ;
  result.mProperty_mSize = in_mSize ;
  result.mProperty_mBitSliceTable = in_mBitSliceTable ;
  result.mProperty_mBitDefinitionString = in_mBitDefinitionString ;
  result.mProperty_mProtection = in_mProtection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                 const GALGAS_uintlist & in_mRegisterAddressList,
                                                                                 const GALGAS_uint & in_mSize,
                                                                                 const GALGAS_bitSliceTable & in_mBitSliceTable,
                                                                                 const GALGAS_string & in_mBitDefinitionString,
                                                                                 const GALGAS_registerProtection & in_mProtection,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddressList = in_mRegisterAddressList ;
  result.mProperty_mSize = in_mSize ;
  result.mProperty_mBitSliceTable = in_mBitSliceTable ;
  result.mProperty_mBitDefinitionString = in_mBitDefinitionString ;
  result.mProperty_mProtection = in_mProtection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_registerTable_2D_element::objectCompare (const GALGAS_registerTable_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterAddressList.objectCompare (inOperand.mProperty_mRegisterAddressList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSize.objectCompare (inOperand.mProperty_mSize) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBitSliceTable.objectCompare (inOperand.mProperty_mBitSliceTable) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBitDefinitionString.objectCompare (inOperand.mProperty_mBitDefinitionString) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mProtection.objectCompare (inOperand.mProperty_mProtection) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddressList.isValid () && mProperty_mSize.isValid () && mProperty_mBitSliceTable.isValid () && mProperty_mBitDefinitionString.isValid () && mProperty_mProtection.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddressList.drop () ;
  mProperty_mSize.drop () ;
  mProperty_mBitSliceTable.drop () ;
  mProperty_mBitDefinitionString.drop () ;
  mProperty_mProtection.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerTable_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerTable-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddressList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitSliceTable.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitDefinitionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProtection.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerTable-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable_2D_element ("registerTable-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerTable_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerTable_2D_element GALGAS_registerTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerTable_2D_element result ;
  const GALGAS_registerTable_2D_element * p = (const GALGAS_registerTable_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element::GALGAS_ramBankTable_2D_element (void) :
mProperty_lkey (),
mProperty_mFirstAddress (),
mProperty_mFirstFreeAddress (),
mProperty_mLastAddressPlusOne (),
mProperty_mMirrorOffsetList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element::~ GALGAS_ramBankTable_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::init_28__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_uint & in_mFirstAddress,
                                                                                             const GALGAS_uint & in_mFirstFreeAddress,
                                                                                             const GALGAS_uint & in_mLastAddressPlusOne,
                                                                                             const GALGAS_uintlist & in_mMirrorOffsetList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramBankTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFirstAddress = in_mFirstAddress ;
  result.mProperty_mFirstFreeAddress = in_mFirstFreeAddress ;
  result.mProperty_mLastAddressPlusOne = in_mLastAddressPlusOne ;
  result.mProperty_mMirrorOffsetList = in_mMirrorOffsetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                               const GALGAS_uint & in_mFirstAddress,
                                                                               const GALGAS_uint & in_mFirstFreeAddress,
                                                                               const GALGAS_uint & in_mLastAddressPlusOne,
                                                                               const GALGAS_uintlist & in_mMirrorOffsetList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ramBankTable_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFirstAddress = in_mFirstAddress ;
  result.mProperty_mFirstFreeAddress = in_mFirstFreeAddress ;
  result.mProperty_mLastAddressPlusOne = in_mLastAddressPlusOne ;
  result.mProperty_mMirrorOffsetList = in_mMirrorOffsetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ramBankTable_2D_element::objectCompare (const GALGAS_ramBankTable_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFirstAddress.objectCompare (inOperand.mProperty_mFirstAddress) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFirstFreeAddress.objectCompare (inOperand.mProperty_mFirstFreeAddress) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLastAddressPlusOne.objectCompare (inOperand.mProperty_mLastAddressPlusOne) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMirrorOffsetList.objectCompare (inOperand.mProperty_mMirrorOffsetList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ramBankTable_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFirstAddress.isValid () && mProperty_mFirstFreeAddress.isValid () && mProperty_mLastAddressPlusOne.isValid () && mProperty_mMirrorOffsetList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFirstAddress.drop () ;
  mProperty_mFirstFreeAddress.drop () ;
  mProperty_mLastAddressPlusOne.drop () ;
  mProperty_mMirrorOffsetList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ramBankTable_2D_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ramBankTable-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFirstAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFirstFreeAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLastAddressPlusOne.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMirrorOffsetList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ramBankTable-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable_2D_element ("ramBankTable-element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ramBankTable_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ramBankTable_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ramBankTable_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ramBankTable_2D_element GALGAS_ramBankTable_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ramBankTable_2D_element result ;
  const GALGAS_ramBankTable_2D_element * p = (const GALGAS_ramBankTable_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ramBankTable_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element::GALGAS_illegalMaskList_2D_element (void) :
mProperty_mIllegalValue (),
mProperty_mIllegalMask (),
mProperty_mDescription () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element::~ GALGAS_illegalMaskList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::init_28__2C__2C__29_ (const GALGAS_luint & in_mIllegalValue,
                                                                                           const GALGAS_luint & in_mIllegalMask,
                                                                                           const GALGAS_lstring & in_mDescription,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_illegalMaskList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIllegalValue = in_mIllegalValue ;
  result.mProperty_mIllegalMask = in_mIllegalMask ;
  result.mProperty_mDescription = in_mDescription ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element::GALGAS_illegalMaskList_2D_element (const GALGAS_luint & inOperand0,
                                                                      const GALGAS_luint & inOperand1,
                                                                      const GALGAS_lstring & inOperand2) :
mProperty_mIllegalValue (inOperand0),
mProperty_mIllegalMask (inOperand1),
mProperty_mDescription (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::class_func_new (const GALGAS_luint & in_mIllegalValue,
                                                                                     const GALGAS_luint & in_mIllegalMask,
                                                                                     const GALGAS_lstring & in_mDescription,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_illegalMaskList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIllegalValue = in_mIllegalValue ;
  result.mProperty_mIllegalMask = in_mIllegalMask ;
  result.mProperty_mDescription = in_mDescription ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_illegalMaskList_2D_element::objectCompare (const GALGAS_illegalMaskList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIllegalValue.objectCompare (inOperand.mProperty_mIllegalValue) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIllegalMask.objectCompare (inOperand.mProperty_mIllegalMask) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDescription.objectCompare (inOperand.mProperty_mDescription) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_illegalMaskList_2D_element::isValid (void) const {
  return mProperty_mIllegalValue.isValid () && mProperty_mIllegalMask.isValid () && mProperty_mDescription.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList_2D_element::drop (void) {
  mProperty_mIllegalValue.drop () ;
  mProperty_mIllegalMask.drop () ;
  mProperty_mDescription.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_illegalMaskList_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @illegalMaskList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mIllegalValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIllegalMask.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @illegalMaskList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_illegalMaskList_2D_element ("illegalMaskList-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_illegalMaskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_illegalMaskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_illegalMaskList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_illegalMaskList_2D_element GALGAS_illegalMaskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_illegalMaskList_2D_element result ;
  const GALGAS_illegalMaskList_2D_element * p = (const GALGAS_illegalMaskList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_illegalMaskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("illegalMaskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element::GALGAS_fieldSettingMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue (),
mProperty_mMask () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element::~ GALGAS_fieldSettingMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::init_28__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_uint & in_mValue,
                                                                                           const GALGAS_uint & in_mMask,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fieldSettingMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  result.mProperty_mMask = in_mMask ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element::GALGAS_fieldSettingMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1,
                                                                      const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1),
mProperty_mMask (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_uint & in_mValue,
                                                                                     const GALGAS_uint & in_mMask,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fieldSettingMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  result.mProperty_mMask = in_mMask ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_fieldSettingMap_2D_element::objectCompare (const GALGAS_fieldSettingMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMask.objectCompare (inOperand.mProperty_mMask) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fieldSettingMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () && mProperty_mMask.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
  mProperty_mMask.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fieldSettingMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fieldSettingMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMask.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fieldSettingMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ("fieldSettingMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fieldSettingMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fieldSettingMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fieldSettingMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fieldSettingMap_2D_element GALGAS_fieldSettingMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fieldSettingMap_2D_element result ;
  const GALGAS_fieldSettingMap_2D_element * p = (const GALGAS_fieldSettingMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fieldSettingMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element::GALGAS_configRegisterMaskMap_2D_element (void) :
mProperty_lkey (),
mProperty_mMaskValue (),
mProperty_mDescription (),
mProperty_mFieldSettingMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element::~ GALGAS_configRegisterMaskMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::init_28__2C__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                           const GALGAS_luint & in_mMaskValue,
                                                                                                           const GALGAS_lstring & in_mDescription,
                                                                                                           const GALGAS_fieldSettingMap & in_mFieldSettingMap,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element::GALGAS_configRegisterMaskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_luint & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_fieldSettingMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mMaskValue (inOperand1),
mProperty_mDescription (inOperand2),
mProperty_mFieldSettingMap (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_luint & in_mMaskValue,
                                                                                                 const GALGAS_lstring & in_mDescription,
                                                                                                 const GALGAS_fieldSettingMap & in_mFieldSettingMap,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_configRegisterMaskMap_2D_element::objectCompare (const GALGAS_configRegisterMaskMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMaskValue.objectCompare (inOperand.mProperty_mMaskValue) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDescription.objectCompare (inOperand.mProperty_mDescription) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFieldSettingMap.objectCompare (inOperand.mProperty_mFieldSettingMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_configRegisterMaskMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mMaskValue.drop () ;
  mProperty_mDescription.drop () ;
  mProperty_mFieldSettingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMaskMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configRegisterMaskMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaskValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configRegisterMaskMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ("configRegisterMaskMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configRegisterMaskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configRegisterMaskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMaskMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMaskMap_2D_element GALGAS_configRegisterMaskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMaskMap_2D_element result ;
  const GALGAS_configRegisterMaskMap_2D_element * p = (const GALGAS_configRegisterMaskMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configRegisterMaskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element::GALGAS_configRegisterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddress (),
mProperty_mRegisterWidth (),
mProperty_mConfigRegisterMaskMap (),
mProperty_mIllegalMaskList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element::~ GALGAS_configRegisterMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::init_28__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_luint & in_mRegisterAddress,
                                                                                                       const GALGAS_luint & in_mRegisterWidth,
                                                                                                       const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                                                                       const GALGAS_illegalMaskList & in_mIllegalMaskList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterWidth = in_mRegisterWidth ;
  result.mProperty_mConfigRegisterMaskMap = in_mConfigRegisterMaskMap ;
  result.mProperty_mIllegalMaskList = in_mIllegalMaskList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_luint & in_mRegisterAddress,
                                                                                         const GALGAS_luint & in_mRegisterWidth,
                                                                                         const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                                                         const GALGAS_illegalMaskList & in_mIllegalMaskList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_configRegisterMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterWidth = in_mRegisterWidth ;
  result.mProperty_mConfigRegisterMaskMap = in_mConfigRegisterMaskMap ;
  result.mProperty_mIllegalMaskList = in_mIllegalMaskList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_configRegisterMap_2D_element::objectCompare (const GALGAS_configRegisterMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mRegisterWidth.objectCompare (inOperand.mProperty_mRegisterWidth) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConfigRegisterMaskMap.objectCompare (inOperand.mProperty_mConfigRegisterMaskMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIllegalMaskList.objectCompare (inOperand.mProperty_mIllegalMaskList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_configRegisterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterWidth.isValid () && mProperty_mConfigRegisterMaskMap.isValid () && mProperty_mIllegalMaskList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterWidth.drop () ;
  mProperty_mConfigRegisterMaskMap.drop () ;
  mProperty_mIllegalMaskList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configRegisterMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configRegisterMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterWidth.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConfigRegisterMaskMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIllegalMaskList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @configRegisterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap_2D_element ("configRegisterMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configRegisterMap_2D_element GALGAS_configRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configRegisterMap_2D_element result ;
  const GALGAS_configRegisterMap_2D_element * p = (const GALGAS_configRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ("piccolo_options",
                                         "doNotReorderCluster",
                                         78,
                                         "no-relative-resolution",
                                         "Do not try to re order blocks for using relatives branches (PIC18 compiler only)") ;

BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ("piccolo_options",
                                         "doNotWarnRecursive",
                                         82,
                                         "no-warning-on-recursive-routines",
                                         "Do not warn when there are recursive routines (PIC18 compiler only)") ;

BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ("piccolo_options",
                                         "generateGraphvizFiles",
                                         71,
                                         "generate-graphviz-files",
                                         "Generate Graphviz files  containing block invocation, block sorting constraints, ...") ;

BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ("piccolo_options",
                                         "generateAssembly",
                                         83,
                                         "asm",
                                         "Generate also an assembly language text file (with .asm extension)") ;

BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ("piccolo_options",
                                         "output_C_Array",
                                         67,
                                         "output-c-files",
                                         "Generate output code in a C header file and C source file") ;

BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ("piccolo_options",
                                         "ouputListingFile",
                                         76,
                                         "list",
                                         "Output a list file") ;

BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ("piccolo_options",
                                         "performOptimizations",
                                         79,
                                         "optimize",
                                         "Perform code optimizations") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ("piccolo_options",
                                         "optimizationFlags",
                                         0,
                                         "optimization-flags",
                                         "Fine tuning of optimizations (PIC18 compiler only)",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputBaselineDeviceList",
                                         0,
                                         "baseline",
                                         "Output the list of supported baseline devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputDeviceList",
                                         68,
                                         "device-list",
                                         "Output the list of supported devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputMidrangeDeviceList",
                                         0,
                                         "midrange",
                                         "Output the list of supported mid-range devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ("piccolo_options_not_in_cocoa",
                                         "outputPic18DeviceList",
                                         0,
                                         "pic18",
                                         "Output the list of supported pic18 devices") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ("piccolo_options_not_in_cocoa",
                                         "exportDeviceFiles",
                                         69,
                                         "export",
                                         "Export device definition files to the directory named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ("piccolo_options_not_in_cocoa",
                                         "memoryDescription",
                                         77,
                                         "memory",
                                         "Output the RAM, ROM and EEPROM description of the device named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ("piccolo_options_not_in_cocoa",
                                         "configDescription",
                                         70,
                                         "configuration",
                                         "Output the configuration register description of the device named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ("piccolo_options_not_in_cocoa",
                                         "registerDescription",
                                         82,
                                         "registers",
                                         "Output the special register description of the device named by string",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkCurrentEmitAddress?'
//
//--------------------------------------------------------------------------------------------------

void routine_checkCurrentEmitAddress_3F_ (const GALGAS_uint constinArgument_inCurrentAddress,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addr_1345 ;
  {
  routine_currentEmitAddress_21_ (var_addr_1345, inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("intermediate_generic.galgas", 42)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_addr_1345.objectCompare (constinArgument_inCurrentAddress)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 42)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)), GALGAS_string ("internal error: current emit address is ").add_operation (var_addr_1345.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (GALGAS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (constinArgument_inCurrentAddress.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 44)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatInteger eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatInteger::method_eval (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                        const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                        GALGAS_sint_36__34_ & outArgument_outResult,
                                        GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_immediatInteger temp_0 = this ;
  outArgument_outResult = temp_0.readProperty_mValue ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 97)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatRegister eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatRegister::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                         GALGAS_sint_36__34_ & outArgument_outResult,
                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_immediatRegister temp_1 = this ;
    test_0 = constinArgument_inRegisterTable.getter_hasKey (temp_1.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas", 108)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_immediatRegister temp_2 = this ;
      ioArgument_ioUsedRegisters.addAssign_operation (temp_2.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 109)) ;
      GALGAS_uintlist var_registerAddressList_4021 ;
      GALGAS_uint var_size_4046 ;
      GALGAS_registerProtection var_protection_4060 ;
      const GALGAS_immediatRegister temp_3 = this ;
      GALGAS_bitSliceTable joker_4051_2 ; // Joker input parameter
      GALGAS_string joker_4051_1 ; // Joker input parameter
      constinArgument_inRegisterTable.method_searchKey (temp_3.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_4021, var_size_4046, joker_4051_2, joker_4051_1, var_protection_4060, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 110)) ;
      const GALGAS_immediatRegister temp_4 = this ;
      extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_4.readProperty_mRegister ().readProperty_mRegisterName (), GALGAS_bool (false), var_protection_4060, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)) ;
      GALGAS_uint var_registerAddress_4210 ;
      var_registerAddressList_4021.method_first (var_registerAddress_4210, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 112)) ;
      GALGAS_sint_36__34_ var_offset_4305 ;
      const GALGAS_immediatRegister temp_5 = this ;
      callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4305, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 113)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::lowerThan, var_offset_4305.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_immediatRegister temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GALGAS_string ("index (").add_operation (var_offset_4305.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)).add_operation (GALGAS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)), fixItArray8  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 115)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_offset_4305.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).objectCompare (var_size_4046)).boolEnum () ;
          if (kBoolTrue == test_9) {
            const GALGAS_immediatRegister temp_10 = this ;
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_10.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GALGAS_string ("index (").add_operation (var_offset_4305.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (GALGAS_string (") should be lower than size ("), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (var_size_4046.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)), fixItArray11  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 118)) ;
          }
        }
      }
      outArgument_outResult = var_registerAddress_4210.getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 121)).add_operation (var_offset_4305, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_immediatRegister temp_13 = this ;
      test_12 = constinArgument_inConstantMap.getter_hasKey (temp_13.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas", 122)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_immediatRegister temp_14 = this ;
        constinArgument_inConstantMap.method_searchKey (temp_14.readProperty_mRegister ().readProperty_mRegisterName (), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 123)) ;
        GALGAS_sint_36__34_ var_offset_4900 ;
        const GALGAS_immediatRegister temp_15 = this ;
        callExtensionMethod_eval ((cPtr_immediatExpression *) temp_15.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4900, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 124)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_sint_36__34_ (int64_t (0LL)).objectCompare (var_offset_4900)).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_immediatRegister temp_17 = this ;
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GALGAS_string ("index notation (").add_operation (var_offset_4900.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 127)).add_operation (GALGAS_string (") cannot be used with a constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 127)), fixItArray18  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 126)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_12) {
      const GALGAS_immediatRegister temp_19 = this ;
      const GALGAS_immediatRegister temp_20 = this ;
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("'").add_operation (temp_20.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)).add_operation (GALGAS_string ("' should be declared as ram register or as constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)), fixItArray21  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatAdd eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatAdd::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_5553 ;
  const GALGAS_immediatAdd temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5553, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 141)) ;
  GALGAS_sint_36__34_ var_rightResult_5658 ;
  const GALGAS_immediatAdd temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_5658, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 142)) ;
  outArgument_outResult = var_leftResult_5553.add_operation (var_rightResult_5658, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 143)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatSub eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatSub::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_6045 ;
  const GALGAS_immediatSub temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6045, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 153)) ;
  GALGAS_sint_36__34_ var_rightResult_6150 ;
  const GALGAS_immediatSub temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6150, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 154)) ;
  outArgument_outResult = var_leftResult_6045.substract_operation (var_rightResult_6150, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 155)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatMul eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatMul::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_6537 ;
  const GALGAS_immediatMul temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6537, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 165)) ;
  GALGAS_sint_36__34_ var_rightResult_6642 ;
  const GALGAS_immediatMul temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6642, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 166)) ;
  outArgument_outResult = var_leftResult_6537.multiply_operation (var_rightResult_6642, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 167)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatDiv eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatDiv::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_7029 ;
  const GALGAS_immediatDiv temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7029, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 177)) ;
  GALGAS_sint_36__34_ var_rightResult_7134 ;
  const GALGAS_immediatDiv temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7134, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 178)) ;
  outArgument_outResult = var_leftResult_7029.divide_operation (var_rightResult_7134, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 179)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatMod eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatMod::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_7521 ;
  const GALGAS_immediatMod temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7521, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 189)) ;
  GALGAS_sint_36__34_ var_rightResult_7626 ;
  const GALGAS_immediatMod temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7626, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 190)) ;
  outArgument_outResult = var_leftResult_7521.modulo_operation (var_rightResult_7626, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 191)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatAnd eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatAnd::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_8015 ;
  const GALGAS_immediatAnd temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8015, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 201)) ;
  GALGAS_sint_36__34_ var_rightResult_8120 ;
  const GALGAS_immediatAnd temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8120, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 202)) ;
  outArgument_outResult = var_leftResult_8015.operator_and (var_rightResult_8120 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 203)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatOr eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatOr::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                   GALGAS_sint_36__34_ & outArgument_outResult,
                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_8506 ;
  const GALGAS_immediatOr temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8506, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 213)) ;
  GALGAS_sint_36__34_ var_rightResult_8611 ;
  const GALGAS_immediatOr temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8611, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 214)) ;
  outArgument_outResult = var_leftResult_8506.operator_or (var_rightResult_8611 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 215)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatXor eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatXor::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                    GALGAS_sint_36__34_ & outArgument_outResult,
                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_8998 ;
  const GALGAS_immediatXor temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8998, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 225)) ;
  GALGAS_sint_36__34_ var_rightResult_9103 ;
  const GALGAS_immediatXor temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9103, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 226)) ;
  outArgument_outResult = var_leftResult_8998.operator_xor (var_rightResult_9103 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 227)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatLeftShift eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLeftShift::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                          GALGAS_sint_36__34_ & outArgument_outResult,
                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_9496 ;
  const GALGAS_immediatLeftShift temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9496, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 237)) ;
  GALGAS_sint_36__34_ var_rightResult_9601 ;
  const GALGAS_immediatLeftShift temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9601, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 238)) ;
  outArgument_outResult = var_leftResult_9496.left_shift_operation (var_rightResult_9601.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 239)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatRightShift eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatRightShift::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                           GALGAS_sint_36__34_ & outArgument_outResult,
                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_10003 ;
  const GALGAS_immediatRightShift temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10003, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 249)) ;
  GALGAS_sint_36__34_ var_rightResult_10108 ;
  const GALGAS_immediatRightShift temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10108, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 250)) ;
  outArgument_outResult = var_leftResult_10003.right_shift_operation (var_rightResult_10108.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 251)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatEqualTest eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatEqualTest::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                          GALGAS_sint_36__34_ & outArgument_outResult,
                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_10509 ;
  const GALGAS_immediatEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10509, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 261)) ;
  GALGAS_sint_36__34_ var_rightResult_10614 ;
  const GALGAS_immediatEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10614, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 262)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, var_leftResult_10509.objectCompare (var_rightResult_10614)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatNotEqualTest eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatNotEqualTest::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                             GALGAS_sint_36__34_ & outArgument_outResult,
                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_11056 ;
  const GALGAS_immediatNotEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11056, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 277)) ;
  GALGAS_sint_36__34_ var_rightResult_11161 ;
  const GALGAS_immediatNotEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11161, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 278)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, var_leftResult_11056.objectCompare (var_rightResult_11161)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatGreaterOrEqualTest eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterOrEqualTest::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                   GALGAS_sint_36__34_ & outArgument_outResult,
                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_11609 ;
  const GALGAS_immediatGreaterOrEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11609, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 293)) ;
  GALGAS_sint_36__34_ var_rightResult_11714 ;
  const GALGAS_immediatGreaterOrEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11714, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 294)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_leftResult_11609.objectCompare (var_rightResult_11714)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatLowerOrEqualTest eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerOrEqualTest::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                 GALGAS_sint_36__34_ & outArgument_outResult,
                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_12160 ;
  const GALGAS_immediatLowerOrEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12160, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 309)) ;
  GALGAS_sint_36__34_ var_rightResult_12265 ;
  const GALGAS_immediatLowerOrEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12265, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 310)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_leftResult_12160.objectCompare (var_rightResult_12265)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatGreaterTest eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterTest::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                            GALGAS_sint_36__34_ & outArgument_outResult,
                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_12706 ;
  const GALGAS_immediatGreaterTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12706, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 325)) ;
  GALGAS_sint_36__34_ var_rightResult_12811 ;
  const GALGAS_immediatGreaterTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12811, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 326)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_leftResult_12706.objectCompare (var_rightResult_12811)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatLowerTest eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerTest::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                          GALGAS_sint_36__34_ & outArgument_outResult,
                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_leftResult_13249 ;
  const GALGAS_immediatLowerTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_13249, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 341)) ;
  GALGAS_sint_36__34_ var_rightResult_13354 ;
  const GALGAS_immediatLowerTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_13354, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 342)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::lowerThan, var_leftResult_13249.objectCompare (var_rightResult_13354)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outResult = GALGAS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outResult = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatNegate eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatNegate::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                       GALGAS_sint_36__34_ & outArgument_outResult,
                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_13785 ;
  const GALGAS_immediatNegate temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13785, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 357)) ;
  outArgument_outResult = var_result_13785.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 358)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatComplement eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatComplement::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                           GALGAS_sint_36__34_ & outArgument_outResult,
                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_14154 ;
  const GALGAS_immediatComplement temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_14154, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 368)) ;
  outArgument_outResult = var_result_14154.operator_tilde (SOURCE_FILE ("intermediate_generic.galgas", 369)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@immediatSlice eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_immediatSlice::method_eval (const GALGAS_registerTable constinArgument_inRegisterTable,
                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                      GALGAS_sint_36__34_ & outArgument_outResult,
                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bitSliceTable var_bitSliceTable_14469 ;
  outArgument_outResult = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  const GALGAS_immediatSlice temp_0 = this ;
  ioArgument_ioUsedRegisters.addAssign_operation (temp_0.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 382)) ;
  GALGAS_registerProtection var_protection_14626 ;
  const GALGAS_immediatSlice temp_1 = this ;
  GALGAS_uintlist joker_14596 ; // Joker input parameter
  GALGAS_uint joker_14599 ; // Joker input parameter
  GALGAS_string joker_14618 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_1.readProperty_mRegisterName (), joker_14596, joker_14599, var_bitSliceTable_14469, joker_14618, var_protection_14626, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 383)) ;
  const GALGAS_immediatSlice temp_2 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_2.readProperty_mRegisterName (), GALGAS_bool (false), var_protection_14626, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 384)) ;
  GALGAS_stringset var_sliceNameSet_14728 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("intermediate_generic.galgas", 385)) ;
  const GALGAS_immediatSlice temp_3 = this ;
  cEnumerator_immediatSliceExpressionList enumerator_14782 (temp_3.readProperty_mSliceExpressionList (), EnumerationOrder::up) ;
  while (enumerator_14782.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_sliceNameSet_14728.getter_hasKey (enumerator_14782.current_mSliceName (HERE).readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas", 387)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_14782.current_mSliceName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_14782.current_mSliceName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 388)).add_operation (GALGAS_string ("' bit field has been already defined"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 388)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 388)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_sliceNameSet_14728.addAssign_operation (enumerator_14782.current_mSliceName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 390)) ;
      GALGAS_uint var_sliceIndex_15064 ;
      GALGAS_uint var_sliceSize_15080 ;
      var_bitSliceTable_14469.method_searchKey (enumerator_14782.current_mSliceName (HERE), var_sliceIndex_15064, var_sliceSize_15080, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)) ;
      GALGAS_sint_36__34_ var_result_15160 ;
      callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_14782.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_15160, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::lowerThan, var_result_15160.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).operator_or (GALGAS_bool (ComparisonKind::greaterThan, var_result_15160.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).left_shift_operation (var_sliceSize_15080, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)))) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_14782.current_mSliceName (HERE).readProperty_location (), GALGAS_string ("invalid immediat value associated to the '").add_operation (enumerator_14782.current_mSliceName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)).add_operation (GALGAS_string ("' bit field, evaluated as "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)).add_operation (var_result_15160.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)).add_operation (GALGAS_string (" (should be between 0 and "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).left_shift_operation (var_sliceSize_15080, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)), fixItArray7  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 394)) ;
        }
      }
      outArgument_outResult = outArgument_outResult.operator_or (var_result_15160.left_shift_operation (var_sliceIndex_15064, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 397)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 397)) ;
    }
    enumerator_14782.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitNumberLiteralValue getBitNumber'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralValue::method_getBitNumber (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                      GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                      const GALGAS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                      GALGAS_uint & outArgument_outBitNumber,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_bitNumberLiteralValue temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBitNumberLiteralValue ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (7U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_bitNumberLiteralValue temp_2 = this ;
      const GALGAS_bitNumberLiteralValue temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mBitNumberLiteralValue ().readProperty_location (), GALGAS_string ("The bit number is ").add_operation (temp_3.readProperty_mBitNumberLiteralValue ().readProperty_uint ().getter_string (SOURCE_FILE ("intermediate_generic.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 425)).add_operation (GALGAS_string (" (should be <= 7)"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 425)), fixItArray4  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 425)) ;
    }
  }
  const GALGAS_bitNumberLiteralValue temp_5 = this ;
  outArgument_outBitNumber = temp_5.readProperty_mBitNumberLiteralValue ().readProperty_uint () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitNumberLabelValue getBitNumber'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLabelValue::method_getBitNumber (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                    GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                    const GALGAS_bitSliceTable constinArgument_inBitSliceTable,
                                                    GALGAS_uint & outArgument_outBitNumber,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_sliceIndex_17083 ;
  GALGAS_uint var_sliceSize_17099 ;
  const GALGAS_bitNumberLabelValue temp_0 = this ;
  constinArgument_inBitSliceTable.method_searchKey (temp_0.readProperty_mBitNumberLabelValue (), var_sliceIndex_17083, var_sliceSize_17099, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 439)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_bitNumberLabelValue temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mBitNumberIndexValue ().readProperty_uint ().objectCompare (var_sliceSize_17099)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_bitNumberLabelValue temp_3 = this ;
      const GALGAS_bitNumberLabelValue temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mBitNumberIndexValue ().readProperty_location (), GALGAS_string ("The ").add_operation (temp_4.readProperty_mBitNumberIndexValue ().readProperty_uint ().getter_string (SOURCE_FILE ("intermediate_generic.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 441)).add_operation (GALGAS_string (" index is too large (should be < "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 441)).add_operation (var_sliceSize_17099.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 441)) ;
    }
  }
  const GALGAS_bitNumberLabelValue temp_6 = this ;
  outArgument_outBitNumber = var_sliceIndex_17083.add_operation (temp_6.readProperty_mBitNumberIndexValue ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 444)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitNumberLiteralExpression getBitNumber'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralExpression::method_getBitNumber (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                           const GALGAS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                           GALGAS_uint & outArgument_outBitNumber,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_17783 ;
  const GALGAS_bitNumberLiteralExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mBitNumberLiteralExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_17783, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 456)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::lowerThan, var_result_17783.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_bitNumberLiteralExpression temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpression (), GALGAS_string ("bit index is ").add_operation (var_result_17783.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)).add_operation (GALGAS_string (", but should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)), fixItArray3  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)) ;
      outArgument_outBitNumber.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::greaterThan, var_result_17783.objectCompare (GALGAS_sint_36__34_ (int64_t (7LL)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_bitNumberLiteralExpression temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mEndOfExpression (), GALGAS_string ("bit index is ").add_operation (var_result_17783.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)).add_operation (GALGAS_string (", but should be <= 7"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)), fixItArray6  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)) ;
        outArgument_outBitNumber.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outBitNumber = var_result_17783.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 462)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'print_constant_definition?&'
//
//--------------------------------------------------------------------------------------------------

void routine_print_5F_constant_5F_definition_3F__26_ (const GALGAS_constantMap constinArgument_inConstantMap,
                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inConstantMap.getter_count (SOURCE_FILE ("intermediate_generic.galgas", 485)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CONSTANTS").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 488)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Constant").getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GALGAS_string (" Value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)) ;
      cEnumerator_constantMap enumerator_19369 (constinArgument_inConstantMap, EnumerationOrder::up) ;
      while (enumerator_19369.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssign_operation(enumerator_19369.current_lkey (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)).add_operation (enumerator_19369.current_mValue (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)) ;
        enumerator_19369.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 493)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'actualBuildConfig??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_actualBuildConfig_3F__3F__26__21_ (const GALGAS_configRegisterMap constinArgument_inConfigRegisterMap,
                                                const GALGAS_configDefinitionList constinArgument_inConfigDefinitionList,
                                                GALGAS_string & ioArgument_ioListFileContents,
                                                GALGAS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::class_func_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 24)) ;
  GALGAS_configFieldMap var_configFieldMap_958 = GALGAS_configFieldMap::class_func_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 25)) ;
  cEnumerator_configRegisterMap enumerator_1068 (constinArgument_inConfigRegisterMap, EnumerationOrder::up) ;
  while (enumerator_1068.hasCurrentObject ()) {
    GALGAS_uint var_defaultValue_1112 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).left_shift_operation (enumerator_1068.current_mRegisterWidth (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 27)) ;
    {
    outArgument_outActualConfigurationMap.setter_insertKey (enumerator_1068.current_lkey (HERE), enumerator_1068.current_mRegisterAddress (HERE).readProperty_uint (), var_defaultValue_1112, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 28)) ;
    }
    GALGAS_lstring var_registerName_1263 = enumerator_1068.current_lkey (HERE) ;
    cEnumerator_configRegisterMaskMap enumerator_1339 (enumerator_1068.current_mConfigRegisterMaskMap (HERE), EnumerationOrder::up) ;
    while (enumerator_1339.hasCurrentObject ()) {
      {
      var_configFieldMap_958.setter_insertKey (enumerator_1339.current_lkey (HERE), var_registerName_1263, enumerator_1339.current_mMaskValue (HERE), enumerator_1339.current_mDescription (HERE), enumerator_1339.current_mFieldSettingMap (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 31)) ;
      }
      enumerator_1339.gotoNextObject () ;
    }
    enumerator_1068.gotoNextObject () ;
  }
  GALGAS_stringset var_actualSettingNameSet_1562 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("piccolo_config.galgas", 35)) ;
  cEnumerator_configDefinitionList enumerator_1615 (constinArgument_inConfigDefinitionList, EnumerationOrder::up) ;
  while (enumerator_1615.hasCurrentObject ()) {
    cEnumerator_configSettingList enumerator_1681 (enumerator_1615.current_mSettingList (HERE), EnumerationOrder::up) ;
    while (enumerator_1681.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_actualSettingNameSet_1562.getter_hasKey (enumerator_1681.current_mSettingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas", 38)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_1681.current_mSettingName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_1681.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)).add_operation (GALGAS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_config.galgas", 39)) ;
        }
      }
      var_actualSettingNameSet_1562.addAssign_operation (enumerator_1681.current_mSettingName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("piccolo_config.galgas", 41)) ;
      GALGAS_lstring var_registerName_1977 ;
      GALGAS_fieldSettingMap var_fieldSettingMap_1999 ;
      GALGAS_luint joker_1990_2 ; // Joker input parameter
      GALGAS_lstring joker_1990_1 ; // Joker input parameter
      var_configFieldMap_958.method_searchKey (enumerator_1681.current_mSettingName (HERE), var_registerName_1977, joker_1990_2, joker_1990_1, var_fieldSettingMap_1999, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 42)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_fieldSettingMap_1999.getter_hasKey (enumerator_1681.current_mSettingValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("piccolo_config.galgas", 43)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_uint var_settingValue_2132 ;
          GALGAS_uint var_settingMask_2150 ;
          var_fieldSettingMap_1999.method_searchKey (enumerator_1681.current_mSettingValue (HERE), var_settingValue_2132, var_settingMask_2150, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 44)) ;
          GALGAS_uint var_registerValue_2181 ;
          GALGAS_uint joker_2254 ; // Joker input parameter
          outArgument_outActualConfigurationMap.method_searchKey (var_registerName_1977, joker_2254, var_registerValue_2181, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 46)) ;
          var_registerValue_2181 = var_registerValue_2181.operator_and (var_settingMask_2150.operator_tilde (SOURCE_FILE ("piccolo_config.galgas", 47)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)).operator_or (var_settingValue_2132 COMMA_SOURCE_FILE ("piccolo_config.galgas", 47)) ;
          {
          outArgument_outActualConfigurationMap.setter_setMRegisterValueForKey (var_registerValue_2181, var_registerName_1977.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 48)) ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_fieldSettingMap_1999.getter_count (SOURCE_FILE ("piccolo_config.galgas", 49)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_string var_errorMessage_2499 = GALGAS_string ("the '").add_operation (enumerator_1681.current_mSettingValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (GALGAS_string ("' value is not defined for configuration setting '"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (enumerator_1681.current_mSettingName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 50)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 51)) ;
            GALGAS_stringlist var_replacementSuggestions_2646 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("piccolo_config.galgas", 52)) ;
            cEnumerator_fieldSettingMap enumerator_2694 (var_fieldSettingMap_1999, EnumerationOrder::up) ;
            while (enumerator_2694.hasCurrentObject ()) {
              var_replacementSuggestions_2646.addAssign_operation (GALGAS_string ("\"").add_operation (enumerator_2694.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 54))  COMMA_SOURCE_FILE ("piccolo_config.galgas", 54)) ;
              enumerator_2694.gotoNextObject () ;
            }
            TC_Array <FixItDescription> fixItArray4 ;
            appendFixItActions (fixItArray4, kFixItReplace, var_replacementSuggestions_2646) ;
            inCompiler->emitSemanticError (enumerator_1681.current_mSettingValue (HERE).readProperty_location (), var_errorMessage_2499, fixItArray4  COMMA_SOURCE_FILE ("piccolo_config.galgas", 56)) ;
          }
        }
      }
      enumerator_1681.gotoNextObject () ;
    }
    enumerator_1615.gotoNextObject () ;
  }
  GALGAS_stringset var_notDefinedSetting_2960 = var_configFieldMap_958.getter_keySet (SOURCE_FILE ("piccolo_config.galgas", 61)).substract_operation (var_actualSettingNameSet_1562, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 61)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_notDefinedSetting_2960.getter_count (SOURCE_FILE ("piccolo_config.galgas", 62)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_errorMessage_3083 = GALGAS_string ("the following configuration settings are not defined:") ;
      cEnumerator_stringset enumerator_3163 (var_notDefinedSetting_2960, EnumerationOrder::up) ;
      while (enumerator_3163.hasCurrentObject ()) {
        var_errorMessage_3083.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (enumerator_3163.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 65)) ;
        enumerator_3163.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)), var_errorMessage_3083, fixItArray6  COMMA_SOURCE_FILE ("piccolo_config.galgas", 67)) ;
    }
  }
  cEnumerator_actualConfigurationMap enumerator_3361 (outArgument_outActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_3361.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Register '").add_operation (enumerator_3361.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (enumerator_3361.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GALGAS_string (" set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (enumerator_3361.current_mRegisterValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 71)) ;
    GALGAS_configRegisterMaskMap var_configRegisterMaskMap_3598 ;
    GALGAS_luint joker_3587 ; // Joker input parameter
    GALGAS_luint joker_3590 ; // Joker input parameter
    GALGAS_illegalMaskList joker_3620 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_3361.current_lkey (HERE), joker_3587, joker_3590, var_configRegisterMaskMap_3598, joker_3620, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 72)) ;
    cEnumerator_configRegisterMaskMap enumerator_3665 (var_configRegisterMaskMap_3598, EnumerationOrder::up) ;
    while (enumerator_3665.hasCurrentObject ()) {
      GALGAS_lstring var_settingName_3738 = enumerator_3665.current_lkey (HERE) ;
      cEnumerator_fieldSettingMap enumerator_3801 (enumerator_3665.current_mFieldSettingMap (HERE), EnumerationOrder::up) ;
      while (enumerator_3801.hasCurrentObject ()) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_3361.current_mRegisterValue (HERE).operator_and (enumerator_3665.current_mMaskValue (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas", 76)).objectCompare (enumerator_3801.current_mValue (HERE))).boolEnum () ;
          if (kBoolTrue == test_7) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  setting '").add_operation (var_settingName_3738.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string ("' set to "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3801.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string (" (\""), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (enumerator_3801.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 77)) ;
          }
        }
        enumerator_3801.gotoNextObject () ;
      }
      enumerator_3665.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 81)) ;
    enumerator_3361.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_4161 (outArgument_outActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_4161.hasCurrentObject ()) {
    GALGAS_illegalMaskList var_illegalMaskList_4265 ;
    GALGAS_luint joker_4251 ; // Joker input parameter
    GALGAS_luint joker_4254 ; // Joker input parameter
    GALGAS_configRegisterMaskMap joker_4257 ; // Joker input parameter
    constinArgument_inConfigRegisterMap.method_searchKey (enumerator_4161.current_lkey (HERE), joker_4251, joker_4254, joker_4257, var_illegalMaskList_4265, inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 85)) ;
    cEnumerator_illegalMaskList enumerator_4319 (var_illegalMaskList_4265, EnumerationOrder::up) ;
    while (enumerator_4319.hasCurrentObject ()) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (ComparisonKind::equal, enumerator_4161.current_mRegisterValue (HERE).operator_and (enumerator_4319.current_mIllegalMask (HERE).readProperty_uint () COMMA_SOURCE_FILE ("piccolo_config.galgas", 87)).objectCompare (enumerator_4319.current_mIllegalValue (HERE).readProperty_uint ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)), GALGAS_string ("illegal setting for '").add_operation (enumerator_4161.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)).add_operation (GALGAS_string ("' register: "), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)).add_operation (enumerator_4319.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)), fixItArray9  COMMA_SOURCE_FILE ("piccolo_config.galgas", 88)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*** ILLEGAL SETTING for register '").add_operation (enumerator_4161.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)).add_operation (GALGAS_string ("' ***\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 89)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  message: ").add_operation (enumerator_4319.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 90)) ;
        }
      }
      enumerator_4319.gotoNextObject () ;
    }
    enumerator_4161.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildConfig??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildConfig_3F__3F__26__21_ (const GALGAS_configRegisterMap constinArgument_inConfigRegisterMap,
                                          const GALGAS_configDefinitionList constinArgument_inConfigDefinitionList,
                                          GALGAS_string & ioArgument_ioListFileContents,
                                          GALGAS_actualConfigurationMap & outArgument_outActualConfigurationMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualConfigurationMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 104)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("MICROCONTROLLER CONFIGURATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 105)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 106)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inConfigDefinitionList.getter_count (SOURCE_FILE ("piccolo_config.galgas", 108)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_actualBuildConfig_3F__3F__26__21_ (constinArgument_inConfigRegisterMap, constinArgument_inConfigDefinitionList, ioArgument_ioListFileContents, outArgument_outActualConfigurationMap, inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 109)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outActualConfigurationMap = GALGAS_actualConfigurationMap::class_func_emptyMap (SOURCE_FILE ("piccolo_config.galgas", 116)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("No configuration.\n\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_config.galgas", 117)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_BitTest addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 12)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_SEMI_COLON addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 19)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_IF_IncDec addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 26)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JUMP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 33)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_GOTO addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction_5F_GOTO temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 40)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_CALL addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction_5F_CALL temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 47)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FOREVER addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_baseline_5F_instruction_5F_FOREVER temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_STATIC_REPEAT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 61)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_MNOP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_MNOP::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_TRIS addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_TRIS::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_WO_OPERAND addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_F addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_F::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FB addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FB::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_do_while addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_do_5F_while::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 98)) ;
  }
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_baseline_5F_partList enumerator_3261 (temp_1.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_3261.hasCurrentObject ()) {
    {
    routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (enumerator_3261.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 100)) ;
    }
    enumerator_3261.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 108)) ;
  }
  {
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 109)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FD addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FD::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JSR::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 122)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_literalOperation addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'addBaselineUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (const GALGAS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_instructionList enumerator_4559 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_4559.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) enumerator_4559.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 137)) ;
    enumerator_4559.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'baseline_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_baseline_5F_computeUsedRoutines (const GALGAS_baseline_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::class_func_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 147)) ;
  GALGAS_stringset var_s_5003 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_used_routines.galgas", 149)) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("baseline_used_routines.galgas", 150)).isValid ()) {
    uint32_t variant_5030 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("baseline_used_routines.galgas", 150)).uintValue () ;
    bool loop_5030 = true ;
    while (loop_5030) {
      loop_5030 = GALGAS_bool (ComparisonKind::notEqual, var_s_5003.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_5030) {
        loop_5030 = GALGAS_bool (ComparisonKind::notEqual, var_s_5003.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_5030 && (0 == variant_5030)) {
        loop_5030 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_used_routines.galgas", 150)) ;
      }
      if (loop_5030) {
        variant_5030 -- ;
        var_s_5003 = result_outUsedRoutineSet ;
        cEnumerator_baseline_5F_routineDefinitionList enumerator_5173 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
        while (enumerator_5173.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_5173.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (enumerator_5173.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 155)) ;
              }
            }
          }
          enumerator_5173.gotoNextObject () ;
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

static const C_galgas_type_descriptor * functionArgs_baseline_5F_computeUsedRoutines [2] = {
  & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_baseline_5F_computeUsedRoutines (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_baseline_5F_routineDefinitionList operand0 = GALGAS_baseline_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_baseline_5F_computeUsedRoutines (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_baseline_5F_computeUsedRoutines ("baseline_computeUsedRoutines",
                                                                                 functionWithGenericHeader_baseline_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 1,
                                                                                 functionArgs_baseline_5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_literalOperation shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::method_shouldTerminateWithMOVLW (const GALGAS_string constinArgument_inErrorMessage,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_literalOperation temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLiteralInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_compilation.galgas", 25)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_literalOperation temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 26)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_CALL shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::method_shouldTerminateWithMOVLW (const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::method_shouldTerminateWithMOVLW (const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("baseline_compilation.galgas", 41)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("the 'then' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 42)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_baseline_5F_instruction var_lastInstruction_1813 ;
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_4 = this ;
    temp_4.readProperty_mThenInstructionList ().method_last (var_lastInstruction_1813, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 44)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_1813.ptr (), GALGAS_string ("the 'then' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 45)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_6 = this ;
    test_5 = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_compilation.galgas", 48)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("the 'else' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray8  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 49)) ;
    }
  }
  if (kBoolFalse == test_5) {
    GALGAS_baseline_5F_instruction var_lastInstruction_2261 ;
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_9 = this ;
    temp_9.readProperty_mElseInstructionList ().method_last (var_lastInstruction_2261, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 51)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_2261.ptr (), GALGAS_string ("the 'else' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 52)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_GOTO shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::method_shouldNotContinueInSequence (const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_JUMP shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::method_shouldNotContinueInSequence (const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_FOREVER shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::method_shouldNotContinueInSequence (const GALGAS_string /* constinArgument_inErrorMessage */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'baseline_analysis??'
//
//--------------------------------------------------------------------------------------------------

void routine_baseline_5F_analysis_3F__3F_ (const GALGAS_baseline_5F_model constinArgument_inPiccoloModel,
                                           const GALGAS_string constinArgument_inSourceFileName,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_4044 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 94)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 94)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_4044.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)).add_operation (var_sourceFileBaseName_4044, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 97)), fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 96)) ;
    }
  }
  GALGAS_string var_listFileContents_4394 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_4524 ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_4524, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 101)) ;
  }
  switch (var_piccoloDeviceModel_4524.readProperty_mProcessorType ().enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GALGAS_string ("a pic18 device is not accepted here : only a baseline device"), fixItArray2  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 104)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GALGAS_string ("a mid-ranfe device is not accepted here : only a baseline device"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 105)) ;
    }
    break ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_5047 ;
  {
  routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_4524.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_4394, var_actualConfigurationMap_5047, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 108)) ;
  }
  GALGAS_constantMap var_constantMap_5146 = GALGAS_constantMap::class_func_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 115)) ;
  GALGAS_registerTable var_registerTable_5184 = var_piccoloDeviceModel_4524.readProperty_mRegisterTable () ;
  GALGAS_stringset var_usedRegisters_5443 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 121)) ;
  cEnumerator_constantDefinitionList enumerator_5483 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_5483.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_5605 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_5483.current_mExpression (HERE).ptr (), var_registerTable_5184, var_constantMap_5146, var_result_5605, var_usedRegisters_5443, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 123)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_registerTable_5184.getter_hasKey (enumerator_5483.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5483.current_mConstantName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_5483.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 125)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 125)), fixItArray5  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 125)) ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      var_constantMap_5146.setter_insertKey (enumerator_5483.current_mConstantName (HERE), var_result_5605, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 127)) ;
      }
    }
    enumerator_5483.gotoNextObject () ;
  }
  GALGAS_ramBankTable var_ramBank_5942 = var_piccoloDeviceModel_4524.readProperty_mRamBankTable () ;
  GALGAS_declaredByteMap var_declaredByteMap_6234 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_5146, var_usedRegisters_5443, var_ramBank_5942, var_piccoloDeviceModel_4524.readProperty_mRegisterTable (), var_listFileContents_4394, var_registerTable_5184, var_declaredByteMap_6234, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 132)) ;
  }
  GALGAS_baselineRoutineMap var_routineMap_6312 = GALGAS_baselineRoutineMap::class_func_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 144)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_6395 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_6395.hasCurrentObject ()) {
    {
    var_routineMap_6312.setter_insertKey (enumerator_6395.current_mRoutineName (HERE), enumerator_6395.current_mIsNoReturn (HERE), enumerator_6395.current_mPage (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 146)) ;
    }
    enumerator_6395.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      routine_print_5F_constant_5F_definition_3F__26_ (var_constantMap_5146, var_listFileContents_4394, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 150)) ;
      }
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_routineMap_6312.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("baseline_compilation.galgas", 156)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_bool var_isNoReturn_6899 ;
      GALGAS_luint var_page_6922 ;
      var_routineMap_6312.method_searchKey (GALGAS_lstring::class_func_new (GALGAS_string ("main"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)), var_isNoReturn_6899, var_page_6922, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 157)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_isNoReturn_6899.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 158)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineMap_6312.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main page 0\""), fixItArray9  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 159)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (ComparisonKind::notEqual, var_page_6922.readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (var_page_6922.readProperty_location (), GALGAS_string ("the \"main\" should be declared in page 0: \"noreturn main page 0\""), fixItArray11  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 162)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_7) {
    TC_Array <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray12  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 165)) ;
  }
  GALGAS_bool var_needsToSavePCLATH_7431 = GALGAS_bool (false) ;
  GALGAS_uint var_totalPageCount_7469 = var_piccoloDeviceModel_4524.readProperty_mRomSize ().readProperty_uint ().add_operation (GALGAS_uint (uint32_t (511U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 169)).divide_operation (GALGAS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 169)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_7552 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_7552.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_7552.current_mPage (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        var_needsToSavePCLATH_7431 = GALGAS_bool (true) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (ComparisonKind::greaterOrEqual, enumerator_7552.current_mPage (HERE).readProperty_uint ().objectCompare (var_totalPageCount_7469)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_7552.current_mPage (HERE).readProperty_location (), GALGAS_string ("invalid value (").add_operation (enumerator_7552.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("baseline_compilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (var_totalPageCount_7469.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)).add_operation (GALGAS_string (" 512 word page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)), fixItArray15  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 175)) ;
      }
    }
    enumerator_7552.gotoNextObject () ;
  }
  GALGAS_baseline_5F_routineDefinitionList var_sortedRoutineDefinitionList_7923 = GALGAS_baseline_5F_routineDefinitionList::class_func_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 179)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_8051 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_8051.hasCurrentObject ()) {
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (ComparisonKind::equal, enumerator_8051.current_mRoutineName (HERE).readProperty_string ().objectCompare (GALGAS_string ("main"))).boolEnum () ;
      if (kBoolTrue == test_16) {
        {
        var_sortedRoutineDefinitionList_7923.setter_insertAtIndex (enumerator_8051.current_mRoutineName (HERE), enumerator_8051.current_mPage (HERE), enumerator_8051.current_mIsNoReturn (HERE), enumerator_8051.current_mInstructionList (HERE), enumerator_8051.current_mEndOfRoutineLocation (HERE), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 182)) ;
        }
      }
    }
    if (kBoolFalse == test_16) {
      var_sortedRoutineDefinitionList_7923.addAssign_operation (enumerator_8051.current_mRoutineName (HERE), enumerator_8051.current_mPage (HERE), enumerator_8051.current_mIsNoReturn (HERE), enumerator_8051.current_mInstructionList (HERE), enumerator_8051.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 191)) ;
    }
    enumerator_8051.gotoNextObject () ;
  }
  GALGAS_baseline_5F_intermediate_5F_instructionList var_intermediateInstructionList_8592 = GALGAS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 200)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 201)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_uint var_currentPage_8719 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_uint var_localLabelIndex_8749 = GALGAS_uint (uint32_t (0U)) ;
      if (var_totalPageCount_7469.isValid ()) {
        uint32_t variant_8773 = var_totalPageCount_7469.uintValue () ;
        bool loop_8773 = true ;
        while (loop_8773) {
          loop_8773 = GALGAS_bool (ComparisonKind::lowerThan, var_currentPage_8719.objectCompare (var_totalPageCount_7469)).isValid () ;
          if (loop_8773) {
            loop_8773 = GALGAS_bool (ComparisonKind::lowerThan, var_currentPage_8719.objectCompare (var_totalPageCount_7469)).boolValue () ;
          }
          if (loop_8773 && (0 == variant_8773)) {
            loop_8773 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_compilation.galgas", 204)) ;
          }
          if (loop_8773) {
            variant_8773 -- ;
            GALGAS_bool var_pseudo_5F_PAGE_5F_generated_8849 = GALGAS_bool (false) ;
            cEnumerator_baseline_5F_routineDefinitionList enumerator_8938 (var_sortedRoutineDefinitionList_7923, EnumerationOrder::up) ;
            while (enumerator_8938.hasCurrentObject ()) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = GALGAS_bool (ComparisonKind::equal, enumerator_8938.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_8719)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_pseudo_5F_PAGE_5F_generated_8849.operator_not (SOURCE_FILE ("baseline_compilation.galgas", 209)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      var_pseudo_5F_PAGE_5F_generated_8849 = GALGAS_bool (true) ;
                      var_intermediateInstructionList_8592.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::class_func_new (var_currentPage_8719  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 211))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 211)) ;
                    }
                  }
                  GALGAS_routineKind var_routineKind_9270 ;
                  enumGalgasBool test_20 = kBoolTrue ;
                  if (kBoolTrue == test_20) {
                    test_20 = enumerator_8938.current_mIsNoReturn (HERE).boolEnum () ;
                    if (kBoolTrue == test_20) {
                      var_routineKind_9270 = GALGAS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("baseline_compilation.galgas", 216)) ;
                      enumGalgasBool test_21 = kBoolTrue ;
                      if (kBoolTrue == test_21) {
                        test_21 = GALGAS_bool (ComparisonKind::equal, enumerator_8938.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_compilation.galgas", 218)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                        if (kBoolTrue == test_21) {
                          TC_Array <FixItDescription> fixItArray22 ;
                          inCompiler->emitSemanticError (enumerator_8938.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), fixItArray22  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 219)) ;
                        }
                      }
                      if (kBoolFalse == test_21) {
                        GALGAS_baseline_5F_instruction var_lastInstruction_9651 ;
                        enumerator_8938.current_mInstructionList (HERE).method_last (var_lastInstruction_9651, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 221)) ;
                        callExtensionMethod_shouldNotContinueInSequence ((cPtr_baseline_5F_instruction *) var_lastInstruction_9651.ptr (), GALGAS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 222)) ;
                      }
                    }
                  }
                  if (kBoolFalse == test_20) {
                    var_routineKind_9270 = GALGAS_routineKind::class_func_regularRoutine (SOURCE_FILE ("baseline_compilation.galgas", 225)) ;
                    enumGalgasBool test_23 = kBoolTrue ;
                    if (kBoolTrue == test_23) {
                      test_23 = GALGAS_bool (ComparisonKind::equal, enumerator_8938.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_compilation.galgas", 227)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                      if (kBoolTrue == test_23) {
                        TC_Array <FixItDescription> fixItArray24 ;
                        inCompiler->emitSemanticError (enumerator_8938.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("a baseline routine must end with a MOVLW instruction"), fixItArray24  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 228)) ;
                      }
                    }
                    if (kBoolFalse == test_23) {
                      GALGAS_baseline_5F_instruction var_lastInstruction_10173 ;
                      enumerator_8938.current_mInstructionList (HERE).method_last (var_lastInstruction_10173, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 230)) ;
                      callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_10173.ptr (), GALGAS_string ("the last routine instruction should be MOVLW"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 231)) ;
                    }
                  }
                  enumGalgasBool test_25 = kBoolTrue ;
                  if (kBoolTrue == test_25) {
                    test_25 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8938.current_mRoutineName (HERE).readProperty_string ().objectCompare (GALGAS_string ("main"))).boolEnum () ;
                    if (kBoolTrue == test_25) {
                      var_intermediateInstructionList_8592.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::class_func_new (enumerator_8938.current_mRoutineName (HERE), enumerator_8938.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 236))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 236))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 236)) ;
                      var_intermediateInstructionList_8592.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (enumerator_8938.current_mRoutineName (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 237)) ;
                    }
                  }
                  GALGAS_bool var_continuesInSequence_10960 ;
                  {
                  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (var_currentPage_8719, enumerator_8938.current_mInstructionList (HERE), var_routineMap_6312, var_registerTable_5184, var_constantMap_5146, var_localLabelIndex_8749, var_intermediateInstructionList_8592, var_listFileContents_4394, var_continuesInSequence_10960, var_routineKind_9270, enumerator_8938.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 250)), var_usedRegisters_5443, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 239)) ;
                  }
                  var_intermediateInstructionList_8592.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::class_func_new (enumerator_8938.current_mRoutineName (HERE), var_currentPage_8719  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 253))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 253)) ;
                  enumGalgasBool test_26 = kBoolTrue ;
                  if (kBoolTrue == test_26) {
                    test_26 = enumerator_8938.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_10960 COMMA_SOURCE_FILE ("baseline_compilation.galgas", 254)).boolEnum () ;
                    if (kBoolTrue == test_26) {
                      TC_Array <FixItDescription> fixItArray27 ;
                      inCompiler->emitSemanticError (enumerator_8938.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray27  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 255)) ;
                    }
                  }
                }
              }
              enumerator_8938.gotoNextObject () ;
            }
            var_currentPage_8719.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 259)) ;
          }
        }
      }
    }
  }
  GALGAS_stringset var_usedRoutineSet_11525 = function_baseline_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 263)) ;
  GALGAS_baseline_5F_declaredRoutineMap var_declaredRoutineMap_11626 = GALGAS_baseline_5F_declaredRoutineMap::class_func_emptyMap (SOURCE_FILE ("baseline_compilation.galgas", 266)) ;
  cEnumerator_baseline_5F_routineDefinitionList enumerator_11712 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_11712.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_11626.setter_insertKey (enumerator_11712.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 268)) ;
    }
    enumerator_11712.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_11877 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 271)) ;
  cEnumerator_lstringlist enumerator_11939 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), EnumerationOrder::up) ;
  while (enumerator_11939.hasCurrentObject ()) {
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_declaredRoutineMap_11626.getter_hasKey (enumerator_11939.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 273)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 273)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_11939.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_11939.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)), fixItArray29  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 274)) ;
      }
    }
    if (kBoolFalse == test_28) {
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        test_30 = var_unusedRoutineDeclarationUnicity_11877.getter_hasKey (enumerator_11939.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 275)).boolEnum () ;
        if (kBoolTrue == test_30) {
          TC_Array <FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticWarning (enumerator_11939.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_11939.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)), fixItArray31  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 276)) ;
        }
      }
      if (kBoolFalse == test_30) {
        enumGalgasBool test_32 = kBoolTrue ;
        if (kBoolTrue == test_32) {
          test_32 = var_usedRoutineSet_11525.getter_hasKey (enumerator_11939.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 277)).boolEnum () ;
          if (kBoolTrue == test_32) {
            TC_Array <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticWarning (enumerator_11939.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_11939.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)), fixItArray33  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 278)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_11877.addAssign_operation (enumerator_11939.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 280)) ;
    enumerator_11939.gotoNextObject () ;
  }
  cEnumerator_baseline_5F_declaredRoutineMap enumerator_12488 (var_declaredRoutineMap_11626, EnumerationOrder::up) ;
  while (enumerator_12488.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_usedRoutineSet_11525.getter_hasKey (enumerator_12488.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_and (var_unusedRoutineDeclarationUnicity_11877.getter_hasKey (enumerator_12488.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 283)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 283)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticWarning (enumerator_12488.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_12488.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)), fixItArray35  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 284)) ;
      }
    }
    enumerator_12488.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_12808 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_compilation.galgas", 288)) ;
  cEnumerator_lstringlist enumerator_12863 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), EnumerationOrder::up) ;
  while (enumerator_12863.hasCurrentObject ()) {
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      test_36 = var_registerTable_5184.getter_hasKey (enumerator_12863.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 290)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 290)).boolEnum () ;
      if (kBoolTrue == test_36) {
        TC_Array <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_12863.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_12863.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)), fixItArray37  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 291)) ;
      }
    }
    if (kBoolFalse == test_36) {
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = var_unusedDeclarationUnicity_12808.getter_hasKey (enumerator_12863.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 292)).boolEnum () ;
        if (kBoolTrue == test_38) {
          TC_Array <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticWarning (enumerator_12863.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_12863.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)), fixItArray39  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 293)) ;
        }
      }
      if (kBoolFalse == test_38) {
        enumGalgasBool test_40 = kBoolTrue ;
        if (kBoolTrue == test_40) {
          test_40 = var_usedRegisters_5443.getter_hasKey (enumerator_12863.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 294)).boolEnum () ;
          if (kBoolTrue == test_40) {
            TC_Array <FixItDescription> fixItArray41 ;
            inCompiler->emitSemanticWarning (enumerator_12863.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_12863.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)), fixItArray41  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 295)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_12808.addAssign_operation (enumerator_12863.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 297)) ;
    enumerator_12863.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_13384 (var_declaredByteMap_6234, EnumerationOrder::up) ;
  while (enumerator_13384.hasCurrentObject ()) {
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      test_42 = var_usedRegisters_5443.getter_hasKey (enumerator_13384.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_and (var_unusedDeclarationUnicity_12808.getter_hasKey (enumerator_13384.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).operator_not (SOURCE_FILE ("baseline_compilation.galgas", 300)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 300)).boolEnum () ;
      if (kBoolTrue == test_42) {
        TC_Array <FixItDescription> fixItArray43 ;
        inCompiler->emitSemanticWarning (enumerator_13384.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_13384.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)), fixItArray43  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 301)) ;
      }
    }
    enumerator_13384.gotoNextObject () ;
  }
  enumGalgasBool test_44 = kBoolTrue ;
  if (kBoolTrue == test_44) {
    test_44 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 305)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 305)).boolEnum () ;
    if (kBoolTrue == test_44) {
      var_listFileContents_4394.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 306)) ;
      var_listFileContents_4394.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERMEDIATE INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 307)) ;
      var_listFileContents_4394.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 308)) ;
      var_listFileContents_4394.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 309)) ;
      var_listFileContents_4394.plusAssign_operation(GALGAS_string (" Line Length Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 310)) ;
      GALGAS_uint var_currentAddress_14129 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_14157 (var_intermediateInstructionList_8592, EnumerationOrder::up) ;
      GALGAS_uint index_14152 (uint32_t (0)) ;
      while (enumerator_14157.hasCurrentObject ()) {
        var_listFileContents_4394.plusAssign_operation(index_14152.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 313)).getter_stringByLeftPadding (GALGAS_uint (uint32_t (5U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 313)) ;
        var_listFileContents_4394.plusAssign_operation(callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14157.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_string (SOURCE_FILE ("baseline_compilation.galgas", 314)).getter_stringByLeftPadding (GALGAS_uint (uint32_t (6U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 314)) ;
        callExtensionMethod_print ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14157.current_mInstruction (HERE).ptr (), var_listFileContents_4394, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 315)) ;
        var_listFileContents_4394.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 316)) ;
        callExtensionMethod_setCurrentAddress ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14157.current_mInstruction (HERE).ptr (), var_currentAddress_14129, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 317)) ;
        enumerator_14157.gotoNextObject () ;
        index_14152.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 312)) ;
      }
      var_listFileContents_4394.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 319)) ;
      var_listFileContents_4394.plusAssign_operation(GALGAS_string ("Code size without optimization: ").add_operation (var_currentAddress_14129.getter_string (SOURCE_FILE ("baseline_compilation.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)).add_operation (GALGAS_string (" words.\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 320)) ;
    }
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    test_45 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 323)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 323)).boolEnum () ;
    if (kBoolTrue == test_45) {
      {
      routine_perform_5F_baseline_5F_optimizations_26__26_ (var_intermediateInstructionList_8592, var_listFileContents_4394, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 324)) ;
      }
    }
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 327)) ;
  }
  GALGAS_registerExpression var_sr_14994 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("STATUS"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 329)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 330)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 331))  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 328)) ;
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_statusRegister_15230 ;
  GALGAS_bitSliceTable var_statusRegisterBitSliceTable_15269 ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) var_sr_14994.ptr (), var_registerTable_5184, var_constantMap_5146, var_statusRegister_15230, var_statusRegisterBitSliceTable_15269, var_usedRegisters_5443, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 333)) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_assemblyInstructionList_15327 = GALGAS_baseline_5F_assembly_5F_instructionList::class_func_emptyList (SOURCE_FILE ("baseline_compilation.galgas", 340)) ;
  enumGalgasBool test_46 = kBoolTrue ;
  if (kBoolTrue == test_46) {
    test_46 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 341)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_46) {
      {
      routine_build_5F_baseline_5F_assembly_5F_code_3F__3F__3F__3F__26_ (var_intermediateInstructionList_8592, var_actualConfigurationMap_5047, var_statusRegister_15230, var_statusRegisterBitSliceTable_15269, var_assemblyInstructionList_15327, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 342)) ;
      }
    }
  }
  enumGalgasBool test_47 = kBoolTrue ;
  if (kBoolTrue == test_47) {
    test_47 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 351)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_47) {
      var_listFileContents_4394.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 352)) ;
      var_listFileContents_4394.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 353)) ;
      var_listFileContents_4394.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 354)) ;
      var_listFileContents_4394.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 355)) ;
      GALGAS_uint var_usedROMsize_16165 ;
      {
      routine_build_5F_baseline_5F_binary_5F_code_3F__3F__26__21_ (var_assemblyInstructionList_15327, var_piccoloDeviceModel_4524.readProperty_mRomSize ().readProperty_uint (), var_listFileContents_4394, var_usedROMsize_16165, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 356)) ;
      }
    }
  }
  enumGalgasBool test_48 = kBoolTrue ;
  if (kBoolTrue == test_48) {
    test_48 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_48) {
      GALGAS_string var_listFile_16310 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 365)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 365)) ;
      GALGAS_bool joker_16445 ; // Joker input parameter
      var_listFileContents_4394.method_writeToFileWhenDifferentContents (var_listFile_16310, joker_16445, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 366)) ;
    }
  }
  enumGalgasBool test_49 = kBoolTrue ;
  if (kBoolTrue == test_49) {
    test_49 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas", 370)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_49) {
      GALGAS_string var_contents_16920 ;
      {
      routine_getGeneratedContents_21_ (var_contents_16920, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 381)) ;
      }
      GALGAS_string var_destinationFile_16946 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 382)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 382)) ;
      GALGAS_bool joker_17086 ; // Joker input parameter
      var_contents_16920.method_writeToFileWhenDifferentContents (var_destinationFile_16946, joker_17086, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 383)) ;
      enumGalgasBool test_50 = kBoolTrue ;
      if (kBoolTrue == test_50) {
        test_50 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_50) {
          GALGAS_string var_baseName_17166 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas", 385)).getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 385)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_17166, var_contents_16920, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 386)) ;
          }
          var_destinationFile_16946 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 387)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 387)) ;
          GALGAS_bool joker_17448 ; // Joker input parameter
          var_contents_16920.method_writeToFileWhenDifferentContents (var_destinationFile_16946, joker_17448, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 388)) ;
          {
          routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_17166, var_contents_16920, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 389)) ;
          }
          var_destinationFile_16946 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 390)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 390)) ;
          GALGAS_bool joker_17646 ; // Joker input parameter
          var_contents_16920.method_writeToFileWhenDifferentContents (var_destinationFile_16946, joker_17646, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 391)) ;
        }
      }
      enumGalgasBool test_51 = kBoolTrue ;
      if (kBoolTrue == test_51) {
        test_51 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_51) {
          GALGAS_string var_assemblyCode_18644 = GALGAS_string ("  processor ").add_operation (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 410)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 410)) ;
          cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_18723 (var_assemblyInstructionList_15327, EnumerationOrder::up) ;
          while (enumerator_18723.hasCurrentObject ()) {
            callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_18723.current_mInstruction (HERE).ptr (), var_assemblyCode_18644, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 412)) ;
            var_assemblyCode_18644.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 413)) ;
            enumerator_18723.gotoNextObject () ;
          }
          var_assemblyCode_18644.plusAssign_operation(GALGAS_string ("\n;--- Registers\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 415)) ;
          cEnumerator_registerTable enumerator_18937 (var_registerTable_5184, EnumerationOrder::up) ;
          while (enumerator_18937.hasCurrentObject ()) {
            GALGAS_uint var_address_19008 ;
            enumerator_18937.current_mRegisterAddressList (HERE).method_first (var_address_19008, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 417)) ;
            var_assemblyCode_18644.plusAssign_operation(enumerator_18937.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)).add_operation (var_address_19008.getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 418)) ;
            enumerator_18937.gotoNextObject () ;
          }
          var_assemblyCode_18644.plusAssign_operation(GALGAS_string ("W EQU 0\n\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 420)) ;
          var_assemblyCode_18644.plusAssign_operation(GALGAS_string (";--- Configuration\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 421)) ;
          cEnumerator_actualConfigurationMap enumerator_19213 (var_actualConfigurationMap_5047, EnumerationOrder::up) ;
          while (enumerator_19213.hasCurrentObject ()) {
            var_assemblyCode_18644.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_19213.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (enumerator_19213.current_mRegisterValue (HERE).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 423)) ;
            enumerator_19213.gotoNextObject () ;
          }
          var_assemblyCode_18644.plusAssign_operation(GALGAS_string ("\n  END\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 425)) ;
          GALGAS_string var_asmDestinationFile_19439 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 426)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 426)) ;
          GALGAS_bool joker_19591 ; // Joker input parameter
          var_assemblyCode_18644.method_writeToFileWhenDifferentContents (var_asmDestinationFile_19439, joker_19591, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 427)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_49) {
    GALGAS_string var_hexDestinationFile_19672 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 430)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 430)) ;
    enumGalgasBool test_52 = kBoolTrue ;
    if (kBoolTrue == test_52) {
      test_52 = var_hexDestinationFile_19672.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 431)).boolEnum () ;
      if (kBoolTrue == test_52) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_19672, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 432)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_19866 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas", 434)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 434)) ;
    enumGalgasBool test_53 = kBoolTrue ;
    if (kBoolTrue == test_53) {
      test_53 = var_asmDestinationFile_19866.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas", 435)).boolEnum () ;
      if (kBoolTrue == test_53) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_19866, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas", 436)) ;
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

void routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (const GALGAS_uint constinArgument_inCurrentPage,
                                                                                            const GALGAS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                                                            const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                            GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                            GALGAS_bool & outArgument_outContinuesInSequence,
                                                                                            const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                            const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GALGAS_bool (true) ;
  cEnumerator_baseline_5F_instructionList enumerator_2400 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  GALGAS_uint index_2395 (uint32_t (0)) ;
  while (enumerator_2400.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 74)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2400.current_mInstruction (HERE).readProperty_mInstructionLocation (), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 75)) ;
        outArgument_outContinuesInSequence = GALGAS_bool (true) ;
      }
    }
    GALGAS_bool temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, index_2395.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)).objectCompare (constinArgument_inInstructionList.getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 88)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = constinArgument_inLastInstructionShouldReturn ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_bool (false) ;
    }
    callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList ((cPtr_baseline_5F_instruction *) enumerator_2400.current_mInstruction (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, temp_2, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 78)) ;
    enumerator_2400.gotoNextObject () ;
    index_2395.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 73)) ;
  }
}


